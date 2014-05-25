<?php
drupal_add_css(drupal_get_path('module','halle96_panels_styles') .'/plugins/styles/border_padding/border_padding.css', array('group' => CSS_DEFAULT, 'every_page' => TRUE)); ?>
<div class="border-padding-pane">
<?php if (isset($content->title)): ?>
<h2 class="pane-title <?php //print (isset($settings['top_color'])) ? $settings['top_color'] : 'blue'; ?>"><?php print $content->title; ?></h2>
<?php endif ?>
<div class="pane-content">
<?php print render($content->content); ?>
</div>
</div>