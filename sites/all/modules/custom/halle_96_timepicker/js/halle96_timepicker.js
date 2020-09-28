(function ($) {
  Drupal.behaviors.halle96_timepicker = {
    attach: function (context, settings) {

      $('#conference-room-node-form #edit-field-conf-termin-und-0-value-timeEntry-popup-1')
        .add('#conference-room-node-form #edit-field-conf-termin-und-0-value2-timeEntry-popup-1')
        .add('#conference-room-paid-1-node-form #edit-field-conf-termin-und-0-value-timeEntry-popup-1')
        .add('#conference-room-paid-1-node-form #edit-field-conf-termin-und-0-value2-timeEntry-popup-1')
        .add('#conference-room-paid-2-node-form #edit-field-conf-termin-und-0-value-timeEntry-popup-1')
        .add('#conference-room-paid-2-node-form #edit-field-conf-termin-und-0-value2-timeEntry-popup-1')
        .timepicker({
          showPeriodLabels: false,
      });


    } // end of attach function
  };
})(jQuery);
