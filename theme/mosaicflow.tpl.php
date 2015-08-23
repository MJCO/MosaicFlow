<?php

/**
 * @file
 * Default views template for displaying a jQuery.Mosaicflow gallery
 *
 * - $view: The View object.
 * - $options: Settings for the active style.
 *
 * @ingroup views_templates
 */
?>

<?php
	libraries_load('jquery.mosaicflow'); 
	drupal_add_css(drupal_get_path('module','mosaicflow') . '/css/mosaicflow.css');

  	print ('<div class="' . $options['class'] . ' mosaicflow">');

  	foreach($view->style_plugin->rendered_fields as $item):

    	$item = array_values($item);
    	print ('<div class="mosaicflow__item">');
    	print ($item[1] . '<p>' . $item[0] . '</p>');
    	print ('</div>');
  	endforeach;

 	 print ('</div>');

?>
