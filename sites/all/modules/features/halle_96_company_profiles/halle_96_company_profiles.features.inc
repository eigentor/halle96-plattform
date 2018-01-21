<?php
/**
 * @file
 * halle_96_company_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function halle_96_company_profiles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "ds_extras" && $api == "ds_extras") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function halle_96_company_profiles_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function halle_96_company_profiles_image_default_styles() {
  $styles = array();

  // Exported image style: company_logo_big.
  $styles['company_logo_big'] = array(
    'label' => 'Firmenlogo Detailansicht',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => 140,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: company_logo_overview.
  $styles['company_logo_overview'] = array(
    'label' => 'Firmenlogo Übersicht',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => 80,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
