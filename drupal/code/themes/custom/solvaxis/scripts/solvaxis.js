(function ($, Drupal, window, document, undefined) {
  Drupal.behaviors.solvaxis = {
    attach: function(context, settings) {
      
      // Sticky header
      $(window).scroll(function() {
      if ($(this).scrollTop() > 0){
          $('.header-secondary').addClass( "sticky" );
        }
        else{
          $('.header-secondary').removeClass( "sticky" );
        }
      });

      // Add 100% width to pager outer element.
      $( "ul.pager" ).parent().css( "width", "100%" );
 
      // Collapse/expand text
      // ------------------------------------------------------------------------------------------------
      $('.not-front .group-left .field-items h2').each(function(index) { 
          $(this).nextUntil('h2').wrapAll('<div class="content-wrap"></div>');
      });
 
      $('.content-wrap h3').each(function(index) { 
          $(this).nextUntil('h3').wrapAll('<div class="content-wrap"></div>');
      });
     
      $('.not-front .group-left .field-items h2, .content-wrap h3').click(function(){
        $(this).next('.content-wrap').slideToggle( "slow", function() {
        });
        $(this).toggleClass( "collapsed" );
      });
      
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
 
  var $navButton = $('.navigate');
  var $searchButton = $('<div class="search-button"></div>');
  var $searchForm = $('#block-search-form').clone();
  
  $searchForm.addClass('desktop');
  
  $searchForm.hide();
  $('.region-header-secondary').hide();
  
  $('.header-secondary .region-holder').prepend($navButton, $searchButton, $searchForm);

  // toggle search
  $searchButton.click(function(){
    $searchForm.toggle();
  });
  
  // search utton active
  $searchButton.click(function(){
    $searchButton.toggleClass( "active" );
  });
  
  // header class when hidden on mobile
  $navButton.click(function(){
    $('.region-header-secondary').toggle();
    $('.region-header-secondary').toggleClass( "expanded" );
    $navButton.toggleClass( "close" );
  });
  
  
  // var hideSearch = function(){
 //    // mobile menu
 //    if ($navButton.is(':visible')) {
 //
 //      $searchForm.hide();
 //    }
 //  };
 //  $(window).resize(hideSearch);
 
});


