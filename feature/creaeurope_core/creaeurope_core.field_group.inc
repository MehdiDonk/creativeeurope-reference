<?php
/**
 * @file
 * creaeurope_core.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function creaeurope_core_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eac_events_content|node|eventseac|form';
  $field_group->group_name = 'group_eac_events_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'eventseac';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_images',
      2 => 'field_abstract',
      3 => 'field_files',
      4 => 'field_categories',
      5 => 'field_events_find_out_more',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-eac-events-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_eac_events_content|node|eventseac|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eac_events_info|node|eventseac|form';
  $field_group->group_name = 'group_eac_events_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'eventseac';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event informations',
    'weight' => '3',
    'children' => array(
      0 => 'field_date_from',
      1 => 'field_event_location',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-eac-events-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_eac_events_info|node|eventseac|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eac_events_metadata|node|eventseac|form';
  $field_group->group_name = 'group_eac_events_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'eventseac';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '5',
    'children' => array(
      0 => 'field_meta_description',
      1 => 'field_tags',
      2 => 'og_group_ref',
      3 => 'group_content_access',
      4 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-eac-events-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_eac_events_metadata|node|eventseac|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eac_news_content|node|news|form';
  $field_group->group_name = 'group_eac_news_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'newseac';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_images',
      2 => 'field_abstract',
      3 => 'field_files',
      4 => 'field_categories',
      5 => 'field_news_find_out_more',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-eac-news-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_eac_news_content|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eac_news_metadata|node|news|form';
  $field_group->group_name = 'group_eac_news_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'newseac';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '5',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'group_content_access',
      2 => 'field_tags',
      3 => 'field_meta_description',
      4 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-eac-news-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_eac_news_metadata|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_events_imagegallery|node|events|form';
  $field_group->group_name = 'group_events_imagegallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'eventseac';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images gallery',
    'weight' => '4',
    'children' => array(
      0 => 'field_images_gallery',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-events-imagegallery field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_events_imagegallery|node|events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_external_calls_content|node|external_calls|form';
  $field_group->group_name = 'group_external_calls_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'external_calls';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_calls_type',
      2 => 'field_status',
      3 => 'field_calls_reference',
      4 => 'field_calls_deadline',
      5 => 'field_link',
      6 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-external-calls-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_external_calls_content|node|external_calls|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_external_metadata|node|external_calls|form';
  $field_group->group_name = 'group_external_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'external_calls';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '3',
    'children' => array(
      0 => 'field_meta_description',
      1 => 'field_tags',
      2 => 'og_group_ref',
      3 => 'group_content_access',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-external-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_external_metadata|node|external_calls|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_highlights_content|node|highlights|form';
  $field_group->group_name = 'group_highlights_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'highlights';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_abstract',
      2 => 'field_images',
      3 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-highlights-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_highlights_content|node|highlights|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_highlights_imagesgallery|node|highlights|form';
  $field_group->group_name = 'group_highlights_imagesgallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'highlights';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images gallery',
    'weight' => '2',
    'children' => array(
      0 => 'field_images_gallery',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_highlights_imagesgallery|node|highlights|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_highlights_metadata|node|highlights|form';
  $field_group->group_name = 'group_highlights_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'highlights';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '3',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_meta_description',
      2 => 'field_tags',
      3 => 'group_content_access',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_highlights_metadata|node|highlights|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_imagegallery|node|news|form';
  $field_group->group_name = 'group_news_imagegallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'newseac';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images gallery',
    'weight' => '3',
    'children' => array(
      0 => 'field_images_gallery',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-news-imagegallery field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_news_imagegallery|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pages_content|node|pages|form';
  $field_group->group_name = 'group_pages_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pages';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_picto_title',
      2 => 'field_page_banner',
      3 => 'field_category',
      4 => 'field_abstract',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-pages-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pages_content|node|pages|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pages_imagegallery|node|pages|form';
  $field_group->group_name = 'group_pages_imagegallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pages';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images gallery',
    'weight' => '2',
    'children' => array(
      0 => 'field_images_gallery',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-pages-imagegallery field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pages_imagegallery|node|pages|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pages_metadata|node|pages|form';
  $field_group->group_name = 'group_pages_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pages';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '3',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'group_content_access',
      2 => 'field_tags',
      3 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-pages-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pages_metadata|node|pages|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_projectresults_content|node|project_results|form';
  $field_group->group_name = 'group_projectresults_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_results';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_images',
      2 => 'field_button_project',
      3 => 'field_url_project',
      4 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-projectresults-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_projectresults_content|node|project_results|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_projectresults_metadata|node|project_results|form';
  $field_group->group_name = 'group_projectresults_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_results';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '3',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_tags',
      2 => 'group_content_access',
      3 => 'field_meta_description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-projectresults-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_projectresults_metadata|node|project_results|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video_content|node|video_gallery|form';
  $field_group->group_name = 'group_video_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_duration',
      2 => 'field_embed_code',
      3 => 'field_video_thumb',
      4 => 'field_video_abstract',
      5 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_video_content|node|video_gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video_metadata|node|video_gallery|form';
  $field_group->group_name = 'group_video_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '2',
    'children' => array(
      0 => 'field_meta_description',
      1 => 'field_tags',
      2 => 'og_group_ref',
      3 => 'group_content_access',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_video_metadata|node|video_gallery|form'] = $field_group;

  return $export;
}
