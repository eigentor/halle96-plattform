<?php

/**
 * @file
 * tz_webform.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function tz_webform_default_rules_configuration() {
  $items = array();
  $items['rules_ticket_notification'] = entity_import('rules_config', '{ "rules_ticket_notification" : {
      "LABEL" : "Ticket Notification",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "webform_rules" ],
      "ON" : { "webform_rules_update" : [], "webform_rules_submit" : [] },
      "IF" : [
        { "webform_has_id" : {
            "form_id" : "webform-client-form-2760",
            "selected_webform" : { "value" : { "webform-client-form-2760" : "webform-client-form-2760" } }
          }
        }
      ],
      "DO" : [ { "php_eval" : [] } ]
    }
  }');
  return $items;
}
