<?php

function halle96_solid_preprocess_html(&$variables) {
  // Add a body class for the user roles
  global $user;
  foreach($user->roles as $role) {
    // Remove all whitespaces from role names
    $role = preg_replace('/\s+/', '', $role);
    $variables['classes_array'][] = 'role-' . $role;
  }
  if(!empty($variables['page']['content']['system_main']['nodes'])) {
    $nodes = $variables['page']['content']['system_main']['nodes'];
    foreach($nodes as $key => $node) {
      if(is_numeric($key)) {
        if(!empty(node_class($node['#node']))) {
          $variables['classes_array'][] = node_class($node['#node']);
        }
      }
    }
  }
}

/**
 * function preprocess_block()
 * @param $variables
 */
function halle96_solid_preprocess_block(&$variables) {
  // Add a class to the block title
  $variables['title_attributes_array']['class'][] = 'block-title';
}

/**
 * Implement template_preprocess_page()
 * @param $variables
 */
function halle96_solid_preprocess_page(&$variables) {
  $variables['page']['content']['#attached']['js'][] = array(
    'type' => 'file',
    'data' => drupal_get_path('theme', 'halle96_solid') . '/js/tz_scripts.js',
    'weight' => 2
  );
}



