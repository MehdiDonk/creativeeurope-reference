<?php
/**
 * @file
 * Template.php.
 *
 * PHP version 5
 *
 * @category Production
 *
 * @package Creaeurope/Theme
 *
 * @author EAC WEB <EAC-LIST-C4@nomail.ec.europa.eu>
 *
 * @copyright 2015 European-Commission
 *
 * @license http://ec.europa.eu Europa
 * @link NA
 *
 * Ec_resp's theme implementation to display a single Drupal page.
 */

/**
 * Implements template_preprocess_html().
 */
function creaeurope_preprocess_html(&$variables) {
  $settings['creaeurope']['videohome_youtube_id'] = theme_get_setting('videohome_youtube_id');
  drupal_add_js($settings, 'setting');
  drupal_add_js(drupal_get_path('theme', 'creaeurope') . '/scripts/video.js', array(
    'scope' => 'footer',
  ));

}
/**
 * Implements template_preprocess_page().
 */
function creaeurope_preprocess_page(&$variables) {
  $empty = 'Texte';
  $main_menu_tree = menu_tree_all_data('main-menu');
  $variables['videoabout'] = theme_get_setting('videoabout');
  $variables['headline'] = theme_get_setting('headline');
  $variables['tagline'] = theme_get_setting('tagline');
  $variables['facebook'] = l($empty, theme_get_setting('facebook'), array('attributes' => array('class' => 'icon facebook')));
  $variables['twitter'] = l($empty, theme_get_setting('twitter'), array('attributes' => array('class' => 'icon twitter')));
  $variables['newsletter'] = l(t('Newsletter'), theme_get_setting('newsletter'), array('attributes' => array('class' => 'button button--medium button--primary')));

}

/**
 * Implements template_preprocess_block().
 */
function creaeurope_preprocess_block(&$variables) {
  $empty = '';
  $variables['facebook'] = l($empty, theme_get_setting('facebook'), array('attributes' => array('class' => 'icon facebook')));
  $variables['twitter'] = l($empty, theme_get_setting('twitter'), array('attributes' => array('class' => 'icon twitter')));
  $variables['newsletter'] = l(t('newsletter'), theme_get_setting('newsletter'), array('attributes' => array('class' => 'button button--medium button--primary')));
}

/**
 * Implements template_preprocess_node().
 */
