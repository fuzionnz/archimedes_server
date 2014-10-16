<?php
/**
 * @file
 * Library of server functions.
 */

/**
 * Menu callback: Receive an archimedes update via HTTP.
 */
function archimedes_server_recive_http() {
  // Never cache this page.
  drupal_page_is_cacheable(FALSE);
  if (!$request = json_decode(file_get_contents('php://input'))) {
    drupal_not_found();
    die;
  }
  $encrypted_data = base64_decode($request->data);
  $key = base64_decode($request->key);

  if (!$xml = archimedes_server_decrypt($encrypted_data, $key)) {
    drupal_json_output(array(
      'message' => 'Failed to decrypt data.',
      'success' => 0,
    ));
  }

  $queue = DrupalQueue::get('archimedes_server');
  $queue->createQueue();
  $queue->createItem($xml);

  drupal_json_output(array(
    'message' => 'Document sucessfully imported.',
    'success' => 1,
  ));
  die;
}

/**
 * Decrypt data provided the data and ekey.
 */
function archimedes_server_decrypt($data, $ekey) {
  if (!$prikey = openssl_pkey_get_private(variable_get('archimedes_key_private', FALSE))) {
    return FALSE;
  }
  openssl_open($data, $output, $ekey, $prikey);
  openssl_free_key($prikey);
  return $output;
}

/**
 * Iterate over an ArchimedesDocument and import it into the server.
 */
function archimedes_server_import_document(ArchimedesDocument $document) {
  $fields = $document->dom->getElementsByTagName('field');
  foreach ($fields as $item) {
    $field_name = $item->getAttribute('id');
    $item->setIdAttribute('id', TRUE);

    // Special case for title field.
    if ($field_name == 'title') {
      $document->node->title = trim($item->nodeValue);
      watchdog('Archimedes', 'Importing archimedes document: \'@title\'', array(
        '@title' => $document->node->title,
      ));
      continue;
    }

    $field_values = array();
    $values = $item->getElementsByTagName('value');
    foreach ($values as $tag) {
      $value = trim($tag->nodeValue);

      drupal_alter('archimedes_document_field_value', $value, $tag, $field_name);
      $field_values[] = $value;
    }
    $document->setField($field_name, $field_values);
  }

  $document->save();
}

/**
 * @class Handle an archimedes document.
 */
class ArchimedesDocument {

  /**
   * When setting a value, override existing values.
   */
  const FIELD_OVERRIDE_VALUE = 1;

  /**
   * When setting a value, append field.
   */
  const FIELD_APPEND_VALUE = 2;

  /**
   * Node type that this document will become.
   */
  public $type;

  /**
   * Object of fields that will be stored.
   */
  public $node;

  /**
   * Node wrapper.
   */
  protected $wrapper;

  /**
   * Create a new instance of ArchimedesDocument from an XML string.
   *
   * @param string $xml
   *   String XML document to parse.
   */
  static public function fromXML($xml) {
    $dom = new DomDocument();
    $dom->loadXML($xml);

    if (isset($dom->documentElement)) {
      $guid = $dom->documentElement->getAttribute('id');
      $timestamp = strtotime($dom->documentElement->getAttribute('datetime'));

      $document = new ArchimedesDocument('website', $timestamp, $guid);
      $document->dom = $dom;
      return $document;
    }
    else {
      watchdog('Archimedes', 'Could not get documentElement. XML was: @xml', array('@xml' => htmlspecialchars($xml)), WATCHDOG_ERROR);
      $bt = debug_backtrace();
      watchdog('Archimedes', 'Empty XML? <pre>!bt</pre>', array('!bt' => print_r($bt,1)), WATCHDOG_ERROR);
    }
  }

  /**
   * Initialize ArchimedesDocument.
   */
  public function __construct($type = 'website', $timestamp, $guid = NULL) {
    if (!$this->type = node_type_load($type)) {
      throw new Exception("No such type exists: $type");
    }

    $this->node = new stdClass();
    $this->node->created = $timestamp;
    $this->node->status = NODE_PUBLISHED;
    $this->node->type = $this->type->type;
    $this->node->language = LANGUAGE_NONE;
    $this->node->field_guid[LANGUAGE_NONE][0]['value'] = $guid;
    $this->node->timestamp = $timestamp;

    global $user;
    $this->node->uid = $user->uid;

    if ($guid) {
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'node')
            ->entityCondition('bundle', $this->type->type)
            ->fieldCondition('field_guid', 'value', $guid)
            ->range(0, 1);
      $result = $query->execute();

      if (isset($result['node'])) {
        $nodes = array_keys($result['node']);
        $node = array_shift($nodes);
        $this->node = node_load($node);
        $this->node->revision = TRUE;
      }
    }
  }

  /**
   * Save the node to Drupal.
   */
  public function save() {
    $this->node->archimedes_document = $this;
    node_save($this->node);

    return $this->node;
  }

  /**
   * Set of create a field on the node type.
   */
  public function setField($field_name, Array $values) {
    if (!$field_info = field_info_field($field_name)) {
      return FALSE;
    }

    // Check the field is allowed to be used on nodes.
    if (!isset($field_info['bundles']['node']) || !in_array($this->type->type, $field_info['bundles']['node'])) {
      return FALSE;
    }

    // Check if archimedes supports the field.
    $field_handler = 'archimedes_server_field_handler_' . $field_info['type'];
    if (function_exists($field_handler)) {
      $field_handler($field_info, $this->node, $values);
      return TRUE;
    }
    // ::setField only supports text fields naitively.
    elseif ($field_info['type'] != 'text') {
      return FALSE;
    }

    foreach ($values as $idx => $value) {
      $this->node->{$field_name}[$this->node->language][$idx]['value'] = $value;
    }
    return $this;
  }
}

