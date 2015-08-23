<?php

/**
 * @file
 * Contains the jQuery.Mosaicflow style plugin.
 */

/**
 * Style plugin to render each item
 *
 * @ingroup views_style_plugins
 */
class ViewsPluginStyleMosaicflow extends views_plugin_style {
  /**
   * Set default options.
   */
  public function optionDefinition() {
    $options = parent::option_definition();
    $options['class'] = array('default' => 'mosaicflow_gallery');
    return $options;
  }

  /**
   * Render the given style.
   */
  public function optionsForm(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['class'] = array(
      '#title' => t('Class'),
      '#description' => t('The class to provide on the whole gallery div.'),
      '#type' => 'textfield',
      '#size' => '30',
      '#default_value' => $this->options['class'],
    );
  }
}
