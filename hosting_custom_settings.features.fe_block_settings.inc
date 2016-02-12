<?php
/**
 * @file
 * hosting_custom_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function hosting_custom_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['hosting-hosting_supporting_aegir'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'hosting_supporting_aegir',
    'module' => 'hosting',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'eldir' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'eldir',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-administration'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-administration',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'eldir' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'eldir',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
