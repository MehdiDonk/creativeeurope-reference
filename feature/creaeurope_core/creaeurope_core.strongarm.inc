<?php
/**
 * @file
 * creaeurope_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function creaeurope_core_strongarm() 
{
    $export = array();

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'comment_anonymous_newseac';
    $strongarm->value = '0';
    $export['comment_anonymous_newseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'comment_default_mode_newseac';
    $strongarm->value = 1;
    $export['comment_default_mode_newseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'comment_default_per_page_newseac';
    $strongarm->value = '50';
    $export['comment_default_per_page_newseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'comment_form_location_newseac';
    $strongarm->value = 1;
    $export['comment_form_location_newseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'comment_newseac';
    $strongarm->value = '1';
    $export['comment_newseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'comment_preview_newseac';
    $strongarm->value = '1';
    $export['comment_preview_newseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'comment_subject_field_newseac';
    $strongarm->value = 1;
    $export['comment_subject_field_newseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__articles';
    $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'language' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
    );
    $export['field_bundle_settings_node__articles'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__eventseac';
    $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => true,
      ),
      'full' => array(
        'custom_settings' => false,
      ),
      'rss' => array(
        'custom_settings' => false,
      ),
      'search_index' => array(
        'custom_settings' => false,
      ),
      'search_result' => array(
        'custom_settings' => false,
      ),
      'diff_standard' => array(
        'custom_settings' => false,
      ),
      'print' => array(
        'custom_settings' => false,
      ),
      'token' => array(
        'custom_settings' => false,
      ),
      'revision' => array(
        'custom_settings' => false,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '24',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '8',
            'visible' => false,
          ),
        ),
      ),
    ),
    );
    $export['field_bundle_settings_node__eventseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__external_calls';
    $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => true,
      ),
      'teaser' => array(
        'custom_settings' => true,
      ),
      'rss' => array(
        'custom_settings' => false,
      ),
      'search_index' => array(
        'custom_settings' => false,
      ),
      'search_result' => array(
        'custom_settings' => false,
      ),
      'diff_standard' => array(
        'custom_settings' => false,
      ),
      'print' => array(
        'custom_settings' => false,
      ),
      'token' => array(
        'custom_settings' => false,
      ),
      'revision' => array(
        'custom_settings' => false,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '2',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '0',
            'visible' => false,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => false,
          ),
        ),
      ),
    ),
    );
    $export['field_bundle_settings_node__external_calls'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__highlights';
    $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '2',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
    );
    $export['field_bundle_settings_node__highlights'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__newseac';
    $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => true,
      ),
      'full' => array(
        'custom_settings' => false,
      ),
      'rss' => array(
        'custom_settings' => false,
      ),
      'search_index' => array(
        'custom_settings' => false,
      ),
      'search_result' => array(
        'custom_settings' => false,
      ),
      'diff_standard' => array(
        'custom_settings' => false,
      ),
      'print' => array(
        'custom_settings' => false,
      ),
      'token' => array(
        'custom_settings' => false,
      ),
      'revision' => array(
        'custom_settings' => false,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '12',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(
        'language' => array(
          'teaser' => array(
            'weight' => '4',
            'visible' => true,
          ),
          'default' => array(
            'weight' => '7',
            'visible' => false,
          ),
          'full' => array(
            'weight' => '6',
            'visible' => false,
          ),
        ),
      ),
    ),
    );
    $export['field_bundle_settings_node__newseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__page';
    $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => true,
      ),
      'full' => array(
        'custom_settings' => false,
      ),
      'rss' => array(
        'custom_settings' => false,
      ),
      'search_index' => array(
        'custom_settings' => false,
      ),
      'search_result' => array(
        'custom_settings' => false,
      ),
      'diff_standard' => array(
        'custom_settings' => false,
      ),
      'print' => array(
        'custom_settings' => false,
      ),
      'token' => array(
        'custom_settings' => false,
      ),
      'revision' => array(
        'custom_settings' => false,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '4',
        ),
        'scheduler_settings' => array(
          'weight' => '0',
        ),
        'language' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '9',
            'visible' => true,
          ),
        ),
      ),
    ),
    );
    $export['field_bundle_settings_node__page'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__pages';
    $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => true,
      ),
      'full' => array(
        'custom_settings' => false,
      ),
      'rss' => array(
        'custom_settings' => false,
      ),
      'search_index' => array(
        'custom_settings' => false,
      ),
      'search_result' => array(
        'custom_settings' => false,
      ),
      'diff_standard' => array(
        'custom_settings' => false,
      ),
      'print' => array(
        'custom_settings' => false,
      ),
      'token' => array(
        'custom_settings' => false,
      ),
      'revision' => array(
        'custom_settings' => false,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'language' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(),
    ),
    );
    $export['field_bundle_settings_node__pages'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__project_results';
    $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'language' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
    );
    $export['field_bundle_settings_node__project_results'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'field_bundle_settings_node__video_gallery';
    $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => false,
      ),
      'full' => array(
        'custom_settings' => true,
      ),
      'rss' => array(
        'custom_settings' => false,
      ),
      'search_index' => array(
        'custom_settings' => false,
      ),
      'search_result' => array(
        'custom_settings' => false,
      ),
      'diff_standard' => array(
        'custom_settings' => false,
      ),
      'print' => array(
        'custom_settings' => false,
      ),
      'token' => array(
        'custom_settings' => false,
      ),
      'revision' => array(
        'custom_settings' => false,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'language' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '6',
            'visible' => false,
          ),
          'full' => array(
            'weight' => '6',
            'visible' => false,
          ),
        ),
      ),
    ),
    );
    $export['field_bundle_settings_node__video_gallery'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_actions';
    $strongarm->value = '4';
    $export['language_content_type_actions'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_articles';
    $strongarm->value = '4';
    $export['language_content_type_articles'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_eventseac';
    $strongarm->value = '4';
    $export['language_content_type_eventseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_external_calls';
    $strongarm->value = '4';
    $export['language_content_type_external_calls'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_highlights';
    $strongarm->value = '4';
    $export['language_content_type_highlights'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_newseac';
    $strongarm->value = '4';
    $export['language_content_type_newseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_pages';
    $strongarm->value = '4';
    $export['language_content_type_pages'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_project_results';
    $strongarm->value = '4';
    $export['language_content_type_project_results'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'language_content_type_video_gallery';
    $strongarm->value = '4';
    $export['language_content_type_video_gallery'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'menu_options_actions';
    $strongarm->value = array(
    0 => 'main-menu',
    );
    $export['menu_options_actions'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'menu_options_articles';
    $strongarm->value = array(
    0 => 'main-menu',
    );
    $export['menu_options_articles'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'menu_options_eventseac';
    $strongarm->value = array(
    0 => 'main-menu',
    );
    $export['menu_options_eventseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'menu_options_external_calls';
    $strongarm->value = array(
    0 => 'main-menu',
    );
    $export['menu_options_external_calls'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'menu_options_highlights';
    $strongarm->value = array(
    0 => 'menu-menu-about',
    );
    $export['menu_options_highlights'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'menu_options_newseac';
    $strongarm->value = array(
    0 => 'main-menu',
    );
    $export['menu_options_newseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'menu_options_pages';
    $strongarm->value = array(
    0 => 'main-menu',
    );
    $export['menu_options_pages'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'menu_options_project_results';
    $strongarm->value = array(
    0 => 'main-menu',
    );
    $export['menu_options_project_results'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'menu_options_video_gallery';
    $strongarm->value = array(
    0 => 'main-menu',
    );
    $export['menu_options_video_gallery'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'menu_parent_actions';
    $strongarm->value = 'main-menu:0';
    $export['menu_parent_actions'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'menu_parent_articles';
    $strongarm->value = 'main-menu:0';
    $export['menu_parent_articles'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'menu_parent_eventseac';
    $strongarm->value = 'main-menu:0';
    $export['menu_parent_eventseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'menu_parent_external_calls';
    $strongarm->value = 'main-menu:0';
    $export['menu_parent_external_calls'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'menu_parent_highlights';
    $strongarm->value = 'menu-menu-about:0';
    $export['menu_parent_highlights'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'menu_parent_newseac';
    $strongarm->value = 'main-menu:1322';
    $export['menu_parent_newseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'menu_parent_pages';
    $strongarm->value = 'main-menu:0';
    $export['menu_parent_pages'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'menu_parent_project_results';
    $strongarm->value = 'main-menu:0';
    $export['menu_parent_project_results'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'menu_parent_video_gallery';
    $strongarm->value = 'main-menu:0';
    $export['menu_parent_video_gallery'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_options_actions';
    $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
    );
    $export['node_options_actions'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_options_articles';
    $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
    );
    $export['node_options_articles'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_options_eventseac';
    $strongarm->value = array();
    $export['node_options_eventseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_options_external_calls';
    $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
    );
    $export['node_options_external_calls'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_options_highlights';
    $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
    );
    $export['node_options_highlights'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_options_newseac';
    $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
    );
    $export['node_options_newseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_options_pages';
    $strongarm->value = array();
    $export['node_options_pages'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_options_project_results';
    $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
    );
    $export['node_options_project_results'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_options_video_gallery';
    $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
    );
    $export['node_options_video_gallery'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_preview_articles';
    $strongarm->value = '1';
    $export['node_preview_articles'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_preview_eventseac';
    $strongarm->value = '0';
    $export['node_preview_eventseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_preview_external_calls';
    $strongarm->value = '0';
    $export['node_preview_external_calls'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_preview_highlights';
    $strongarm->value = '1';
    $export['node_preview_highlights'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_preview_newseac';
    $strongarm->value = '1';
    $export['node_preview_newseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_preview_pages';
    $strongarm->value = '0';
    $export['node_preview_pages'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_preview_project_results';
    $strongarm->value = '0';
    $export['node_preview_project_results'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_preview_video_gallery';
    $strongarm->value = '1';
    $export['node_preview_video_gallery'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_submitted_actions';
    $strongarm->value = 1;
    $export['node_submitted_actions'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_submitted_articles';
    $strongarm->value = 0;
    $export['node_submitted_articles'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_submitted_eventseac';
    $strongarm->value = 0;
    $export['node_submitted_eventseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_submitted_external_calls';
    $strongarm->value = 0;
    $export['node_submitted_external_calls'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_submitted_highlights';
    $strongarm->value = 0;
    $export['node_submitted_highlights'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_submitted_newseac';
    $strongarm->value = 0;
    $export['node_submitted_newseac'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_submitted_pages';
    $strongarm->value = 1;
    $export['node_submitted_pages'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_submitted_project_results';
    $strongarm->value = 0;
    $export['node_submitted_project_results'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = false; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'node_submitted_video_gallery';
    $strongarm->value = 1;
    $export['node_submitted_video_gallery'] = $strongarm;

    return $export;
}
