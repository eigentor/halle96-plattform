<?php

/**
 * @file
 * tz_conference_rooms_paid.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tz_conference_rooms_paid_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_conf_equipment'.
  $field_bases['field_conf_equipment'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_conf_equipment',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'moderation_pack' => 'Moderationskoffer',
        'metaplan_paper' => 'Metaplanpapier',
        'digital_flipchart' => 'Digitales Flipchart',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_conf_food'.
  $field_bases['field_conf_food'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_conf_food',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'softdrinks' => 'Softgetränke',
        'coffee' => 'Kaffee',
        'tea' => 'Tee',
        'milk' => 'Milch',
        'cookies' => 'Gebäckmischung',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
