<?php
/**
 * @file
 * Theme-settings.php.
 *
 * PHP version 5
 *
 * @category Production
 *
 * @package ErasmusCore/Theme
 *
 * @author EAC WEB <EAC-LIST-C4@nomail.ec.europa.eu>
 *
 * @copyright 2015 European-Commission
 *
 * @license http://ec.europa.eu Europa
 * @link NA
 *
 * Theme setting callbacks for the creative europe theme.
 */

/**
 * Implements hook_form_FORM_ID_alter() for system_theme_settings().
 */
function creaeurope_form_system_theme_settings_alter(&$form, &$form_state) {
  $form['headline'] = array(
    '#type' => 'textfield',
    '#title' => t('Headline'),
    '#default_value' => theme_get_setting('headline'),
    '#description' => t('Place this text in headline spot on your site.'),
  );
  $form['tagline'] = array(
    '#type' => 'textfield',
    '#title' => t('Tagline'),
    '#default_value' => theme_get_setting('tagline'),
    '#description' => t('Place this text in tagline spot on your site.'),
  );
  $form['videohome_youtube_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Video home Youtube ID'),
    '#default_value' => theme_get_setting('videohome_youtube_id'),
  );
  $form['facebook'] = array(
    '#type' => 'textfield',
    '#title' => t('Facebook URL'),
    '#default_value' => theme_get_setting('facebook'),
    '#description' => t('URL Facebook'),
  );
  $form['twitter'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter URL'),
    '#default_value' => theme_get_setting('twitter'),
    '#description' => t('URL Twitter'),
  );
  $form['videoabout'] = array(
    '#type' => 'textfield',
    '#title' => t('Absolute path to the mp4'),
    '#default_value' => theme_get_setting('videoabout'),
    '#description' => t('Absolute path to the mp4'),
  );
  $form['newsletter'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter URL'),
    '#default_value' => theme_get_setting('twitter'),
    '#description' => t('URL Newsletter'),
  );
}
