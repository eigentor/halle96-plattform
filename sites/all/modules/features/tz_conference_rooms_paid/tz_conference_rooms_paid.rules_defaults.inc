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
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_conf_termin" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "Marion.Groenig@hannoverimpuls.de",
            "subject" : "Konferenzraum 1 wurde gebucht von [node:author] f\\u00fcr die Firma [node:field-conf-firma]",
            "message" : "Hallo Zentrumsleitung,\\r\\n\\r\\nEin Konferenzraum wurde gebucht oder eine Buchung bearbeitet.\\r\\n\\r\\n[node:author] hat f\\u00fcr die Firma [node:field-conf-firma] am\\r\\n[node:field_conf_termin]\\r\\nden Konferenzraum 1 gebucht.\\r\\nHier k\\u00f6nnen Sie die Buchung ansehen: [node:url]\\r\\n\\r\\nW\\u00fcnsche f\\u00fcr Verpflegung und Equipment:\\r\\nVerpflegung: [node:field-conf-food]\\r\\nEquipment: [node:field-conf-equipment]\\r\\n\\r\\n\\r\\nDas H96 Intranet",
            "language" : [ "" ]
          }
        },
        { "entity_fetch" : {
            "USING" : { "type" : "user", "id" : [ "node:author:uid" ] },
            "PROVIDE" : { "entity_fetched" : { "user_author" : "User booking room" } }
          }
        },
        { "mail" : {
            "to" : "[user-author:mail]",
            "subject" : "Ihre Buchung von Konferenzraum 1 auf [site:name]",
            "message" : "Hallo [user-author:name],\\r\\n\\r\\nSie haben f\\u00fcr [node:field_conf_termin] den Konferenzraum 1 gebucht. \\r\\nSie k\\u00f6nnen Ihre Buchung hier \\u00fcberpr\\u00fcfen: [node:url] \\r\\noder im Kalender anschauen: \\r\\n[site:url]konferenzraum_1\\/month\\r\\n\\r\\nW\\u00fcnsche f\\u00fcr Verpflegung und Equipment:\\r\\nVerpflegung: [node:field-conf-food]\\r\\nEquipment: [node:field-conf-equipment]\\r\\n\\r\\nFalls Sie \\u00c4nderungen an der Buchung vornehmen m\\u00f6chten, wenden Sie sich bitte an die Zentrumsleitung.\\r\\n\\r\\nIhr Halle96-Team",
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
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_conf_termin" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "Marion.Groenig@hannoverimpuls.de",
            "subject" : "Konferenzraum 2 wurde gebucht von [node:author] f\\u00fcr die Firma [node:field_conf_firma]",
            "message" : "Hallo Zentrumsleitung,\\r\\n\\r\\nEin Konferenzraum wurde gebucht oder eine Buchung bearbeitet.\\r\\n\\r\\n[node:author] hat f\\u00fcr die Firma [node:field_conf_firma] am\\r\\n[node:field_conf_termin]\\r\\nden Konferenzraum 2 gebucht.\\r\\nHier k\\u00f6nnen Sie die Buchung ansehen: [node:url]\\r\\n\\r\\nDas H96 Intranet",
            "language" : [ "" ]
          }
        },
        { "entity_fetch" : {
            "USING" : { "type" : "user", "id" : [ "node:author:uid" ] },
            "PROVIDE" : { "entity_fetched" : { "user_author" : "User booking room" } }
          }
        },
        { "mail" : {
            "to" : "[user-author:mail]",
            "subject" : "Ihre Buchung von Konferenzraum 2 auf [site:name]",
            "message" : "Hallo [user-author:name],\\r\\n\\r\\nSie haben f\\u00fcr [node:field_conf_termin] den Konferenzraum 2 gebucht. \\r\\nSie k\\u00f6nnen Ihre Buchung hier \\u00fcberpr\\u00fcfen: [node:url] \\r\\noder im Kalender anschauen: \\r\\n[site:url]konferenzraum_2\\/month\\r\\nFalls Sie \\u00c4nderungen an der Buchung vornehmen m\\u00f6chten, wenden Sie sich bitte an die Zentrumsleitung.\\r\\n\\r\\nIhr Halle96-Team",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
