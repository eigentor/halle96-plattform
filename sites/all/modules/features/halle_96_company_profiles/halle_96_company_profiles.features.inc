<?php
/**
 * @file
 * halle_96_company_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function halle_96_company_profiles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function halle_96_company_profiles_node_info() {
  $items = array(
    'company_profile' => array(
      'name' => t('Firmenprofil'),
      'base' => 'node_content',
      'description' => t('Firmenprofile zur Darstellung und Auffindbarkeit der Mieter-Firmen.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
