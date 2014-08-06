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

  // Exported role: Mieter.
  $roles['Mieter'] = array(
    'name' => 'Mieter',
    'weight' => 3,
  );

  // Exported role: Mitarbeiter hannoverimpuls.
  $roles['Mitarbeiter hannoverimpuls'] = array(
    'name' => 'Mitarbeiter hannoverimpuls',
    'weight' => 5,
  );

  // Exported role: Zentrumsleitung.
  $roles['Zentrumsleitung'] = array(
    'name' => 'Zentrumsleitung',
    'weight' => 4,
  );

  return $roles;
}
