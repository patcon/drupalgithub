<?php
/**
 * @file
 * github_integration.oauthconnector.inc
 */

/**
 * Implements hook_default_oauthconnector_provider().
 */
function github_integration_default_oauthconnector_provider() {
  $export = array();

  $provider = new stdClass();
  $provider->disabled = FALSE; /* Edit this to true to make a default provider disabled initially */
  $provider->api_version = 1;
  $provider->name = 'github';
  $provider->title = 'GitHub';
  $provider->url = 'https://api.github.com';
  $provider->consumer_advanced = array(
    'oauth2' => 1,
    'signature method' => 'HMAC-SHA1',
    'authentication realm' => '',
    'request token endpoint' => '/oauth/request_token',
    'authorization scope' => 'public_repo',
    'authorization endpoint' => 'https://github.com/login/oauth/authorize',
    'access token endpoint' => 'https://github.com/login/oauth/access_token',
  );
  $provider->mapping = array(
    'fields' => array(
      'uid' => array(
        'resource' => 'https://api.github.com/user',
        'method post' => 0,
        'field' => 'id',
        'querypath' => FALSE,
        'sync_with_field' => '',
      ),
      'name' => array(
        'resource' => 'https://api.github.com/user',
        'method post' => 0,
        'field' => 'name',
        'querypath' => FALSE,
        'sync_with_field' => '',
      ),
      'avatar' => array(
        'resource' => 'https://api.github.com/user',
        'method post' => 0,
        'field' => 'avatar_url',
        'querypath' => FALSE,
        'sync_with_field' => 'picture',
      ),
    ),
    'format' => 'json',
  );
  $export['github'] = $provider;

  return $export;
}
