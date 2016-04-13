<?php
/**
 * @file
 * Ec_resp's theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template normally located in the
 * modules/system folder.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/ec_resp.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 * - $hide_site_name: TRUE if the site name has been toggled off on the theme
 *   settings page. If hidden, the "element-invisible" class is added to make
 *   the site name visually hidden, but still accessible.
 * - $hide_site_slogan: TRUE if the site slogan has been toggled off on the
 *   theme settings page. If hidden, the "element-invisible" class is added to
 *   make the site slogan visually hidden, but still accessible.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 * - $menu_visible: Checking if the main menu is available in the
 *    region featured
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['header_top']: Displayed at the top line of the header
 *    -> language switcher, links, ...
 * - $page['header_right']: Displayed in the right part of the header
 *    -> logo, search box, ...
 * - $page['featured']: Displayed below the header, take full width of screen
 *    -> main menu, global information, ...
 * - $page['tools']: Displayed on top right of content area
 *    -> login/logout buttons, author information, ...
 * - $page['sidebar_left']: Small sidebar displayed on left of the content
 *    -> navigation, pictures, ...
 * - $page['sidebar_right']: Small sidebar displayed on right of the content
 *    -> latest content, calendar, ...
 * - $page['content_top']: Displayed in middle column
 *    -> carousel, important news, ...
 * - $page['help']: Displayed between page title and content
 *    -> information about the page, contextual help, ...
 * - $page['content']: The main content of the current page.
 * - $page['content_right']: Large sidebar displayed on right of the content
 *    -> 2 column layout
 * - $page['content_bottom']: Displayed below the content, in middle column
 *    -> print button, share tools, ...
 * - $page['footer']: Displayed at bottom of the page, on full width
 *    -> latest update, copyright, ...
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see ec_resp_process_page()
 */
?>

<?php
global $base_url;
?>
<a id="top-page"></a>

<div id="layout-header" class="hidden-xs hidden-sm">
  <div class="container">   
    <div class="europa-tools">
      <?php print $regions['header_top']; ?>
    </div>
  </div>
  <div class="container">
    <img alt="European Commission logo" id="banner-flag" src="<?php print $logo; ?>" />
    <span id="banner-image-right" class="hidden-sm hidden-xs">
      <?php print $regions['header_right']; ?>
    </span>
    <div id="main-title"><?php print $site_name; ?></div>
    <div id="sub-title" class="hidden-xs"><?php print $site_slogan; ?></div>
  </div>
</div><!-- /#layout-header -->

<?php print render($page['breadcrumbs']); ?>

<header role="banner" class="main-banner contact-header jumbotron">
  <?php print render($page['mobile_nav']); ?>
  <div class="region-featured-wrapper <?php print ($has_responsive_sidebar ? 'sidebar-visible-sm' : ''); ?>">
    <?php print $regions['featured']; ?>
  </div>
  <div class="container">
    <div class="row">
      <div class="col-md-12">
	    <hgroup>
          <img alt="" src="<?php print $GLOBALS['base_url'] . "/" . path_to_theme() ?>/images/pictos/audience.svg">
	      <h1><?php print $title; ?></h1>
	      <?php print render($page['content_top']); ?>
	    </hgroup>
	  </div>
	</div>
  </div>
</header>

<!-- #News -->
<?php if ($page['whatsnew']): ?>
  <section class="strands contact ">
    <div class="container ">
      <div class="row">
        <?php print render($page['whatsnew']); ?>
      </div>
    </div>
  </section>
<?php endif; ?>

<!-- /#News -->

<!-- #Content highlight -->
<section class="content-highlight dark-section">
  <?php if ($page['strands']): ?>
  <!-- #Gris foncé -->
    <div class="container">
	  <div class="row">
        <div class="col-lg-8 col-lg-offset-2">
          <?php print render($page['strands']); ?>
        </div>
      </div>
    </div>
  <?php endif; ?>
    <!-- #Gris clair -->

  <?php if ($page['sections']): ?>
  <div class="dark-section">
    <div class="dark-section--content">
      <div class="container">
        <div class="row">
        <?php print render($page['sections']); ?>
      </div>
      </div>
    </div>
  </div>
<?php endif; ?>
</section>
<!-- /#Content Highlight -->


<!-- #3 columns -->
<?php if ($page['actions']): ?>
  <section class="content-wrapper">
    <div class="container">
	  <div class="row">
        <?php print render($page['actions']); ?>
	  </div>
    </div>
  </section>
<?php endif; ?>
<!-- /#3 columns -->

<!-- #Project results -->
<div class="container">
  <div class="col-lg-12">
		<?php if ($page['projectresults']): ?>
      <?php print render($page['projectresults']); ?>
    <?php endif; ?>
  </div>
</div>
<!-- link to top -->
<a href="#top-page" class="btn-back-top">
  <span class="glyphicon glyphicon-chevron-up"></span>
</a>

<!-- #footer -->
<footer>
  <div class="container">
    <div class="row footer--row-one">
      <div class="col-sm-8 feedback-form">
        <?php print render($page['footer_topleft']); ?>
      </div>
      <div class="sm" >
        <?php print $facebook . $twitter . $newsletter; ?>
      </div>
	</div>
    <div class="row">
      <div class="col-sm-4 bottomleft">
        <?php print render($page['footer_bottomleft']); ?>
      </div>
      <div class="col-sm-4 bottomright">
        <?php print render($page['footer_bottommiddle']); ?>
      </div>
      <div class="col-sm-4 bottomright">
        <?php print render($page['footer_bottomright']); ?>
      </div>
	</div>
  </div>
  <div class="footer--last-update">
    <div class="footer--last-update--wrapper">
      <?php print $regions['footer']; ?>
	</div>
  </div>
</footer>
