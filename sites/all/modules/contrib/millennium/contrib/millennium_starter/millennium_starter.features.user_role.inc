<?php
/**
 * @file
 * millennium_starter.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function millennium_starter_user_default_roles() {
  $roles = array();

  // Exported role: millennium admin.
  $roles['millennium admin'] = array(
    'name' => 'millennium admin',
    'weight' => '3',
  );

  return $roles;
}
