<?php
/**
 * @file
 * landing_pages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function landing_pages_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create full_page content'.
  $permissions['create full_page content'] = array(
    'name' => 'create full_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create landing_page content'.
  $permissions['create landing_page content'] = array(
    'name' => 'create landing_page content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page_section content'.
  $permissions['create page_section content'] = array(
    'name' => 'create page_section content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any full_page content'.
  $permissions['delete any full_page content'] = array(
    'name' => 'delete any full_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any landing_page content'.
  $permissions['delete any landing_page content'] = array(
    'name' => 'delete any landing_page content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page_section content'.
  $permissions['delete any page_section content'] = array(
    'name' => 'delete any page_section content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own full_page content'.
  $permissions['delete own full_page content'] = array(
    'name' => 'delete own full_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own landing_page content'.
  $permissions['delete own landing_page content'] = array(
    'name' => 'delete own landing_page content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page_section content'.
  $permissions['delete own page_section content'] = array(
    'name' => 'delete own page_section content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'eck add entities'.
  $permissions['eck add entities'] = array(
    'name' => 'eck add entities',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete entities'.
  $permissions['eck delete entities'] = array(
    'name' => 'eck delete entities',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit entities'.
  $permissions['eck edit entities'] = array(
    'name' => 'eck edit entities',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view entities'.
  $permissions['eck view entities'] = array(
    'name' => 'eck view entities',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'edit any full_page content'.
  $permissions['edit any full_page content'] = array(
    'name' => 'edit any full_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any landing_page content'.
  $permissions['edit any landing_page content'] = array(
    'name' => 'edit any landing_page content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page_section content'.
  $permissions['edit any page_section content'] = array(
    'name' => 'edit any page_section content',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own full_page content'.
  $permissions['edit own full_page content'] = array(
    'name' => 'edit own full_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own landing_page content'.
  $permissions['edit own landing_page content'] = array(
    'name' => 'edit own landing_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own page_section content'.
  $permissions['edit own page_section content'] = array(
    'name' => 'edit own page_section content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
