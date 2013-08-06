; WetKit Theme Makefile

api = 2
core = 7.x

; Themes

projects[omega][version] = 4.x-dev
projects[omega][type] = theme
projects[omega][download][type] = git
projects[omega][download][revision] = f03a578
projects[omega][download][branch] = 7.x-4.x

projects[rubik][version] = 4.x-dev
projects[rubik][type] = theme
projects[rubik][download][type] = git
projects[rubik][download][revision] = e936b82
projects[rubik][download][branch] = 7.x-4.x
projects[rubik][patch][1730844] = http://drupal.org/files/rubik_inline_field_desc-1730844-06.patch
projects[rubik][patch][944534] = http://drupal.org/files/rubik-table_input_fluid-944534-5.patch
projects[rubik][patch][1445890] = http://drupal.org/files/editor-link-covered-1445890-2.patch
projects[rubik][patch][1003820] = http://drupal.org/files/1003820-rubik-5.patch
projects[rubik][patch][1440054] = http://drupal.org/files/patch_commit_96121294ba3b.patch
projects[rubik][patch][1645148] = http://drupal.org/files/rubik-ie9-box-sizing-1645148-1.patch

projects[tao][version] = 3.x-dev
projects[tao][type] = theme
projects[tao][download][type] = git
projects[tao][download][revision] = f06452b
projects[tao][download][branch] = 7.x-3.x
projects[tao][patch][1016844] = http://drupal.org/files/tao_taxonomy_manager-1016844-12.patch
