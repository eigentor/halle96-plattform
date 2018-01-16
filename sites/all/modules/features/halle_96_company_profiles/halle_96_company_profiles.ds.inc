<?php
/**
 * @file
 * halle_96_company_profiles.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function halle_96_company_profiles_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|mieterfirmen-page-fields|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'mieterfirmen-page-fields';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_comp_logo' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'body' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_comp_industry' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_room_no' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|mieterfirmen-page-fields|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function halle_96_company_profiles_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|company_profile|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'company_profile';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_comp_logo',
      ),
      'middle' => array(
        1 => 'body',
      ),
      'right' => array(
        2 => 'field_comp_industry',
        3 => 'field_comp_floor',
        4 => 'field_room_no',
        5 => 'field_comp_members',
      ),
    ),
    'fields' => array(
      'field_comp_logo' => 'left',
      'body' => 'middle',
      'field_comp_industry' => 'right',
      'field_comp_floor' => 'right',
      'field_room_no' => 'right',
      'field_comp_members' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|company_profile|default'] = $ds_layout;

  return $export;
}
