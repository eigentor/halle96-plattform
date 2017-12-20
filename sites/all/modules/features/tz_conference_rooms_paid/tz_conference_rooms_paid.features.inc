<?php
/**
 * @file
 * tz_conference_rooms_paid.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tz_conference_rooms_paid_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tz_conference_rooms_paid_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tz_conference_rooms_paid_node_info() {
  $items = array(
    'conference_room_paid_1' => array(
      'name' => t('Konferenzraum 1'),
      'base' => 'node_content',
      'description' => t('Der kostenpflichtig mietbare Konferenzraum.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'conference_room_paid_2' => array(
      'name' => t('Konferenzraum 2'),
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
