<?php
/**
 * @file
 * creaeurope_core.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function creaeurope_core_contact_categories_defaults() {
  return array(
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => '',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
