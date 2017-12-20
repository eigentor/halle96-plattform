<?php
/**
 * @file
 * tz_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function tz_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Button für mobiles Menü';
  $fe_block_boxes->format = 'ds_code';
  $fe_block_boxes->machine_name = 'mobile_menu_toggle';
  $fe_block_boxes->body = '&nbsp;
';

  $export['mobile_menu_toggle'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Meine Abonnements';
  $fe_block_boxes->format = 'ds_code';
  $fe_block_boxes->machine_name = 'my_subscriptions';
  $fe_block_boxes->body = '<?php global $user; $uid = $user->uid; ?>

<a href="/user/<?php print $uid; ?>/subscriptions/taxa">Meine Abonnements verwalten</a>';

  $export['my_subscriptions'] = $fe_block_boxes;

  return $export;
}
