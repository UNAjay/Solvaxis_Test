<?php
/**
 * @file
 * jeeveserp_layout.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function jeeveserp_layout_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Copyright';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'copyright';
  $fe_block_boxes->body = '<p>Solvaxis - All rights reserved.</p>';

  $export['copyright'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Solvaxis footer info';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_info';
  $fe_block_boxes->body = '<p>SOLVAXIS SA</p><p>Switzerland</p>';

  $export['footer_info'] = $fe_block_boxes;

  return $export;
}
