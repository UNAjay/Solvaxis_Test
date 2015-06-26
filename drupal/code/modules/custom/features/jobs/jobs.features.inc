<?php
/**
 * @file
 * jobs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jobs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "deploy" && $api == "deploy_endpoints") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function jobs_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function jobs_node_info() {
  $items = array(
    'job_posting' => array(
      'name' => t('Job posting'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Job Title'),
      'help' => '',
    ),
  );
  return $items;
}
