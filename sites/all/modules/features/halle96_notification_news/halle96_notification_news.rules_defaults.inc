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
            "subject" : "News aus der HALLE 96 - [node:title]",
            "message" : "[node:body]\\r\\n\\r\\nDiesen Beitrag online auf der HALLE 96 Plattform lesen: \\r\\n[node:url]\\r\\n\\r\\nFreundliche Gr\\u00fc\\u00dfe\\r\\n\\r\\nMarion Gr\\u00f6nig\\r\\n\\r\\nZentrumsleiterin\\r\\n\\r\\nhannoverimpuls GmbH\\r\\nHanomaghof 2\\r\\n30449 Hannover | Deutschland\\r\\n\\r\\nTel.:   +49 511 9357-847\\r\\nMobil:  +49 163 3168428\\r\\nMail:   Marion.Groenig@hannoverimpuls.de\\r\\n        www.wirtschaftsfoerderung-hannover.de"
          }
        }
      ]
    }
  }');
  return $items;
}
