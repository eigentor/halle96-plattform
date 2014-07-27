<?php
/**
 * @file
 * halle96_entdeckertag.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function halle96_entdeckertag_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'entdeckertag_bersicht';
  $page->task = 'page';
  $page->admin_title = 'Entdeckertag Übersicht';
  $page->admin_description = '';
  $page->path = 'entdeckertag';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Entdeckertag',
    'name' => 'main-menu',
    'weight' => '3',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_entdeckertag_bersicht_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'entdeckertag_bersicht';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Entdeckertag Übersicht',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'entdeckertag',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Entdeckertag';
  $display->uuid = 'f1467a1b-539c-498c-9305-c206a4d9f02a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7c59a134-9c26-4c1d-b424-4477606be35e';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'einzelne_kategorie_service_und_info-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '15',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'entdeckertag',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7c59a134-9c26-4c1d-b424-4477606be35e';
    $display->content['new-7c59a134-9c26-4c1d-b424-4477606be35e'] = $pane;
    $display->panels['left'][0] = 'new-7c59a134-9c26-4c1d-b424-4477606be35e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['entdeckertag_bersicht'] = $page;

  return $pages;

}
