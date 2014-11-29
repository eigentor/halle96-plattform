<?php
/**
 * @file
 * User-facing UI components for the Mail Logger module.
 */

/**
 * Menu callback; displays a listing of log mails.
 */
function mail_logger_overview() {
  $form = drupal_get_form('mail_logger_form_overview');
  $output = drupal_render($form);

  $header = array(
    array('data' => t('Date Sent'), 'field' => 'date_sent', 'sort' => 'desc'),
    array('data' => t('Mailkey'), 'field' => 'mailkey'),
    array('data' => t('Language'), 'field' => 'language'),
    array('data' => t('To'), 'field' => 'mailto'),
    array('data' => t('From'), 'field' => 'mailfrom'),
    array('data' => t('Subject'), 'field' => 'subject'),
  );

  $query = db_select('mail_logger', 'ml')
    ->extend('PagerDefault')->limit(50)
    ->extend('TableSort')->orderByHeader($header)
    ->fields('ml', array(
      'mlid',
      'mailkey',
      'language',
      'mailto',
      'mailfrom',
      'subject',
      'date_sent'
    ));

  $type = $_SESSION['mail_logger_overview_filter'];

  if ($type != 'all') {
    $query->condition('mailkey', $type);
  }
  $result = $query->execute();

  $rows = array();
  foreach ($result as $mail_logger) {
    $rows[] = array('data' =>
      array(
        // Cells
        format_date($mail_logger->date_sent, 'small'),
        $mail_logger->mailkey,
        $mail_logger->language,
        $mail_logger->mailto,
        $mail_logger->mailfrom,
        l(truncate_utf8($mail_logger->subject, 56, TRUE, TRUE), 'admin/reports/mail-logger/mail/' . $mail_logger->mlid),
      ),
    );
  }

  if (!$rows) {
    $rows[] = array(array('data' => t('No log messages available.'), 'colspan' => 6));
  }

  $output .= theme('table', array('header' => $header, 'rows' => $rows));
  $output .= theme('pager', array());

  return $output;
}

/**
 * Page callback at admin/reports/mail-logger/mail/xyz to show a single email.
 *
 * The menu wildcard loader %mail_logger invokes mail_logger_load, and the
 * resulting $mail object is passed as a parameter.
 *
 * @param Object $mail
 * A mail object returned from mail_logger_load().
 *
 * @return String
 * Themed HTML to display a single mail.
 */
function mail_logger_read_mail($id) {
  if (!isset($id) || !is_numeric($id)) {
    return 'Invalid Mail Logger ID parameter';
  }
  elseif ($mail = mail_logger_load($id)) {
    drupal_add_css(drupal_get_path('module', 'mail_logger') . '/mail_logger.css');
    return theme('mail_logger_read_mail', array('mail' => $mail));
  }
  else {
    return t('No Mail Logger record found with id: %id', array('%id' => $id));
  }
}

/**
 * Form to filter the list of logged emails.
 */
function mail_logger_form_overview() {
  $names['all'] = t('all mail types');
  foreach (_mail_logger_get_mailkey_types() as $type) {
    $names[$type] = t('!type', array('!type' => t($type)));
  }

  if (empty($_SESSION['mail_logger_overview_filter'])) {
    $_SESSION['mail_logger_overview_filter'] = 'all';
  }

  $form['filter'] = array(
    '#type' => 'select',
    '#title' => t('Filter by Mailkey'),
    '#options' => $names,
    '#default_value' => $_SESSION['mail_logger_overview_filter']
  );
  $form['submit'] = array('#type' => 'submit', '#value' => t('Filter'));
  $form['#redirect'] = FALSE;

  $form['mail_logger_clear'] = array(
    '#type' => 'fieldset',
    '#title' => t('Clear mail log'),
    '#description' => t('This will permanently remove the log messages from the database.'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['mail_logger_clear']['clear'] = array(
    '#type' => 'submit',
    '#value' => t('Clear log messages'),
    '#submit' => array('_mail_logger_overview_clear_logs_submit'),
  );

  return $form;
}

/**
 * hook_submit for mail_logger_form_overview
 */
function mail_logger_form_overview_submit($form, &$form_state) {
  $_SESSION['mail_logger_overview_filter'] = $form_state['values']['filter'];
}

/**
 * Callback: Deletes mail logs.
 */
function _mail_logger_overview_clear_logs_submit($form, &$form_state) {
  db_delete('mail_logger')
    ->execute();
  drupal_set_message(t('Mail logs cleared.'));
}
