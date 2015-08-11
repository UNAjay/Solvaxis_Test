<?php
/**
 * @file
 * monster_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function monster_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|section|section_text';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'section';
  $ds_fieldsetting->view_mode = 'section_text';
  $ds_fieldsetting->settings = array(
    'field_add_this' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|section|section_text'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function monster_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|section|section_dark';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'section';
  $ds_layout->view_mode = 'section_dark';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_view',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_view' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|section|section_dark'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|section|section_text';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'section';
  $ds_layout->view_mode = 'section_text';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_add_this',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_add_this' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|section|section_text'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|section|section_view';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'section';
  $ds_layout->view_mode = 'section_view';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_view',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_view' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|section|section_view'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function monster_page_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'section_dark';
  $ds_view_mode->label = 'Section: Dark';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['section_dark'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'section_text';
  $ds_view_mode->label = 'Section: Text';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['section_text'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'section_view';
  $ds_view_mode->label = 'Section: View';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['section_view'] = $ds_view_mode;

  return $export;
}
