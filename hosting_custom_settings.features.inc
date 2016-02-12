<?php
/**
 * @file
 * hosting_custom_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hosting_custom_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
