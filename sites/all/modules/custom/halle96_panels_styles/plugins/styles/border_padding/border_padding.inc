<?php

/**
* Implementation of hook_panels_styles().
*/
$plugin =  array(
  'border_padding' => array(
    'title' => t('Border and padding for a pane'),
    'description'   => t('Just adds a border and padding'),
    'render pane' => 'border_padding_render_pane',
    'render region' => 'border_padding_render_region',
    'pane settings form' => 'border_padding_settings_form',
    'hook theme'    => array(
      'border_padding_theme_pane' => array(
        'template' => 'border_padding-pane',
         'path' => drupal_get_path('module', 'halle96_panels_styles') .'/plugins/styles/border_padding',
         'variables' => array(
           'content' => NULL,
           'settings' => NULL,
         ),
       ),
      'border_padding_theme_region' => array(
        'template' => 'border_padding-region',
         'path' => drupal_get_path('module', 'halle96_panels_styles') .'/plugins/styles/border_padding',
         'variables' => array(
           'content' => NULL,
         ),
       ),
    ),
  ),
);
 
function theme_border_padding_render_pane($vars) {
    $settings = $vars['settings'];
    $content = $vars['content'];
  return theme('border_padding_theme_pane', array('content' => $content, 'settings' => $settings));
}
function theme_border_padding_render_region($vars) {
    $content = '';
 
  foreach ($vars['panes'] as $pane_id => $pane_output) {
 
    $content .= $pane_output;
  }
  if (empty($content)) {
    return;
  } 
  return theme('border_padding_theme_region', array('content' => $content));
}
 
// function border_padding_settings_form($style_settings) {
//   $form['top_color'] = array(
//     '#type' => 'select',
//     '#title' => t('Top color'),
//     '#options' => array(
//       'blue' => t('Blue'),
//       'green' => t('Green'),
//     ),
//     '#default_value' => (isset($style_settings['top_color'])) ? $style_settings['top_color'] : 'blue',
//   );
 
//   return $form;
// }