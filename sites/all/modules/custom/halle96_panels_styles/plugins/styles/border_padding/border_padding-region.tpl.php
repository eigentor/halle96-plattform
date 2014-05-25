<?php
drupal_add_css(drupal_get_path('module','halle96_panels_styles') .'/plugins/styles/border_padding/border_padding.css', array('group' => CSS_DEFAULT, 'every_page' => TRUE)); ?>
<div class="border-padding-region">
<?php print render($content->content); ?>
</div>