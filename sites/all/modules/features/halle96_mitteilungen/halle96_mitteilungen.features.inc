<?php
/**
 * @file
 * halle96_mitteilungen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function halle96_mitteilungen_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function halle96_mitteilungen_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function halle96_mitteilungen_image_default_styles() {
  $styles = array();

  // Exported image style: diskussionen_grosses_bild.
  $styles['diskussionen_grosses_bild'] = array(
    'label' => 'Diskussionen großes Bild',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: mini_thumbnail.
  $styles['mini_thumbnail'] = array(
    'label' => 'Mini Thumbnail',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 85,
          'height' => 53,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news-thumbnail.
  $styles['news-thumbnail'] = array(
    'label' => 'News-Thumbnail',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 58,
          'height' => 56,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: user_image_round_tiny.
  $styles['user_image_round_tiny'] = array(
    'label' => 'Userbild rund mini',
    'effects' => array(
      2 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => '',
            'height' => '',
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => 0,
            'rightdiff' => 0,
            'topdiff' => 0,
            'bottomdiff' => 0,
          ),
        ),
        'weight' => 1,
      ),
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 40,
          'height' => 40,
        ),
        'weight' => 2,
      ),
      4 => array(
        'name' => 'canvasactions_roundedcorners',
        'data' => array(
          'radius' => 20,
          'independent_corners_set' => array(
            'independent_corners' => 0,
            'radii' => array(
              'tl' => 0,
              'tr' => 0,
              'bl' => 0,
              'br' => 0,
            ),
          ),
        ),
        'weight' => 3,
      ),
      5 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => 4,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function halle96_mitteilungen_node_info() {
  $items = array(
    'discussion' => array(
      'name' => t('Von Mieter zu Mieter'),
      'base' => 'node_content',
      'description' => t('Mitteilungen zwischen den Bewohnern der HALLE96'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
