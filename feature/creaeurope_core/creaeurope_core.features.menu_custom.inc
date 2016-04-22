<?php
/**
 * @file
 * creaeurope_core.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function creaeurope_core_menu_default_menu_custom() 
{
    $menus = array();

    // Exported menu: main-menu.
    $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => 0,
    );
    // Exported menu: management.
    $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
    'language' => 'und',
    'i18n_mode' => 0,
    );
    // Exported menu: menu-european-heritage-label.
    $menus['menu-european-heritage-label'] = array(
    'menu_name' => 'menu-european-heritage-label',
    'title' => 'European Heritage Label',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
    );
    // Translatables
    // Included for use with string extractors like potx.
    t('European Heritage Label');
    t('Main menu');
    t('Management');
    t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
    t('The <em>Management</em> menu contains links for administrative tasks.');

    return $menus;
}