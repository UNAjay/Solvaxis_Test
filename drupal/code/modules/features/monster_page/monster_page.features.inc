<?php
/**
 * @file
 * monster_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function monster_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
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
function monster_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function monster_page_image_default_styles() {
  $styles = array();

  // Exported image style: logo_grayscale.
  $styles['logo_grayscale'] = array(
    'label' => 'logo_grayscale',
    'effects' => array(
      5 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 100,
        ),
        'weight' => -10,
      ),
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 80,
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
      6 => array(
        'name' => 'imagecache_alpha',
        'data' => array(
          'opacity' => 1,
          'RGB' => array(
            'HEX' => '#000000',
          ),
          'flatten' => 0,
        ),
        'weight' => -8,
      ),
      3 => array(
        'name' => 'imagecache_desaturatealpha',
        'data' => array(),
        'weight' => -7,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function monster_page_node_info() {
  $items = array(
    'section' => array(
      'name' => t('Section'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
