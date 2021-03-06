<?php
/**
 * @file
 * ictdirecta_faldo.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ictdirecta_faldo_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-fald_-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'fald_-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'directa' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'directa',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-fald_-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'fald_-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'directa' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'directa',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
