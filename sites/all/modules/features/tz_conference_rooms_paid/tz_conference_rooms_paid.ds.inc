<?php

/**
 * @file
 * tz_conference_rooms_paid.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tz_conference_rooms_paid_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|conference_room_paid_1|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'conference_room_paid_1';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'author' => array(
      'format' => 'author',
      'label' => 'hidden',
      'weight' => '2',
    ),
    'back_conference_paid_1' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '5',
    ),
    'ds_user_picture' => array(
      'format' => 'ds_picture_diskussionen_grosses_bild',
      'label' => 'hidden',
      'weight' => '1',
    ),
    'submitted_by' => array(
      'format' => 'ds_time_ago',
      'label' => 'hidden',
      'weight' => '0',
    ),
  );
  $export['node|conference_room_paid_1|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|conference_room_paid_2|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'conference_room_paid_2';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'author' => array(
      'format' => 'author',
      'label' => 'hidden',
      'weight' => '2',
    ),
    'back_conference_paid_2' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '5',
    ),
    'ds_user_picture' => array(
      'format' => 'ds_picture_diskussionen_grosses_bild',
      'label' => 'hidden',
      'weight' => '1',
    ),
    'submitted_by' => array(
      'format' => 'ds_time_ago',
      'label' => 'hidden',
      'weight' => '0',
    ),
  );
  $export['node|conference_room_paid_2|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function tz_conference_rooms_paid_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'back_conference_paid_1';
  $ds_field->label = 'Back-Button to Konferenzraum Kalender 1';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'conference_room_paid_1|*';
  $ds_field->properties = array(
    'code' => array(
      'format' => 'full_html',
      'value' => '<p><a href="/konferenzraum_1/month">&lt;&lt; Zurück zum Konferenzraum-1-Kalender</a></p>
',
    ),
    'use_token' => 0,
  );
  $export['back_conference_paid_1'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'back_conference_paid_2';
  $ds_field->label = 'Back-Button to Konferenzraum Kalender 2';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'conference_room_paid_2|*';
  $ds_field->properties = array(
    'code' => array(
      'format' => 'full_html',
      'value' => '<p><a href="/konferenzraum_2/month">&lt;&lt; Zurück zum Konferenzraum-2-Kalender</a></p>
',
    ),
    'use_token' => 0,
  );
  $export['back_conference_paid_2'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tz_conference_rooms_paid_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|conference_room_paid_1|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'conference_room_paid_1';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'author' => 'left',
      'back_conference_paid_1' => 'right',
      'ds_user_picture' => 'left',
      'field_conf_firma' => 'right',
      'field_conf_termin' => 'right',
      'submitted_by' => 'header',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'header' => array(
        0 => 'submitted_by',
      ),
      'left' => array(
        1 => 'ds_user_picture',
        2 => 'author',
      ),
      'right' => array(
        3 => 'field_conf_firma',
        4 => 'field_conf_termin',
        5 => 'back_conference_paid_1',
      ),
    ),
    'wrappers' => array(
      'footer' => 'div',
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
    ),
  );
  $export['node|conference_room_paid_1|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|conference_room_paid_2|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'conference_room_paid_2';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'author' => 'left',
      'back_conference_paid_2' => 'right',
      'ds_user_picture' => 'left',
      'field_conf_firma' => 'right',
      'field_conf_termin' => 'right',
      'submitted_by' => 'header',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'header' => array(
        0 => 'submitted_by',
      ),
      'left' => array(
        1 => 'ds_user_picture',
        2 => 'author',
      ),
      'right' => array(
        3 => 'field_conf_firma',
        4 => 'field_conf_termin',
        5 => 'back_conference_paid_2',
      ),
    ),
    'wrappers' => array(
      'footer' => 'div',
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
    ),
  );
  $export['node|conference_room_paid_2|default'] = $ds_layout;

  return $export;
}
