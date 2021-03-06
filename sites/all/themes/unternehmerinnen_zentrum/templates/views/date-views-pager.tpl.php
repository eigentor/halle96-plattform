<?php
/**
 * @file
 * Template file for the example display.
 *
 * Variables available:
 * 
 * $plugin: The pager plugin object. This contains the view.
 *
 * $plugin->view
 *   The view object for this navigation.
 *
 * $nav_title
 *   The formatted title for this view. In the case of block
 *   views, it will be a link to the full view, otherwise it will
 *   be the formatted name of the year, month, day, or week.
 *
 * $prev_url
 * $next_url
 *   Urls for the previous and next calendar pages. The links are
 *   composed in the template to make it easier to change the text,
 *   add images, etc.
 *
 * $prev_options
 * $next_options
 *   Query strings and other options for the links that need to
 *   be used in the l() function, including rel=nofollow.
 */

/**
 * Generate the $back_to_here variable to return to the current page after creating a node to book the conference room
 */

$button_book_room = '';
$booking_description = '';

// If the view is the conference schedule, insert the "book conference room" button.
$button_book_room = '';
$current_path = current_path();
$back_to_here = '?destination=' . $current_path;


// Buchen-Button und Beschreibungstext für Konferenzraum bezahlt 1
if($plugin->view->name == 'conference_room_paid_1' && $plugin->view->current_display = 'page_1') {
  $button_book_room = '<a class="book-room" alt ="Konferenzraum reservieren" href="/node/add/conference-room-paid-1' . $back_to_here . '">' . t('Book conference room') . '</a>';
  $booking_description = '<div class="booking-description">Hier kann ein Hinweis angezeigt werden zur Buchbarkeit des Raumes (Zeiten, Reinigung, Taktung etc).</div>';
}

// Buchen-Button und Beschreibungstext für Konferenzraum bezahlt 2
if($plugin->view->name == 'conference_room_paid_2' && $plugin->view->current_display = 'page_1') {
  $button_book_room = '<a class="book-room" alt ="Konferenzraum reservieren" href="/node/add/conference-room-paid-2' . $back_to_here . '">' . t('Book meeting room house 11') . '</a>';
  $booking_description = '<div class="booking-description">Hier kann ein Hinweis angezeigt werden zur Buchbarkeit des Raumes (Zeiten, Reinigung, Taktung etc).</div>';
}

// Buchen-Button und Beschreibungstext für kostenlosen Besprechungsraum
if($plugin->view->name == 'conference_room_schedule' && $plugin->view->current_display = 'page_1') {
  $button_book_room = '<a class="book-room" alt ="Konferenzraum reservieren" href="/node/add/conference-room' . $back_to_here . '">' . t('Book meeting room house 9') . '</a>';
  $booking_description = '<div class="booking-description">Hier kann ein Hinweis angezeigt werden zur Buchbarkeit des Raumes (Zeiten, Reinigung, Taktung etc).</div>';
}



?>
<?php if (!empty($pager_prefix)) : ?>
<?php print $pager_prefix; ?>
<?php endif; ?>
<div class="date-nav-wrapper clearfix<?php if (!empty($extra_classes)): print $extra_classes; endif; ?>">
  <div class="date-nav item-list">
    <div class="date-heading">
      <h3><?php print $nav_title ?></h3>
    </div>
    <ul class="pager">
    <?php if (!empty($prev_url)) : ?>
      <li class="date-prev">
        <?php
        $text = '&laquo;';
        $text .= $mini ? '' : ' ' . t('Prev', array(), array('context' => 'date_nav'));
        print l(t($text), $prev_url, $prev_options);
        ?>
      </li>
    <?php endif; ?>
    <?php if (!empty($next_url)) : ?>
      <li class="date-next">
        <?php print l(($mini ? '' : t('Next', array(), array('context' => 'date_nav')) . ' ') . '&raquo;', $next_url, $next_options); ?>
      </li>
    <?php endif; ?>
    </ul>
    <!-- Button zum Buchen des Konferenzraumes -->
        <?php print $button_book_room; ?>
      <!-- /Button zum Buchen des Konferenzraumes -->
  </div>
  <?php print $booking_description; ?>
</div>
