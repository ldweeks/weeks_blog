<?php

/**
 * Implementation of hook_strongarm().
 */
function weeks_blog_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_blog_post';
  $strongarm->value = '2';

  $export['comment_anonymous_blog_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_blog_post';
  $strongarm->value = '2';

  $export['comment_blog_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_blog_post';
  $strongarm->value = '3';

  $export['comment_controls_blog_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_blog_post';
  $strongarm->value = '2';

  $export['comment_default_mode_blog_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_blog_post';
  $strongarm->value = '2';

  $export['comment_default_order_blog_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_blog_post';
  $strongarm->value = '30';

  $export['comment_default_per_page_blog_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_blog_post';
  $strongarm->value = '1';

  $export['comment_form_location_blog_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_blog_post';
  $strongarm->value = '0';

  $export['comment_preview_blog_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_blog_post';
  $strongarm->value = '1';

  $export['comment_subject_field_blog_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_blog_post';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_blog_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_post_pattern';
  $strongarm->value = 'blog/[yyyy]/[mon]/[dd]/[title-raw]';

  $export['pathauto_node_blog_post_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'blog';

  $export['site_frontpage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_blogbuzz_settings';
  $strongarm->value = array(
    'blogbuzz_style' => 'chocolate',
    'mission' => '',
    'default_logo' => 0,
    'logo_path' => '',
    'default_favicon' => 0,
    'favicon_path' => '',
    'primary_links' => 1,
    'secondary_links' => 1,
    'toggle_logo' => 0,
    'toggle_favicon' => 0,
    'toggle_name' => 1,
    'toggle_search' => 0,
    'toggle_slogan' => 0,
    'toggle_mission' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'toggle_node_info_blog_post' => 1,
    'toggle_node_info_book' => 1,
    'toggle_node_info_page' => 0,
    'logo_upload' => '',
    'favicon_upload' => '',
    'toggle_node_info_story' => 0,
  );

  $export['theme_blogbuzz_settings'] = $strongarm;
  return $export;
}
