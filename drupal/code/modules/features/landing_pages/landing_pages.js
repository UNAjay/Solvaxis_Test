
(function ($) {
  Drupal.behaviors.FullscreenPagesStickyNav = {

    attach: function(context, settings) {

      $('.first-section-container', context).once('FullscreenPagesStickyNav', function () {

        // Scroll to section anchor for "Learn morea about JEEVES ERP" link
        $('a#customanchor1').click(function () {
          var elem = $(this).attr('href');

          // we want to see this many px from last section
          var nextSection = 0;
          if (jQuery('#admin-menu').length > 0) nextSection += jQuery('#admin-menu').outerHeight();
          if (jQuery('.header-secondary').length > 0) nextSection += jQuery('.header-secondary').outerHeight();

          jQuery('body,html').stop(true,true).animate({
            'scrollTop': jQuery(elem).offset().top - nextSection
          }, 1000);

          return false;
        });

        // assigned only once so this should work
        //originalSectionHeight = $('.first-section-container').outerHeight();

        // strech section
        FullscreenPagesResizeSection();

        // resize on screen resize too
        $(window).resize(function() {
          FullscreenPagesResizeSection();
        });

        // resize on screen resize too
        $(window).load(function() {
          FullscreenPagesResizeSection();
        });

        $(window).scroll(function () {

          var elemTop =  $('.header-secondary').offset().top;

          var offsetTop = 0;
          if (jQuery('#admin-menu').length > 0) offsetTop = jQuery('#admin-menu').outerHeight();

          if ($(window).scrollTop() + offsetTop > elemTop) {
            // if floating menu does not exist, we create one
            if ($(".header-secondary-float").length == false){

              $('body').append('<div id="header-secondary-float" class="header-secondary header-secondary-float"></div>');
              $('.header-secondary-float').html($('.header-secondary').html()).css('top', offsetTop).css('background', '#FFF').css('z-index', '10').show();
            }
          }
          else {
            $('.header-secondary-float').remove();
          }

        }); // scroll
      }); // once
    }, // attach

  };


})(jQuery);

function FullscreenPagesResizeSection() {

  originalSectionHeight = jQuery('.first-section-container').children().outerHeight();

  var screenHeight = jQuery(window).height();
  // we want to see this many px from next section
  var nextSection = 160;

  // we have space available, let's stretch the section
  if (originalSectionHeight < (screenHeight - nextSection)) {
   jQuery('.first-section-container').height(screenHeight - nextSection);
  }
  // if by accident (or incomplete pageload) it's smaller than planned, we restore height
  else jQuery('.first-section-container').height(originalSectionHeight);


}
