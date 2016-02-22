<?php

/**
 * @file
 * Template.php file for creative europe theme.
 *
 * Implement preprocess functions and alter hooks.
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
 *
 */
function creaeurope_preprocess_block(&$variables) {
  $empty = '';
  $variables['facebook'] = l($empty, theme_get_setting('facebook'), array('attributes' => array('class' => 'icon facebook')));
  $variables['twitter'] = l($empty, theme_get_setting('twitter'), array('attributes' => array('class' => 'icon twitter')));
  $variables['newsletter'] = l(t('newsletter'), theme_get_setting('newsletter'), array('attributes' => array('class' => 'button button--medium button--primary')));
}

/**
 *
 */
function creaeurope_preprocess_node(&$variables) {
  $node = $variables['node'];
  if ($node->type == 'page') {
    dpm($variables);
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
}
