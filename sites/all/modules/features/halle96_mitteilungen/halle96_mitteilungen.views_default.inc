<?php
/**
 * @file
 * halle96_mitteilungen.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function halle96_mitteilungen_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kommentare';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Kommentare';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kommentare';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Beziehung: Kommentar: Inhalt */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Beziehung: Kommentar: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'comment';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Feld: Benutzer: Bild */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<div class="user-image-placeholder"></div>';
  $handler->display->display_options['fields']['picture']['image_style'] = 'user_image_round_tiny';
  /* Feld: Kommentar: Autor */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<div class="user-avatar">[picture]</div>
<div class="author-name">[name]</div>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Feld: Kommentar: Titel */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['subject']['element_type'] = 'h3';
  $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  /* Feld: Kommentar: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['comment_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  /* Sortierkriterien: Kommentar: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Kommentar: Bestätigt */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discussion' => 'discussion',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['kommentare'] = array(
    t('Master'),
    t('Kommentare'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Inhalt'),
    t('Autor'),
    t('<div class="user-image-placeholder"></div>'),
    t('<div class="user-avatar">[picture]</div>
<div class="author-name">[name]</div>'),
    t('Block'),
  );
  $export['kommentare'] = $view;

  $view = new view();
  $view->name = 'mitteilungen';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mitteilungen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mitteilungen';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Beziehung: Inhalt: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'discussion' => 'discussion',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'mitteilungen';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Mitteilungen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block neueste Mitteilungen */
  $handler = $view->new_display('block', 'Block neueste Mitteilungen', 'block_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = '>> Alle Mitteilungen';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Bild */
  $handler->display->display_options['fields']['field_mit_bild']['id'] = 'field_mit_bild';
  $handler->display->display_options['fields']['field_mit_bild']['table'] = 'field_data_field_mit_bild';
  $handler->display->display_options['fields']['field_mit_bild']['field'] = 'field_mit_bild';
  $handler->display->display_options['fields']['field_mit_bild']['label'] = '';
  $handler->display->display_options['fields']['field_mit_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mit_bild']['empty'] = '<div class="image-placeholder"></div>';
  $handler->display->display_options['fields']['field_mit_bild']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mit_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_mit_bild']['settings'] = array(
    'image_style' => 'news-thumbnail',
    'image_link' => '',
  );
  /* Feld: Benutzer: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class="title">[title]</span> [name] ';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '130';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  $translatables['mitteilungen'] = array(
    t('Master'),
    t('Mitteilungen'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Elemente pro Seite'),
    t('- Alle -'),
    t('Offset'),
    t('« erste Seite'),
    t('‹ vorherige Seite'),
    t('nächste Seite ›'),
    t('letzte Seite »'),
    t('Autor'),
    t('Page'),
    t('Block neueste Mitteilungen'),
    t('>> Alle Mitteilungen'),
    t('<div class="image-placeholder"></div>'),
    t('<span class="title">[title]</span> [name] '),
  );
  $export['mitteilungen'] = $view;

  return $export;
}
