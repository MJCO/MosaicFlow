<?php
/**
 * @file
 * Defines the View Style Plugin for Mosaicflow module.
 */

/**
 * Implements hook_views_plugins().
 */
function mosaicflow_views_plugins() {
  return array(
    'style' => array(
      'mosaicflow' => array(
        'title' => t('jQuery.Mosaicflow'),
        'handler' => 'mosaicflow_views_plugin_style',
        'path' => drupal_get_path('module', 'mosaicflow') . '/views',
        'type' => 'normal',
        'uses row plugin' => TRUE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'theme' => 'mosaicflow',
        'theme path' => drupal_get_path('module', 'mosaicflow') . '/theme',
        'theme file' => 'mosaicflow.theme.inc',
      ),
    ),
  );
}
