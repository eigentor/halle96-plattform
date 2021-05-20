<?php

/**
 * Implements hook_rules_condition_info().
 */
function halle96_webform_rules_condition_info() {
  $conditions = [
    'status_has_changed' => [
      'parameter' => [
        'form_id' => [
          'type' => 'text',
          'label' => t('The form id of the submitted form'),
        ],
      ],
      'label' => t('Value Status has changed'),
      'group' => t('Halle96 Webform'),
      'base' => 'halle96_webform_condition_status_has_changed'
    ],
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

function halle96_webform_condition_status_has_changed() {

}
