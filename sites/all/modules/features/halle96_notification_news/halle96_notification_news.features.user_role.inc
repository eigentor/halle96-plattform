<?php
/**
 * @file
 * halle96_notification_news.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function halle96_notification_news_user_default_roles() {
  $roles = array();

  // Exported role: testrolle.
  $roles['testrolle'] = array(
    'name' => 'testrolle',
    'weight' => 6,
  );

  return $roles;
}
