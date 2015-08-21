<?php
/**
 * @file
 * landing_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landing_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
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
function landing_pages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function landing_pages_eck_bundle_info() {
  $items = array(
    'slide_slide' => array(
      'machine_name' => 'slide_slide',
      'entity_type' => 'slide',
      'name' => 'slide',
      'label' => 'Slide',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function landing_pages_eck_entity_type_info() {
  $items = array(
    'slide' => array(
      'name' => 'slide',
      'label' => 'Slide',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'language' => array(
          'label' => 'Entity language',
          'type' => 'language',
          'behavior' => 'language',
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_image_default_styles().
 */
function landing_pages_image_default_styles() {
  $styles = array();

  // Exported image style: slide.
  $styles['slide'] = array(
    'label' => 'Slide (1004x400)',
    'effects' => array(
      1 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 964,
          'height' => 415,
          'strength' => 'high',
          'fallback' => 'image',
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function landing_pages_node_info() {
  $items = array(
    'full_page' => array(
      'name' => t('Fullscreen page'),
      'base' => 'node_content',
      'description' => t('Fullscreen page content for section embedding'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'landing_page' => array(
      'name' => t('Landing page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page_section' => array(
      'name' => t('Page section'),
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
