<?php
/**
 * @file
 * halle_96_conf_schedule.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function halle_96_conf_schedule_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|conference_room|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'conference_room';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'back_to_conference_room_calendar' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'submitted_by' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_time_ago',
    ),
    'ds_user_picture' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_picture_userbild',
    ),
  );
  $export['node|conference_room|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function halle_96_conf_schedule_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'back_to_conference_room_calendar';
  $ds_field->label = 'Back-Button to Conference Calendar';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'conference_room|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p><a class="back-button" href="/besprechungsraum">&lt;&lt; Zurück zum Besprechungsraum-Kalender</a></p>
',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['back_to_conference_room_calendar'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function halle_96_conf_schedule_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|conference_room|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'conference_room';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'ds_user_picture',
      ),
      'right' => array(
        2 => 'submitted_by',
        3 => 'field_conf_firma',
        4 => 'field_conf_termin',
        5 => 'back_to_conference_room_calendar',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'ds_user_picture' => 'left',
      'submitted_by' => 'right',
      'field_conf_firma' => 'right',
      'field_conf_termin' => 'right',
      'back_to_conference_room_calendar' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|conference_room|default'] = $ds_layout;

  return $export;
}
