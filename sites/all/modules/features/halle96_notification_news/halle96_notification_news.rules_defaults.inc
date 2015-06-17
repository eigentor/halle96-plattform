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
            "roles" : { "value" : { "7" : "7" } },
            "subject" : "News aus der Halle 96 - [node:title]",
            "message" : "[node:title]\\r\\n\\r\\n[node:body]\\r\\n\\r\\nGru\\u00df von der Zentrumsleitung",
            "from" : "Marion.Groenig@hannoverimpuls.de"
          }
        }
      ]
    }
  }');
  return $items;
}
