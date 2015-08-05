<?php
/**
 * @file
 * jeeveserp_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function jeeveserp_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access direct download file'.
  $permissions['access direct download file'] = array(
    'name' => 'access direct download file',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'download_file',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'add terms in attachment_type'.
  $permissions['add terms in attachment_type'] = array(
    'name' => 'add terms in attachment_type',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in employee_region'.
  $permissions['add terms in employee_region'] = array(
    'name' => 'add terms in employee_region',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in event_locations'.
  $permissions['add terms in event_locations'] = array(
    'name' => 'add terms in event_locations',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in industries'.
  $permissions['add terms in industries'] = array(
    'name' => 'add terms in industries',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in offices'.
  $permissions['add terms in offices'] = array(
    'name' => 'add terms in offices',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in partner_location'.
  $permissions['add terms in partner_location'] = array(
    'name' => 'add terms in partner_location',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in partner_type'.
  $permissions['add terms in partner_type'] = array(
    'name' => 'add terms in partner_type',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in product'.
  $permissions['add terms in product'] = array(
    'name' => 'add terms in product',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in roles'.
  $permissions['add terms in roles'] = array(
    'name' => 'add terms in roles',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in tags'.
  $permissions['add terms in tags'] = array(
    'name' => 'add terms in tags',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(),
    'module' => 'search',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer tracking code'.
  $permissions['administer tracking code'] = array(
    'name' => 'administer tracking code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tracking_code',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in attachment_type'.
  $permissions['delete terms in attachment_type'] = array(
    'name' => 'delete terms in attachment_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in employee_region'.
  $permissions['delete terms in employee_region'] = array(
    'name' => 'delete terms in employee_region',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in event_locations'.
  $permissions['delete terms in event_locations'] = array(
    'name' => 'delete terms in event_locations',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in industries'.
  $permissions['delete terms in industries'] = array(
    'name' => 'delete terms in industries',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in offices'.
  $permissions['delete terms in offices'] = array(
    'name' => 'delete terms in offices',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in partner_location'.
  $permissions['delete terms in partner_location'] = array(
    'name' => 'delete terms in partner_location',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in partner_type'.
  $permissions['delete terms in partner_type'] = array(
    'name' => 'delete terms in partner_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in product'.
  $permissions['delete terms in product'] = array(
    'name' => 'delete terms in product',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in roles'.
  $permissions['delete terms in roles'] = array(
    'name' => 'delete terms in roles',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Product site admin' => 'Product site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit terms in attachment_type'.
  $permissions['edit terms in attachment_type'] = array(
    'name' => 'edit terms in attachment_type',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in employee_region'.
  $permissions['edit terms in employee_region'] = array(
    'name' => 'edit terms in employee_region',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in event_locations'.
  $permissions['edit terms in event_locations'] = array(
    'name' => 'edit terms in event_locations',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in industries'.
  $permissions['edit terms in industries'] = array(
    'name' => 'edit terms in industries',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in offices'.
  $permissions['edit terms in offices'] = array(
    'name' => 'edit terms in offices',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in partner_location'.
  $permissions['edit terms in partner_location'] = array(
    'name' => 'edit terms in partner_location',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in partner_type'.
  $permissions['edit terms in partner_type'] = array(
    'name' => 'edit terms in partner_type',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in product'.
  $permissions['edit terms in product'] = array(
    'name' => 'edit terms in product',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in roles'.
  $permissions['edit terms in roles'] = array(
    'name' => 'edit terms in roles',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'override attachments authored by option'.
  $permissions['override attachments authored by option'] = array(
    'name' => 'override attachments authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override attachments authored on option'.
  $permissions['override attachments authored on option'] = array(
    'name' => 'override attachments authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override attachments published option'.
  $permissions['override attachments published option'] = array(
    'name' => 'override attachments published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog_post authored by option'.
  $permissions['override blog_post authored by option'] = array(
    'name' => 'override blog_post authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog_post authored on option'.
  $permissions['override blog_post authored on option'] = array(
    'name' => 'override blog_post authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog_post published option'.
  $permissions['override blog_post published option'] = array(
    'name' => 'override blog_post published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override customer authored by option'.
  $permissions['override customer authored by option'] = array(
    'name' => 'override customer authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override customer authored on option'.
  $permissions['override customer authored on option'] = array(
    'name' => 'override customer authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override customer published option'.
  $permissions['override customer published option'] = array(
    'name' => 'override customer published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event authored by option'.
  $permissions['override event authored by option'] = array(
    'name' => 'override event authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event authored on option'.
  $permissions['override event authored on option'] = array(
    'name' => 'override event authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event published option'.
  $permissions['override event published option'] = array(
    'name' => 'override event published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override full_page authored by option'.
  $permissions['override full_page authored by option'] = array(
    'name' => 'override full_page authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override full_page authored on option'.
  $permissions['override full_page authored on option'] = array(
    'name' => 'override full_page authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override full_page published option'.
  $permissions['override full_page published option'] = array(
    'name' => 'override full_page published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override landing_page authored by option'.
  $permissions['override landing_page authored by option'] = array(
    'name' => 'override landing_page authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override landing_page authored on option'.
  $permissions['override landing_page authored on option'] = array(
    'name' => 'override landing_page authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override landing_page published option'.
  $permissions['override landing_page published option'] = array(
    'name' => 'override landing_page published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news authored by option'.
  $permissions['override news authored by option'] = array(
    'name' => 'override news authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news authored on option'.
  $permissions['override news authored on option'] = array(
    'name' => 'override news authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news promote to front page option'.
  $permissions['override news promote to front page option'] = array(
    'name' => 'override news promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news published option'.
  $permissions['override news published option'] = array(
    'name' => 'override news published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news sticky option'.
  $permissions['override news sticky option'] = array(
    'name' => 'override news sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override office authored by option'.
  $permissions['override office authored by option'] = array(
    'name' => 'override office authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override office authored on option'.
  $permissions['override office authored on option'] = array(
    'name' => 'override office authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override office published option'.
  $permissions['override office published option'] = array(
    'name' => 'override office published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page authored by option'.
  $permissions['override page authored by option'] = array(
    'name' => 'override page authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page authored on option'.
  $permissions['override page authored on option'] = array(
    'name' => 'override page authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page published option'.
  $permissions['override page published option'] = array(
    'name' => 'override page published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page_section authored by option'.
  $permissions['override page_section authored by option'] = array(
    'name' => 'override page_section authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page_section authored on option'.
  $permissions['override page_section authored on option'] = array(
    'name' => 'override page_section authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page_section published option'.
  $permissions['override page_section published option'] = array(
    'name' => 'override page_section published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override partner authored by option'.
  $permissions['override partner authored by option'] = array(
    'name' => 'override partner authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override partner authored on option'.
  $permissions['override partner authored on option'] = array(
    'name' => 'override partner authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override partner published option'.
  $permissions['override partner published option'] = array(
    'name' => 'override partner published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override promo authored by option'.
  $permissions['override promo authored by option'] = array(
    'name' => 'override promo authored by option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override promo authored on option'.
  $permissions['override promo authored on option'] = array(
    'name' => 'override promo authored on option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override promo published option'.
  $permissions['override promo published option'] = array(
    'name' => 'override promo published option',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate taxonomy_term entities'.
  $permissions['translate taxonomy_term entities'] = array(
    'name' => 'translate taxonomy_term entities',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Product site admin' => 'Product site admin',
      'Regional editor' => 'Regional editor',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
