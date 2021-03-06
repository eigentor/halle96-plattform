<?php
/**
 * @file
 * halle_96_company_profiles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function halle_96_company_profiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Mieter' => 'Mieter',
      'Mitarbeiter hannoverimpuls' => 'Mitarbeiter hannoverimpuls',
      'Zentrumsleitung' => 'Zentrumsleitung',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer industry vocabulary terms'.
  $permissions['administer industry vocabulary terms'] = array(
    'name' => 'administer industry vocabulary terms',
    'roles' => array(
      'Zentrumsleitung' => 'Zentrumsleitung',
      'administrator' => 'administrator',
    ),
    'module' => 'vppr',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Zentrumsleitung' => 'Zentrumsleitung',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Zentrumsleitung' => 'Zentrumsleitung',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  return $permissions;
}
