<?php
/**
 * @file Panels-pane.tpl.php
 * Main panel pane template.
 *
 * Variables available:
 * - $pane->type: the content type inside this pane
 * - $pane->subtype: The subtype, if applicable. If a view it will be the
 *   view name; if a node it will be the nid, etc.
 * - $title: The title of the content
 * - $content: The actual content
 * - $links: Any links associated with the content
 * - $more: An optional 'more' link (destination only)
 * - $admin_links: Administrative links associated with the content
 * - $feeds: Any feed icons or associated with the content
 * - $display: The complete panels display object containing all kinds of
 *   data including the contexts and all of the other panes being displayed.
 */

// Print an id on the panel panes for the Panes on the "Gesammelte Infos" Panel page.
// These will be used for styling and as anchors to jump to.
$term_id = '';
if($pane->type == 'views_panes' && $pane->subtype == 'einzelne_kategorie_service_und_info-panel_pane_1') {
    if(!empty($pane->configuration['arguments']['tid'])) {
        $tid = $pane->configuration['arguments']['tid'];
        // Reformat the double Argument for "Förderung + Gründunbsberatung"
        if($tid == '9+11'){
            $tid = '9';
        }
        $term_id = 'term-' . $tid;

    }
}
?>
<?php if ($pane_prefix): ?>
  <?php print $pane_prefix; ?>
<?php endif; ?>
<div id="<?php print $term_id ?>" class="<?php print $classes; ?>" <?php print $id; ?> <?php print $attributes; ?>>
  <?php if ($admin_links): ?>
    <?php print $admin_links; ?>
  <?php endif; ?>

  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <<?php print $title_heading; ?><?php print $title_attributes; ?>>
      <?php print $title; ?>
    </<?php print $title_heading; ?>>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($feeds): ?>
    <div class="feed">
      <?php print $feeds; ?>
    </div>
  <?php endif; ?>

  <div class="pane-content">
    <?php print render($content); ?>
  </div>

  <?php if ($links): ?>
    <div class="links">
      <?php print $links; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <div class="more-link">
      <?php print $more; ?>
    </div>
  <?php endif; ?>
</div>
<?php if ($pane_suffix): ?>
  <?php print $pane_suffix; ?>
<?php endif; ?>
