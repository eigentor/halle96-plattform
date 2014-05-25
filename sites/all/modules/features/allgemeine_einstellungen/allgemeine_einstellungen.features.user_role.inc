<?php
/**
 * @file
 * allgemeine_einstellungen.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function allgemeine_einstellungen_user_default_roles() {
  $roles = array();

  // Exported role: Hallenleitung.
  $roles['Hallenleitung'] = array(
    'name' => 'Hallenleitung',
    'weight' => 4,
  );

  // Exported role: Mieter.
  $roles['Mieter'] = array(
    'name' => 'Mieter',
    'weight' => 3,
  );

  return $roles;
}
