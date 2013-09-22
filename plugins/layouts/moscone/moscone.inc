<?php
/**
 * @file
 * moscone.inc
 */


// Plugin definition.
$plugin = array(
  'title' => t('Moscone'),
  'icon' => 'moscone.png',
  'category' => t('WetKit Layouts (BackEnd Only)'),
  'theme' => 'moscone',
  'css' => 'moscone.css',
  'regions' => array(
    'header' => t('Header'),
    'sidebar' => t('Content Sidebar'),
    'contentmain' => t('Content'),
    'footer' => t('Footer'),
  ),
);
