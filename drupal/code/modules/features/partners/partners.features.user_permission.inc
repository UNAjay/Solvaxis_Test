<?php
/**
 * @file
 * partners.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function partners_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create partner content'.
  $permissions['create partner content'] = array(
    'name' => 'create partner content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create partner_office content'.
  $permissions['create partner_office content'] = array(
    'name' => 'create partner_office content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any partner content'.
  $permissions['delete any partner content'] = array(
    'name' => 'delete any partner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any partner_office content'.
  $permissions['delete any partner_office content'] = array(
    'name' => 'delete any partner_office content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own partner content'.
  $permissions['delete own partner content'] = array(
    'name' => 'delete own partner content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own partner_office content'.
  $permissions['delete own partner_office content'] = array(
    'name' => 'delete own partner_office content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any partner content'.
  $permissions['edit any partner content'] = array(
    'name' => 'edit any partner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any partner_office content'.
  $permissions['edit any partner_office content'] = array(
    'name' => 'edit any partner_office content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own partner_office content'.
  $permissions['edit own partner_office content'] = array(
    'name' => 'edit own partner_office content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
