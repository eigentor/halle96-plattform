<?php
/**
 * @file
 * halle96_mitteilungen.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function halle96_mitteilungen_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer gravatar'.
  $permissions['administer gravatar'] = array(
    'name' => 'administer gravatar',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gravatar',
  );

  // Exported permission: 'administer user subscriptions'.
  $permissions['administer user subscriptions'] = array(
    'name' => 'administer user subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'subscriptions',
  );

  // Exported permission: 'bulk-administer user subscriptions'.
  $permissions['bulk-administer user subscriptions'] = array(
    'name' => 'bulk-administer user subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'subscriptions',
  );

  // Exported permission: 'disable own gravatar'.
  $permissions['disable own gravatar'] = array(
    'name' => 'disable own gravatar',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gravatar',
  );

  // Exported permission: 'subscribe to all content types'.
  $permissions['subscribe to all content types'] = array(
    'name' => 'subscribe to all content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'subscriptions',
  );

  // Exported permission: 'subscribe to content'.
  $permissions['subscribe to content'] = array(
    'name' => 'subscribe to content',
    'roles' => array(
      'Mieter' => 'Mieter',
      'Mitarbeiter hannoverimpuls' => 'Mitarbeiter hannoverimpuls',
      'Zentrumsleitung' => 'Zentrumsleitung',
      'administrator' => 'administrator',
    ),
    'module' => 'subscriptions',
  );

  // Exported permission: 'subscribe to content types'.
  $permissions['subscribe to content types'] = array(
    'name' => 'subscribe to content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'subscriptions',
  );

  // Exported permission: 'subscribe to taxonomy terms'.
  $permissions['subscribe to taxonomy terms'] = array(
    'name' => 'subscribe to taxonomy terms',
    'roles' => array(
      'Mieter' => 'Mieter',
      'Mitarbeiter hannoverimpuls' => 'Mitarbeiter hannoverimpuls',
      'Zentrumsleitung' => 'Zentrumsleitung',
      'administrator' => 'administrator',
    ),
    'module' => 'subscriptions',
  );

  // Exported permission: 'suspend own subscriptions'.
  $permissions['suspend own subscriptions'] = array(
    'name' => 'suspend own subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'subscriptions',
  );

  // Exported permission: 'use gravatar'.
  $permissions['use gravatar'] = array(
    'name' => 'use gravatar',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'gravatar',
  );

  return $permissions;
}
