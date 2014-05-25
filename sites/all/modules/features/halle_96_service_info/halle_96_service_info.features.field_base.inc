<?php
/**
 * @file
 * halle_96_service_info.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function halle_96_service_info_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_page_themen'
  $field_bases['field_page_themen'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_page_themen',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'service_info',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
