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
  $ds_fieldsetting->id = 'node|section|section_dark';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'section';
  $ds_fieldsetting->view_mode = 'section_dark';
  $ds_fieldsetting->settings = array(
    'field_view' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'section-inner',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_acton_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'contact-form',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_heading' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => 'section-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|section|section_dark'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|section|section_light';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'section';
  $ds_fieldsetting->view_mode = 'section_light';
  $ds_fieldsetting->settings = array(
    'field_acton_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'contact-form',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_heading' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => 'section-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|section|section_light'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function monster_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|section|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'section';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'title_field',
        2 => 'field_view',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'title_field' => 'ds_content',
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
  $export['node|section|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|section|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'section';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(),
    'fields' => array(),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|section|full'] = $ds_layout;

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
        0 => 'group_banner',
        1 => 'field_heading',
        2 => 'field_banner_image',
        3 => 'body',
        4 => 'field_banner_text',
        5 => 'field_view',
        6 => 'field_add_this',
        7 => 'group_sidebar',
        8 => 'field_sidebar_text',
        9 => 'field_acton_url',
      ),
    ),
    'fields' => array(
      'group_banner' => 'ds_content',
      'field_heading' => 'ds_content',
      'field_banner_image' => 'ds_content',
      'body' => 'ds_content',
      'field_banner_text' => 'ds_content',
      'field_view' => 'ds_content',
      'field_add_this' => 'ds_content',
      'group_sidebar' => 'ds_content',
      'field_sidebar_text' => 'ds_content',
      'field_acton_url' => 'ds_content',
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
  $ds_layout->id = 'node|section|section_light';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'section';
  $ds_layout->view_mode = 'section_light';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_banner',
        1 => 'field_banner_image',
        2 => 'field_banner_text',
        3 => 'field_heading',
        4 => 'field_sidebar_text',
        5 => 'body',
        6 => 'field_view',
        7 => 'field_acton_url',
        8 => 'field_add_this',
        9 => 'group_sidebar',
      ),
    ),
    'fields' => array(
      'group_banner' => 'ds_content',
      'field_banner_image' => 'ds_content',
      'field_banner_text' => 'ds_content',
      'field_heading' => 'ds_content',
      'field_sidebar_text' => 'ds_content',
      'body' => 'ds_content',
      'field_view' => 'ds_content',
      'field_acton_url' => 'ds_content',
      'field_add_this' => 'ds_content',
      'group_sidebar' => 'ds_content',
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
  $export['node|section|section_light'] = $ds_layout;

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
  $ds_view_mode->view_mode = 'section_light';
  $ds_view_mode->label = 'Section: Light';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['section_light'] = $ds_view_mode;

  return $export;
}
