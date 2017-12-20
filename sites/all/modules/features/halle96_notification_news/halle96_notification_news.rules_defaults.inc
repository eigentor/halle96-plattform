<?php
/**
 * @file
 * halle96_notification_news.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function halle96_notification_news_default_rules_configuration() {
  $items = array();
  $items['rules_notification_new_news'] = entity_import('rules_config', '{ "rules_notification_new_news" : {
      "LABEL" : "Mail verschicken bei neuer News",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "halle96" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--article" : { "bundle" : "article" } },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "News aus dem TECHNOLOGIE ZENTRUM - [node:title]",
            "message" : "[node:body]\\r\\n\\r\\nDiesen Beitrag online im Intranet des TECHNOLOGIE ZENTRUMs lesen: \\r\\n[node:url]\\r\\n\\r\\nBeste Gr\\u00fc\\u00dfe\\r\\nKatrin Gehrke\\r\\nZentrumsleiterin\\r\\n\\r\\nhannoverimpuls GmbH\\r\\nHollerithallee 17\\r\\n30419 Hannover | Deutschland\\r\\n\\r\\nTel.:   +49 511 9357-841\\r\\nMobil:  +49 170 2250517\\r\\nMail:   katrin.gehrke@hannoverimpuls.de\\r\\n        www.wirtschaftsfoerderung-hannover.de"
          }
        }
      ]
    }
  }');
  return $items;
}