/**
 * Field support for links.
 */
function archimedes_server_field_handler_link_field($field_info, $node, $values) {
  foreach ($values as $idx => $value) {
    $node->{$field_info['field_name']}[$node->language][$idx] = array(
      'url' => $value,
      'title' => $node->title,
    );
  }
}

/**
 * Field support for taxonomy terms references.
 */
function archimedes_server_field_handler_taxonomy_term_reference($field_info, $node, $values) {
  $vids = db_or();
  $vocabularies = taxonomy_vocabulary_get_names();
  $vocab = $field_info['settings']['allowed_values'][0]['vocabulary'];

  $names = array_map('trim', $values);
  foreach ($names as $idx => $name) {
    if (!$terms = taxonomy_get_term_by_name($name)) {
      $term = (object) array(
        'name' => $name,
        'vid' => $vocabularies[$vocab]->vid,
      );
      taxonomy_term_save($term);
      $terms[$term->tid] = $term;
    }
    foreach ($terms as $term) {
      $node->{$field_info['field_name']}[$node->language][$idx]['tid'] = $term->tid;
    }
  }
  return TRUE;
}

/**
 * Field support for revisionreference.
 */
function archimedes_server_field_handler_entityreference($field_info, $node, $values) {
  foreach ($values as $idx => $entity) {
    list($id, $vid, $bundle) = entity_extract_ids($field_info['settings']['target_type'], $entity);
    $node->{$field_info['field_name']}[$node->language][$idx]['target_id'] = $id;
  }
}

/**
 * Plugin to parse document item into a Drupal module node.
 */
function archimedes_server_plugin_drupal_module(DomElement $item, $field_name, $ns) {
  global $user;
  $node = new StdClass();
  $node->uid = $user->uid;
  $node->status = NODE_PUBLISHED;
  $node->type = 'project';
  $node->language = LANGUAGE_NONE;

  $fields = array(
    'body',
    'field_name',
    'field_dru_proj',
  );
  foreach ($fields as $field) {
    if ($value = trim($item->getAttributeNodeNS($ns, $field)->nodeValue)) {
      $node->{$field}[LANGUAGE_NONE][0]['value'] = $value;
    }
  }

  if ($version = trim($item->getAttributeNodeNS($ns, 'field_mod_version')->nodeValue)) {
    watchdog('archimedes', '@name @version', array('@name' => $node->field_name[LANGUAGE_NONE][0]['value'], '@version' => $version), WATCHDOG_DEBUG);
    if (strpos($version, '.') === FALSE) {
      // Drush may set a version like 'master' or 'UNKNOWN' here, but
      // we're going to need some Drupal version for storage. That
      // field is currently an integer, so we use 0 to prevent the
      // storage for this site bombing.
      //
      // https://github.com/xurizaemon/archimedes_server
      $drupal_version = 0;
      $module_version = $major_version = $version;
      $minor_version = '';
    }
    elseif (strpos($version, '-') === FALSE) {
      $drupal_version = $module_version = $version;
      list($major_version, $version_patch) = explode('.', $drupal_version);
    }
    else {
      list($drupal_version, $module_version) = explode('-', $version, 2);
      @list($major_version, $version_patch) = explode('.', $module_version, 2);
    }
    list($drupal_compat,) = explode('.', $drupal_version);

    $node->field_drupal_compat[LANGUAGE_NONE][0]['value'] = $drupal_compat;

    if (is_numeric($major_version)) {
      $node->field_major_version[LANGUAGE_NONE][0]['value'] = $major_version;
    }
    else {
      $version_patch = $major_version;
    }
    $node->field_version_patch[LANGUAGE_NONE][0]['value'] = $version_patch;
  }

  $node->body[LANGUAGE_NONE][0]['format'] = 'full_html';

  $node->title = trim(t('@name @version', array(
    '@name' => trim($item->getAttributeNodeNS($ns, 'title')->nodeValue),
    '@version' => isset($version) ? $version : '',
  )));

  // Look for an existing project.
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
        ->propertyCondition('title', $node->title)
        ->propertyCondition('type', $node->type)
        ->fieldCondition('field_name', 'value', $node->field_name[LANGUAGE_NONE][0]['value']);
  if (isset($node->field_major_version, $node->field_version_patch, $node->field_drupal_compat)) {
    $query->fieldCondition('field_drupal_compat', 'value', $node->field_drupal_compat[LANGUAGE_NONE][0]['value']);
    $query->fieldCondition('field_major_version', 'value', $node->field_major_version[LANGUAGE_NONE][0]['value']);
    $query->fieldCondition('field_version_patch', 'value', $node->field_version_patch[LANGUAGE_NONE][0]['value']);
  }
  $ids = $query->execute();

  // If a node already exists. Use that.
  if (isset($ids['node']) && count($ids['node'])) {
    return node_load(key($ids['node']));
  }

  // Otherwise, save the node.
  node_save($node);

  return $node;
}
