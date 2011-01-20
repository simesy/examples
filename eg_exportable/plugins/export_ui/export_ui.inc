<?php
// $Id:$

/**
 * @file
 * Define the export UI for an existing exportable.
 * It apparently doesn't matter what this file is called as long as it's in the right directory
 * per hook_ctools_plugin_directory()
$plugin = array(
  // The name of the table as found in the schema in hook_install.
  'schema' => 'exportable_stuff',

  // These are required to provide proper strings for reference.
  'title singular' => t('exportable thing'),
  'title singular proper' => t('Exportable thing'),
  'title plural' => t('exportable stuff'),
  'title plural proper' => t('Exportable stuff'),

  // Help Ctools give us a menu location for our Export UI.
  'menu' => array(
    'menu prefix' => 'admin/structure',
    'menu item' => 'stuff',
    'menu title' => 'Exportable stuff',
    'menu description' => 'Import and export some exportable stuff from exportable_stuff table.',
  ),

);
 */
