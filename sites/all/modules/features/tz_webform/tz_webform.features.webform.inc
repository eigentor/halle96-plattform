<?php

/**
 * @file
 * tz_webform.features.webform.inc
 */

/**
 * Implements hook_webform_defaults().
 */
function tz_webform_webform_defaults() {
$webforms = array();
  $webforms['ihr_ticket_f_r_die_haustechnik'] = array(
  'title' => 'Ihr Ticket für die Haustechnik',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'a8db19e9-5e95-4dee-bf67-ff845f7b1fce',
  'ds_switch' => '',
  'type' => 'webform',
  'language' => 'de',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c1336f99-bc7a-4ff8-a2c9-04c1ede4e422',
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'next_serial' => 69,
    'confirmation' => '<p>Vielen Dank für Ihr Ticket an die Haustechnik.<br />
	Wir werden Ihr Anliegen umgehend bearbeiten.</p>
',
    'confirmation_format' => 'filtered_html',
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 0,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => 'filtered_html',
    'preview_excluded_components' => array(),
    'machine_name' => 'ihr_ticket_f_r_die_haustechnik',
    'record_exists' => TRUE,
    'roles' => array(
      0 => 2,
    ),
    'emails' => array(
      0 => array(
        'email' => 'Katrin.Gehrke@hannoverimpuls.de,volker.colditz@hannoverimpuls.de,Marion.Groenig@hannoverimpuls.de',
        'subject' => 'Es wurde ein Ticket an die Haustechnik erstellt',
        'from_name' => 'Ticket an Haustechnik',
        'from_address' => 'ihr_ticket_f_r_die_haustechnik__mail_adress_ticket_author',
        'template' => 'Hallo Hannoverimpuls,

[submission:user] hat ein Ticket an die Haustechnik erstellt.

Übermittelte Werte:
[submission:values]

Die Ergebnisse dieser Eingabe können eingesehen werden unter:
[submission:url]',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
        'exclude_empty' => 0,
        'extra' => FALSE,
        'status' => 1,
        'components_machine_names' => array(
          'email' => FALSE,
          'subject' => FALSE,
          'from_name' => FALSE,
          'from_address' => TRUE,
        ),
      ),
      1 => array(
        'email' => 'ihr_ticket_f_r_die_haustechnik__mail_adress_ticket_author',
        'subject' => 'Ihr Ticket für die Haustechnik auf [site:url]',
        'from_name' => 'Ticket an Haustechnik',
        'from_address' => 'ticket-haustechnik@hannoverimpuls.de',
        'template' => 'Hallo [submission:user],

Sie haben ein Ticket für die Haustechnik erstellt.

----- Bitte antworten Sie nicht auf diese E-Mail, da die Adresse keinen Empfänger hat. Ihre Nachricht oder Rückantwort wird nicht weitergeleitet. -----

Übermittelte Werte:
[submission:values]

Wir werden Ihr Anliegen umgehend bearbeiten.

hannoverimpuls GmbH
Hanomaghof 2
30449 Hannover | Deutschland

Tel.:   +49 511 9357-847
Mobil:  +49 163 3168428
Mail:   Marion.Groenig@hannoverimpuls.de
        www.wirtschaftsfoerderung-hannover.de',
        'excluded_components' => array(
          0 => 5,
        ),
        'html' => 0,
        'attachments' => 0,
        'exclude_empty' => 0,
        'extra' => FALSE,
        'status' => 1,
        'components_machine_names' => array(
          'email' => TRUE,
          'subject' => FALSE,
          'from_name' => FALSE,
          'from_address' => FALSE,
        ),
      ),
    ),
    'components' => array(
      'ihr_ticket_f_r_die_haustechnik__name' => array(
        'form_key' => 'name',
        'name' => 'Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'description' => 'Vor- und Nachname',
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'minlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => TRUE,
        ),
        'required' => 1,
        'weight' => 0,
        'machine_name' => 'ihr_ticket_f_r_die_haustechnik__name',
        'page_num' => 1,
      ),
      'ihr_ticket_f_r_die_haustechnik__firma' => array(
        'form_key' => 'firma',
        'name' => 'Firma',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'minlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 1,
        'machine_name' => 'ihr_ticket_f_r_die_haustechnik__firma',
        'page_num' => 1,
      ),
      'ihr_ticket_f_r_die_haustechnik__raumnummer_etage' => array(
        'form_key' => 'raumnummer_etage',
        'name' => 'Raumnummer/Etage',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'minlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 2,
        'machine_name' => 'ihr_ticket_f_r_die_haustechnik__raumnummer_etage',
        'page_num' => 1,
      ),
      'ihr_ticket_f_r_die_haustechnik__ihr_anliegen' => array(
        'form_key' => 'ihr_anliegen',
        'name' => 'Ihr Anliegen',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => TRUE,
        ),
        'required' => 1,
        'weight' => 3,
        'machine_name' => 'ihr_ticket_f_r_die_haustechnik__ihr_anliegen',
        'page_num' => 1,
      ),
      'ihr_ticket_f_r_die_haustechnik__mail_adress_ticket_author' => array(
        'form_key' => 'mail_adresse_ticket_ersteller',
        'name' => 'Mail-Adresse Ticket-Ersteller',
        'type' => 'hidden',
        'value' => '[current-user:mail]',
        'extra' => array(
          'private' => 0,
          'hidden_type' => 'value',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 4,
        'machine_name' => 'ihr_ticket_f_r_die_haustechnik__mail_adress_ticket_author',
        'page_num' => 1,
      ),
      'ihr_ticket_f_r_die_haustechnik__status' => array(
        'form_key' => 'status',
        'name' => 'Status',
        'type' => 'select',
        'value' => 'open',
        'extra' => array(
          'items' => 'open|Offen
in_progress|In Bearbeitung
done|Erledigt
hide_from_list|Nicht in Liste anzeigen',
          'multiple' => 0,
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 1,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 0,
          'empty_option' => '',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 5,
        'machine_name' => 'ihr_ticket_f_r_die_haustechnik__status',
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'siteadmin',
  'picture' => 0,
  'data' => 'a:3:{s:17:"mimemail_textonly";i:0;s:18:"htmlmail_plaintext";i:0;s:8:"gravatar";i:1;}',
  'subscriptions_notify' => TRUE,
  'webform_features_author' => 'siteadmin',
  'webform_features_revision_author' => 'thomas.moseler',
);
return $webforms;
}
