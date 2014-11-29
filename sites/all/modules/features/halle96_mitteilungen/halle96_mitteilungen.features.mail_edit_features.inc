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
    'subject' => '[[site:name]] [subs:type] subscription for [current-user:name]: [node:title]',
    'body' => '{{MAIL@| Greetings, [current-user:name].
|
| Your subscription on [site:name]
| notifies you of {{[subs:is-new]==0?:a new post:
}}{{[subs:is-updated]#an updated post:
}}{{[subs:is-old]#new comments on:
}}|
}}{{![subs:is-published]#| ***** This post is unpublished! *****
}}{{![subs:category:tid]?:{{[subs:category:tid]==[subs:forum:tid]?:| Category: [subs:category:name]
}}}}{{![subs:forum:tid]?:| Forum: [subs:forum:name]
}}{{![node:author:name]?:| Author: [node:author:name]
}}| Title: [node:title]
{{![subs:terms:field_tags:count]?:| [subs:terms:field_tags:first:vocabulary:name]: {{[subs:terms:field_tags:count]#{{!!#0#, }}[subs:terms:field_tags:index:#0:name]}}
}}{{![subs:is-old]?&nbsp;
[node:body]:{{![subs:has-distinct-summary]?&nbsp;
[node:body]:| Summary:
&nbsp;
[node:summary]}}}}
| LINK: [node:url]
{{![subs:is-old]#{{!![subs:files:field_files:count]#| Attached files:
{{[subs:files:field_files:count]#| [subs:files:field_files:index:#0:url]
}}}}}}{{![subs:comments:count]?| ---------------------------------------------------
:|
| Comments: [subs:comments:count]
| ---------------------------------------------------
[subs:comments:join:
]
}}| Direkter Link zum Abbestellen der abonnierten Rubrik [subs:terms:?] ([subs:type]):
| [subs:unsubscribe-url]
{{MAIL@| Dies ist eine automatische Benachrichtigung. Bitte NICHT antworten!
| Sie können Ihre Abonnements unter folgender Adresse verwalten:
| [subs:manage-url]
| Hier haben Sie direkten Zugriff auf die von Ihnen anbonnierten Rubriken:
| [subs:manage-url]/taxa
}}',
    'subscriptions_comment_body' => '| {{[subs:is-new]?Neuer:Geänderter}} {{[subs:is-published]?:NICHT publizierter }}Kommentar:
| Autor: [comment:author:name]
| Titel: [comment:title]
&nbsp;
[comment:body]
| LINK: [comment:url]
{{!![subs:files:field_files:count]#| Beigefügte Dateien:
{{[subs:files:field_files:count]#| [subs:files:field_files:index:#0:url]
}}}}| ---------------------------------------------------',
    'module' => 'subscriptions_mail',
    'mailkey' => '.DEFAULT',
    'registry_description' => 'Default Subscriptions template',
  );

  // Exported mail edit: subscriptions_mail_digest--de
  $mail_edit_features['subscriptions_mail_digest--de'] = array(
    'id' => 'subscriptions_mail_digest',
    'language' => 'de',
    'description' => 'Zusammengefasste Benachrichtigungen',
    'subject' => '[[site:name]] Zusammengefasste Banachrichtigungen [current-user:name]',
    'body' => '| Guten Tag, [current-user:name],
|
| Ihr Abonnement auf [site:name]
| informiert Sie über folgende Änderungen seit der letzten Zusammenfassung:
|
{{[subs:items:count]#===================================================== #1 of [subs:items:count] {{[subs:items:index:#0:subs:is-new]?(neu):}}{{[subs:items:index:#0:subs:is-updated]?(geändert):}}{{[subs:items:index:#0:subs:is-old]?(kommentiert):}}
[subs:items:index:#0:formatted]
}}=====================================================
| Dies ist eine automatische Benachrichtigung. Bitte NICHT antworten!
| Sie können Ihre Abonnements unter folgender Adresse verwalten:
| [subs:manage-url]
| Hier haben Sie direkten Zugriff auf die von Ihnen anbonnierten Rubriken:
| [subs:manage-url]/taxa
',
    'subscriptions_comment_body' => NULL,
    'module' => 'subscriptions_mail',
    'mailkey' => 'digest',
    'registry_description' => 'Zusammengefasste Benachrichtigungen',
  );

  return $mail_edit_features;
}
