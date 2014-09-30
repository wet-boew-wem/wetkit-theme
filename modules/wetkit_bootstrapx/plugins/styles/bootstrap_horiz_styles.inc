<?php

$plugin = array(
  'title' => t('Horizontal Tabs'),
  'description' => t('The title of every pane in this region will become a horizontal tab. Uses Bootstrap 3'),
  'render region' => 'wetkit_bootstrapx_bootstrap_horiz_styles_render_region',
  'settings form' => 'wetkit_bootstrapx_bootstrap_horiz_styles_settings_form',
  'weight' => -50,
);

/**
 * Render callback
 */
function theme_wetkit_bootstrapx_bootstrap_horiz_styles_render_region($vars) {

  // Include some basic information.
  $display = $vars['display'];
  $panes = $vars['panes'];
  $did = $vars['display']->did;

  // Create the output.

  // Start the Region Wrapper.
  $output = '<div class="bootstrap-panels-horizontal-tabs wb-tabs margin-top-large">';

  // Start Panes output.
  $output .= '<div class="tabpanels">';
  $i = 0;

  asort($panes);
  foreach ($panes as $pane_id => $pane) {
    $pane_title = drupal_static($pane_id . '_title');
    if (empty($pane_title)) {
      $pane_title = 'This pane needs a title.';
    }
    $output .= '<details id="details-pane-' . $pane_id . '" class="tab-pane">' . '<summary>' . $pane_title . '</summary>' . $pane . '</details>';
  }
  // End Panes output.
  $output .= '</div>';

  // End Region Wrapper.
  $output .= '</div>';

  return $output;
}

/**
 * Settings form
 */
function wetkit_bootstrapx_bootstrap_horiz_styles_settings_form($style_settings) {
  $form['help_text'] = array(
    '#markup' => t('The title of each pane will be become a tab which will toggle display of that pane.
        Ensure that you give every pane a title, otherwise you will see a message reminding you to do so.'),
  );

  return $form;
}
