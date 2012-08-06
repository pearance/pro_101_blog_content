<?php
/**
 * @file
 * pro_101_blog_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function pro_101_blog_content_content_defaults() {
  $content = array();

  $content['blog_post1'] = (object) array(
    'exported_path' => 'blog/blog-post-1',
    'title' => 'Blog Post 1',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'blog',
    'language' => 'und',
    'created' => '1339836951',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'blog_post1',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
    'field_blog_tags' => array(
      'und' => array(
        0 => array(
          'tid' => '3',
        ),
      ),
    ),
  );

  $content['blog_post2'] = (object) array(
    'exported_path' => 'blog/blog-post-2',
    'title' => 'Blog Post 2',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'blog',
    'language' => 'und',
    'created' => '1339837235',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'blog_post2',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
    'field_blog_tags' => array(
      'und' => array(
        0 => array(
          'tid' => '2',
        ),
        1 => array(
          'tid' => '4',
        ),
        2 => array(
          'tid' => '6',
        ),
        3 => array(
          'tid' => '5',
        ),
      ),
    ),
  );

  $content['blog_post3'] = (object) array(
    'exported_path' => 'blog/blog-post-3',
    'title' => 'Blog Post 3',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'blog',
    'language' => 'und',
    'created' => '1339851298',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'blog_post3',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
    'field_blog_tags' => array(
      'und' => array(
        0 => array(
          'tid' => '1',
        ),
        1 => array(
          'tid' => '2',
        ),
        2 => array(
          'tid' => '3',
        ),
      ),
    ),
  );

return $content;
}
