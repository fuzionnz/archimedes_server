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
  $field_group->identifier = 'group_civicrm|node|website|form';
  $field_group->group_name = 'group_civicrm';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'website';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CiviCRM',
    'weight' => '-1',
    'children' => array(
      0 => 'field_civicrm_git_commit',
      1 => 'field_civicrm_git_branch',
      2 => 'field_civicrm_lastcron',
      3 => 'field_civicrm_db_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-civicrm field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_civicrm|node|website|form'] = $field_group;

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
    'weight' => '5',
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
    'weight' => '6',
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
  $field_group->identifier = 'group_info|node|website|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'website';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '-3',
    'children' => array(
      0 => 'field_servername',
      1 => 'field_site_env',
      2 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-info field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_info|node|website|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mods_themes|node|website|form';
  $field_group->group_name = 'group_mods_themes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'website';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Modules & Themes',
    'weight' => '7',
    'children' => array(
      0 => 'field_drupal_mod',
      1 => 'field_drupal_theme',
      2 => 'field_civicrm_extensions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Modules & Themes',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-mods-themes field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_mods_themes|node|website|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site|node|website|form';
  $field_group->group_name = 'group_site';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'website';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Site',
    'weight' => '-2',
    'children' => array(
      0 => 'field_webroot',
      1 => 'field_dbname',
      2 => 'field_dbhost',
      3 => 'field_sitedata',
      4 => 'field_sitesize',
      5 => 'field_webserver',
      6 => 'field_db_size',
      7 => 'field_totalsize',
      8 => 'field_git_status',
      9 => 'field_git_branch',
      10 => 'field_git_remote_url',
      11 => 'field_git_commit_hash',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-site field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_site|node|website|form'] = $field_group;

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
    'weight' => '4',
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
  t('CiviCRM');
  t('Growth');
  t('Info');
  t('Modules & Themes');
  t('Site');
  t('Stats');

  return $field_groups;
}
