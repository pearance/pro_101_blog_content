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
        'blog' => 'blog',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'jasm-service_list' => array(
          'module' => 'jasm',
          'delta' => 'service_list',
          'region' => 'main_sidebar_1',
          'weight' => '-10',
        ),
        'jasm-fb_like_box' => array(
          'module' => 'jasm',
          'delta' => 'fb_like_box',
          'region' => 'main_sidebar_1',
          'weight' => '-9',
        ),
        'jasm-twitter_follow_button' => array(
          'module' => 'jasm',
          'delta' => 'twitter_follow_button',
          'region' => 'main_sidebar_1',
          'weight' => '-8',
        ),
        'jasm-feedburner_mail_subscribe' => array(
          'module' => 'jasm',
          'delta' => 'feedburner_mail_subscribe',
          'region' => 'main_sidebar_1',
          'weight' => '-7',
        ),
        'views-specialties-specialties_block' => array(
          'module' => 'views',
          'delta' => 'specialties-specialties_block',
          'region' => 'main_sidebar_1',
          'weight' => '-5',
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
