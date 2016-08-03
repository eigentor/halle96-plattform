<?php
/**
 * @file
 * halle_96_conf_schedule.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function halle_96_conf_schedule_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-conference_room-field_conf_firma'.
  $field_instances['node-conference_room-field_conf_firma'] = array(
    'bundle' => 'conference_room',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_conf_firma',
    'label' => 'Firma',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'limited_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-conference_room-field_conf_termin'.
  $field_instances['node-conference_room-field_conf_termin'] = array(
    'bundle' => 'conference_room',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_conf_termin',
    'label' => 'Termin',
    'required' => 1,
    'settings' => array(
      'date_popup_timepicker' => array(
        'timepicker' => array(
          'timepicker_options' => array(
            'amPmText' => array(
              0 => 'AM',
              1 => 'PM',
            ),
            'closeButtonText' => 'Done',
            'defaultTime' => 'now',
            'deselectButtonText' => 'Deselect',
            'hourText' => 'Hour',
            'hours' => array(
              'ends' => 23,
              'starts' => 0,
            ),
            'minuteText' => 'Minute',
            'minutes' => array(
              'ends' => 55,
              'interval' => 5,
              'starts' => 0,
            ),
            'nowButtonText' => 'Now',
            'periodSeparator' => ' ',
            'rows' => 4,
            'showCloseButton' => FALSE,
            'showDeselectButton' => FALSE,
            'showHours' => TRUE,
            'showLeadingZero' => TRUE,
            'showMinutes' => TRUE,
            'showMinutesLeadingZero' => TRUE,
            'showNowButton' => FALSE,
            'showOn' => 'focus',
            'showPeriod' => FALSE,
            'showPeriodLabels' => TRUE,
            'timeSeparator' => ':',
          ),
        ),
      ),
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd.m.Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Firma');
  t('Termin');

  return $field_instances;
}
