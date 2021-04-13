(function ($) {
  Drupal.behaviors.hi_dropdown = {
    attach: function (context, settings) {

      //$('#block-system-main-menu .content > ul.menu').metisMenu();

      //new MetisMenu("#block-system-main-menu .content > ul.menu");

      $('#block-system-main-menu .content > ul.menu').addClass('sm');
      $('#block-system-main-menu .content > ul.menu').smartmenus();




    } // end attach function
  }
})(jQuery);

