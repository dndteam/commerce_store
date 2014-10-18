<?php
/**
 * @file
 * millennium_starter.features.inc
 */

/**
 * Implements hook_node_info().
 */
function millennium_starter_node_info() {
  $items = array(
    'library_item' => array(
      'name' => t('Library item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
