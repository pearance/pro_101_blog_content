<?php
/**
 * @file
 * pro_101_blog_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pro_101_blog_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog/*' => 'blog/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-6a599607ca67a5ace7ef0de5f78c06ed' => array(
          'module' => 'views',
          'delta' => '6a599607ca67a5ace7ef0de5f78c06ed',
          'region' => 'content',
          'weight' => '2',
        ),
        'facebook_comments-facebook-comments' => array(
          'module' => 'facebook_comments',
          'delta' => 'facebook-comments',
          'region' => 'content',
          'weight' => '3',
        ),
      ),
    ),
    'menu' => 'blog',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['blog'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_public';
  $context->description = '';
  $context->tag = 'Public Only';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog' => 'blog',
        'blog/*' => 'blog/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nodeblock-social_welcome' => array(
          'module' => 'nodeblock',
          'delta' => 'social_welcome',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Public Only');
  $export['blog_public'] = $context;

  return $export;
}
