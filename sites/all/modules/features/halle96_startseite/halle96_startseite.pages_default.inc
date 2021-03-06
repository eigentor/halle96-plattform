<?php
/**
 * @file
 * halle96_startseite.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function halle96_startseite_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Startseite';
  $page->admin_description = 'Die Startseite';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'homepage',
    'css_id' => 'homepage',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '21a599ae-796b-4c73-9c03-6c3389834baa';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_homepage_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c3e64793-bec3-4e3a-9721-67b602d233d1';
  $pane->panel = 'left_above';
  $pane->type = 'views';
  $pane->subtype = 'mitteilungen';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 1,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 1,
    'override_title_text' => 'Von Mieter zu Mieter',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c3e64793-bec3-4e3a-9721-67b602d233d1';
  $display->content['new-c3e64793-bec3-4e3a-9721-67b602d233d1'] = $pane;
  $display->panels['left_above'][0] = 'new-c3e64793-bec3-4e3a-9721-67b602d233d1';
  $pane = new stdClass();
  $pane->pid = 'new-7312ea42-fbe7-49e1-bc14-78a09927148f';
  $pane->panel = 'left_below';
  $pane->type = 'views_panes';
  $pane->subtype = 'news-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'more_link' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7312ea42-fbe7-49e1-bc14-78a09927148f';
  $display->content['new-7312ea42-fbe7-49e1-bc14-78a09927148f'] = $pane;
  $display->panels['left_below'][0] = 'new-7312ea42-fbe7-49e1-bc14-78a09927148f';
  $pane = new stdClass();
  $pane->pid = 'new-1d15303b-e303-41ce-8c0f-ad6693f1f9ca';
  $pane->panel = 'right_above';
  $pane->type = 'views';
  $pane->subtype = 'kommentare';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'Neueste Kommentare',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1d15303b-e303-41ce-8c0f-ad6693f1f9ca';
  $display->content['new-1d15303b-e303-41ce-8c0f-ad6693f1f9ca'] = $pane;
  $display->panels['right_above'][0] = 'new-1d15303b-e303-41ce-8c0f-ad6693f1f9ca';
  $pane = new stdClass();
  $pane->pid = 'new-55bd7c54-0e43-482b-8f3c-10016e4f132d';
  $pane->panel = 'right_below';
  $pane->type = 'views';
  $pane->subtype = 'alle_kategorien_service_info';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '14',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 1,
    'args' => '',
    'url' => 'service-info',
    'display' => 'default',
    'override_title' => 1,
    'override_title_text' => 'Gesammelte Infos',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '55bd7c54-0e43-482b-8f3c-10016e4f132d';
  $display->content['new-55bd7c54-0e43-482b-8f3c-10016e4f132d'] = $pane;
  $display->panels['right_below'][0] = 'new-55bd7c54-0e43-482b-8f3c-10016e4f132d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
