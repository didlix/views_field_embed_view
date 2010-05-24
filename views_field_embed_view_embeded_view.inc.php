<?php

/**
 * @file
 * Views handler for embedding views as fields
 */

/**
 * Field handler to provide the embed view field
 *
 * Inherit from views_handler_field_node so we get the 'link to node' stuff for
 * free.
 */
class views_field_embed_view_embedded_view extends views_handler_field_node {

  /**
   * Constructor to provide additional fields to add.
   *
   * Adds the fields that image_load() will need.
   */
  function construct() {
    parent::construct();

    $this->additional_fields['a_field'] = array(
      'table' => 'node',
      'field' => 'tid',
    );
  }

  /**
   * query() override to not query this fake field.
   */
  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  /**
   * Return field html if the result is an image node.
   */
  function render($values) {
		echo '<pre>';
		var_dump($values);
		var_dump($this->view);
		die();
		views_embed_view();
  }

  /**
   * Return view html, using views_embed_view.
   */
  function render_html($values) {

  }
