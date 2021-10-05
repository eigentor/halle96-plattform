<?php

/**
 * @file
 * tz_webform.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tz_webform_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tickets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'webform_submissions';
  $view->human_name = 'Tickets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tickets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'value_4' => 'value_4',
    'value' => 'value',
    'value_1' => 'value_1',
    'value_2' => 'value_2',
    'value_3' => 'value_3',
    'modified' => 'modified',
    'edit_submission' => 'edit_submission',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'value_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'modified' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_submission' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  /* Kopfbereich: Global: Textbereich */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Hier finden sie die aktuell offenen Tickets und deren Bearbeitungsstatus.
Bei Fragen wenden Sie sich bitte an Volker Colditz oder die Zentrumsleitung.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Beziehung: Webformular-Eingaben: Daten */
  $handler->display->display_options['relationships']['data']['id'] = 'data';
  $handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data']['field'] = 'data';
  $handler->display->display_options['relationships']['data']['webform_nid'] = '2760';
  $handler->display->display_options['relationships']['data']['webform_cid'] = '7';
  $handler->display->display_options['relationships']['data']['webform_join_by'] = 'cid';
  /* Feld: Daten einer Webformulareingabe: Wert */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['label'] = '';
  $handler->display->display_options['fields']['value_4']['webform_nid'] = '2760';
  $handler->display->display_options['fields']['value_4']['webform_cid'] = '7';
  /* Feld: Daten einer Webformulareingabe: Wert */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['webform_nid'] = '2760';
  $handler->display->display_options['fields']['value']['webform_cid'] = '1';
  /* Feld: Daten einer Webformulareingabe: Wert */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = '';
  $handler->display->display_options['fields']['value_1']['webform_nid'] = '2760';
  $handler->display->display_options['fields']['value_1']['webform_cid'] = '2';
  /* Feld: Daten einer Webformulareingabe: Wert */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = 'Raumnr. / Etage';
  $handler->display->display_options['fields']['value_2']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_2']['webform_nid'] = '2760';
  $handler->display->display_options['fields']['value_2']['webform_cid'] = '3';
  /* Feld: Daten einer Webformulareingabe: Wert */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['label'] = '';
  $handler->display->display_options['fields']['value_3']['webform_nid'] = '2760';
  $handler->display->display_options['fields']['value_3']['webform_cid'] = '4';
  /* Feld: Webformular-Eingaben: Geändert */
  $handler->display->display_options['fields']['modified']['id'] = 'modified';
  $handler->display->display_options['fields']['modified']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['modified']['field'] = 'modified';
  $handler->display->display_options['fields']['modified']['label'] = 'Erstellt / Zuletzt bearbeitet';
  $handler->display->display_options['fields']['modified']['date_format'] = 'short';
  $handler->display->display_options['fields']['modified']['second_date_format'] = 'long';
  /* Feld: Webformular-Eingaben: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_submission']['id'] = 'edit_submission';
  $handler->display->display_options['fields']['edit_submission']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['edit_submission']['field'] = 'edit_submission';
  $handler->display->display_options['fields']['edit_submission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_submission']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['edit_submission']['text'] = 'Bearbeiten';
  $handler->display->display_options['fields']['edit_submission']['access_check'] = 1;
  /* Sortierkriterien: Webformular-Eingaben: Geändert */
  $handler->display->display_options['sorts']['modified']['id'] = 'modified';
  $handler->display->display_options['sorts']['modified']['table'] = 'webform_submissions';
  $handler->display->display_options['sorts']['modified']['field'] = 'modified';
  $handler->display->display_options['sorts']['modified']['order'] = 'DESC';
  $handler->display->display_options['sorts']['modified']['granularity'] = 'hour';
  /* Filterkriterium: Wert von Status */
  $handler->display->display_options['filters']['data']['id'] = 'data';
  $handler->display->display_options['filters']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data']['field'] = 'data';
  $handler->display->display_options['filters']['data']['relationship'] = 'data';
  $handler->display->display_options['filters']['data']['ui_name'] = 'Wert von Status';
  $handler->display->display_options['filters']['data']['operator'] = 'not empty';
  /* Filterkriterium: Daten einer Webformulareingabe: Datumsfeld */
  $handler->display->display_options['filters']['data_1']['id'] = 'data_1';
  $handler->display->display_options['filters']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_1']['field'] = 'data';
  $handler->display->display_options['filters']['data_1']['relationship'] = 'data';
  $handler->display->display_options['filters']['data_1']['operator'] = '!=';
  $handler->display->display_options['filters']['data_1']['value'] = 'done';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'tickets';
  $translatables['tickets'] = array(
    t('Master'),
    t('Tickets'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Hier finden sie die aktuell offenen Tickets und deren Bearbeitungsstatus.
Bei Fragen wenden Sie sich bitte an Volker Colditz oder die Zentrumsleitung.'),
    t('Eingaben-Daten'),
    t('Raumnr. / Etage'),
    t('Erstellt / Zuletzt bearbeitet'),
    t('Bearbeiten'),
    t('Page'),
  );
  $export['tickets'] = $view;

  return $export;
}
