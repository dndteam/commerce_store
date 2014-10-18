<?php
/**
 * @file
 * book_porducts.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function book_porducts_commerce_product_default_types() {
  $items = array(
    'the_book' => array(
      'type' => 'the_book',
      'name' => 'The Book',
      'description' => '',
      'help' => '',
      'revision' => '1',
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function book_porducts_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "commerce_autosku" && $api == "autosku_pattern") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function book_porducts_node_info() {
  $items = array(
    'the_book' => array(
      'name' => t('The Book'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
