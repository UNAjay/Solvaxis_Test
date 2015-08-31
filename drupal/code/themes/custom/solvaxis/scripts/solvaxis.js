(function ($, Drupal, window, document, undefined) {
  Drupal.behaviors.solvaxis = {
    attach: function(context, settings) {

      // Sticky header
      $(window).scroll(function() {
      if ($(this).scrollTop() > 1){
          $('.header-secondary').addClass("sticky");
        }
        else{
          $('.header-secondary').removeClass("sticky");
        }
      });

      // Add 100% width to pager outer element.
      $( "ul.pager" ).parent().css( "width", "100%" );

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


(function ($) {
  Drupal.behaviors.action_colorbox = {
    attach: function (context, settings) {

        $('a.call-to-action.fill-form').each(function() {
          var href = $(this).attr('href');
          var urlVars = getUrlVars(href)['width'];
          if (urlVars == null) {
            $(this).colorbox({iframe:true, innerWidth:455, innerHeight:450});
          }
        });

    },
  }
} (jQuery));


// Read a page's GET URL variables and return them as an associative array.
function getUrlVars(url)
{
    var vars = [], hash;
    var hashes = url.slice(url.indexOf('?') + 1).split('&');
    for(var i = 0; i < hashes.length; i++)
    {
        hash = hashes[i].split('=');
        vars.push(hash[0]);
        vars[hash[0]] = hash[1];
    }
    return vars;
}


jQuery(function($){
  // Use strict mode to avoid errors: https://developer.mozilla.org/en/JavaScript/Strict_mode
  "use strict";

  var $searchButton = $('<div class="search-button-desktop"><span></span></div>');
  var $searchForm = $('#block-search-form');
  var $navButton = $('.navigate');

  $('.region-header-secondary').prepend($searchButton);

  // toggle search
  $searchButton.click(function(){
    $searchForm.toggle();
  });

  var hideSearch = function(){
    // mobile menu
    if ($navButton.is(':visible')) {

      $searchForm.hide();
    }
  };
  $(window).resize(hideSearch);

});


