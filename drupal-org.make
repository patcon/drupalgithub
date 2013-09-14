api = 2
core = 7.x

defaults[projects][subdir] = contrib

projects[connector][version] = 1.0-beta1
projects[ctools][version] = 1.2
projects[diff][version] = 2.0
projects[features][version] = 1.0
projects[http_client][version] = 2.4
projects[oauth][version] = 3.0
projects[oauthconnector][version] = 1.0-beta1
; Fixed ctools export of providers: http://drupal.org/node/1712262#comment-6391478
projects[oauthconnector][patch][] = http://drupal.org/files/oauthconnector-fix-ctools-exportables_7.x-1.0-beta1_1712262-3.patch
projects[oauthconnector][patch][] = https://drupal.org/files/1746386-11-hardcode-json-accept-header.patch

projects[oauthconnector_github][type] = module
projects[oauthconnector_github][download][type] = git
projects[oauthconnector_github][download][url] = https://github.com/patcon/oauthconnector_github.git
projects[oauthconnector_github][download][branch] = 7.x-1.x
; projects[oauthconnector_github][download][revision] =
