<?php
/**
 * @file
 * starter_commerce.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function starter_commerce_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'products';
  $context->description = '';
  $context->tag = 'starter';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'products' => 'products',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'commerce_cart-cart' => array(
          'module' => 'commerce_cart',
          'delta' => 'cart',
          'region' => 'sidebar_second',
          'weight' => '-10',
          'title' => '',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('starter');
  $export['products'] = $context;

  return $export;
}
