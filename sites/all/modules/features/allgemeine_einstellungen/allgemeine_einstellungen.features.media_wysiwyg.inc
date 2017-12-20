<?php
/**
 * @file
 * allgemeine_einstellungen.features.media_wysiwyg.inc
 */

/**
 * Implements hook_media_wysiwyg_defaults().
 */
function allgemeine_einstellungen_media_wysiwyg_defaults() {
  $media_wysiwyg = array();

  // WYSIWYG view mode for image files.
  $media_wysiwyg['image_wysiwyg_view_mode'] = 'none';

  // Restricted view modes for image files.
  $media_wysiwyg['image_teaser_restrict_wysiwyg'] = TRUE;
  $media_wysiwyg['image_preview_restrict_wysiwyg'] = TRUE;
  $media_wysiwyg['image_wysiwyg_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_default_restrict_wysiwyg'] = TRUE;

  return $media_wysiwyg;
}
