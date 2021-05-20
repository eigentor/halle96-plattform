<?php

/**
 * Implements hook_rules_condition_info().
 */
function halle96_webform_rules_condition_info() {
  $conditions = [
    'status_has_changed' => [
      'parameter' => [
        'nid' => [
          'type' => 'text',
          'label' => t('The node ID of the webform node'),
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

function halle96_webform_condition_status_has_changed($nid, $sid = NULL) {
  module_load_include('inc', 'webform', 'includes/webform.submissions');
  $filters = array(
    'nid' => $nid,
  );
  if (!empty($sid)) {
    $filters['sid'] = $sid;
  }
  // Fetch submissions.
  dpm($nid);
  $submissions = webform_get_submissions($filters);
  dpm($submissions);

 return TRUE;
}
