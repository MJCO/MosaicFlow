<?php
/**
 * @file
 * Theme preprocess function for mosaicflow.tpl.php.
 */

/**
 * Theme's preprocess function.
 */
function mosaicflow(&$vars) {

  $view = $vars['view'];
  $options = $vars['options'];
  libraries_load('jquery.mosaicflow');

  foreach ($view->field as $id => $field) {
    if (!empty($field->handler) && is_object($field->handler)) {
      $object = new stdClass();
      $object->content = $field->handler->theme($vars['row']);
      if (isset($field->handler->field_alias) && isset($vars['row']->{$field->handler->field_alias})) {
        $object->raw = $vars['row']->{$field->handler->field_alias};
      }
      else {
        $object->raw = NULL;
      }
      if (!empty($vars['options']['separator']) && $object->content) {
        $object->separator = filter_xss_admin($vars['options']['separator']);
      }
      $object->handler = $field->handler;
      $object->class = views_css_safe($id);
      $object->label = check_plain($field->handler->label());
      $vars['fields'][$id] = $object;
    }
  }
}
