<?php
/**
 * @file
 * archimedes_server_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function archimedes_server_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'modules';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Modules';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Modules';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = '[field_status]';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_drupal_compat' => 'field_drupal_compat',
    'field_major_version' => 'field_major_version',
    'field_version_patch' => 'field_version_patch',
    'field_status' => 'field_status',
    'field_dru_proj' => 'field_dru_proj',
    'field_name' => 'field_name',
    'title_1' => 'title_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_drupal_compat' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_major_version' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_version_patch' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dru_proj' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Name';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[title]
[body]';
  /* Field: Content: Drupal compatibility */
  $handler->display->display_options['fields']['field_drupal_compat']['id'] = 'field_drupal_compat';
  $handler->display->display_options['fields']['field_drupal_compat']['table'] = 'field_data_field_drupal_compat';
  $handler->display->display_options['fields']['field_drupal_compat']['field'] = 'field_drupal_compat';
  $handler->display->display_options['fields']['field_drupal_compat']['label'] = '';
  $handler->display->display_options['fields']['field_drupal_compat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_drupal_compat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_drupal_compat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Major version */
  $handler->display->display_options['fields']['field_major_version']['id'] = 'field_major_version';
  $handler->display->display_options['fields']['field_major_version']['table'] = 'field_data_field_major_version';
  $handler->display->display_options['fields']['field_major_version']['field'] = 'field_major_version';
  $handler->display->display_options['fields']['field_major_version']['label'] = '';
  $handler->display->display_options['fields']['field_major_version']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_major_version']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_major_version']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Version patch */
  $handler->display->display_options['fields']['field_version_patch']['id'] = 'field_version_patch';
  $handler->display->display_options['fields']['field_version_patch']['table'] = 'field_data_field_version_patch';
  $handler->display->display_options['fields']['field_version_patch']['field'] = 'field_version_patch';
  $handler->display->display_options['fields']['field_version_patch']['label'] = 'Version';
  $handler->display->display_options['fields']['field_version_patch']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_version_patch']['alter']['text'] = '[field_drupal_compat]-[field_major_version].[field_version_patch]';
  $handler->display->display_options['fields']['field_version_patch']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  /* Field: Content: Drupal.org project name */
  $handler->display->display_options['fields']['field_dru_proj']['id'] = 'field_dru_proj';
  $handler->display->display_options['fields']['field_dru_proj']['table'] = 'field_data_field_dru_proj';
  $handler->display->display_options['fields']['field_dru_proj']['field'] = 'field_dru_proj';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  /* Sort criterion: Content: Drupal compatibility (field_drupal_compat) */
  $handler->display->display_options['sorts']['field_drupal_compat_value']['id'] = 'field_drupal_compat_value';
  $handler->display->display_options['sorts']['field_drupal_compat_value']['table'] = 'field_data_field_drupal_compat';
  $handler->display->display_options['sorts']['field_drupal_compat_value']['field'] = 'field_drupal_compat_value';
  $handler->display->display_options['sorts']['field_drupal_compat_value']['order'] = 'DESC';
  /* Sort criterion: Content: Major version (field_major_version) */
  $handler->display->display_options['sorts']['field_major_version_value']['id'] = 'field_major_version_value';
  $handler->display->display_options['sorts']['field_major_version_value']['table'] = 'field_data_field_major_version';
  $handler->display->display_options['sorts']['field_major_version_value']['field'] = 'field_major_version_value';
  $handler->display->display_options['sorts']['field_major_version_value']['order'] = 'DESC';
  /* Sort criterion: Content: Version patch (field_version_patch) */
  $handler->display->display_options['sorts']['field_version_patch_value']['id'] = 'field_version_patch_value';
  $handler->display->display_options['sorts']['field_version_patch_value']['table'] = 'field_data_field_version_patch';
  $handler->display->display_options['sorts']['field_version_patch_value']['field'] = 'field_version_patch_value';
  $handler->display->display_options['sorts']['field_version_patch_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filter criterion: Content: Drupal.org project name (field_dru_proj) */
  $handler->display->display_options['filters']['field_dru_proj_value']['id'] = 'field_dru_proj_value';
  $handler->display->display_options['filters']['field_dru_proj_value']['table'] = 'field_data_field_dru_proj';
  $handler->display->display_options['filters']['field_dru_proj_value']['field'] = 'field_dru_proj_value';
  $handler->display->display_options['filters']['field_dru_proj_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dru_proj_value']['expose']['operator_id'] = 'field_dru_proj_value_op';
  $handler->display->display_options['filters']['field_dru_proj_value']['expose']['label'] = 'Drupal.org project name';
  $handler->display->display_options['filters']['field_dru_proj_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_dru_proj_value']['expose']['operator'] = 'field_dru_proj_value_op';
  $handler->display->display_options['filters']['field_dru_proj_value']['expose']['identifier'] = 'field_dru_proj_value';
  $handler->display->display_options['filters']['field_dru_proj_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_dru_proj_value']['group_info']['label'] = 'Drupal.org project name (field_dru_proj)';
  $handler->display->display_options['filters']['field_dru_proj_value']['group_info']['identifier'] = 'field_dru_proj_value';
  $handler->display->display_options['filters']['field_dru_proj_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_dru_proj_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_name_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator_id'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['identifier'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'project_status';
  /* Filter criterion: Content: Major version (field_major_version) */
  $handler->display->display_options['filters']['field_major_version_value']['id'] = 'field_major_version_value';
  $handler->display->display_options['filters']['field_major_version_value']['table'] = 'field_data_field_major_version';
  $handler->display->display_options['filters']['field_major_version_value']['field'] = 'field_major_version_value';
  $handler->display->display_options['filters']['field_major_version_value']['relationship'] = 'reverse_field_drupal_mod_node';
  $handler->display->display_options['filters']['field_major_version_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_major_version_value']['expose']['operator_id'] = 'field_major_version_value_op';
  $handler->display->display_options['filters']['field_major_version_value']['expose']['label'] = 'Drupal Version';
  $handler->display->display_options['filters']['field_major_version_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_major_version_value']['expose']['operator'] = 'field_major_version_value_op';
  $handler->display->display_options['filters']['field_major_version_value']['expose']['identifier'] = 'field_major_version_value';
  $handler->display->display_options['filters']['field_major_version_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_drupal_mod_node']['id'] = 'reverse_field_drupal_mod_node';
  $handler->display->display_options['relationships']['reverse_field_drupal_mod_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_drupal_mod_node']['field'] = 'reverse_field_drupal_mod_node';
  $handler->display->display_options['relationships']['reverse_field_drupal_mod_node']['label'] = 'Websites from field_drupal_mod';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Name';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[title]
[body]';
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Drupal compatibility */
  $handler->display->display_options['fields']['field_drupal_compat']['id'] = 'field_drupal_compat';
  $handler->display->display_options['fields']['field_drupal_compat']['table'] = 'field_data_field_drupal_compat';
  $handler->display->display_options['fields']['field_drupal_compat']['field'] = 'field_drupal_compat';
  $handler->display->display_options['fields']['field_drupal_compat']['label'] = '';
  $handler->display->display_options['fields']['field_drupal_compat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_drupal_compat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_drupal_compat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Major version */
  $handler->display->display_options['fields']['field_major_version']['id'] = 'field_major_version';
  $handler->display->display_options['fields']['field_major_version']['table'] = 'field_data_field_major_version';
  $handler->display->display_options['fields']['field_major_version']['field'] = 'field_major_version';
  $handler->display->display_options['fields']['field_major_version']['label'] = '';
  $handler->display->display_options['fields']['field_major_version']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_major_version']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_major_version']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Version patch */
  $handler->display->display_options['fields']['field_version_patch']['id'] = 'field_version_patch';
  $handler->display->display_options['fields']['field_version_patch']['table'] = 'field_data_field_version_patch';
  $handler->display->display_options['fields']['field_version_patch']['field'] = 'field_version_patch';
  $handler->display->display_options['fields']['field_version_patch']['label'] = 'Version';
  $handler->display->display_options['fields']['field_version_patch']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_version_patch']['alter']['text'] = '[field_drupal_compat]-[field_major_version].[field_version_patch]';
  $handler->display->display_options['fields']['field_version_patch']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  /* Field: Content: Drupal.org project name */
  $handler->display->display_options['fields']['field_dru_proj']['id'] = 'field_dru_proj';
  $handler->display->display_options['fields']['field_dru_proj']['table'] = 'field_data_field_dru_proj';
  $handler->display->display_options['fields']['field_dru_proj']['field'] = 'field_dru_proj';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_drupal_mod_node';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['title_1']['label'] = 'No of websites';
  $handler->display->display_options['fields']['title_1']['separator'] = '';
  $handler->display->display_options['path'] = 'modules';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Modules';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'modules.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Website modules */
  $handler = $view->new_display('page', 'Website modules', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_drupal_mod_node']['id'] = 'reverse_field_drupal_mod_node';
  $handler->display->display_options['relationships']['reverse_field_drupal_mod_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_drupal_mod_node']['field'] = 'reverse_field_drupal_mod_node';
  $handler->display->display_options['relationships']['reverse_field_drupal_mod_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_drupal_mod_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '%1 modules';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'node/%/modules';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Modules';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Website modules block */
  $handler = $view->new_display('block', 'Website modules block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['link_url'] = 'node/!1/modules';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_drupal_mod_node']['id'] = 'reverse_field_drupal_mod_node';
  $handler->display->display_options['relationships']['reverse_field_drupal_mod_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_drupal_mod_node']['field'] = 'reverse_field_drupal_mod_node';
  $handler->display->display_options['relationships']['reverse_field_drupal_mod_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_drupal_mod_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Website themes block */
  $handler = $view->new_display('block', 'Website themes block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Themes';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_drupal_theme_node']['id'] = 'reverse_field_drupal_theme_node';
  $handler->display->display_options['relationships']['reverse_field_drupal_theme_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_drupal_theme_node']['field'] = 'reverse_field_drupal_theme_node';
  $handler->display->display_options['relationships']['reverse_field_drupal_theme_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Name';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[title]
[body]';
  /* Field: Content: Drupal compatibility */
  $handler->display->display_options['fields']['field_drupal_compat']['id'] = 'field_drupal_compat';
  $handler->display->display_options['fields']['field_drupal_compat']['table'] = 'field_data_field_drupal_compat';
  $handler->display->display_options['fields']['field_drupal_compat']['field'] = 'field_drupal_compat';
  $handler->display->display_options['fields']['field_drupal_compat']['label'] = '';
  $handler->display->display_options['fields']['field_drupal_compat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_drupal_compat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_drupal_compat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Major version */
  $handler->display->display_options['fields']['field_major_version']['id'] = 'field_major_version';
  $handler->display->display_options['fields']['field_major_version']['table'] = 'field_data_field_major_version';
  $handler->display->display_options['fields']['field_major_version']['field'] = 'field_major_version';
  $handler->display->display_options['fields']['field_major_version']['label'] = '';
  $handler->display->display_options['fields']['field_major_version']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_major_version']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_major_version']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Version patch */
  $handler->display->display_options['fields']['field_version_patch']['id'] = 'field_version_patch';
  $handler->display->display_options['fields']['field_version_patch']['table'] = 'field_data_field_version_patch';
  $handler->display->display_options['fields']['field_version_patch']['field'] = 'field_version_patch';
  $handler->display->display_options['fields']['field_version_patch']['label'] = 'Version';
  $handler->display->display_options['fields']['field_version_patch']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_version_patch']['alter']['text'] = '[field_drupal_compat]-[field_major_version].[field_version_patch]';
  $handler->display->display_options['fields']['field_version_patch']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  /* Field: Content: Drupal.org project name */
  $handler->display->display_options['fields']['field_dru_proj']['id'] = 'field_dru_proj';
  $handler->display->display_options['fields']['field_dru_proj']['table'] = 'field_data_field_dru_proj';
  $handler->display->display_options['fields']['field_dru_proj']['field'] = 'field_dru_proj';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_drupal_theme_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Other versions */
  $handler = $view->new_display('block', 'Other versions', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other versions';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Name (field_name) */
  $handler->display->display_options['arguments']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['arguments']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['arguments']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['arguments']['field_name_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_name_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_name_value']['default_argument_options']['code'] = '$node = menu_get_object(\'node\');
if ($node && $node->type == \'project\') {
  return $node->field_name[\'und\'][0][\'value\'];
}
return false;';
  $handler->display->display_options['arguments']['field_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_name_value']['limit'] = '0';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Content: Drupal compatibility (field_drupal_compat) */
  $handler->display->display_options['arguments']['field_drupal_compat_value']['id'] = 'field_drupal_compat_value';
  $handler->display->display_options['arguments']['field_drupal_compat_value']['table'] = 'field_data_field_drupal_compat';
  $handler->display->display_options['arguments']['field_drupal_compat_value']['field'] = 'field_drupal_compat_value';
  $handler->display->display_options['arguments']['field_drupal_compat_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_drupal_compat_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_drupal_compat_value']['default_argument_options']['code'] = '$node = menu_get_object(\'node\');
if ($node && $node->type == \'project\' && isset($node->field_drupal_compat[\'und\'][0][\'value\'])) {
  return $node->field_drupal_compat[\'und\'][0][\'value\'];
}
return false;';
  $handler->display->display_options['arguments']['field_drupal_compat_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_drupal_compat_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_drupal_compat_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $export['modules'] = $view;

  $view = new view();
  $view->name = 'products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Products';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'products';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Products';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'products.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Website Product */
  $handler = $view->new_display('block', 'Website Product', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'btn';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_websites_target_id']['id'] = 'field_websites_target_id';
  $handler->display->display_options['relationships']['field_websites_target_id']['table'] = 'field_data_field_websites';
  $handler->display->display_options['relationships']['field_websites_target_id']['field'] = 'field_websites_target_id';
  $handler->display->display_options['relationships']['field_websites_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<i class="icon-info-sign"></i> View [title] product information';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_websites_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Abandoned Products */
  $handler = $view->new_display('page', 'Abandoned Products', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'These projects do not reference websites and are considered abandoned. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Yay! no abandoned projects!';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Websites (field_websites) */
  $handler->display->display_options['filters']['field_websites_target_id']['id'] = 'field_websites_target_id';
  $handler->display->display_options['filters']['field_websites_target_id']['table'] = 'field_data_field_websites';
  $handler->display->display_options['filters']['field_websites_target_id']['field'] = 'field_websites_target_id';
  $handler->display->display_options['filters']['field_websites_target_id']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'admin/content/bad-products';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Abandoned products';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['products'] = $view;

  $view = new view();
  $view->name = 'websites';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Websites';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Websites';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_servername' => 'field_servername',
    'field_site_env' => 'field_site_env',
    'changed' => 'changed',
    'field_drupal_version' => 'field_drupal_version',
    'field_civicrm_git_branch' => 'field_civicrm_git_branch',
    'field_civicrm_git_commit' => 'field_civicrm_git_commit',
  );
  $handler->display->display_options['style_options']['default'] = 'field_civicrm_git_branch';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_servername' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_site_env' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_drupal_version' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_civicrm_git_branch' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_civicrm_git_commit' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_websites_node']['id'] = 'reverse_field_websites_node';
  $handler->display->display_options['relationships']['reverse_field_websites_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_websites_node']['field'] = 'reverse_field_websites_node';
  /* Relationship: Content: Status (field_status) */
  $handler->display->display_options['relationships']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['relationships']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['relationships']['field_status_tid']['field'] = 'field_status_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Site Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_servername']['id'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['table'] = 'field_data_field_servername';
  $handler->display->display_options['fields']['field_servername']['field'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['label'] = '';
  $handler->display->display_options['fields']['field_servername']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_servername']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_servername']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_servername']['type'] = 'link_url';
  /* Field: Content: Environment */
  $handler->display->display_options['fields']['field_site_env']['id'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['fields']['field_site_env']['field'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_site_env']['alter']['text'] = '[field_site_env] <em>[field_servername]</em>';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Field: Content: Drupal Version */
  $handler->display->display_options['fields']['field_drupal_version']['id'] = 'field_drupal_version';
  $handler->display->display_options['fields']['field_drupal_version']['table'] = 'field_data_field_drupal_version';
  $handler->display->display_options['fields']['field_drupal_version']['field'] = 'field_drupal_version';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'website' => 'website',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Environment (field_site_env) */
  $handler->display->display_options['filters']['field_site_env_tid']['id'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['filters']['field_site_env_tid']['field'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_site_env_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator_id'] = 'env_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['label'] = 'Environment';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator'] = 'field_site_env_tid_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['identifier'] = 'env';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_site_env_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_site_env_tid']['vocabulary'] = 'environment';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Site name';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Drupal Version (field_drupal_version) */
  $handler->display->display_options['filters']['field_drupal_version_value']['id'] = 'field_drupal_version_value';
  $handler->display->display_options['filters']['field_drupal_version_value']['table'] = 'field_data_field_drupal_version';
  $handler->display->display_options['filters']['field_drupal_version_value']['field'] = 'field_drupal_version_value';
  $handler->display->display_options['filters']['field_drupal_version_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['operator_id'] = 'field_drupal_version_value_op';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['label'] = 'Drupal Version (field_drupal_version)';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['operator'] = 'field_drupal_version_value_op';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['identifier'] = 'field_drupal_version_value';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Our Websites */
  $handler = $view->new_display('page', 'Our Websites', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Our Websites';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Site Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_servername']['id'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['table'] = 'field_data_field_servername';
  $handler->display->display_options['fields']['field_servername']['field'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['label'] = '';
  $handler->display->display_options['fields']['field_servername']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_servername']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_servername']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_servername']['type'] = 'link_url';
  /* Field: Content: Environment */
  $handler->display->display_options['fields']['field_site_env']['id'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['fields']['field_site_env']['field'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_site_env']['alter']['text'] = '[field_site_env] <em>[field_servername]</em>';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Field: Content: Drupal Version */
  $handler->display->display_options['fields']['field_drupal_version']['id'] = 'field_drupal_version';
  $handler->display->display_options['fields']['field_drupal_version']['table'] = 'field_data_field_drupal_version';
  $handler->display->display_options['fields']['field_drupal_version']['field'] = 'field_drupal_version';
  /* Field: Content: Webserver */
  $handler->display->display_options['fields']['field_webserver']['id'] = 'field_webserver';
  $handler->display->display_options['fields']['field_webserver']['table'] = 'field_data_field_webserver';
  $handler->display->display_options['fields']['field_webserver']['field'] = 'field_webserver';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'website' => 'website',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Environment (field_site_env) */
  $handler->display->display_options['filters']['field_site_env_tid']['id'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['filters']['field_site_env_tid']['field'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_site_env_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_site_env_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator_id'] = 'env_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['label'] = 'Environment';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator'] = 'field_site_env_tid_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['identifier'] = 'env';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_site_env_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_site_env_tid']['vocabulary'] = 'environment';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Site name';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Drupal Version (field_drupal_version) */
  $handler->display->display_options['filters']['field_drupal_version_value']['id'] = 'field_drupal_version_value';
  $handler->display->display_options['filters']['field_drupal_version_value']['table'] = 'field_data_field_drupal_version';
  $handler->display->display_options['filters']['field_drupal_version_value']['field'] = 'field_drupal_version_value';
  $handler->display->display_options['filters']['field_drupal_version_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_drupal_version_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['operator_id'] = 'field_drupal_version_value_op';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['label'] = 'Drupal Version (field_drupal_version)';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['operator'] = 'field_drupal_version_value_op';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['identifier'] = 'field_drupal_version_value';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'websites/pd';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Websites';
  $handler->display->display_options['menu']['weight'] = '60';
  $handler->display->display_options['menu']['name'] = 'menu-websites';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Websites';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-websites';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Website feed';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'websites.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Websites using module.. */
  $handler = $view->new_display('block', 'Websites using module..', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_site_env',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_site_env' => 'field_site_env',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_drupal_mod_target_id']['id'] = 'field_drupal_mod_target_id';
  $handler->display->display_options['relationships']['field_drupal_mod_target_id']['table'] = 'field_data_field_drupal_mod';
  $handler->display->display_options['relationships']['field_drupal_mod_target_id']['field'] = 'field_drupal_mod_target_id';
  $handler->display->display_options['relationships']['field_drupal_mod_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Environment */
  $handler->display->display_options['fields']['field_site_env']['id'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['fields']['field_site_env']['field'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['label'] = '';
  $handler->display->display_options['fields']['field_site_env']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_site_env']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_site_env']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_drupal_mod_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'website' => 'website',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Websites using theme.. */
  $handler = $view->new_display('block', 'Websites using theme..', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_drupal_theme_target_id']['id'] = 'field_drupal_theme_target_id';
  $handler->display->display_options['relationships']['field_drupal_theme_target_id']['table'] = 'field_data_field_drupal_theme';
  $handler->display->display_options['relationships']['field_drupal_theme_target_id']['field'] = 'field_drupal_theme_target_id';
  $handler->display->display_options['relationships']['field_drupal_theme_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_drupal_theme_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'website' => 'website',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Websites by product */
  $handler = $view->new_display('block', 'Websites by product', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Websites by product';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_websites_node']['id'] = 'reverse_field_websites_node';
  $handler->display->display_options['relationships']['reverse_field_websites_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_websites_node']['field'] = 'reverse_field_websites_node';
  $handler->display->display_options['relationships']['reverse_field_websites_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_websites_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'website' => 'website',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Website report */
  $handler = $view->new_display('page', 'Website report', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Websites Admin';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Site name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_servername']['id'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['table'] = 'field_data_field_servername';
  $handler->display->display_options['fields']['field_servername']['field'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['label'] = '';
  $handler->display->display_options['fields']['field_servername']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_servername']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_servername']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_servername']['type'] = 'link_url';
  /* Field: Content: Environment */
  $handler->display->display_options['fields']['field_site_env']['id'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['fields']['field_site_env']['field'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_site_env']['alter']['text'] = '[field_site_env] <em>[field_servername]</em>';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'website' => 'website',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Environment (field_site_env) */
  $handler->display->display_options['filters']['field_site_env_tid']['id'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['filters']['field_site_env_tid']['field'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_site_env_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator_id'] = 'field_site_env_tid_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['label'] = 'Environment';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator'] = 'field_site_env_tid_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['identifier'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_site_env_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_site_env_tid']['vocabulary'] = 'environment';
  $handler->display->display_options['filters']['field_site_env_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Site name';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '<';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-2 days';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['changed']['group'] = 2;
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Updated date';
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  $handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Websites (field_websites) */
  $handler->display->display_options['filters']['field_websites_target_id']['id'] = 'field_websites_target_id';
  $handler->display->display_options['filters']['field_websites_target_id']['table'] = 'field_data_field_websites';
  $handler->display->display_options['filters']['field_websites_target_id']['field'] = 'field_websites_target_id';
  $handler->display->display_options['filters']['field_websites_target_id']['relationship'] = 'reverse_field_websites_node';
  $handler->display->display_options['filters']['field_websites_target_id']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_websites_target_id']['group'] = 2;
  $handler->display->display_options['path'] = 'admin/content/websites';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Websites';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Vulnerable Websites */
  $handler = $view->new_display('page', 'Vulnerable Websites', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vulnerable Websites';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'These sites need urgent attention as they contain out of date, insecure modules.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_websites_node']['id'] = 'reverse_field_websites_node';
  $handler->display->display_options['relationships']['reverse_field_websites_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_websites_node']['field'] = 'reverse_field_websites_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_drupal_mod_target_id']['id'] = 'field_drupal_mod_target_id';
  $handler->display->display_options['relationships']['field_drupal_mod_target_id']['table'] = 'field_data_field_drupal_mod';
  $handler->display->display_options['relationships']['field_drupal_mod_target_id']['field'] = 'field_drupal_mod_target_id';
  $handler->display->display_options['relationships']['field_drupal_mod_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_servername']['id'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['table'] = 'field_data_field_servername';
  $handler->display->display_options['fields']['field_servername']['field'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['label'] = '';
  $handler->display->display_options['fields']['field_servername']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_servername']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_servername']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_servername']['type'] = 'link_url';
  /* Field: Content: Environment */
  $handler->display->display_options['fields']['field_site_env']['id'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['fields']['field_site_env']['field'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_site_env']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_site_env']['alter']['text'] = '[field_site_env] <em>[field_servername]</em>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_drupal_mod_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Module';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_site_env])';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'field_drupal_mod_target_id';
  $handler->display->display_options['fields']['changed']['label'] = 'Last updated';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Field: Content: Webserver */
  $handler->display->display_options['fields']['field_webserver']['id'] = 'field_webserver';
  $handler->display->display_options['fields']['field_webserver']['table'] = 'field_data_field_webserver';
  $handler->display->display_options['fields']['field_webserver']['field'] = 'field_webserver';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'website' => 'website',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Environment (field_site_env) */
  $handler->display->display_options['filters']['field_site_env_tid']['id'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['filters']['field_site_env_tid']['field'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_site_env_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_site_env_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator_id'] = 'field_site_env_tid_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['label'] = 'Environment';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator'] = 'field_site_env_tid_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['identifier'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_site_env_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_site_env_tid']['vocabulary'] = 'environment';
  $handler->display->display_options['filters']['field_site_env_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Site name';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['relationship'] = 'field_drupal_mod_target_id';
  $handler->display->display_options['filters']['field_status_tid']['value'] = array(
    253 => '253',
  );
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'project_status';
  /* Filter criterion: Content: Webserver (field_webserver) */
  $handler->display->display_options['filters']['field_webserver_value']['id'] = 'field_webserver_value';
  $handler->display->display_options['filters']['field_webserver_value']['table'] = 'field_data_field_webserver';
  $handler->display->display_options['filters']['field_webserver_value']['field'] = 'field_webserver_value';
  $handler->display->display_options['filters']['field_webserver_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_webserver_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_webserver_value']['expose']['operator_id'] = 'field_webserver_value_op';
  $handler->display->display_options['filters']['field_webserver_value']['expose']['label'] = 'Webserver (field_webserver)';
  $handler->display->display_options['filters']['field_webserver_value']['expose']['operator'] = 'field_webserver_value_op';
  $handler->display->display_options['filters']['field_webserver_value']['expose']['identifier'] = 'field_webserver_value';
  $handler->display->display_options['filters']['field_webserver_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'websites/insecure';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Vulnerable websites';
  $handler->display->display_options['menu']['weight'] = '-5';
  $handler->display->display_options['menu']['name'] = 'menu-websites';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Detailed Table */
  $handler = $view->new_display('page', 'Detailed Table', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Website Details';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Site name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_servername']['id'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['table'] = 'field_data_field_servername';
  $handler->display->display_options['fields']['field_servername']['field'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['label'] = '';
  $handler->display->display_options['fields']['field_servername']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_servername']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_servername']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_servername']['type'] = 'link_url';
  /* Field: Content: Environment */
  $handler->display->display_options['fields']['field_site_env']['id'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['fields']['field_site_env']['field'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_site_env']['alter']['text'] = '[field_site_env] <em>[field_servername]</em>';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Field: Content: Content */
  $handler->display->display_options['fields']['field_stat_nodes']['id'] = 'field_stat_nodes';
  $handler->display->display_options['fields']['field_stat_nodes']['table'] = 'field_data_field_stat_nodes';
  $handler->display->display_options['fields']['field_stat_nodes']['field'] = 'field_stat_nodes';
  $handler->display->display_options['fields']['field_stat_nodes']['label'] = 'Content growth';
  $handler->display->display_options['fields']['field_stat_nodes']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: DB Host */
  $handler->display->display_options['fields']['field_dbhost']['id'] = 'field_dbhost';
  $handler->display->display_options['fields']['field_dbhost']['table'] = 'field_data_field_dbhost';
  $handler->display->display_options['fields']['field_dbhost']['field'] = 'field_dbhost';
  /* Field: Content: DB Name */
  $handler->display->display_options['fields']['field_dbname']['id'] = 'field_dbname';
  $handler->display->display_options['fields']['field_dbname']['table'] = 'field_data_field_dbname';
  $handler->display->display_options['fields']['field_dbname']['field'] = 'field_dbname';
  /* Field: Content: Site Data */
  $handler->display->display_options['fields']['field_sitedata']['id'] = 'field_sitedata';
  $handler->display->display_options['fields']['field_sitedata']['table'] = 'field_data_field_sitedata';
  $handler->display->display_options['fields']['field_sitedata']['field'] = 'field_sitedata';
  $handler->display->display_options['fields']['field_sitedata']['label'] = 'DB Size';
  /* Field: Content: Environment */
  $handler->display->display_options['fields']['field_site_env_1']['id'] = 'field_site_env_1';
  $handler->display->display_options['fields']['field_site_env_1']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['fields']['field_site_env_1']['field'] = 'field_site_env';
  /* Field: Content: User accounts */
  $handler->display->display_options['fields']['field_stat_users']['id'] = 'field_stat_users';
  $handler->display->display_options['fields']['field_stat_users']['table'] = 'field_data_field_stat_users';
  $handler->display->display_options['fields']['field_stat_users']['field'] = 'field_stat_users';
  $handler->display->display_options['fields']['field_stat_users']['label'] = 'User account growth';
  $handler->display->display_options['fields']['field_stat_users']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Webroot */
  $handler->display->display_options['fields']['field_webroot']['id'] = 'field_webroot';
  $handler->display->display_options['fields']['field_webroot']['table'] = 'field_data_field_webroot';
  $handler->display->display_options['fields']['field_webroot']['field'] = 'field_webroot';
  $handler->display->display_options['path'] = 'websites/view/detailed';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Websites detailed';
  $handler->display->display_options['menu']['weight'] = '50';
  $handler->display->display_options['menu']['name'] = 'menu-websites';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Websites';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-websites';

  /* Display: Sizes */
  $handler = $view->new_display('page', 'Sizes', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Website Size';
  $handler->display->display_options['display_description'] = 'Chart the size of site DB and files.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Site name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_servername']['id'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['table'] = 'field_data_field_servername';
  $handler->display->display_options['fields']['field_servername']['field'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['label'] = '';
  $handler->display->display_options['fields']['field_servername']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_servername']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_servername']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_servername']['type'] = 'link_url';
  /* Field: Content: Site Data */
  $handler->display->display_options['fields']['field_sitedata']['id'] = 'field_sitedata';
  $handler->display->display_options['fields']['field_sitedata']['table'] = 'field_data_field_sitedata';
  $handler->display->display_options['fields']['field_sitedata']['field'] = 'field_sitedata';
  $handler->display->display_options['fields']['field_sitedata']['label'] = 'DB Size';
  /* Field: Content: Site Size */
  $handler->display->display_options['fields']['field_sitesize']['id'] = 'field_sitesize';
  $handler->display->display_options['fields']['field_sitesize']['table'] = 'field_data_field_sitesize';
  $handler->display->display_options['fields']['field_sitesize']['field'] = 'field_sitesize';
  $handler->display->display_options['fields']['field_sitesize']['label'] = 'Site size';
  $handler->display->display_options['path'] = 'websites/size';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Website Size';
  $handler->display->display_options['menu']['weight'] = '20';
  $handler->display->display_options['menu']['name'] = 'menu-websites';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Websites';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Size Chart */
  $handler = $view->new_display('page', 'Size Chart', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Website Size chart';
  $handler->display->display_options['display_description'] = 'Chart the size of site DB and files.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'title';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_sitedata' => 'field_sitedata',
    'field_sitesize' => 'field_sitesize',
    'field_db_size' => 'field_db_size',
    'title' => 0,
    'field_servername' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'title' => '#2f7ed8',
    'field_servername' => '#0d233a',
    'field_sitedata' => '#5381c0',
    'field_sitesize' => '#910000',
    'field_db_size' => '#16c21a',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '1200';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Environment */
  $handler->display->display_options['fields']['field_site_env']['id'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['fields']['field_site_env']['field'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['label'] = '';
  $handler->display->display_options['fields']['field_site_env']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_site_env']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_site_env']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Site name';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] - [field_site_env]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_servername']['id'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['table'] = 'field_data_field_servername';
  $handler->display->display_options['fields']['field_servername']['field'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['label'] = '';
  $handler->display->display_options['fields']['field_servername']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_servername']['alter']['text'] = '[title]
[field_servername]';
  $handler->display->display_options['fields']['field_servername']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_servername']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_servername']['type'] = 'link_plain';
  /* Field: Content: Site Data */
  $handler->display->display_options['fields']['field_sitedata']['id'] = 'field_sitedata';
  $handler->display->display_options['fields']['field_sitedata']['table'] = 'field_data_field_sitedata';
  $handler->display->display_options['fields']['field_sitedata']['field'] = 'field_sitedata';
  /* Field: Content: Site Size */
  $handler->display->display_options['fields']['field_sitesize']['id'] = 'field_sitesize';
  $handler->display->display_options['fields']['field_sitesize']['table'] = 'field_data_field_sitesize';
  $handler->display->display_options['fields']['field_sitesize']['field'] = 'field_sitesize';
  /* Field: Content: DB Size */
  $handler->display->display_options['fields']['field_db_size']['id'] = 'field_db_size';
  $handler->display->display_options['fields']['field_db_size']['table'] = 'field_data_field_db_size';
  $handler->display->display_options['fields']['field_db_size']['field'] = 'field_db_size';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'website' => 'website',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Environment (field_site_env) */
  $handler->display->display_options['filters']['field_site_env_tid']['id'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['filters']['field_site_env_tid']['field'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_site_env_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_site_env_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator_id'] = 'env_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['label'] = 'Environment';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator'] = 'field_site_env_tid_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['identifier'] = 'env';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_site_env_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_site_env_tid']['vocabulary'] = 'environment';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Site name';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Site Data (field_sitedata) */
  $handler->display->display_options['filters']['field_sitedata_value']['id'] = 'field_sitedata_value';
  $handler->display->display_options['filters']['field_sitedata_value']['table'] = 'field_data_field_sitedata';
  $handler->display->display_options['filters']['field_sitedata_value']['field'] = 'field_sitedata_value';
  $handler->display->display_options['filters']['field_sitedata_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'websites/size-chart';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Size chart';
  $handler->display->display_options['menu']['weight'] = '40';
  $handler->display->display_options['menu']['name'] = 'menu-websites';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Websites';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Core out of Date */
  $handler = $view->new_display('page', 'Core out of Date', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Core Out of Date';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Need to modify the default filter whenever a new release comes out - in order that this list shows only those that have not been upgraded.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Site name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_servername']['id'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['table'] = 'field_data_field_servername';
  $handler->display->display_options['fields']['field_servername']['field'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['label'] = '';
  $handler->display->display_options['fields']['field_servername']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_servername']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_servername']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_servername']['type'] = 'link_url';
  /* Field: Content: Environment */
  $handler->display->display_options['fields']['field_site_env']['id'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['fields']['field_site_env']['field'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_site_env']['alter']['text'] = '[field_site_env] <em>[field_servername]</em>';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Field: Content: Drupal Version */
  $handler->display->display_options['fields']['field_drupal_version']['id'] = 'field_drupal_version';
  $handler->display->display_options['fields']['field_drupal_version']['table'] = 'field_data_field_drupal_version';
  $handler->display->display_options['fields']['field_drupal_version']['field'] = 'field_drupal_version';
  /* Field: Content: Webroot */
  $handler->display->display_options['fields']['field_webroot']['id'] = 'field_webroot';
  $handler->display->display_options['fields']['field_webroot']['table'] = 'field_data_field_webroot';
  $handler->display->display_options['fields']['field_webroot']['field'] = 'field_webroot';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'website' => 'website',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Environment (field_site_env) */
  $handler->display->display_options['filters']['field_site_env_tid']['id'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['filters']['field_site_env_tid']['field'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_site_env_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator_id'] = 'env_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['label'] = 'Environment';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator'] = 'field_site_env_tid_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['identifier'] = 'env';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_site_env_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_site_env_tid']['vocabulary'] = 'environment';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Site name';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Drupal Version (field_drupal_version) */
  $handler->display->display_options['filters']['field_drupal_version_value']['id'] = 'field_drupal_version_value';
  $handler->display->display_options['filters']['field_drupal_version_value']['table'] = 'field_data_field_drupal_version';
  $handler->display->display_options['filters']['field_drupal_version_value']['field'] = 'field_drupal_version_value';
  $handler->display->display_options['filters']['field_drupal_version_value']['operator'] = 'not_regular_expression';
  $handler->display->display_options['filters']['field_drupal_version_value']['value'] = '(7.37|7.36|6.35)';
  $handler->display->display_options['filters']['field_drupal_version_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['operator_id'] = 'field_drupal_version_value_op';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['label'] = 'Drupal Version (field_drupal_version)';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['operator'] = 'field_drupal_version_value_op';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['identifier'] = 'field_drupal_version_value';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Drupal Version (field_drupal_version) */
  $handler->display->display_options['filters']['field_drupal_version_value_1']['id'] = 'field_drupal_version_value_1';
  $handler->display->display_options['filters']['field_drupal_version_value_1']['table'] = 'field_data_field_drupal_version';
  $handler->display->display_options['filters']['field_drupal_version_value_1']['field'] = 'field_drupal_version_value';
  $handler->display->display_options['filters']['field_drupal_version_value_1']['operator'] = '!=';
  $handler->display->display_options['filters']['field_drupal_version_value_1']['value'] = '6.35';
  $handler->display->display_options['filters']['field_drupal_version_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_drupal_version_value_1']['expose']['operator_id'] = 'field_drupal_version_value_1_op';
  $handler->display->display_options['filters']['field_drupal_version_value_1']['expose']['label'] = 'Drupal Version (field_drupal_version)';
  $handler->display->display_options['filters']['field_drupal_version_value_1']['expose']['operator'] = 'field_drupal_version_value_1_op';
  $handler->display->display_options['filters']['field_drupal_version_value_1']['expose']['identifier'] = 'field_drupal_version_value_1';
  $handler->display->display_options['filters']['field_drupal_version_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'websites/core-insecure';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Core Status';
  $handler->display->display_options['menu']['weight'] = '-6';
  $handler->display->display_options['menu']['name'] = 'menu-websites';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Update Status */
  $handler = $view->new_display('page', 'Update Status', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Update Status';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'website' => 'website',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Environment (field_site_env) */
  $handler->display->display_options['filters']['field_site_env_tid']['id'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['filters']['field_site_env_tid']['field'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_site_env_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator_id'] = 'env_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['label'] = 'Environment';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator'] = 'field_site_env_tid_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['identifier'] = 'env';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_site_env_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_site_env_tid']['vocabulary'] = 'environment';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Site name';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '<';
  $handler->display->display_options['filters']['changed']['value']['value'] = '- 2 day';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Updated date';
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  $handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'websites/update-status';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Update Status';
  $handler->display->display_options['menu']['weight'] = '-50';
  $handler->display->display_options['menu']['name'] = 'menu-websites';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Size Chart (by size) */
  $handler = $view->new_display('page', 'Size Chart (by size)', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Website Size chart';
  $handler->display->display_options['display_description'] = 'Chart the size of site DB and files.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'title';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'expression' => 'expression',
    'field_site_env' => 0,
    'title' => 0,
    'field_servername' => 0,
    'field_sitedata' => 0,
    'field_sitesize' => 0,
    'field_db_size' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_site_env' => '#2f7ed8',
    'title' => '#2f7ed8',
    'field_servername' => '#0d233a',
    'field_sitedata' => '#5381c0',
    'field_sitesize' => '#910000',
    'field_db_size' => '#16c21a',
    'expression' => '#f28f43',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '1200';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Environment */
  $handler->display->display_options['fields']['field_site_env']['id'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['fields']['field_site_env']['field'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['label'] = '';
  $handler->display->display_options['fields']['field_site_env']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_site_env']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_site_env']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Site name';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] - [field_site_env]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_servername']['id'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['table'] = 'field_data_field_servername';
  $handler->display->display_options['fields']['field_servername']['field'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['label'] = '';
  $handler->display->display_options['fields']['field_servername']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_servername']['alter']['text'] = '[title]
[field_servername]';
  $handler->display->display_options['fields']['field_servername']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_servername']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_servername']['type'] = 'link_plain';
  /* Field: Content: Site Data */
  $handler->display->display_options['fields']['field_sitedata']['id'] = 'field_sitedata';
  $handler->display->display_options['fields']['field_sitedata']['table'] = 'field_data_field_sitedata';
  $handler->display->display_options['fields']['field_sitedata']['field'] = 'field_sitedata';
  /* Field: Content: Site Size */
  $handler->display->display_options['fields']['field_sitesize']['id'] = 'field_sitesize';
  $handler->display->display_options['fields']['field_sitesize']['table'] = 'field_data_field_sitesize';
  $handler->display->display_options['fields']['field_sitesize']['field'] = 'field_sitesize';
  /* Field: Content: DB Size */
  $handler->display->display_options['fields']['field_db_size']['id'] = 'field_db_size';
  $handler->display->display_options['fields']['field_db_size']['table'] = 'field_data_field_db_size';
  $handler->display->display_options['fields']['field_db_size']['field'] = 'field_db_size';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Total Data';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_sitedata] + [field_sitesize] + [field_db_size]';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Environment (field_site_env) */
  $handler->display->display_options['sorts']['field_site_env_tid']['id'] = 'field_site_env_tid';
  $handler->display->display_options['sorts']['field_site_env_tid']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['sorts']['field_site_env_tid']['field'] = 'field_site_env_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'website' => 'website',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Environment (field_site_env) */
  $handler->display->display_options['filters']['field_site_env_tid']['id'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['filters']['field_site_env_tid']['field'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_site_env_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator_id'] = 'env_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['label'] = 'Environment';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator'] = 'field_site_env_tid_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['identifier'] = 'env';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_site_env_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_site_env_tid']['vocabulary'] = 'environment';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Site name';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Site Data (field_sitedata) */
  $handler->display->display_options['filters']['field_sitedata_value']['id'] = 'field_sitedata_value';
  $handler->display->display_options['filters']['field_sitedata_value']['table'] = 'field_data_field_sitedata';
  $handler->display->display_options['filters']['field_sitedata_value']['field'] = 'field_sitedata_value';
  $handler->display->display_options['filters']['field_sitedata_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'websites/size/chart/bysize';
  $handler->display->display_options['menu']['title'] = 'Size chart';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Websites';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Websites (JSON) */
  $handler = $view->new_display('views_data_export', 'Websites (JSON)', 'views_data_export_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'views_access_callback';
  $handler->display->display_options['access']['views_access_callback'] = 'archimedes_munin_access_callback';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_json';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'site_name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_servername']['id'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['table'] = 'field_data_field_servername';
  $handler->display->display_options['fields']['field_servername']['field'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['label'] = 'url';
  $handler->display->display_options['fields']['field_servername']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_servername']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_servername']['type'] = 'link_plain';
  /* Field: Content: Environment */
  $handler->display->display_options['fields']['field_site_env']['id'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['fields']['field_site_env']['field'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['label'] = 'environment';
  $handler->display->display_options['fields']['field_site_env']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'modified';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'c';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Drupal Version */
  $handler->display->display_options['fields']['field_drupal_version']['id'] = 'field_drupal_version';
  $handler->display->display_options['fields']['field_drupal_version']['table'] = 'field_data_field_drupal_version';
  $handler->display->display_options['fields']['field_drupal_version']['field'] = 'field_drupal_version';
  $handler->display->display_options['fields']['field_drupal_version']['label'] = 'drupal_version';
  /* Field: Content: Webserver */
  $handler->display->display_options['fields']['field_webserver']['id'] = 'field_webserver';
  $handler->display->display_options['fields']['field_webserver']['table'] = 'field_data_field_webserver';
  $handler->display->display_options['fields']['field_webserver']['field'] = 'field_webserver';
  $handler->display->display_options['fields']['field_webserver']['label'] = 'hostname';
  $handler->display->display_options['path'] = 'websites.json';

  /* Display: Git Cleanup */
  $handler = $view->new_display('page', 'Git Cleanup', 'page_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Websites with Unclean Git';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'website' => 'website',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Environment (field_site_env) */
  $handler->display->display_options['filters']['field_site_env_tid']['id'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['filters']['field_site_env_tid']['field'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_site_env_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator_id'] = 'env_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['label'] = 'Environment';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator'] = 'field_site_env_tid_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['identifier'] = 'env';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_site_env_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_site_env_tid']['vocabulary'] = 'environment';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Site name';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Drupal Version (field_drupal_version) */
  $handler->display->display_options['filters']['field_drupal_version_value']['id'] = 'field_drupal_version_value';
  $handler->display->display_options['filters']['field_drupal_version_value']['table'] = 'field_data_field_drupal_version';
  $handler->display->display_options['filters']['field_drupal_version_value']['field'] = 'field_drupal_version_value';
  $handler->display->display_options['filters']['field_drupal_version_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['operator_id'] = 'field_drupal_version_value_op';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['label'] = 'Drupal Version (field_drupal_version)';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['operator'] = 'field_drupal_version_value_op';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['identifier'] = 'field_drupal_version_value';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Git Status (field_git_status) */
  $handler->display->display_options['filters']['field_git_status_value']['id'] = 'field_git_status_value';
  $handler->display->display_options['filters']['field_git_status_value']['table'] = 'field_data_field_git_status';
  $handler->display->display_options['filters']['field_git_status_value']['field'] = 'field_git_status_value';
  $handler->display->display_options['filters']['field_git_status_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'websites/git-cleanup';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Git Cleanup';
  $handler->display->display_options['menu']['weight'] = '-30';
  $handler->display->display_options['menu']['name'] = 'menu-websites';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: CiviCRM Installed */
  $handler = $view->new_display('page', 'CiviCRM Installed', 'page_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Websites by CiviCRM Git';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_websites_node']['id'] = 'reverse_field_websites_node';
  $handler->display->display_options['relationships']['reverse_field_websites_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_websites_node']['field'] = 'reverse_field_websites_node';
  /* Relationship: Civi */
  $handler->display->display_options['relationships']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['relationships']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['relationships']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['relationships']['field_status_tid']['relationship'] = 'reverse_field_websites_node';
  $handler->display->display_options['relationships']['field_status_tid']['ui_name'] = 'Civi';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Site Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_servername']['id'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['table'] = 'field_data_field_servername';
  $handler->display->display_options['fields']['field_servername']['field'] = 'field_servername';
  $handler->display->display_options['fields']['field_servername']['label'] = '';
  $handler->display->display_options['fields']['field_servername']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_servername']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_servername']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_servername']['type'] = 'link_url';
  /* Field: Content: Environment */
  $handler->display->display_options['fields']['field_site_env']['id'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['fields']['field_site_env']['field'] = 'field_site_env';
  $handler->display->display_options['fields']['field_site_env']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_site_env']['alter']['text'] = '[field_site_env] <em>[field_servername]</em>';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Field: Content: Drupal Version */
  $handler->display->display_options['fields']['field_drupal_version']['id'] = 'field_drupal_version';
  $handler->display->display_options['fields']['field_drupal_version']['table'] = 'field_data_field_drupal_version';
  $handler->display->display_options['fields']['field_drupal_version']['field'] = 'field_drupal_version';
  /* Field: Content: Modules */
  $handler->display->display_options['fields']['field_drupal_mod']['id'] = 'field_drupal_mod';
  $handler->display->display_options['fields']['field_drupal_mod']['table'] = 'field_data_field_drupal_mod';
  $handler->display->display_options['fields']['field_drupal_mod']['field'] = 'field_drupal_mod';
  $handler->display->display_options['fields']['field_drupal_mod']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_drupal_mod']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_drupal_mod']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'website' => 'website',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Environment (field_site_env) */
  $handler->display->display_options['filters']['field_site_env_tid']['id'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['table'] = 'field_data_field_site_env';
  $handler->display->display_options['filters']['field_site_env_tid']['field'] = 'field_site_env_tid';
  $handler->display->display_options['filters']['field_site_env_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_site_env_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator_id'] = 'env_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['label'] = 'Environment';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['operator'] = 'field_site_env_tid_op';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['identifier'] = 'env';
  $handler->display->display_options['filters']['field_site_env_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_site_env_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_site_env_tid']['vocabulary'] = 'environment';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Site name';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Drupal Version (field_drupal_version) */
  $handler->display->display_options['filters']['field_drupal_version_value']['id'] = 'field_drupal_version_value';
  $handler->display->display_options['filters']['field_drupal_version_value']['table'] = 'field_data_field_drupal_version';
  $handler->display->display_options['filters']['field_drupal_version_value']['field'] = 'field_drupal_version_value';
  $handler->display->display_options['filters']['field_drupal_version_value']['group'] = 1;
  $handler->display->display_options['filters']['field_drupal_version_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['operator_id'] = 'field_drupal_version_value_op';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['label'] = 'Drupal Version (field_drupal_version)';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['operator'] = 'field_drupal_version_value_op';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['identifier'] = 'field_drupal_version_value';
  $handler->display->display_options['filters']['field_drupal_version_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Modules (field_drupal_mod) */
  $handler->display->display_options['filters']['field_drupal_mod_target_id_2']['id'] = 'field_drupal_mod_target_id_2';
  $handler->display->display_options['filters']['field_drupal_mod_target_id_2']['table'] = 'field_data_field_drupal_mod';
  $handler->display->display_options['filters']['field_drupal_mod_target_id_2']['field'] = 'field_drupal_mod_target_id';
  $handler->display->display_options['filters']['field_drupal_mod_target_id_2']['value']['value'] = '3207';
  $handler->display->display_options['filters']['field_drupal_mod_target_id_2']['group'] = 2;
  /* Filter criterion: Content: Modules (field_drupal_mod) */
  $handler->display->display_options['filters']['field_drupal_mod_target_id']['id'] = 'field_drupal_mod_target_id';
  $handler->display->display_options['filters']['field_drupal_mod_target_id']['table'] = 'field_data_field_drupal_mod';
  $handler->display->display_options['filters']['field_drupal_mod_target_id']['field'] = 'field_drupal_mod_target_id';
  $handler->display->display_options['filters']['field_drupal_mod_target_id']['value']['value'] = '351';
  $handler->display->display_options['filters']['field_drupal_mod_target_id']['group'] = 2;
  $handler->display->display_options['filters']['field_drupal_mod_target_id']['expose']['operator_id'] = 'field_drupal_mod_target_id_op';
  $handler->display->display_options['filters']['field_drupal_mod_target_id']['expose']['label'] = 'Modules (field_drupal_mod)';
  $handler->display->display_options['filters']['field_drupal_mod_target_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_drupal_mod_target_id']['expose']['operator'] = 'field_drupal_mod_target_id_op';
  $handler->display->display_options['filters']['field_drupal_mod_target_id']['expose']['identifier'] = 'field_drupal_mod_target_id';
  $handler->display->display_options['filters']['field_drupal_mod_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Modules (field_drupal_mod) */
  $handler->display->display_options['filters']['field_drupal_mod_target_id_1']['id'] = 'field_drupal_mod_target_id_1';
  $handler->display->display_options['filters']['field_drupal_mod_target_id_1']['table'] = 'field_data_field_drupal_mod';
  $handler->display->display_options['filters']['field_drupal_mod_target_id_1']['field'] = 'field_drupal_mod_target_id';
  $handler->display->display_options['filters']['field_drupal_mod_target_id_1']['value']['value'] = '4062';
  $handler->display->display_options['filters']['field_drupal_mod_target_id_1']['group'] = 2;
  $handler->display->display_options['path'] = 'websites/civicrm-release';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'CiviCRM Installed';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-websites';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['websites'] = $view;

  return $export;
}
