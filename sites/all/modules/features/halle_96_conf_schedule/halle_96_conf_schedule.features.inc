<?php
/**
 * @file
 * halle_96_conf_schedule.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function halle_96_conf_schedule_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function halle_96_conf_schedule_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function halle_96_conf_schedule_node_info() {
  $items = array(
    'conference_room' => array(
      'name' => t('Besprechungsraum buchen'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
