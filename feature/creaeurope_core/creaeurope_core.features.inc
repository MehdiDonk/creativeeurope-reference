<?php
/**
 * @file
 * creaeurope_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creaeurope_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function creaeurope_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function creaeurope_core_image_default_styles() {
  $styles = array();

  // Exported image style: actions_360_204.
  $styles['actions_360_204'] = array(
    'label' => 'Actions 360*204',
    'effects' => array(
      14 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 360,
          'height' => 204,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: highlights_big.
  $styles['highlights_big'] = array(
    'label' => 'Highlights big (588x278)',
    'effects' => array(
      3 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 588,
          'height' => 278,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: highlights_little.
  $styles['highlights_little'] = array(
    'label' => 'Highlights little (233x110)',
    'effects' => array(
      4 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 233,
          'height' => 110,
        ),
        'weight' => 2,
      ),
      13 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 233,
          'height' => 110,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: news-events-calls-big.
  $styles['news-events-calls-big'] = array(
    'label' => 'News events calls big (1140x500)',
    'effects' => array(
      10 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 1140,
          'height' => 500,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: news_events_calls_little__370x180_.
  $styles['news_events_calls_little__370x180_'] = array(
    'label' => 'News events calls little (370x140)',
    'effects' => array(
      12 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 370,
          'height' => 140,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: news_events_calls_medium__760x280_.
  $styles['news_events_calls_medium__760x280_'] = array(
    'label' => 'News events calls medium (760x280)',
    'effects' => array(
      11 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 760,
          'height' => 280,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: project_results_big.
  $styles['project_results_big'] = array(
    'label' => 'Project results big',
    'effects' => array(
      5 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 400,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_results_little.
  $styles['project_results_little'] = array(
    'label' => 'Project results little',
    'effects' => array(
      6 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 100,
          'height' => 66,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function creaeurope_core_node_info() {
  $items = array(
    'events' => array(
      'name' => t('Events'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'external_calls' => array(
      'name' => t('External Calls'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'highlights' => array(
      'name' => t('Highlights'),
      'base' => 'node_content',
      'description' => t('Light spot'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'project_results' => array(
      'name' => t('Project results'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video_gallery' => array(
      'name' => t('Video Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
