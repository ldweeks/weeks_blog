<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function weeks_blog_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog';
  $context->description = 'Blog context.';
  $context->tag = 'blog';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog' => 'blog',
        'blog/*' => 'blog/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_archive-block' => array(
          'module' => 'views',
          'delta' => 'blog_archive-block',
          'region' => 'left',
          'weight' => 0,
        ),
        'views-Blog_Tags-block_1' => array(
          'module' => 'views',
          'delta' => 'Blog_Tags-block_1',
          'region' => 'left',
          'weight' => 1,
        ),
        'views-recent_blog_comments-block' => array(
          'module' => 'views',
          'delta' => 'recent_blog_comments-block',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'breadcrumb' => 'blog',
    'menu' => 'blog',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog context.');
  t('blog');

  $export['blog'] = $context;
  return $export;
}
