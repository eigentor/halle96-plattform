<?php
/**
 * @file
 * halle_96_company_profiles.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function halle_96_company_profiles_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'mieterfirmen-page-fields';
  $ds_vd->label = 'Mieterfirmen: Page (Fields)';
  $export['mieterfirmen-page-fields'] = $ds_vd;

  return $export;
}
