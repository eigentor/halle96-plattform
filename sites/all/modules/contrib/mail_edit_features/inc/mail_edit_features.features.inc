<?php

/**
 * @file
 * Features module support for Mail edit templates Export.
 */


/**
 * Implements hook_features_export().
 */
function mail_edit_features_features_export($data, &$export, $module_name = '') {
  $pipe = array();
  $export['dependencies']['features'] = 'features';
  $export['dependencies']['mail_edit'] = 'mail_edit';
  $export['dependencies']['mail_edit_features'] = 'mail_edit_features';

  if (!isset($export['features']['mail_edit_features'])) {
    $export['features']['mail_edit_features'] = array();
  }

  foreach ($data as $identifier) {
    list($id, $language) = explode('--', $identifier);
    $mail_edit_features = array(
      'machine_name' => $identifier,
      'table' => 'mail_edit',
      'type' => 'Normal',
      'export_type' => 1,
      'mail_edit' => array(
        'id' => $id,
        'language' => $language,
      )
    );
    $export['features']['mail_edit_features'][$identifier] = $identifier;
    $pipe['mail_edit'][] = $mail_edit_features;

    $mail_edit_features['mail_edit'] = array(
      'id' => $id,
      'language' => $language,
    );
    $mail_edit_features['machine_name'] = $identifier;
    $export['features']['mail_edit_features'][$identifier] = $identifier;
    $pipe['mail_edit'][] = $mail_edit_features;
  }

  return $pipe;
}

/**
 * Implements hook_features_export_options().
 */
function mail_edit_features_features_export_options() {
  $options = array();
  $query = db_query('SELECT me.id, me.language	FROM {mail_edit_registry} mer' .
    ' JOIN {mail_edit} me ON mer.id = me.id');

  foreach ($query as $result) {
    $options[$result->id . '--' . $result->language] = t('Template for @id (@lang)',
      array('@id' => $result->id, '@lang' => $result->language));
  }

  return $options;
}

/**
 * Implements of hook_features_export_render().
 */
function mail_edit_features_features_export_render($module, $data) {
  $code = array();

  $code[] = '  $mail_edit_features = array();';
  $code[] = '';

  foreach ($data as $identifier) {
    $mail_edit_features = mail_edit_features_string_get($identifier);
    if (!empty($mail_edit_features)) {
      $code[] = '  // Exported mail edit: ' . check_plain($identifier);
      $code[] = '  $mail_edit_features' . "['{$identifier}'] = {$mail_edit_features}";
      $code[] = '';
    }
  }

  $code[] = '  return $mail_edit_features;';

  return array('default_mail_edit_features' => implode("\n", $code));
}

/**
 * Implements hook_features_export_rebuild().
 */
function mail_edit_features_features_rebuild($module) {

  if ($defaults = features_get_default('mail_edit_features', $module)) {
    foreach ($defaults as $default_mail_template) {
      $registry_data = $default_mail_template;
      // Due avoid name conflict with same field names
      // we use registry_description for description in registry table
      $registry_data['description'] = isset($registry_data['registry_description'])
        ? $registry_data['registry_description'] : '';

      db_merge('mail_edit_registry', $registry_data);

      db_merge('mail_edit', $default_mail_template);
    }
    // @TODO Here should be deletion of removed templates
  }
}

/**
 * Implements hook_features_revert().
 */
function mail_edit_features_features_revert($module) {
  mail_edit_features_features_rebuild($module);
}
