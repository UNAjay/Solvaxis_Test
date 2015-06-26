<?php
/**
 * @file
 * jeeveserp_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jeeveserp_layout_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ckeditor_styles" && $api == "ckeditor_style_rules") {
    return array("version" => "1");
  }
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
function jeeveserp_layout_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function jeeveserp_layout_image_default_styles() {
  $styles = array();

  // Exported image style: logo_listing_image.
  $styles['logo_listing_image'] = array(
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 231,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'logo_listing_image',
  );

  // Exported image style: related_listing_image.
  $styles['related_listing_image'] = array(
    'label' => 'related_listing_image',
    'effects' => array(
      3 => NULL,
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function jeeveserp_layout_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}