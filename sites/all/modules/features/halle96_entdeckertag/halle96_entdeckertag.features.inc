<?php
/**
 * @file
 * halle96_entdeckertag.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function halle96_entdeckertag_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
