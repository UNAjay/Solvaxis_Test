<?php
/**
 * @file
 * feature_xml_sitemap.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_xml_sitemap_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
