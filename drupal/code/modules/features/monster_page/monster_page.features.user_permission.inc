<?php
/**
 * @file
 * monster_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function monster_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create section content'.
  $permissions['create section content'] = array(
    'name' => 'create section content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any section content'.
  $permissions['delete any section content'] = array(
    'name' => 'delete any section content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own section content'.
  $permissions['delete own section content'] = array(
    'name' => 'delete own section content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any section content'.
  $permissions['edit any section content'] = array(
    'name' => 'edit any section content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own section content'.
  $permissions['edit own section content'] = array(
    'name' => 'edit own section content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'enter section revision log entry'.
  $permissions['enter section revision log entry'] = array(
    'name' => 'enter section revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override section authored by option'.
  $permissions['override section authored by option'] = array(
    'name' => 'override section authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override section authored on option'.
  $permissions['override section authored on option'] = array(
    'name' => 'override section authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override section promote to front page option'.
  $permissions['override section promote to front page option'] = array(
    'name' => 'override section promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override section published option'.
  $permissions['override section published option'] = array(
    'name' => 'override section published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override section revision option'.
  $permissions['override section revision option'] = array(
    'name' => 'override section revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override section sticky option'.
  $permissions['override section sticky option'] = array(
    'name' => 'override section sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  return $permissions;
}
