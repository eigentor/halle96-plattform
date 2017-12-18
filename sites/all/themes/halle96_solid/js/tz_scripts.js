(function($) {
  Drupal.behaviors.tz_scripts = {
    attach: function (context, settings) {

      // Width correction for the h2 of the user menu in desktop mode

      function correct_h2_user_menu() {
        $('#header #block-tz-custom-blocks-user-account-menu').each(function() {
          var window_width = $(document).width();
          if (window_width >= 1024) {
            var container_width = $(this).children('.content').outerWidth(true);
            var h2_width = $(this).children('h2').outerWidth(true);
            var correction = ((container_width - h2_width) / 2) - 5;
            $(this).children('h2').css('margin-left', correction + 'px');
          } else {
            $(this).children('h2').css('margin-left', 0);
          }
        });
      }
      correct_h2_user_menu();
      $(window).resize(function(){
        correct_h2_user_menu();
      });


      $('#header #block-tz-custom-blocks-user-account-menu').each(function(){
        // var container_width = $(this).children('.content').outerWidth(true);
        // var h2_width = $(this).children('h2').outerWidth(true);
        // var correction = ((container_width - h2_width) / 2) - 5;
        // $(this).children('h2').css('margin-left', correction + 'px');

        //Prepend a toggle element for mobile.
        $(this).prepend('<span class="user-toggle-mobile"></span>');

        function show() {
          $('#header #block-tz-custom-blocks-user-account-menu .content').show();
        }
        function hide() {
          $('#header #block-tz-custom-blocks-user-account-menu .content').hide();
        }
        $(this).children('h2').click(function(){
          return (this.tog = !this.tog) ? show() : hide();
        });

        // A function to show the user menu inside the navigation region
        function show_user_navigation() {
          $('#header #block-tz-custom-blocks-user-account-menu .content .item-list').clone().prependTo('#navigation .region-navigation');
        }
        function hide_user_navigation() {
          $('#navigation .region-navigation .item-list').remove();
        }
        $(this).children('.user-toggle-mobile').click(function(){
          return (this.tog = !this.tog) ? show_user_navigation() : hide_user_navigation();
        });

      });

      // Add a toggle element to the search box in the header
      $('#header #block-search-form').prepend('<span class="search-toggle-mobile"></span>')

      // A function to show the search bar on mobile
      function show_search() {
        $('#header #block-search-form form#search-block-form').clone().prependTo('#navigation .region-navigation');
      }
      function hide_search() {
        $('#navigation .region-navigation form#search-block-form').remove();
      }

      $('#header #block-search-form .search-toggle-mobile').click(function(){
        return (this.tog = !this.tog) ? show_search()() : hide_search();
      });




      // Toggle the mobile Menu
      function show_menu() {
        $('#navigation #block-system-main-menu').show();
      }
      function hide_menu() {
        $('#navigation #block-system-main-menu').hide();
      }
      $('.region-header .block.menu-toggle .content').click(function(){
        return (this.tog = !this.tog) ? show_menu() : hide_menu();
      })

      // Center User images besides comments


    } // end of attach function
  };
})(jQuery);
