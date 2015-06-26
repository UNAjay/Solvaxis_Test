<?php
/**
 * @file
 * news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function news_ctools_plugin_api($module = NULL, $api = NULL) {
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
function news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function news_image_default_styles() {
  $styles = array();

  // Exported image style: news_image.
  $styles['news_image'] = array(
    'label' => 'news_image',
    'effects' => array(
      4 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 250,
          'strength' => 'high',
          'fallback' => 'smartcrop',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('News item'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}