(function ($, Drupal, window, document, undefined) {
  Drupal.behaviors.solvaxis = {
    attach: function(context, settings) {


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

      // Page promos slider.
      var slider = $('.view-promo-slideshow .flexslider');

      // If a slider is set-up run it
      if ($.fn.flexslider && slider.length) {
        slider.flexslider({
          start: function(slider){
            // Insert a container for additional background image
            Drupal.behaviors.leut.prepareBackground();
            // Change the background image
            Drupal.behaviors.leut.setBackground(slider, 1000);
          },
          after: function(slider){
            // Change the background image
            Drupal.behaviors.leut.setBackground(slider, 1000);
            // Set title color based on image
            BackgroundCheck.refresh();
          }
        });
      }

      function backgroundCheckInit() {
        // Make sure a background is set otherwise an exception will be thrown
        if ($('#page').css('background-image') != 'none') {
          BackgroundCheck.init({
            targets: '#page-title, #leader .breadcrumb .wrapper, #leader .pane-title',
            images: '#page',
            threshold: 75,
            windowEvents: false,
            maxDuration: 50,
            debug: false
          });
        }
      }
      backgroundCheckInit();

      var backgroundCheck = debounce(function() {
        BackgroundCheck.refresh();
      }, 500);

      $(window, context).on('resize', function() {
        backgroundCheck();
      });

      $(window, context).trigger('resize');
    },

    prepareBackground: function() {
      $('#page').prepend('<div class="top-bg-image"></div>');
    },

    setBackground: function(slider, speed) {
      var currentSlide = slider.slides.eq(slider.currentSlide);
      currentFrame = currentSlide.find('img');
      var imgsrc = $(currentFrame).attr('src');

      // First set the new background on the bottom layer
      $('#page').css('background-image', 'url(' + imgsrc + ')');

      // Fade out the top background image and set the new background on it
      $('#page .top-bg-image').fadeOut(speed, function() {
        $(this).css('background-image', 'url(' + imgsrc + ')').show();
      })
    },

})(jQuery, Drupal, this, this.document);
