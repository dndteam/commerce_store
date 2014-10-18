<?php
/**
 * @file
 * book_porducts.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function book_porducts_taxonomy_default_vocabularies() {
  return array(
    'book_category' => array(
      'name' => 'Book Category',
      'machine_name' => 'book_category',
      'description' => 'Book Category',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
