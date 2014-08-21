<?php
/**
 * @file
 * starter_commerce.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function starter_commerce_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'title_commerce_product';
  $strongarm->value = array(
    'auto_attach' => array(
      'title' => 'title',
    ),
    'hide_label' => array(
      'page' => 'page',
      'entity' => 'entity',
    ),
  );
  $export['title_commerce_product'] = $strongarm;

  return $export;
}
