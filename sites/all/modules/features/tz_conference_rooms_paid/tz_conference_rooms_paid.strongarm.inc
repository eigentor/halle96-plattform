<?php

/**
 * @file
 * tz_conference_rooms_paid.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tz_conference_rooms_paid_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_conference_room_paid_1';
  $strongarm->value = 0;
  $export['comment_anonymous_conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_conference_room_paid_2';
  $strongarm->value = 0;
  $export['comment_anonymous_conference_room_paid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_conference_room_paid_1';
  $strongarm->value = '1';
  $export['comment_conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_conference_room_paid_2';
  $strongarm->value = '1';
  $export['comment_conference_room_paid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_conference_room_paid_1';
  $strongarm->value = 1;
  $export['comment_default_mode_conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_conference_room_paid_2';
  $strongarm->value = 1;
  $export['comment_default_mode_conference_room_paid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_conference_room_paid_1';
  $strongarm->value = '50';
  $export['comment_default_per_page_conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_conference_room_paid_2';
  $strongarm->value = '50';
  $export['comment_default_per_page_conference_room_paid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_conference_room_paid_1';
  $strongarm->value = 1;
  $export['comment_form_location_conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_conference_room_paid_2';
  $strongarm->value = 1;
  $export['comment_form_location_conference_room_paid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_conference_room_paid_1';
  $strongarm->value = '1';
  $export['comment_preview_conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_conference_room_paid_2';
  $strongarm->value = '1';
  $export['comment_preview_conference_room_paid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_conference_room_paid_1';
  $strongarm->value = 1;
  $export['comment_subject_field_conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_conference_room_paid_2';
  $strongarm->value = 1;
  $export['comment_subject_field_conference_room_paid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_conference_room_paid_1';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_conference_room_paid_2';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_conference_room_paid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_conference_room_paid_1';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_conference_room_paid_2';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_conference_room_paid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_conference_room_paid_1';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_conference_room_paid_2';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_conference_room_paid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__conference_room_paid_1';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(
        'path' => array(
          'weight' => '3',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
        'title' => array(
          'weight' => '0',
        ),
      ),
    ),
    'view_modes' => array(
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => TRUE,
      ),
    ),
  );
  $export['field_bundle_settings_node__conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__conference_room_paid_2';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(
        'path' => array(
          'weight' => '3',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
        'title' => array(
          'weight' => '0',
        ),
      ),
    ),
    'view_modes' => array(
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => TRUE,
      ),
    ),
  );
  $export['field_bundle_settings_node__conference_room_paid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_conference_room_paid_1';
  $strongarm->value = '0';
  $export['language_content_type_conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_conference_room_paid_2';
  $strongarm->value = '0';
  $export['language_content_type_conference_room_paid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_conference_room_paid_1';
  $strongarm->value = array();
  $export['menu_options_conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_conference_room_paid_2';
  $strongarm->value = array();
  $export['menu_options_conference_room_paid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_conference_room_paid_1';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_conference_room_paid_2';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_conference_room_paid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_conference_room_paid_1';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_conference_room_paid_2';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_conference_room_paid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_conference_room_paid_1';
  $strongarm->value = '1';
  $export['node_preview_conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_conference_room_paid_2';
  $strongarm->value = '1';
  $export['node_preview_conference_room_paid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_conference_room_paid_1';
  $strongarm->value = 1;
  $export['node_submitted_conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_conference_room_paid_2';
  $strongarm->value = 1;
  $export['node_submitted_conference_room_paid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_default_workflow_conference_room_paid_1';
  $strongarm->value = array();
  $export['subscriptions_default_workflow_conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_default_workflow_conference_room_paid_2';
  $strongarm->value = array();
  $export['subscriptions_default_workflow_conference_room_paid_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_workflow_conference_room_paid_1';
  $strongarm->value = array();
  $export['subscriptions_workflow_conference_room_paid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_workflow_conference_room_paid_2';
  $strongarm->value = array();
  $export['subscriptions_workflow_conference_room_paid_2'] = $strongarm;

  return $export;
}
