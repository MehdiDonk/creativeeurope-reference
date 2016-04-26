/**
 * @file
 */

(function ($) {
   $(document).ready(
        function () {

            jQuery('img.svg, .svg img').each(
                function () {
                    var $img = jQuery(this);
                    var imgID = $img.attr('id');
                    var imgClass = $img.attr('class');
                    var imgURL = $img.attr('src');

                    jQuery.get(
                        imgURL, function (data) {
                            // Get the SVG tag, ignore the rest.
                            var $svg = jQuery(data).find('svg');

                            // Add replaced image's ID to the new SVG.
                          if (typeof imgID !== 'undefined') {
                              $svg = $svg.attr('id', imgID);
                          }
                            // Add replaced image's classes to the new SVG.
                          if (typeof imgClass !== 'undefined') {
                              $svg = $svg.attr('class', imgClass + ' replaced-svg');
                          }

                            // Remove any invalid XML tags as per http://validator.w3.org
                            $svg = $svg.removeAttr('xmlns:a');

                            // Check if the viewport is set, else we gonna set it if we can.
                          if (!$svg.attr('viewBox') && $svg.attr('height') && $svg.attr('width')) {
                              $svg.attr('viewBox', '0 0 ' + $svg.attr('height') + ' ' + $svg.attr('width'))
                          }

                            // Replace image with new SVG.
                            $img.replaceWith($svg);

                        }, 'xml'
                    );
                }
            );

            /* RESPONSIVE NAVIGATION */
            /* OPEN / CLOSE PANEL */
            $('.menu-mobile--main-button').click(
                function () {
                    var dataToToggle = $(this).attr('data-nav-toggle');
                    var toggleDirection = "Left";
                    $(this).toggleClass('open');

                    $('.navbar-container').css('left', '0');
                    $('.dropdown').css('right', 'auto');

                    mobileNavToggle(dataToToggle,toggleDirection);
                }
            );

            function mobileNavToggle(dataToToggle,toggleDirection){
                var toggleContainer = 'div[data-nav-toggle=' + dataToToggle + ']';
                $(toggleContainer).toggle('slide', 0);

                var listItems = $(toggleContainer + ' > ul > li');

                var arrayItemClass = new Array();

              if (!$('button[data-nav-toggle=' + dataToToggle + ']').hasClass('open')) {
                $('body').css('overflow','visible');

                  $(".navbar").animate(
                      {
                          height:'60px'
                        }, 200, function () {
                        }
                    );

                    var anim = {opacity: 0};
                    anim["margin" + toggleDirection] = '-100px';

                    $(listItems.get().reverse()).each(
                      function (idx, li) {
                          setTimeout(
                              function () {
                                  $(li).animate(anim, 300);
                              },50
                            );
                      }
                    );
              }
              else {
                  $(".navbar").animate(
                      {
                          height:'100vh'
                        }, 200, function () {
                        }
                    );

                    $('body').css('overflow','hidden');

                    var anim = {opacity: 1};
                    anim["margin" + toggleDirection] = '0';
                    listItems.each(
                      function (idx, li) {
                          setTimeout(
                              function () {
                                  $(li).animate(anim, 500);
                              },0 + (idx * 50)
                            );
                      }
                    );
              }
            }

            /* SLIDE SUB LEVEL */
            if ($(window).width() <= 992) {
                $('.menu li.dropdown a:not(.dropdown-active)').on(
                    'click', function () {
                      if ($(this).hasClass('dropdown-active')) {
                          $(this).removeClass('dropdown-active');
                          $('.navbar-container').animate(
                              {
                                  left: 0
                                }, 200, function () {
                                }
                            );

                            $(".dropdown").css('right','auto');
                            $(this).addClass('toggleBack');

                            $(".dropdown").animate(
                              {
                                  right: "auto",
                                  position: 'static'
                                }, 200, function () {
                                }
                            );

                      }
                      else {
                          $(".dropdown.open").css('right','-1000px');

                        $('.navbar').scrollTop(0);

                          $(".dropdown.open").animate(
                              {
                                  right: "-500px",
                                  position: 'absolute',
                                  top: 0
                                }, 200, function () {
                                }
                          );
                          $(this).addClass('dropdown-active');

                          $('.navbar-container').animate(
                              {
                                  left: -500
                                }, 200, function () {

                                }
                            );
                      }
                    }
                );
            $('.dropdown-menu li a').on(
                    'click', function () {
                      $('.navbar-container').css('display','none');

                      $(".navbar").animate(
                        {
                            height:'60px'
                        }, 20, function () {
                        }
                      );
                    });
            }


            /* FEEDBACK FORM - SHOW SUBMIT ON CLICK ON RADIO BUTTON */
            $('.feedback-form input').click(
                function () {
                    $(this).toggleClass("selected");
                    $('.feedback-form .form-actions').fadeIn();
                }
            );
	});
})(jQuery);
