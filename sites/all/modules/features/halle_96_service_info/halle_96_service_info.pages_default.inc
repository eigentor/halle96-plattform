<?php
/**
 * @file
 * halle_96_service_info.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function halle_96_service_info_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'service_info_bersicht';
  $page->task = 'page';
  $page->admin_title = 'Service / Info Übersicht';
  $page->admin_description = 'Service / Info Übersicht';
  $page->path = 'service-info';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Service und Info',
    'name' => 'main-menu',
    'weight' => '2',
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
  $handler->name = 'page_service_info_bersicht_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'service_info_bersicht';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'service-info',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
    'right' => array(
      'style' => 'default',
    ),
    'left' => array(
      'style' => '-1',
    ),
    'middle' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Gesammelte Infos';
  $display->uuid = '8015ee7c-fc26-4921-8aad-15e3b866552f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_service_info_bersicht_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-11297fa0-a528-427a-be7c-58d5a681c1b4';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'einzelne_kategorie_service_und_info-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '9+11',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '11297fa0-a528-427a-be7c-58d5a681c1b4';
  $display->content['new-11297fa0-a528-427a-be7c-58d5a681c1b4'] = $pane;
  $display->panels['bottom'][0] = 'new-11297fa0-a528-427a-be7c-58d5a681c1b4';
  $pane = new stdClass();
  $pane->pid = 'new-a7cc3cfb-5201-4867-9227-68c8bb62ab94';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'einzelne_kategorie_service_und_info-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '8',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a7cc3cfb-5201-4867-9227-68c8bb62ab94';
  $display->content['new-a7cc3cfb-5201-4867-9227-68c8bb62ab94'] = $pane;
  $display->panels['bottom'][1] = 'new-a7cc3cfb-5201-4867-9227-68c8bb62ab94';
  $pane = new stdClass();
  $pane->pid = 'new-3d18f098-384e-42c4-8107-15b9e571a767';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'einzelne_kategorie_service_und_info-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '7',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3d18f098-384e-42c4-8107-15b9e571a767';
  $display->content['new-3d18f098-384e-42c4-8107-15b9e571a767'] = $pane;
  $display->panels['bottom'][2] = 'new-3d18f098-384e-42c4-8107-15b9e571a767';
  $pane = new stdClass();
  $pane->pid = 'new-78f718ed-8a1b-465b-9b01-b45537bf08a4';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'einzelne_kategorie_service_und_info-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '19',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '78f718ed-8a1b-465b-9b01-b45537bf08a4';
  $display->content['new-78f718ed-8a1b-465b-9b01-b45537bf08a4'] = $pane;
  $display->panels['bottom'][3] = 'new-78f718ed-8a1b-465b-9b01-b45537bf08a4';
  $pane = new stdClass();
  $pane->pid = 'new-c4306f09-4668-4c67-9657-b8456a48d1f2';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'einzelne_kategorie_service_und_info-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '12',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c4306f09-4668-4c67-9657-b8456a48d1f2';
  $display->content['new-c4306f09-4668-4c67-9657-b8456a48d1f2'] = $pane;
  $display->panels['bottom'][4] = 'new-c4306f09-4668-4c67-9657-b8456a48d1f2';
  $pane = new stdClass();
  $pane->pid = 'new-d0f349de-1860-4207-ae51-5594378f093f';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'einzelne_kategorie_service_und_info-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '10',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd0f349de-1860-4207-ae51-5594378f093f';
  $display->content['new-d0f349de-1860-4207-ae51-5594378f093f'] = $pane;
  $display->panels['left'][0] = 'new-d0f349de-1860-4207-ae51-5594378f093f';
  $pane = new stdClass();
  $pane->pid = 'new-653f5856-5b10-4094-8495-32a8096e5496';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'einzelne_kategorie_service_und_info-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '13',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '653f5856-5b10-4094-8495-32a8096e5496';
  $display->content['new-653f5856-5b10-4094-8495-32a8096e5496'] = $pane;
  $display->panels['middle'][0] = 'new-653f5856-5b10-4094-8495-32a8096e5496';
  $pane = new stdClass();
  $pane->pid = 'new-de295a4a-30e6-414d-b91a-c19e701d8cfd';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'einzelne_kategorie_service_und_info-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '14',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'de295a4a-30e6-414d-b91a-c19e701d8cfd';
  $display->content['new-de295a4a-30e6-414d-b91a-c19e701d8cfd'] = $pane;
  $display->panels['right'][0] = 'new-de295a4a-30e6-414d-b91a-c19e701d8cfd';
  $pane = new stdClass();
  $pane->pid = 'new-b225032b-662c-4ff0-acae-de6925387e80';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'alle_kategorien_service_info-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b225032b-662c-4ff0-acae-de6925387e80';
  $display->content['new-b225032b-662c-4ff0-acae-de6925387e80'] = $pane;
  $display->panels['top'][0] = 'new-b225032b-662c-4ff0-acae-de6925387e80';
  $pane = new stdClass();
  $pane->pid = 'new-ce01f1cc-33c7-4cce-9849-64712bfc653e';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'einzelne_kategorie_service_und_info-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '20',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ce01f1cc-33c7-4cce-9849-64712bfc653e';
  $display->content['new-ce01f1cc-33c7-4cce-9849-64712bfc653e'] = $pane;
  $display->panels['top'][1] = 'new-ce01f1cc-33c7-4cce-9849-64712bfc653e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['service_info_bersicht'] = $page;

  return $pages;

}
