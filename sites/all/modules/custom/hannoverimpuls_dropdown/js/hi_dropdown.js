(function ($) {
  Drupal.behaviors.hi_dropdown = {
    attach: function (context, settings) {

      //$('#block-system-main-menu .content > ul.menu').metisMenu();

      new MetisMenu("#block-system-main-menu .content > ul.menu");

    } // end attach function
  }
})(jQuery);
