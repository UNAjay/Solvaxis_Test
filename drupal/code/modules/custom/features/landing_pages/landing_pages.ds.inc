<?php
/**
 * @file
 * landing_pages.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function landing_pages_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|landing_page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'landing_page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'contact_form_block' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_apps' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Apps',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-clients clients',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_basic_pages' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-clients clients',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_clients' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Customer Cases',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-clients clients',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_videos' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Videos',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-clients clients',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_page_sections' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'section-container',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|landing_page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|landing_page|ds_with_sidebar';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'landing_page';
  $ds_fieldsetting->view_mode = 'ds_with_sidebar';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_basic_pages' => array(
      'formatter_settings' => array(
        'ft' => array(),
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
  );
  $export['node|landing_page|ds_with_sidebar'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function landing_pages_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|landing_page|ds_with_sidebar';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'landing_page';
  $ds_layout->view_mode = 'ds_with_sidebar';
  $ds_layout->layout = 'jeeves_stacked_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'top_primary' => array(
        0 => 'landing_page_slides_slides',
        1 => 'field_files',
        9 => 'group_resources',
      ),
      'main_primary' => array(
        2 => 'title',
        3 => 'body',
        4 => 'field_ref_news',
        5 => 'field_clients',
        8 => 'field_basic_pages',
      ),
      'aside_primary' => array(
        6 => 'field_sidebar_text',
        7 => 'field_acton_url',
      ),
    ),
    'fields' => array(
      'landing_page_slides_slides' => 'top_primary',
      'field_files' => 'top_primary',
      'title' => 'main_primary',
      'body' => 'main_primary',
      'field_ref_news' => 'main_primary',
      'field_clients' => 'main_primary',
      'field_sidebar_text' => 'aside_primary',
      'field_acton_url' => 'aside_primary',
      'field_basic_pages' => 'main_primary',
      'group_resources' => 'top_primary',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top_primary' => 'div',
      'main_primary' => 'div',
      'aside_primary' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|landing_page|ds_with_sidebar'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function landing_pages_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'ds_with_sidebar';
  $ds_view_mode->label = 'DS With sidebar';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['ds_with_sidebar'] = $ds_view_mode;

  return $export;
}
