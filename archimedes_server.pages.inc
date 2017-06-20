<?php

/**
 * @file
 * Archimedes server pages.
 */

/**
 * Page callback for Archimedes Server queue.
 *
 * Show the contents of the queue, for easier debugging.
 */
function archimedes_server_page_queue() {
  module_load_include('inc', 'archimedes');
  require_once dirname(__FILE__) . '/archimedes_server.server.inc';
  module_load_include('inc', 'archimedes_server', 'archimedes_server.server.inc');

  $rows = array();

  $query = db_select('queue', 'q')
    ->fields('q')
    ->condition('name', 'archimedes_server')
    ->execute();
  while ($record = $query->fetchAssoc()) {
    // dpm($record, 'r');
    $xml = unserialize($record['data']);
    $doc = ArchimedesDocument::fromXML($xml);
    /*
    $fields = $doc->dom->getElementsByTagName('field');
    foreach ($fields->childNodes as $field) {
      dpm($field->nodeValue);
    }
    dpm($doc, 'doc');
    */

    if (!empty($doc->node->nid)) {
      $rows[] = array(
        l($doc->node->title, 'node/' . $doc->node->nid),
        isset($doc->node->field_servername['und'][0]['url']) ? $doc->node->field_servername['und'][0]['url'] : '',
        isset($doc->node->field_webserver['und'][0]['value']) ? $doc->node->field_webserver['und'][0]['value'] : '',
        isset($doc->node->field_webroot['und'][0]['value']) ? $doc->node->field_webroot['und'][0]['value'] : '',
        date('c', $doc->node->changed),
        strlen($xml),
      );
    }
    else {
      $rows[] = array(
        array(
          'data' => t('@xml', array('@xml' => substr($xml, 0, 400))),
          'colspan' => 5,
        ),
        strlen($xml),
      );
    }
  }

  $header = array(
    'Title',
    'URL',
    'Server',
    'Directory',
    'Prev Update',
    'Data',
  );

  // dpm($rows);

  return theme('table', array(
      'header' => $header,
      'rows' => $rows,
      'caption' => sizeof($rows) . ' items in queue. ' . l('Run cron', 'admin/reports/status/run-cron'),
    ));

}
