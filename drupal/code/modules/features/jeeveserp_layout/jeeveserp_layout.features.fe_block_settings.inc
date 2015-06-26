<?php
/**
 * @file
 * jeeveserp_layout.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function jeeveserp_layout_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['site_socialicons-site_socialicons_global'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'site_socialicons_global',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'site_socialicons',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garp',
        'weight' => 0,
      ),
    ),
    'title' => 'Follow us',
    'visibility' => 0,
  );

  return $export;
}
