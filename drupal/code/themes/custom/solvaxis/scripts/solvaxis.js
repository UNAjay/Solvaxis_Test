(function ($, Drupal, window, document, undefined) {
  Drupal.behaviors.solvaxis = {
    attach: function(context, settings) {

      // Add class to pager outer div.
      $('.item-list:has(.pager)').addClass('pager-outer');
      
      // Scroll to hash.
      // ------------------------------------------------------------------------------------------------

      $(window, context).on('load hashchange', function(e){
        var hash = window.location.hash.substr(1);
        if (hash && hash.charAt(0).match(/[a-z]/i) && typeof $('.' + hash).offset() != 'undefined') {
          $('html,body').animate({
            scrollTop: $('.' + hash).offset().top - 144
          });
        }

      });
    }
  }

})(jQuery, Drupal, this, this.document);


Drupal.behaviors.FullscreenPagesStickyNav = function (context) {
  return;
};
Drupal.behaviors.jeeves_images = function (context) {
  return;
};

