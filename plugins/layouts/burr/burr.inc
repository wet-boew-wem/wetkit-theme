<?php
/**
 * @file
 * burr.inc
 */


// Plugin definition
$plugin = array(
  'title' => t('Burr'),
  'icon' => 'burr.png',
  'category' => t('WetKit Layouts (BackEnd Only)'),
  'theme' => 'burr',
  'css' => 'burr.css',
  'regions' => array(
    'sidebar' => t('Sidebar'),
    'contentmain' => t('Content'),
  ),
);