function creaeurope_preprocess_node(&$variables) {
  $node = $variables['node'];
  if ($node->type == 'pages') {
    $content = $variables['content'];
    if (isset($content['field_picto_title'])) {
      $image_vars = array(
        'path' => file_create_url($content['field_picto_title']['#items'][0]['uri']),
        'attributes' => array(
          'class' => array(
            'svg',
          ),
        ),
      );
      $variables['picto_title'] = theme('image', $image_vars);
    }

    // if ($content['title_field']) {
      // $variables['article_title'] = $content['title_field'][0]['#markup'];
    // }

    if (isset($content['field_page_banner'])) {
      $image_vars = array(
        'path' => file_create_url($content['field_page_banner']['#items'][0]['uri']),
        'attributes' => array(
          'class' => array(
            'page-banner',
          ),
        ),
      );
      $variables['page_banner'] = theme('image', $image_vars);
    }

    if (isset($content['field_abstract'])) {
      $variables['abstract'] = $content['field_abstract'][0]['#markup'];
    }

    if ($content['body']) {
      $variables['body'] = $content['body'][0]['#markup'];
    }
  }
	
	
	
	// To delete !
	
	if ($node->type == 'page') {
    $content = $variables['content'];
    if (isset($content['field_picto_title'])) {
      $image_vars = array(
        'path' => file_create_url($content['field_picto_title']['#items'][0]['uri']),
        'attributes' => array(
          'class' => array(
            'svg',
          ),
        ),
      );
      $variables['picto_title'] = theme('image', $image_vars);
    }

    if ($content['title_field']) {
      $variables['article_title'] = $content['title_field'][0]['#markup'];
    }

    if (isset($content['field_page_banner'])) {
      $image_vars = array(
        'path' => file_create_url($content['field_page_banner']['#items'][0]['uri']),
        'attributes' => array(
          'class' => array(
            'page-banner',
          ),
        ),
      );
      $variables['page_banner'] = theme('image', $image_vars);
    }

    if (isset($content['field_abstract'])) {
      $variables['abstract'] = $content['field_abstract'][0]['#markup'];
    }

    if ($content['body']) {
      $variables['body'] = $content['body'][0]['#markup'];
    }
  }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

  if ($node->type === 'video_gallery') {
    $content = $variables['content'];

    if (isset($content['field_embed_code'])) {
      $variables['field_embed_code'] = $content['field_embed_code'][0]['#markup'];
    }

    $variables['date_video'] = format_interval(time() - $node->created, 2);

    if (isset($content['field_duration'])) {
      $variables['field_duration'] = $content['field_duration'][0]['#markup'];
    }

    if (isset($content['field_video_abstract'])) {
      $variables['field_video_abstract'] = $content['field_video_abstract'][0]['#markup'];
    }

    if ($content['body']) {
      $variables['body'] = $content['body'][0]['#markup'];
    }
  }

  if ($node->type === 'news') {
    $content = $variables['content'];

    if (isset($content['type'])) {
      $variables['type'] = $content['type'][0]['#markup'];
    }

    if (isset($content['title_field'])) {
      $variables['news_title'] = $content['title_field'][0]['#markup'];
    }

    $variables['date_news'] = format_interval(time() - $node->created, 2);

    if (isset($content['field_categories'])) {
      $variables['all_news_cat'] = '';
      foreach ($content['field_categories']['#items'] as $news_cat) {
        $variables['all_news_cat'] = $variables['all_news_cat'] . ' <span class="glyphicon glyphicon-tag" aria-hidden="true"></span>' . $news_cat['value'];
      }
    }

    if (isset($content['field_images'])) {
      $image_vars = array(
        'path' => file_create_url($content['field_images']['#items'][0]['uri']),
        'attributes' => array(
          'class' => array(
            'page-banner',
          ),
        ),
      );
      $variables['news_images'] = theme('image', $image_vars);
    }

    if (isset($content['field_abstract'])) {
      $variables['news_abstract'] = $content['field_abstract'][0]['#markup'];
    }

    if ($content['body']) {
      $variables['body'] = $content['body'][0]['#markup'];
    }

    if (isset($content['field_news_find_out_more'])) {
      $variables['news_find_out_more'] = $content['field_news_find_out_more'][0]['#markup'];
    }

  }

  if ($node->type === 'eventseac') {
    $content = $variables['content'];

    if (isset($content['type'])) {
      $variables['type'] = $content['type'][0]['#markup'];
    }

    if (isset($content['title_field'])) {
      $variables['event_title'] = $content['title_field'][0]['#markup'];
    }

    if (isset($content['field_date_from'])) {
      $variables['event_dates'] = $content['field_date_from'][0]['#markup'];
    }

    if (isset($content['field_event_location'])) {
      $variables['event_location'] = $content['field_event_location'][0]['#markup'];
    }

    if (isset($content['field_categories'])) {
      $variables['all_event_cat'] = '';
      foreach ($content['field_categories']['#items'] as $event_cat) {
        $variables['all_event_cat'] = $variables['all_event_cat'] . ' <span class="glyphicon glyphicon-tag" aria-hidden="true"></span>' . $event_cat['value'];
      }
    }

    if (isset($content['field_images'])) {
      $image_vars = array(
        'path' => file_create_url($content['field_images']['#items'][0]['uri']),
        'attributes' => array(
          'class' => array(
            'page-banner',
          ),
        ),
      );
      $variables['event_images'] = theme('image', $image_vars);
    }

    if (isset($content['field_abstract'])) {
      $variables['event_abstract'] = $content['field_abstract'][0]['#markup'];
    }

    if ($content['body']) {
      $variables['body'] = $content['body'][0]['#markup'];
    }

    if (isset($content['field_events_find_out_more'])) {
      $variables['event_find_out_more'] = $content['field_events_find_out_more'][0]['#markup'];
    }

  }
}

/**
 * Preprocesses the wrapping HTML.
 *
 * @param array &$head_elements
 *   Template variables.
 */
function creaeurope_html_head_alter(&$head_elements) {
  $head_elements['theme_color'] = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'theme-color',
      'content' => '#000000',
    ),
    '#weight' => -99999,
  );
  drupal_add_html_head($head_elements, 'theme_color');
}

/**
 * Preprocesses the Views.
 *
 * @param array &$vars
 *   Template variables.
 */
function creaeurope_preprocess_views_view_fields(&$vars) {
  global $base_url;
  global $theme_path;
  $vars['calls_attributes'] = array('attributes' => array('class' => 'Prt'), 'html' => TRUE);
  $vars['calls_img'] = '<img src="' . $base_url . '/' . $theme_path . '/images/calls/calls.jpg' . '"/>';
}
