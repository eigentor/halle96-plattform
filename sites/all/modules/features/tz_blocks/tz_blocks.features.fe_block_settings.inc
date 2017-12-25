<?php
/**
 * @file
 * tz_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tz_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-mobile_menu_toggle'] = array(
    'cache' => -1,
    'css_class' => 'menu-toggle',
    'custom' => 0,
    'machine_name' => 'mobile_menu_toggle',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'halle96' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'halle96',
        'weight' => 0,
      ),
      'halle96_solid' => array(
        'region' => '',
        'status' => 1,
        'theme' => 'halle96_solid',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'unternehmerinnen_zentrum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'unternehmerinnen_zentrum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-my_subscriptions'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'my_subscriptions',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'halle96' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'halle96',
        'weight' => -11,
      ),
      'halle96_solid' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'halle96_solid',
        'weight' => -3,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'unternehmerinnen_zentrum' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'unternehmerinnen_zentrum',
        'weight' => -11,
      ),
    ),
    'title' => 'Meine Abonnements',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'halle96' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'halle96',
        'weight' => -12,
      ),
      'halle96_solid' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'halle96_solid',
        'weight' => -16,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
      'unternehmerinnen_zentrum' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'unternehmerinnen_zentrum',
        'weight' => -12,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'halle96' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'halle96',
        'weight' => 0,
      ),
      'halle96_solid' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'halle96_solid',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'unternehmerinnen_zentrum' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'unternehmerinnen_zentrum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
      'Mitarbeiter hannoverimpuls' => 6,
      'Zentrumsleitung' => 5,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'halle96' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'halle96',
        'weight' => -10,
      ),
      'halle96_solid' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'halle96_solid',
        'weight' => -13,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'unternehmerinnen_zentrum' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'unternehmerinnen_zentrum',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'halle96' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'halle96',
        'weight' => -9,
      ),
      'halle96_solid' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'halle96_solid',
        'weight' => -12,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'unternehmerinnen_zentrum' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'unternehmerinnen_zentrum',
        'weight' => -9,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['tz_custom_blocks-user_account_menu'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user_account_menu',
    'module' => 'tz_custom_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'halle96' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'halle96',
        'weight' => 0,
      ),
      'halle96_solid' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'halle96_solid',
        'weight' => -15,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'unternehmerinnen_zentrum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'unternehmerinnen_zentrum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'halle96' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'halle96',
        'weight' => -11,
      ),
      'halle96_solid' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'halle96_solid',
        'weight' => -14,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'unternehmerinnen_zentrum' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'unternehmerinnen_zentrum',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
