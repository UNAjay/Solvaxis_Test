<?php
/**
 * @file
 * jobs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jobs_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__job_posting';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'ds_success_stories' => array(
        'custom_settings' => FALSE,
      ),
      'ds_contact_us' => array(
        'custom_settings' => FALSE,
      ),
      'blogs' => array(
        'custom_settings' => FALSE,
      ),
      'company' => array(
        'custom_settings' => FALSE,
      ),
      'customers' => array(
        'custom_settings' => FALSE,
      ),
      'events' => array(
        'custom_settings' => FALSE,
      ),
      'frontpage' => array(
        'custom_settings' => FALSE,
      ),
      'industries' => array(
        'custom_settings' => FALSE,
      ),
      'news' => array(
        'custom_settings' => FALSE,
      ),
      'partners' => array(
        'custom_settings' => FALSE,
      ),
      'resources_events' => array(
        'custom_settings' => FALSE,
      ),
      'resources_files' => array(
        'custom_settings' => FALSE,
      ),
      'resources_video' => array(
        'custom_settings' => FALSE,
      ),
      'ds_section' => array(
        'custom_settings' => FALSE,
      ),
      'ds_with_sidebar' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'ds_job_listing' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'language' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(
        'job_posting_sites_sites' => array(
          'default' => array(
            'weight' => '41',
            'visible' => FALSE,
          ),
        ),
        'job_postings_entity_view_1' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'job_postings_sites' => array(
          'default' => array(
            'weight' => '42',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_job_posting';
  $strongarm->value = '4';
  $export['language_content_type_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_job_posting';
  $strongarm->value = array();
  $export['menu_options_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_job_posting';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_job_posting';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_job_posting';
  $strongarm->value = '0';
  $export['node_preview_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_job_posting';
  $strongarm->value = 0;
  $export['node_submitted_job_posting'] = $strongarm;

  return $export;
}
