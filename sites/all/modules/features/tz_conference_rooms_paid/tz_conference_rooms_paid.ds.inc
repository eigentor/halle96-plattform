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
    'back_conference_paid_1' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'submitted_by' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_time_ago',
    ),
    'ds_user_picture' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_picture_diskussionen_grosses_bild',
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
    'back_conference_paid_2' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'submitted_by' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_time_ago',
    ),
    'ds_user_picture' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_picture_diskussionen_grosses_bild',
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
      'value' => '<p><a href="/konferenzraum_1/month">&lt;&lt; Zurück zum Konferenzraum-1-Kalender</a></p>
',
      'format' => 'full_html',
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
      'value' => '<p><a href="/konferenzraum_2/month">&lt;&lt; Zurück zum Konferenzraum-2-Kalender</a></p>
',
      'format' => 'full_html',
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
    'fields' => array(
      'submitted_by' => 'header',
      'ds_user_picture' => 'left',
      'author' => 'left',
      'field_conf_firma' => 'right',
      'field_conf_termin' => 'right',
      'back_conference_paid_1' => 'right',
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
  $export['node|conference_room_paid_1|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|conference_room_paid_2|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'conference_room_paid_2';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
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
    'fields' => array(
      'submitted_by' => 'header',
      'ds_user_picture' => 'left',
      'author' => 'left',
      'field_conf_firma' => 'right',
      'field_conf_termin' => 'right',
      'back_conference_paid_2' => 'right',
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
  $export['node|conference_room_paid_2|default'] = $ds_layout;

  return $export;
}
