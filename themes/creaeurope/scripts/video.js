/**
 * @file
 * Video home.
 */

(function($) {
    var player;
    var vidNum;
    var appendJ = "?enablejsapi=1"
    var video1 = "//www.youtube.com/embed/" + Drupal.settings.creaeurope.videohome_youtube_id + appendJ;
    $(function(){
        $(".link-video").click(function(){
            $("html, body").animate({ scrollTop: 0 }, "slow");
            var vidNum = $(this).attr("data-video");
            // Scroll to top.
            $("#video").parent().fadeIn(400);
            // Which video is going to play.
            switch (vidNum) {
                case "1":
                    $("#video").attr("src",video1);
                    break;
            }
            // Make video auto play.
            $("#video")[0].src += "&autoplay=1";
        });
        // Click X.
        $(".closebox, .videowrap").click(function(){
            $(".videowrap").fadeOut(400);
            $("#video").attr("src","");
        });
        // Esc keydown.
        $(document).keydown(function(event){
            if (event.which == 27) {
                $(".videowrap").fadeOut(400);
                $("#video").attr("src","");
            }
        });
    });
})(jQuery);
