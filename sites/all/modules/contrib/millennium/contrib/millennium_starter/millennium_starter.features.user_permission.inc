<?php
/**
 * @file
 * millennium_starter.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function millennium_starter_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer millennium.
  $permissions['administer millennium'] = array(
    'name' => 'administer millennium',
    'roles' => array(
      'administrator' => 'administrator',
      'millennium admin' => 'millennium admin',
    ),
    'module' => 'millennium',
  );

  // Exported permission: import single millennium items.
  $permissions['import single millennium items'] = array(
    'name' => 'import single millennium items',
    'roles' => array(
      'administrator' => 'administrator',
      'millennium admin' => 'millennium admin',
    ),
    'module' => 'millennium',
  );

  // Exported permission: use millennium mass import/refresh.
  $permissions['use millennium mass import/refresh'] = array(
    'name' => 'use millennium mass import/refresh',
    'roles' => array(
      'administrator' => 'administrator',
      'millennium admin' => 'millennium admin',
    ),
    'module' => 'millennium',
  );

  // Exported permission: view millennium marc.
  $permissions['view millennium marc'] = array(
    'name' => 'view millennium marc',
    'roles' => array(
      'administrator' => 'administrator',
      'millennium admin' => 'millennium admin',
    ),
    'module' => 'millennium',
  );

  return $permissions;
}
