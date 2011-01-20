What is demonstrated
____________________

This is a really basic example of Ctools exportables.

The idea is that the module provides a table of data ('exportable_stuff') and we wish to extend the
module so that the data in the table is exportable and hence exposed to Features.

So for clarity, the non-exportables component on the module is the .install file which defines the
table.

The rest of the code, of which there is not a lot does two things:

-- Make "exportable". The 'export' key in eg_exportable_schema tell Ctools about the exportability
   of the data. The outcome is that we are ready to rock. The best way to check this is to make a
   Feature and one of the example data records to the Feature. Note: that you need some data in the
   exportable_stuff table for this to work, and since this example module doesn't provide any
   facility to edit your objects, you should manually put some data into the table to test.

-- Enable "export_ui" plugin. The implementation of hook_ctools_plugin_directory() in
   eg_exportable.module tells Ctools plugin system to look in plugin/export_ui for plugin stuff.
   Ctools finds 'export_ui.inc' which gives Ctools some basic info to provide a full interface for
   importing/exporting/cloning the objects.


Next steps
__________

Install Ctools and Advanced Help and you will have help files with more information. You can see
the main help in the Drupal repository ("export.html" and "export-ui.html" document two concepts):
http://drupalcode.org/viewvc/drupal/contributions/modules/ctools/help/?pathrev=MAIN

Other links:
Skinr made exportable https://github.com/ericduran/skinr_export

