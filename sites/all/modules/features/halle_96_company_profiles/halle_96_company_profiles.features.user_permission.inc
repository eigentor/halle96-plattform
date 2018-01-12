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

  // Exported permission: 'administer industry vocabulary terms'.
  $permissions['administer industry vocabulary terms'] = array(
    'name' => 'administer industry vocabulary terms',
    'roles' => array(
      'Zentrumsleitung' => 'Zentrumsleitung',
      'administrator' => 'administrator',
    ),
    'module' => 'vppr',
  );

  return $permissions;
}
