<?php
/**
 * @file
 * halle_96_conf_schedule.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function halle_96_conf_schedule_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create conference_room content'.
  $permissions['create conference_room content'] = array(
    'name' => 'create conference_room content',
    'roles' => array(
      'Kalender-Tester' => 'Kalender-Tester',
      'Mieter' => 'Mieter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any conference_room content'.
  $permissions['delete any conference_room content'] = array(
    'name' => 'delete any conference_room content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own conference_room content'.
  $permissions['delete own conference_room content'] = array(
    'name' => 'delete own conference_room content',
    'roles' => array(
      'Mieter' => 'Mieter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any conference_room content'.
  $permissions['edit any conference_room content'] = array(
    'name' => 'edit any conference_room content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own conference_room content'.
  $permissions['edit own conference_room content'] = array(
    'name' => 'edit own conference_room content',
    'roles' => array(
      'Kalender-Tester' => 'Kalender-Tester',
      'Mieter' => 'Mieter',
    ),
    'module' => 'node',
  );

  return $permissions;
}
