<?php
/**
 * @file
 * landing_pages.ckeditor_style_rules.inc
 */

/**
 * Implements hook_ckeditor_style_rule_default().
 */
function landing_pages_ckeditor_style_rule_default() {
  $export = array();

  $ckeditor_style_rule = new stdClass();
  $ckeditor_style_rule->disabled = FALSE; /* Edit this to true to make a default ckeditor_style_rule disabled initially */
  $ckeditor_style_rule->api_version = 1;
  $ckeditor_style_rule->rid = '2';
  $ckeditor_style_rule->name = 'Call to action';
  $ckeditor_style_rule->machine_name = 'call_to_action';
  $ckeditor_style_rule->styleset = '-all-';
  $ckeditor_style_rule->description = '';
  $ckeditor_style_rule->element = 'p';
  $ckeditor_style_rule->attributes = array(
    'class' => 'call-to-action',
    'style' => '',
  );
  $export['call_to_action'] = $ckeditor_style_rule;

  return $export;
}
