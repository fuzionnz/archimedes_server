 <?php
/**
 * @file
 * Preprocess helper functions.
 */

/**
 * Preprocess: product->field_git_repositories.
 */
function archimedes_server_process_field_product_field_git_repositories(&$variables) {
  // Determine the maximum length any textfield should be.
  $maxlen = max(array_map(function ($item) {
    return strlen($item['#markup']);
  },
  $variables['items'])) + 5;

  $header = '<p>This project uses @count @plural_repo listed below. If you have';
  $header .= ' access to the @plural_repo you may clone the main repository';
  $header .= ' and add any additional repositories as additional remotes. E.g.';
  $header .= "<pre>";
  $header .= " git clone @repo1\n";
  $header .= " git remote add upstream @repo2\n";
  $header .= "</pre></p";
  $header = t($header, array(
    '@count' => count($variables['items']),
    '@plural_repo' => format_plural(count($variables['items']), 'repository', 'repositories'),
    '@repo1' => $variables['items'][0]['#markup'],
    '@repo2' => isset($variables['items'][1]['#markup']) ? $variables['items'][1]['#markup'] : '[addtional git repo URL]',
  ));

  foreach ($variables['items'] as &$item) {
    $uri = $item['#markup'];
    $format = (strpos($uri, 'git+ssh') === FALSE) ? t('Read-only') : t('Writable');
    $remote = (strpos($uri, 'git+ssh') === FALSE) ? t('upstream') : t('origin');
    $element = array(
      '#type' => 'textfield',
      '#size' => $maxlen,
      '#value' => t('@uri', array('@uri' => $uri)),
      '#description' => t('This repository is @type and maybe considered an %remote remote.', array(
        '@type' => strtolower($format),
        '%remote' => $remote,
      )),
      '#field_prefix' => $format,
      '#field_suffix' => $remote,
    );
    $item['#markup'] = drupal_render($element);
  }

  // A hack to be able to add addtional content to the field template.
  $variables['content_attributes'] .= '>' . $header;
  $variables['classes'] .= ' well well-small';
}

/**
 * Preprocess: product->field_common_hash.
 */
function archimedes_server_process_field_product_field_common_hash(&$variables) {
  foreach ($variables['items'] as &$item) {
    $element = array(
      '#type' => 'textfield',
      '#value' => t("\$conf['archimedes_common_key'] = '@key';", array(
        '@key' => $item['#markup'],
      )),
      '#description' => t('Ensure this configuration is set in the <em>settings.php</em> of each project that should be a part of this product.'),
    );
    $element['#size'] = strlen($element['#value']);
    $item['#markup'] = drupal_render($element);
  }
}

/**
 * Preprocess: website->field_stat_*.
 */
function archimedes_server_process_field_website_field_stat(&$variables) {
  $node = $variables['element']['#object'];
  $field_name = $variables['element']['#field_name'];

  $query = db_select('field_revision_' . $field_name, 'f')
    ->fields('n', array('timestamp'))
    ->fields('f', array($field_name . '_value'))
    ->condition('entity_id', $node->nid)
    ->condition('entity_type', 'node')
    ->condition('revision_id', $node->vid, '<=')
    ->orderBy('revision_id', 'DESC')
    ->range(0, 30);
  $query->innerJoin('node_revision', 'n', 'n.vid = f.revision_id');
  $data_series = $query->execute()->fetchAllKeyed();

  // Only render the graph if there is enough data to render from.
  if (count($data_series) > 10) {

    drupal_add_js(drupal_get_path('module', 'archimedes_server') . '/js/raphael.js', array('weight' => 10));
    drupal_add_js(drupal_get_path('module', 'archimedes_server') . '/js/g.raphael.js', array('weight' => 11));
    drupal_add_js(drupal_get_path('module', 'archimedes_server') . '/js/g.line.js', array('weight' => 12));

    // Flip the result to get a chronological ordering.
    $row = array_reverse($data_series, TRUE);

    $table['header'][] = '';
    foreach ($row as $idx => $value) {
      $table['header'][] = array(
        'data' => $idx,
        'scope' => 'col',
      );
    }

    array_unshift($row, array(
      'data' => $variables['element']['#title'],
      'header' => TRUE,
      'scope' => 'row',
    ));
    $table['rows'] = array($row);

    $table['attributes']['id'] = 'graph-' . $field_name;
    $table['attributes']['class'] = array('archimedes-graph');

    $variables['items'][0]['#markup'] .= theme('table', $table);
  }

}

/**
 * Preprocess: product->field_git_repositories.
 */
function archimedes_server_process_field_git_status(&$variables) {
  watchdog('archimedes_server', 'Preprocess: @data', array('@data' => print_r($variables,1)));
}