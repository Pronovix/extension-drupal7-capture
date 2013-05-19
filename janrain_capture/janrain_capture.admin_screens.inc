<?php

/**
 * @file
 * Admin settings form for Capture screens
 */

/**
 * Sets the Capture screens path.
 */
function janrain_capture_screens_settings() {
  $form['janrain_capture_ui2']['screens_folder'] = array(
    '#type' => 'textfield',
    '#title' => t('Screens Folder'),
    '#default_value' => !empty($janrain_capture_ui['screens_folder']) ? $janrain_capture_ui['screens_folder'] : 'file:///sites/all/themes/janrain-capture-screens/',
    '#description' => t('URL of the Capture screens folder<br/>(examples: file:///sites/all/themes/janrain-capture-screens/, http://example.com/capture-screens/)'),
  );

  return system_settings_form($form);
}