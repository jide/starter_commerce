<?php
/**
 * @file
 * starter_commerce.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function starter_commerce_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'product_list';
  $ds_view_mode->label = 'Product list';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['product_list'] = $ds_view_mode;

  return $export;
}
