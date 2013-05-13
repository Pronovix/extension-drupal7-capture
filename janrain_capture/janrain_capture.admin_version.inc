<?php

/**
 * @file
 * Admin settings form for Capture version
 */

/**
 * Sets the Capture version.
 */
function janrain_capture_version_settings() {
  global $base_url;
  $form['description'] = array(
    '#markup' => '<p>' . t('Connection to Janrain Capture requires a subscription. Once subscribed, use the values on the Janrain dashboard to complete the fields below to connect the service.') . '</p>',
  );
  $janrain_capture_ver = variable_get('janrain_capture_ver', array());
  $ver = !empty($janrain_capture_ver) ? $janrain_capture_ver : 'empty';
  
  $form['janrain_capture_ver'] = array(
    '#type' => 'select',
    '#title' => t('Capture Version'),
    '#options' => array(
      '2.0' => t('Capture'),
      '1.0' => t('Capture Legacy'),
    ),
    '#default_value' => !empty($janrain_capture_ver) ? $janrain_capture_ver : '1.0',
    '#description' => t('The version of Capture you are using. Please select a version and save this form before modifying Capture settings.'),
  );

  return system_settings_form($form);
}