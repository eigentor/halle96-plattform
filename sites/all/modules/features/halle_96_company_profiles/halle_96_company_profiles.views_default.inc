<?php
/**
 * @file
 * halle_96_company_profiles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function halle_96_company_profiles_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mieterfirmen';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mieterfirmen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mieterfirmen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['layout'] = 'threecol_25_50_25';
  $handler->display->display_options['row_options']['regions'] = array(
    'nid' => 'left',
    'title' => 'middle',
    'field_comp_logo' => 'left',
    'body' => 'middle',
    'field_comp_industry' => 'right',
    'field_comp_floor' => 'right',
    'field_room_no' => 'right',
    'field_comp_members' => 'right',
  );
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Logo */
  $handler->display->display_options['fields']['field_comp_logo']['id'] = 'field_comp_logo';
  $handler->display->display_options['fields']['field_comp_logo']['table'] = 'field_data_field_comp_logo';
  $handler->display->display_options['fields']['field_comp_logo']['field'] = 'field_comp_logo';
  $handler->display->display_options['fields']['field_comp_logo']['label'] = '';
  $handler->display->display_options['fields']['field_comp_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_comp_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_comp_logo']['settings'] = array(
    'image_style' => 'company_logo_overview',
    'image_link' => 'content',
  );
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'weiterlesen';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '/node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Feld: Inhalt: Branche */
  $handler->display->display_options['fields']['field_comp_industry']['id'] = 'field_comp_industry';
  $handler->display->display_options['fields']['field_comp_industry']['table'] = 'field_data_field_comp_industry';
  $handler->display->display_options['fields']['field_comp_industry']['field'] = 'field_comp_industry';
  $handler->display->display_options['fields']['field_comp_industry']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_comp_industry']['delta_offset'] = '0';
  /* Feld: Inhalt: Stockwerk */
  $handler->display->display_options['fields']['field_comp_floor']['id'] = 'field_comp_floor';
  $handler->display->display_options['fields']['field_comp_floor']['table'] = 'field_data_field_comp_floor';
  $handler->display->display_options['fields']['field_comp_floor']['field'] = 'field_comp_floor';
  $handler->display->display_options['fields']['field_comp_floor']['label'] = 'Raum';
  /* Feld: Inhalt: Raum-Nr. */
  $handler->display->display_options['fields']['field_room_no']['id'] = 'field_room_no';
  $handler->display->display_options['fields']['field_room_no']['table'] = 'field_data_field_room_no';
  $handler->display->display_options['fields']['field_room_no']['field'] = 'field_room_no';
  $handler->display->display_options['fields']['field_room_no']['label'] = '';
  $handler->display->display_options['fields']['field_room_no']['alter']['text'] = '[field_comp_floor], [field_room_no]';
  $handler->display->display_options['fields']['field_room_no']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Mitarbeiter */
  $handler->display->display_options['fields']['field_comp_members']['id'] = 'field_comp_members';
  $handler->display->display_options['fields']['field_comp_members']['table'] = 'field_data_field_comp_members';
  $handler->display->display_options['fields']['field_comp_members']['field'] = 'field_comp_members';
  $handler->display->display_options['fields']['field_comp_members']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_comp_members']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_comp_members']['multi_type'] = 'ul';
  /* Sortierkriterien: Inhalt: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company_profile' => 'company_profile',
  );
  /* Filterkriterium: Inhalt: Branche (field_comp_industry) */
  $handler->display->display_options['filters']['field_comp_industry_tid']['id'] = 'field_comp_industry_tid';
  $handler->display->display_options['filters']['field_comp_industry_tid']['table'] = 'field_data_field_comp_industry';
  $handler->display->display_options['filters']['field_comp_industry_tid']['field'] = 'field_comp_industry_tid';
  $handler->display->display_options['filters']['field_comp_industry_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_comp_industry_tid']['expose']['operator_id'] = 'field_comp_industry_tid_op';
  $handler->display->display_options['filters']['field_comp_industry_tid']['expose']['label'] = 'Branche';
  $handler->display->display_options['filters']['field_comp_industry_tid']['expose']['operator'] = 'field_comp_industry_tid_op';
  $handler->display->display_options['filters']['field_comp_industry_tid']['expose']['identifier'] = 'field_comp_industry_tid';
  $handler->display->display_options['filters']['field_comp_industry_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_comp_industry_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_comp_industry_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_comp_industry_tid']['vocabulary'] = 'industry';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'mieterfirmen';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Mieterfirmen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['mieterfirmen'] = array(
    t('Master'),
    t('Mieterfirmen'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Beitrags-ID'),
    t('weiterlesen'),
    t('Branche'),
    t('Raum'),
    t('[field_comp_floor], [field_room_no]'),
    t('Mitarbeiter'),
    t('Page'),
  );
  $export['mieterfirmen'] = $view;

  return $export;
}
