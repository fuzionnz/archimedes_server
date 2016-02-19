<?php
/**
 * @file
 * archimedes_server_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function archimedes_server_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_growth|node|website|default';
  $field_group->group_name = 'group_growth';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'website';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Growth',
    'weight' => '4',
    'children' => array(
      0 => 'field_stat_nodes',
      1 => 'field_stat_revisions',
      2 => 'field_stat_users',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Growth',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-growth field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_growth|node|website|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|website|default';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'website';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '5',
    'children' => array(
      0 => 'field_webroot',
      1 => 'field_dbname',
      2 => 'field_dbhost',
      3 => 'field_webserver',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_info|node|website|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stats|node|website|default';
  $field_group->group_name = 'group_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'website';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Stats',
    'weight' => '3',
    'children' => array(
      0 => 'field_sitedata',
      1 => 'field_sitesize',
      2 => 'field_db_size',
      3 => 'field_totalsize',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Stats',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-stats field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_stats|node|website|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Growth');
  t('Info');
  t('Stats');

  return $field_groups;
}
