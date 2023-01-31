<?php

/**
 * @file
 * tz_conference_rooms_paid.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tz_conference_rooms_paid_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create conference_room_paid_1 content'.
  $permissions['create conference_room_paid_1 content'] = array(
    'name' => 'create conference_room_paid_1 content',
    'roles' => array(
      'Mieter' => 'Mieter',
      'Mitarbeiter hannoverimpuls' => 'Mitarbeiter hannoverimpuls',
      'Zentrumsleitung' => 'Zentrumsleitung',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create conference_room_paid_2 content'.
  $permissions['create conference_room_paid_2 content'] = array(
    'name' => 'create conference_room_paid_2 content',
    'roles' => array(
      'Mieter' => 'Mieter',
      'Mitarbeiter hannoverimpuls' => 'Mitarbeiter hannoverimpuls',
      'Zentrumsleitung' => 'Zentrumsleitung',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any conference_room_paid_1 content'.
  $permissions['delete any conference_room_paid_1 content'] = array(
    'name' => 'delete any conference_room_paid_1 content',
    'roles' => array(
      'Mitarbeiter hannoverimpuls' => 'Mitarbeiter hannoverimpuls',
      'Zentrumsleitung' => 'Zentrumsleitung',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any conference_room_paid_2 content'.
  $permissions['delete any conference_room_paid_2 content'] = array(
    'name' => 'delete any conference_room_paid_2 content',
    'roles' => array(
      'Mitarbeiter hannoverimpuls' => 'Mitarbeiter hannoverimpuls',
      'Zentrumsleitung' => 'Zentrumsleitung',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own conference_room_paid_1 content'.
  $permissions['delete own conference_room_paid_1 content'] = array(
    'name' => 'delete own conference_room_paid_1 content',
    'roles' => array(
      'Mitarbeiter hannoverimpuls' => 'Mitarbeiter hannoverimpuls',
      'Zentrumsleitung' => 'Zentrumsleitung',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own conference_room_paid_2 content'.
  $permissions['delete own conference_room_paid_2 content'] = array(
    'name' => 'delete own conference_room_paid_2 content',
    'roles' => array(
      'Mitarbeiter hannoverimpuls' => 'Mitarbeiter hannoverimpuls',
      'Zentrumsleitung' => 'Zentrumsleitung',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any conference_room_paid_1 content'.
  $permissions['edit any conference_room_paid_1 content'] = array(
    'name' => 'edit any conference_room_paid_1 content',
    'roles' => array(
      'Mitarbeiter hannoverimpuls' => 'Mitarbeiter hannoverimpuls',
      'Zentrumsleitung' => 'Zentrumsleitung',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any conference_room_paid_2 content'.
  $permissions['edit any conference_room_paid_2 content'] = array(
    'name' => 'edit any conference_room_paid_2 content',
    'roles' => array(
      'Mitarbeiter hannoverimpuls' => 'Mitarbeiter hannoverimpuls',
      'Zentrumsleitung' => 'Zentrumsleitung',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own conference_room_paid_1 content'.
  $permissions['edit own conference_room_paid_1 content'] = array(
    'name' => 'edit own conference_room_paid_1 content',
    'roles' => array(
      'Mitarbeiter hannoverimpuls' => 'Mitarbeiter hannoverimpuls',
      'Zentrumsleitung' => 'Zentrumsleitung',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own conference_room_paid_2 content'.
  $permissions['edit own conference_room_paid_2 content'] = array(
    'name' => 'edit own conference_room_paid_2 content',
    'roles' => array(
      'Mitarbeiter hannoverimpuls' => 'Mitarbeiter hannoverimpuls',
      'Zentrumsleitung' => 'Zentrumsleitung',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
