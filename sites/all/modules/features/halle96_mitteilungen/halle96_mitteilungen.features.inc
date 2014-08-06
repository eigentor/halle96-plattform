<?php
/**
 * @file
 * halle96_mitteilungen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function halle96_mitteilungen_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function halle96_mitteilungen_node_info() {
  $items = array(
    'discussion' => array(
      'name' => t('Mitteilung'),
      'base' => 'node_content',
      'description' => t('Mitteilungen zwischen den Bewohnern der HALLE96'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
