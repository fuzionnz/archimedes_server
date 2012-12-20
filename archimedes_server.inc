<?php
/**
 * @file
 * Helper functions for archimedes server.
 */

/**
 * Attach a website to a product.
 */
function archimedes_server_attach_product($node) {
  $common_hash = $node->field_common_hash[$node->language][0]['value'];

  // Lookup a product with the same common hash.
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', 'product')
        ->fieldCondition('field_common_hash', 'value', $common_hash);
  $result = $query->execute();

  // If a product is found. Check that the site isn't already attached to it.
  // If the site isn't attached via field_websites, attach and save.
  if (isset($result['node'])) {
    $nid = key($result['node']);
    $product = node_load($nid);

    // Create a list of site nids already attached to the product.
    $nids = array_map(function ($field) {
      return $field['target_id'];
    },
    $product->field_websites[$product->language]);

    if (!in_array($node->nid, $nids)) {
      $product->field_websites[$product->language][] = array('target_id' => $node->nid);
      node_save($product);
      watchdog('Archimedes', "@nid '@title' attached to product '@product'", array(
        "@nid" => $node->nid,
        "@title" => $node->title,
        "@product" => $product->title,
      ));
    }
  }
  // No such product exists yet. Create a new one.
  else {
    $product = new stdClass();
    $product->type = 'product';
    $product->language = LANGUAGE_NONE;
    $product->field_common_hash = $node->field_common_hash;
    $product->field_websites[$product->language][0]['target_id'] = $node->nid;
    $product->title = $node->title;
    $product->status = NODE_PUBLISHED;
    $product->created = REQUEST_TIME;
    $product->uid = 0;
    node_save($product);
    watchdog('Archimedes', "@nid '@title' attached to product '@product'", array(
      "@nid" => $node->nid,
      "@title" => $node->title,
      "@product" => $product->title,
    ));
  }

  // If the product exists and the archimedes document is present, look for
  // information in the document that can be saved to the product.
  if (!isset($product, $node->archimedes_document)) {
    return;
  }
  $xml = $node->archimedes_document->dom;
  // Surpress the warning for a lack of DTD on the document.
  @$xml->validate();

  $field = $xml->getElementById('field_git_repo');

  // Only continue if the field exists.
  if (!$field) {
    return;
  }
  $remotes = array();

  // Fetch all the remotes listed by the document.
  $values = $field->getElementsByTagName('value');
  foreach ($values as $value) {
    $remotes[] = trim($value->nodeValue);
  }

  // Only continue if there are remotes to compare.
  if (empty($remotes)) {
    return;
  }
  sort($remotes);
  if (isset($product->field_git_repositories[$product->language])) {
    // Obtain a list of existing remotes.
    $existing_remotes = array_map(function ($value) {
      return $value['value'];
    },
    $product->field_git_repositories[$product->language]);
    sort($existing_remotes);

    // Find which remotes are not yet set.
    sort($remotes);
    $new_remotes = array_diff($remotes, $existing_remotes);
  }
  else {
    $new_remotes = $remotes;
  }

  // Add the new remotes to the product.
  foreach ($new_remotes as $remote) {
    $product->field_git_repositories[$product->language][] = array('value' => $remote);
  }
  if (count($new_remotes)) {
    node_save($product);
  }
}
