<?php
/**
 * @file
 * halle96_startseite.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function halle96_startseite_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-008f6cfec855a53f1dbdf423a4918844'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '008f6cfec855a53f1dbdf423a4918844',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'content_bottom',
        'status' => 1,
        'theme' => 'halle96_solid',
        'weight' => -16,
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
    'title' => 'Gesammelte Infos',
    'visibility' => 1,
  );

  $export['views-kommentare-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'kommentare-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'content_bottom',
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
    'title' => 'Neueste Kommentare',
    'visibility' => 1,
  );

  $export['views-mitteilungen-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'mitteilungen-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'content',
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
    'title' => 'Von Mieter zu Mieter',
    'visibility' => 1,
  );

  $export['views-news-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'halle96_solid',
        'weight' => -16,
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
    'visibility' => 1,
  );

  return $export;
}
