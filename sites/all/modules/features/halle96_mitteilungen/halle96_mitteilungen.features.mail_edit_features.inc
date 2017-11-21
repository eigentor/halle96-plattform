<?php
/**
 * @file
 * halle96_mitteilungen.features.mail_edit_features.inc
 */

/**
 * Implements hook_default_mail_edit_features().
 */
function halle96_mitteilungen_default_mail_edit_features() {
  $mail_edit_features = array();

  // Exported mail edit: subscriptions_mail_.DEFAULT--de
  $mail_edit_features['subscriptions_mail_.DEFAULT--de'] = array(
    'id' => 'subscriptions_mail_.DEFAULT',
    'language' => 'de',
    'description' => 'Default Subscriptions template',
    'subject' => '[[site:name]] - [node:title]',
    'body' => '{{![node:author:name]?:| Verfasser des Beitrages: [node:author:name]}}

[node:title]

[node:body]

| Link zum Beitrag im Intranet: [node:url]',
    'subscriptions_comment_body' => '| {{[subs:is-new]?Neuer:Geänderter}} {{[subs:is-published]?:NICHT publizierter }}Kommentar:
| Verfasser des Kommentares: [comment:author:name]

[comment:title]

[comment:body]

| Link zum Kommentar im Intranet: [comment:url]',
    'module' => 'subscriptions_mail',
    'mailkey' => '.DEFAULT',
    'registry_description' => 'Default Subscriptions template',
  );

  // Exported mail edit: subscriptions_mail_digest--de
  $mail_edit_features['subscriptions_mail_digest--de'] = array(
    'id' => 'subscriptions_mail_digest',
    'language' => 'de',
    'description' => 'Zusammengefasste Benachrichtigungen',
    'subject' => '[[site:name]] Zusammengefasste Benachrichtigungen [current-user:name]',
    'body' => '| Hallo [current-user:name],
|
| Neue Inhalte auf [site:name]
|
{{[subs:items:count]#===================================================== #1 of [subs:items:count] {{[subs:items:index:#0:subs:is-new]?(neu):}}{{[subs:items:index:#0:subs:is-updated]?(geändert):}}{{[subs:items:index:#0:subs:is-old]?(kommentiert):}}
[subs:items:index:#0:formatted]
}}=====================================================
',
    'subscriptions_comment_body' => NULL,
    'module' => 'subscriptions_mail',
    'mailkey' => 'digest',
    'registry_description' => 'Zusammengefasste Benachrichtigungen',
  );

  return $mail_edit_features;
}
