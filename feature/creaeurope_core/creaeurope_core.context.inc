<?php
/**
 * @file
 * creaeurope_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function creaeurope_core_context_default_contexts() 
{
    $export = array();

    $context = new stdClass();
    $context->disabled = false; /* Edit this to true to make a default context disabled initially */
    $context->api_version = 3;
    $context->name = 'about';
    $context->description = '';
    $context->tag = 'pages';
    $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
        'about_en' => 'about_en',
      ),
    ),
    );
    $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-36' => array(
          'module' => 'block',
          'delta' => '36',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'whatsnew',
          'weight' => '-10',
        ),
        'views-4867045e8ef1f6db72e30efe15d729ee' => array(
          'module' => 'views',
          'delta' => '4867045e8ef1f6db72e30efe15d729ee',
          'region' => 'projectresults',
          'weight' => '-10',
        ),
        'block-10' => array(
          'module' => 'block',
          'delta' => '10',
          'region' => 'sections',
          'weight' => '-10',
        ),
        'block-9' => array(
          'module' => 'block',
          'delta' => '9',
          'region' => 'strands',
          'weight' => '-10',
        ),
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'actions',
          'weight' => '-10',
        ),
      ),
    ),
    );
    $context->condition_mode = 0;

    // Translatables
    // Included for use with string extractors like potx.
    t('pages');
    $export['about'] = $context;

    $context = new stdClass();
    $context->disabled = false; /* Edit this to true to make a default context disabled initially */
    $context->api_version = 3;
    $context->name = 'contact';
    $context->description = '';
    $context->tag = 'pages';
    $context->conditions = array(
    'menu' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
    );
    $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-35' => array(
          'module' => 'block',
          'delta' => '35',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'block-20' => array(
          'module' => 'block',
          'delta' => '20',
          'region' => 'whatsnew',
          'weight' => '-10',
        ),
      ),
    ),
    );
    $context->condition_mode = 0;

    // Translatables
    // Included for use with string extractors like potx.
    t('pages');
    $export['contact'] = $context;

    $context = new stdClass();
    $context->disabled = false; /* Edit this to true to make a default context disabled initially */
    $context->api_version = 3;
    $context->name = 'crosssector';
    $context->description = '';
    $context->tag = 'pages';
    $context->conditions = array(
    'menu' => array(
      'values' => array(
        'crosssector' => 'crosssector',
      ),
    ),
    );
    $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-21' => array(
          'module' => 'block',
          'delta' => '21',
          'region' => 'whatsnew',
          'weight' => '-10',
        ),
      ),
    ),
    );
    $context->condition_mode = 0;

    // Translatables
    // Included for use with string extractors like potx.
    t('pages');
    $export['crosssector'] = $context;

    $context = new stdClass();
    $context->disabled = false; /* Edit this to true to make a default context disabled initially */
    $context->api_version = 3;
    $context->name = 'ehl';
    $context->description = '';
    $context->tag = 'Mini Site';
    $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        36 => 36,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    );
    $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-30' => array(
          'module' => 'block',
          'delta' => '30',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'ehl mini-site',
    ),
    );
    $context->condition_mode = 0;

    // Translatables
    // Included for use with string extractors like potx.
    t('Mini Site');
    $export['ehl'] = $context;

    $context = new stdClass();
    $context->disabled = false; /* Edit this to true to make a default context disabled initially */
    $context->api_version = 3;
    $context->name = 'news-events-calls';
    $context->description = '';
    $context->tag = 'page';
    $context->conditions = array(
    'views' => array(
      'values' => array(
        'latest_news_events_and_calls' => 'latest_news_events_and_calls',
      ),
    ),
    );
    $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-cbc87de194ca186a4c999a3df98e2736' => array(
          'module' => 'views',
          'delta' => 'cbc87de194ca186a4c999a3df98e2736',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'views-a34d8ad1cfac56f3a67896dc20789772' => array(
          'module' => 'views',
          'delta' => 'a34d8ad1cfac56f3a67896dc20789772',
          'region' => 'content_top',
          'weight' => '-9',
        ),
        'views-cde05bcd5f0dc019ff27b91bfc87b4f8' => array(
          'module' => 'views',
          'delta' => 'cde05bcd5f0dc019ff27b91bfc87b4f8',
          'region' => 'content_top',
          'weight' => '-8',
        ),
        'block-31' => array(
          'module' => 'block',
          'delta' => '31',
          'region' => 'content_right',
          'weight' => '-10',
        ),
        'views-c301b5db8af6f0ae8050c6e5d7ab83d8' => array(
          'module' => 'views',
          'delta' => 'c301b5db8af6f0ae8050c6e5d7ab83d8',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'block-32' => array(
          'module' => 'block',
          'delta' => '32',
          'region' => 'highlights',
          'weight' => '-10',
        ),
        'views-9bfa3d5c76baa8ae95081d0814dcacb9' => array(
          'module' => 'views',
          'delta' => '9bfa3d5c76baa8ae95081d0814dcacb9',
          'region' => 'whatsnew',
          'weight' => '-10',
        ),
        'block-33' => array(
          'module' => 'block',
          'delta' => '33',
          'region' => 'sections',
          'weight' => '-10',
        ),
        'views-8600f4bb230eb510dc3845c210380657' => array(
          'module' => 'views',
          'delta' => '8600f4bb230eb510dc3845c210380657',
          'region' => 'strands',
          'weight' => '-10',
        ),
      ),
    ),
    );
    $context->condition_mode = 0;

    // Translatables
    // Included for use with string extractors like potx.
    t('page');
    $export['news-events-calls'] = $context;

    $context = new stdClass();
    $context->disabled = false; /* Edit this to true to make a default context disabled initially */
    $context->api_version = 3;
    $context->name = 'overview';
    $context->description = '';
    $context->tag = 'media';
    $context->conditions = array(
    'path' => array(
      'values' => array(
        'media' => 'media',
        'media_en' => 'media_en',
      ),
    ),
    );
    $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-24' => array(
          'module' => 'block',
          'delta' => '24',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'block-19' => array(
          'module' => 'block',
          'delta' => '19',
          'region' => 'highlights',
          'weight' => '-10',
        ),
        'block-15' => array(
          'module' => 'block',
          'delta' => '15',
          'region' => 'whatsnew',
          'weight' => '-10',
        ),
        'views-project_results-block_1' => array(
          'module' => 'views',
          'delta' => 'project_results-block_1',
          'region' => 'projectresults',
          'weight' => '-10',
        ),
        'block-16' => array(
          'module' => 'block',
          'delta' => '16',
          'region' => 'sections',
          'weight' => '-10',
        ),
        'views-list_of_opportunities-block' => array(
          'module' => 'views',
          'delta' => 'list_of_opportunities-block',
          'region' => 'strands',
          'weight' => '-10',
        ),
        'block-18' => array(
          'module' => 'block',
          'delta' => '18',
          'region' => 'actions',
          'weight' => '-10',
        ),
      ),
    ),
    );
    $context->condition_mode = 0;

    // Translatables
    // Included for use with string extractors like potx.
    t('media');
    $export['overview'] = $context;

    $context = new stdClass();
    $context->disabled = false; /* Edit this to true to make a default context disabled initially */
    $context->api_version = 3;
    $context->name = 'overview-culture';
    $context->description = '';
    $context->tag = 'culture';
    $context->conditions = array(
    'path' => array(
      'values' => array(
        'culture' => 'culture',
        'culture_en' => 'culture_en',
      ),
    ),
    );
    $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-25' => array(
          'module' => 'block',
          'delta' => '25',
          'region' => 'content_top',
          'weight' => '-9',
        ),
        'block-27' => array(
          'module' => 'block',
          'delta' => '27',
          'region' => 'highlights',
          'weight' => '-9',
        ),
        'block-28' => array(
          'module' => 'block',
          'delta' => '28',
          'region' => 'whatsnew',
          'weight' => '-9',
        ),
        'views-project_results-block_1' => array(
          'module' => 'views',
          'delta' => 'project_results-block_1',
          'region' => 'projectresults',
          'weight' => '-10',
        ),
        'block-26' => array(
          'module' => 'block',
          'delta' => '26',
          'region' => 'sections',
          'weight' => '-9',
        ),
        'views-list_of_opportunities-block_1' => array(
          'module' => 'views',
          'delta' => 'list_of_opportunities-block_1',
          'region' => 'strands',
          'weight' => '-9',
        ),
        'block-18' => array(
          'module' => 'block',
          'delta' => '18',
          'region' => 'actions',
          'weight' => '-10',
        ),
      ),
    ),
    );
    $context->condition_mode = 0;

    // Translatables
    // Included for use with string extractors like potx.
    t('culture');
    $export['overview-culture'] = $context;

    $context = new stdClass();
    $context->disabled = false; /* Edit this to true to make a default context disabled initially */
    $context->api_version = 3;
    $context->name = 'overview_action';
    $context->description = '';
    $context->tag = 'actions';
    $context->conditions = array(
    'menu' => array(
      'values' => array(
        'actions' => 'actions',
      ),
    ),
    );
    $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-29' => array(
          'module' => 'block',
          'delta' => '29',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'views-actions-block_1' => array(
          'module' => 'views',
          'delta' => 'actions-block_1',
          'region' => 'projectresults',
          'weight' => '-10',
        ),
        'block-22' => array(
          'module' => 'block',
          'delta' => '22',
          'region' => 'column_left',
          'weight' => '-9',
        ),
      ),
    ),
    );
    $context->condition_mode = 0;

    // Translatables
    // Included for use with string extractors like potx.
    t('actions');
    $export['overview_action'] = $context;

    $context = new stdClass();
    $context->disabled = false; /* Edit this to true to make a default context disabled initially */
    $context->api_version = 3;
    $context->name = 'video-game-development';
    $context->description = '';
    $context->tag = 'media';
    $context->conditions = array(
    'menu' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    );
    $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-share-on-facebook-and-twitter' => array(
          'module' => 'bean',
          'delta' => 'share-on-facebook-and-twitter',
          'region' => 'sidebar_right',
          'weight' => '-10',
        ),
        'views-similar_nodes-block' => array(
          'module' => 'views',
          'delta' => 'similar_nodes-block',
          'region' => 'sidebar_right',
          'weight' => '-9',
        ),
        'views-highlights-block_1' => array(
          'module' => 'views',
          'delta' => 'highlights-block_1',
          'region' => 'sidebar_right',
          'weight' => '-8',
        ),
        'views-calls-block' => array(
          'module' => 'views',
          'delta' => 'calls-block',
          'region' => 'sidebar_right',
          'weight' => '-7',
        ),
        'block-13' => array(
          'module' => 'block',
          'delta' => '13',
          'region' => 'sidebar_right',
          'weight' => '-6',
        ),
      ),
    ),
    );
    $context->condition_mode = 0;

    // Translatables
    // Included for use with string extractors like potx.
    t('media');
    $export['video-game-development'] = $context;

    return $export;
}
