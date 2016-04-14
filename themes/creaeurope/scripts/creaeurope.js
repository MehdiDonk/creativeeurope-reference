(function ($) {
    Drupal.behaviors.creativeurope = {
        attach: function (context, settings) {
            jQuery('img.svg, .svg img').each(
                function(){
                    var $img = jQuery(this);
                    var imgID = $img.attr('id');
                    var imgClass = $img.attr('class');
                    var imgURL = $img.attr('src');
        
                    jQuery.get(
                        imgURL, function(data) {
                            // Get the SVG tag, ignore the rest
                            var $svg = jQuery(data).find('svg');
        
                            // Add replaced image's ID to the new SVG
                            if(typeof imgID !== 'undefined') {
                                $svg = $svg.attr('id', imgID);
                            }
                            // Add replaced image's classes to the new SVG
                            if(typeof imgClass !== 'undefined') {
                                $svg = $svg.attr('class', imgClass+' replaced-svg');
                            }
        
                            // Remove any invalid XML tags as per http://validator.w3.org
                            $svg = $svg.removeAttr('xmlns:a');
                
                            // Check if the viewport is set, else we gonna set it if we can.
                            if(!$svg.attr('viewBox') && $svg.attr('height') && $svg.attr('width')) {
                                $svg.attr('viewBox', '0 0 ' + $svg.attr('height') + ' ' + $svg.attr('width'))
                            }
        
                            // Replace image with new SVG
                            $img.replaceWith($svg);
        
                        }, 'xml'
                    );
                }
            );
    
 
    
            /* RESPONSIVE NAVIGATION */
    
            $('.menu-mobile--main-button').click(
                function(){
                    var dataToToggle = $(this).attr('data-nav-toggle');
                    var toggleDirection = "Left";
                    $(this).toggleClass('open');
      
                    mobileNavToggle(dataToToggle,toggleDirection);
                }
            );
    
            function mobileNavToggle(dataToToggle,toggleDirection){
                var toggleContainer = 'div[data-nav-toggle=' + dataToToggle + ']';
                $(toggleContainer).toggle('slide', 0);
      
                var listItems = $(toggleContainer + ' > ul > li');
      
                var arrayItemClass = new Array();

                if(!$('button[data-nav-toggle=' + dataToToggle + ']').hasClass('open')) {
                    var anim = {opacity: 0};
                    anim["margin" + toggleDirection] = '-100px';
        
                    $(listItems.get().reverse()).each(
                        function(idx, li) {
                            setTimeout(
                                function(){
                                    $(li).animate(anim, 300);
                                },50
                            );
                        }
                    );
                } else {
                    var anim = {opacity: 1};
                    anim["margin" + toggleDirection] = '0';
                    listItems.each(
                        function(idx, li) {
                            setTimeout(
                                function(){
                                    $(li).animate(anim, 500);
                                },100 + ( idx * 50 )
                            );
                        }
                    );
                }
            }
        
        
        
        
        
            /* FEEDBACK FORM - SHOW SUBMIT ON CLICK ON RADIO BUTTON */
            $('.feedback-form input').click(
                function(){
                    $(this).toggleClass("selected");
                    $('.feedback-form .form-actions').fadeIn();
                }
            );

        }
    };
})(jQuery);
