<?php
/**
 * @file
 * Archimedes server drush library.
 */

/**
 * Implements hook_drush_command().
 */
function archimedes_server_drush_command() {
  $commands['archimedes-server'] = array(
    'description' => 'Process the queue of documents set to the server',
  );
  return $commands;
}

/**
 * Drush callback: archimedes-server.
 */
function drush_archimedes_server() {
  $queue = DrupalQueue::get('archimedes_server');
  while ($item = $queue->claimItem()) {
    drush_log('Processing archimedes document ' . $item->item_id . ' from queue');
    archimedes_server_worker($item->data);
    $queue->deleteItem($item);
  }
}
