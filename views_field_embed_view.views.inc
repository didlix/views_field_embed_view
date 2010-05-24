<?php

function views_field_embed_view_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'views_field_embed_view'),
    ),
    'handlers' => array(
      'views_field_embed_view_embedded_view' => => array(
        'parent' => 'views_handler_field')
    )
  );
}


function views_field_embed_view_views_data() {
  
  $data['embed_view_field']['table']['group'] = t('Field embed view');
  $data['embed_view_field']['table']['join'] = array(
    '#global' => array(),
  );

  $data['embed_view_field']['embed_view'] = array(
    'title' => t('Embed view'),
    'help' => t('Embed a view'),
    'field' => array(
      'handler' => 'views_field_embed_view_embedded_view',
      'click sortable' => FALSE,
      'notafield' => TRUE,
    ),
  );

	return $data;

}