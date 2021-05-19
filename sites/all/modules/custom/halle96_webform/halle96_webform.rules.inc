<?php

/**
 * Implements hook_rules_condition_info().
 */
function halle96_webform_rules_condition_info() {
  $conditions = [
    'status_has_changed' => array(
      'label' => t('Value Status has changed'),
      'group' => t('Halle96 Webform'),
    ),
  ];

  return $conditions;
}

/**
 * Implements hook_rules_action_info().
 */
//function halle96_webform_rules_action_info() {
//  $actions = [
//  ];
//
//  return $actions;
//}
