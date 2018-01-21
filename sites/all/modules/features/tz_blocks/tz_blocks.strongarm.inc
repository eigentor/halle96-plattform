<?php
/**
 * @file
 * tz_blocks.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tz_blocks_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_position_active_link_display';
  $strongarm->value = 'parent';
  $export['menu_position_active_link_display'] = $strongarm;

  return $export;
}
