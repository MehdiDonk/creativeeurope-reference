<?php
/**
 * @file
 * creaeurope_core.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function creaeurope_core_field_default_field_bases() 
{
    $field_bases = array();

    // Exported field_base: 'field_abstract'.
    $field_bases['field_abstract'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_abstract',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => false,
    ),
    'translatable' => 1,
    'type' => 'text_long',
    );

    // Exported field_base: 'field_button_project'.
    $field_bases['field_button_project'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_button_project',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => false,
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
    );

    // Exported field_base: 'field_calls_deadline'.
    $field_bases['field_calls_deadline'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_calls_deadline',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => false,
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
    );

    // Exported field_base: 'field_calls_reference'.
    $field_bases['field_calls_reference'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_calls_reference',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => false,
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
    );

    // Exported field_base: 'field_calls_type'.
    $field_bases['field_calls_type'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_calls_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'general' => 'General',
        'culture' => 'Culture sub-programme',
        'culture-cooperation-projects' => 'Cooperation projects',
        'culture-literary-translation' => 'Literary translation projects',
        'culture-european-platforms' => 'European platforms',
        'culture-european-networks' => 'European networks',
        'media' => 'MEDIA sub-programme</a>',
        'media-access-to-markets' => 'Access to markets',
        'media-access-to-markets-single-actions' => 'Access to markets Single actions',
        'media-audience-development' => 'Audience development',
        'media-networking-of-cinemas' => 'Cinema networks',
        'media-development-single-projects-slate-funding' => 'Development single projects + slate funding',
        'media-distribution' => 'Distribution',
        'media-film-festivals' => 'Film Festivals',
        'media-co-production-funds' => 'International co-production funds',
        'media-training' => 'Training',
        'media-tv-programming' => 'TV programming',
        'media-development-video-games' => 'Video game development',
        'cross_sectoral' => 'Cross-sectoral',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => false,
    ),
    'translatable' => 1,
    'type' => 'list_text',
    );

    // Exported field_base: 'field_categories'.
    $field_bases['field_categories'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_categories',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'any' => 'Any',
        'programme' => 'Programme',
        'grantloan' => 'Grant and Loan',
        'films' => 'Films',
        'events' => 'Events',
        'studies' => 'Studies',
        'policy' => 'Policy',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => false,
    ),
    'translatable' => 1,
    'type' => 'list_text',
    );

    // Exported field_base: 'field_category'.
    $field_bases['field_category'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_category',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'other' => 'Other',
        'about' => 'About',
        'culture' => 'Culture',
        'culture_01' => 'Culture 01',
        'culture_02' => 'Culture 02',
        'culture_03' => 'Culture 03',
        'culture_04' => 'Culture 04',
        'culture_05' => 'Culture 05',
        'culture_06' => 'Culture 06',
        'culture_07' => 'Culture 07',
        'culture_08' => 'Culture 08',
        'media' => 'media',
        'media_01' => 'media 01',
        'media_02' => 'media 02',
        'media_03' => 'media 03',
        'media_04' => 'media 04',
        'crossector' => 'crosssector',
        'contact' => 'contact',
        'actions' => 'actions',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => false,
    ),
    'translatable' => 0,
    'type' => 'list_text',
    );

    // Exported field_base: 'field_date_from'.
    $field_bases['field_date_from'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_date_from',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'entity_translation_sync' => false,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => 'optional',
      'tz_handling' => 'none',
    ),
    'translatable' => 1,
    'type' => 'datestamp',
    );

    // Exported field_base: 'field_duration'.
    $field_bases['field_duration'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_duration',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => false,
      'max_length' => 16,
    ),
    'translatable' => 0,
    'type' => 'text',
    );

    // Exported field_base: 'field_embed_code'.
    $field_bases['field_embed_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_embed_code',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => false,
    ),
    'translatable' => 1,
    'type' => 'text_with_summary',
    );

    // Exported field_base: 'field_event_date'.
    $field_bases['field_event_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_event_date',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'date',
    'settings' => array(
      'enddate' => 1,
      'enddate_required' => 0,
      'entity_translation_sync' => false,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'repeat' => 0,
      'timezone_db' => 'UTC',
      'todate' => 'optional',
      'tz_handling' => 'site',
    ),
    'translatable' => 0,
    'type' => 'datestamp',
    );

    // Exported field_base: 'field_event_location'.
    $field_bases['field_event_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_event_location',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => false,
    ),
    'translatable' => 1,
    'type' => 'text_long',
    );

    // Exported field_base: 'field_events_find_out_more'.
    $field_bases['field_events_find_out_more'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_events_find_out_more',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => false,
    ),
    'translatable' => 1,
    'type' => 'text_with_summary',
    );

    // Exported field_base: 'field_file_image_alt_text'.
    $field_bases['field_file_image_alt_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_alt_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => false,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
    );

    // Exported field_base: 'field_file_image_title_text'.
    $field_bases['field_file_image_title_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_title_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => false,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
    );

    // Exported field_base: 'field_files'.
    $field_bases['field_files'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_files',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 1,
    'module' => 'file',
    'settings' => array(
      'display_default' => 1,
      'display_field' => 1,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 1,
    'type' => 'file',
    );

    // Exported field_base: 'field_images'.
    $field_bases['field_images'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_images',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 1,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
    );

    // Exported field_base: 'field_images_gallery'.
    $field_bases['field_images_gallery'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_images_gallery',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 1,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 1,
    'type' => 'image',
    );

    // Exported field_base: 'field_link'.
    $field_bases['field_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_link',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => false,
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
    );

    // Exported field_base: 'field_location'.
    $field_bases['field_location'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_location',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => false,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
    );

    // Exported field_base: 'field_news_find_out_more'.
    $field_bases['field_news_find_out_more'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_news_find_out_more',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => false,
    ),
    'translatable' => 1,
    'type' => 'text_with_summary',
    );

    // Exported field_base: 'field_page_banner'.
    $field_bases['field_page_banner'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_page_banner',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 1,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
    );

    // Exported field_base: 'field_picto_title'.
    $field_bases['field_picto_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_picto_title',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 1,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
    );

    // Exported field_base: 'field_resource'.
    $field_bases['field_resource'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_resource',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 1,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'resources',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => false,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
    );

    // Exported field_base: 'field_status'.
    $field_bases['field_status'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_status',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'open' => 'Open',
        'closed' => 'Closed',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => false,
    ),
    'translatable' => 1,
    'type' => 'list_text',
    );

    // Exported field_base: 'field_url_project'.
    $field_bases['field_url_project'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_url_project',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => false,
      'max_length' => 512,
    ),
    'translatable' => 1,
    'type' => 'text',
    );

    // Exported field_base: 'field_video_abstract'.
    $field_bases['field_video_abstract'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_video_abstract',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => false,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
    );

    // Exported field_base: 'field_video_thumb'.
    $field_bases['field_video_thumb'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_video_thumb',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 1,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
    );

    // Exported field_base: 'group_content_access'.
    $field_bases['group_content_access'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'group_content_access',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'no_ui' => true,
    'settings' => array(
      'allowed_values' => array(
        0 => 'Use group defaults',
        1 => 'Public - accessible to all site users',
        2 => 'Private - accessible only to group members',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => false,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
    );

    // Exported field_base: 'og_group_ref'.
    $field_bases['og_group_ref'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'og_group_ref',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 1,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => false,
      'handler' => 'og',
      'handler_settings' => array(
        'behaviors' => array(
          'og_behavior' => array(
            'status' => true,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'membership_type' => 'og_membership_type_default',
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(),
      ),
      'handler_submit' => 'Change handler',
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
    );

    return $field_bases;
}
