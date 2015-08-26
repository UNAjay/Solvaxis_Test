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


Drupal.behaviors.jeeves_images = function (context) {
  return;
};


(function ($) {
  Drupal.behaviors.action_colorbox = {
    attach: function (context, settings) {

        $('a.call-to-action.download-pdf').each(function() {
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