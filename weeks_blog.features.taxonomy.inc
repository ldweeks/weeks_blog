<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function weeks_blog_taxonomy_default_vocabularies() {
  return array(
    'blog_tags' => array(
      'name' => 'Blog Tags',
      'description' => '',
      'help' => 'Enter a comma separated list of words.',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_blog_tags',
      'weight' => '0',
      'nodes' => array(
        'blog_post' => 'blog_post',
      ),
    ),
  );
}
