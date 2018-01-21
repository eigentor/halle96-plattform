<?php
/**
 * @file
 * tz_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tz_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tz_content_types_node_info() {
  $items = array(
    'simple_page' => array(
      'name' => t('Einfache Seite'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
