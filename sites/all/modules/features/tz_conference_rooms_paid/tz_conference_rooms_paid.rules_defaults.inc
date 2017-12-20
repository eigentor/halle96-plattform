<?php
/**
 * @file
 * tz_conference_rooms_paid.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function tz_conference_rooms_paid_default_rules_configuration() {
  $items = array();
  $items['rules_notify_admin_conference_booking'] = entity_import('rules_config', '{ "rules_notify_admin_conference_booking" : {
      "LABEL" : "Benachrichtigung Zentrumsleitung Buchung Konferenzraum 1",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--conference_room_paid_1" : { "bundle" : "conference_room_paid_1" },
        "node_update--conference_room_paid_1" : { "bundle" : "conference_room_paid_1" }
      },
      "DO" : [
        { "mail" : {
            "to" : "Katrin.Gehrke@hannoverimpuls.de",
            "subject" : "Konferenzraum 1 wurde gebucht von [node:author] f\\u00fcr die Firma [node:field_conf_firma]",
            "message" : "Hallo Zentrumsleitung,\\r\\n\\r\\nEin Konferenzraum wurde gebucht oder eine Buchung bearbeitet.\\r\\n\\r\\n[node:author] hat f\\u00fcr die Firma [node:field_conf_firma] am\\r\\n[node:field_conf_termin]\\r\\nden Konferenzraum 1 gebucht.\\r\\nHier k\\u00f6nnen Sie die Buchung ansehen: [node:url]\\r\\n\\r\\nDas TZ Intranet",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_notify_admin_conference_booking_2'] = entity_import('rules_config', '{ "rules_notify_admin_conference_booking_2" : {
      "LABEL" : "Benachrichtigung Zentrumsleitung Buchung Konferenzraum 2",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--conference_room_paid_2" : { "bundle" : "conference_room_paid_2" },
        "node_update--conference_room_paid_2" : { "bundle" : "conference_room_paid_2" }
      },
      "DO" : [
        { "mail" : {
            "to" : "Katrin.Gehrke@hannoverimpuls.de",
            "subject" : "Konferenzraum 2 wurde gebucht von [node:author] f\\u00fcr die Firma [node:field_conf_firma]",
            "message" : "Hallo Zentrumsleitung,\\r\\n\\r\\nEin Konferenzraum wurde gebucht oder eine Buchung bearbeitet.\\r\\n\\r\\n[node:author] hat f\\u00fcr die Firma [node:field_conf_firma] am\\r\\n[node:field_conf_termin]\\r\\nden Konferenzraum 2 gebucht.\\r\\nHier k\\u00f6nnen Sie die Buchung ansehen: [node:url]\\r\\n\\r\\nDas TZ Intranet",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
