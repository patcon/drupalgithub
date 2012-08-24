<?php
/**
 * @file
 * github_integration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function github_integration_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "oauthconnector" && $api == "") {
    return array("version" => "");
  }
}
