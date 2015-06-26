<?php
/**
 * @file
 * partners.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function partners_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|partner|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'partner';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'partner_offices_block' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-partner-offices offices',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'related_success_stories' => array(
      'weight' => '6',
      'label' => 'above',
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
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'body',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_acton_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'contact-form',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_product' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|partner|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function partners_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'partner_offices_block';
  $ds_field->label = 'Partner offices block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'partner|*';
  $ds_field->properties = array(
    'block' => 'views|partner-offices',
    'block_render' => '3',
  );
  $export['partner_offices_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'partners_view';
  $ds_field->label = 'Partners view';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|partner-block_1',
    'block_render' => '3',
  );
  $export['partners_view'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'related_success_stories';
  $ds_field->label = 'Related success stories';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|partner-block_2',
    'block_render' => '1',
  );
  $export['related_success_stories'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function partners_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|partner|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'partner';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'jeeves_eleven_five';
  $ds_layout->settings = array(
    'regions' => array(
      'main_primary' => array(
        0 => 'title',
        1 => 'body',
        2 => 'field_partner_level',
        3 => 'field_product',
        4 => 'field_partner_numofcertconsulta',
        5 => 'field_partner_numofcerts',
        6 => 'related_success_stories',
      ),
      'aside_primary' => array(
        7 => 'field_partner_logo',
        8 => 'partner_offices_block',
        9 => 'field_acton_url',
      ),
    ),
    'fields' => array(
      'title' => 'main_primary',
      'body' => 'main_primary',
      'field_partner_level' => 'main_primary',
      'field_product' => 'main_primary',
      'field_partner_numofcertconsulta' => 'main_primary',
      'field_partner_numofcerts' => 'main_primary',
      'related_success_stories' => 'main_primary',
      'field_partner_logo' => 'aside_primary',
      'partner_offices_block' => 'aside_primary',
      'field_acton_url' => 'aside_primary',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main_primary' => 'div',
      'aside_primary' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|partner|default'] = $ds_layout;

  return $export;
}
