<?php

function views_field_embed_view_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'views_field_embed_view'),
    ),
    'handlers' => array(
      'views_field_embed_view_embedded_view' => t('Embed another view as a field'))
    )
  );
}