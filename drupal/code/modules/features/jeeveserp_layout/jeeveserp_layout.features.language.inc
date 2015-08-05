<?php
/**
 * @file
 * jeeveserp_layout.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function jeeveserp_layout_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'U.S. English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => -9,
  );
  return $languages;
}
