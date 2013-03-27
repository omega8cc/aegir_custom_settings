<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function aegir_custom_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      '0' => 'root',
    ),
  );

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      '0' => 'root',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir account manager',
      '2' => 'aegir client',
      '3' => 'anonymous user',
      '4' => 'authenticated user',
      '5' => 'root',
    ),
  );

  // Exported permission: access disabled sites
  $permissions['access disabled sites'] = array(
    'name' => 'access disabled sites',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir account manager',
      '2' => 'aegir client',
      '3' => 'anonymous user',
      '4' => 'authenticated user',
      '5' => 'root',
    ),
  );

  // Exported permission: access hosting signup form
  $permissions['access hosting signup form'] = array(
    'name' => 'access hosting signup form',
    'roles' => array(
      '0' => 'admin',
      '1' => 'root',
    ),
  );

  // Exported permission: access hosting wizard
  $permissions['access hosting wizard'] = array(
    'name' => 'access hosting wizard',
    'roles' => array(),
  );

  // Exported permission: access printer-friendly version
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      '0' => 'root',
    ),
  );

  // Exported permission: access task logs
  $permissions['access task logs'] = array(
    'name' => 'access task logs',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'admin',
      '1' => 'root',
    ),
  );

  // Exported permission: add content to books
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(),
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      '0' => 'root',
    ),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
  );

  // Exported permission: administer book outlines
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(),
  );

  // Exported permission: administer clients
  $permissions['administer clients'] = array(
    'name' => 'administer clients',
    'roles' => array(
      '0' => 'admin',
      '1' => 'root',
    ),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      '0' => 'root',
    ),
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
  );

  // Exported permission: administer hosting
  $permissions['administer hosting'] = array(
    'name' => 'administer hosting',
    'roles' => array(),
  );

  // Exported permission: administer hosting aliases
  $permissions['administer hosting aliases'] = array(
    'name' => 'administer hosting aliases',
    'roles' => array(),
  );

  // Exported permission: administer hosting cdn
  $permissions['administer hosting cdn'] = array(
    'name' => 'administer hosting cdn',
    'roles' => array(),
  );

  // Exported permission: administer hosting features
  $permissions['administer hosting features'] = array(
    'name' => 'administer hosting features',
    'roles' => array(),
  );

  // Exported permission: administer hosting queues
  $permissions['administer hosting queues'] = array(
    'name' => 'administer hosting queues',
    'roles' => array(),
  );

  // Exported permission: administer hosting settings
  $permissions['administer hosting settings'] = array(
    'name' => 'administer hosting settings',
    'roles' => array(),
  );

  // Exported permission: administer hosting site backup manager
  $permissions['administer hosting site backup manager'] = array(
    'name' => 'administer hosting site backup manager',
    'roles' => array(),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'admin',
      '1' => 'root',
    ),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      '0' => 'root',
    ),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      '0' => 'root',
    ),
  );

  // Exported permission: administer sites
  $permissions['administer sites'] = array(
    'name' => 'administer sites',
    'roles' => array(
      '0' => 'root',
    ),
  );

  // Exported permission: administer tasks
  $permissions['administer tasks'] = array(
    'name' => 'administer tasks',
    'roles' => array(
      '0' => 'admin',
      '1' => 'root',
    ),
  );

  // Exported permission: administer userprotect
  $permissions['administer userprotect'] = array(
    'name' => 'administer userprotect',
    'roles' => array(),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'admin',
      '1' => 'root',
    ),
  );

  // Exported permission: cancel own tasks
  $permissions['cancel own tasks'] = array(
    'name' => 'cancel own tasks',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: change own e-mail
  $permissions['change own e-mail'] = array(
    'name' => 'change own e-mail',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: change own openid
  $permissions['change own openid'] = array(
    'name' => 'change own openid',
    'roles' => array(),
  );

  // Exported permission: change own password
  $permissions['change own password'] = array(
    'name' => 'change own password',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      '0' => 'admin',
      '1' => 'root',
    ),
  );

  // Exported permission: configure site cron interval
  $permissions['configure site cron interval'] = array(
    'name' => 'configure site cron interval',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir account manager',
      '2' => 'aegir client',
      '3' => 'root',
    ),
  );

  // Exported permission: create backup task
  $permissions['create backup task'] = array(
    'name' => 'create backup task',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: create backup-delete task
  $permissions['create backup-delete task'] = array(
    'name' => 'create backup-delete task',
    'roles' => array(
      '0' => 'admin',
      '1' => 'root',
    ),
  );

  // Exported permission: create book content
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      '0' => 'root',
    ),
  );

  // Exported permission: create cdn domains
  $permissions['create cdn domains'] = array(
    'name' => 'create cdn domains',
    'roles' => array(
      '0' => 'admin',
      '1' => 'root',
    ),
  );

  // Exported permission: create client
  $permissions['create client'] = array(
    'name' => 'create client',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir account manager',
      '2' => 'root',
    ),
  );

  // Exported permission: create clone task
  $permissions['create clone task'] = array(
    'name' => 'create clone task',
    'roles' => array(
      '0' => 'admin',
      '1' => 'root',
    ),
  );

  // Exported permission: create delete task
  $permissions['create delete task'] = array(
    'name' => 'create delete task',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: create delete_rebuild_registry task
  $permissions['create delete_rebuild_registry task'] = array(
    'name' => 'create delete_rebuild_registry task',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: create disable task
  $permissions['create disable task'] = array(
    'name' => 'create disable task',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: create enable task
  $permissions['create enable task'] = array(
    'name' => 'create enable task',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: create flush_cache task
  $permissions['create flush_cache task'] = array(
    'name' => 'create flush_cache task',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: create lock task
  $permissions['create lock task'] = array(
    'name' => 'create lock task',
    'roles' => array(),
  );

  // Exported permission: create login-reset task
  $permissions['create login-reset task'] = array(
    'name' => 'create login-reset task',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: create migrate task
  $permissions['create migrate task'] = array(
    'name' => 'create migrate task',
    'roles' => array(
      '0' => 'admin',
      '1' => 'root',
    ),
  );

  // Exported permission: create new books
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(),
  );

  // Exported permission: create package
  $permissions['create package'] = array(
    'name' => 'create package',
    'roles' => array(),
  );

  // Exported permission: create platform
  $permissions['create platform'] = array(
    'name' => 'create platform',
    'roles' => array(
      '0' => 'admin',
      '1' => 'root',
    ),
  );

  // Exported permission: create rebuild_registry task
  $permissions['create rebuild_registry task'] = array(
    'name' => 'create rebuild_registry task',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: create restore task
  $permissions['create restore task'] = array(
    'name' => 'create restore task',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: create run_cron task
  $permissions['create run_cron task'] = array(
    'name' => 'create run_cron task',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: create server
  $permissions['create server'] = array(
    'name' => 'create server',
    'roles' => array(),
  );

  // Exported permission: create site
  $permissions['create site'] = array(
    'name' => 'create site',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: create site aliases
  $permissions['create site aliases'] = array(
    'name' => 'create site aliases',
    'roles' => array(
      '0' => 'admin',
      '1' => 'root',
    ),
  );

  // Exported permission: create unlock task
  $permissions['create unlock task'] = array(
    'name' => 'create unlock task',
    'roles' => array(),
  );

  // Exported permission: create verify task
  $permissions['create verify task'] = array(
    'name' => 'create verify task',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: delete any book content
  $permissions['delete any book content'] = array(
    'name' => 'delete any book content',
    'roles' => array(
      '0' => 'root',
    ),
  );

  // Exported permission: delete own book content
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(),
  );

  // Exported permission: delete own client
  $permissions['delete own client'] = array(
    'name' => 'delete own client',
    'roles' => array(
      '0' => 'admin',
      '1' => 'root',
    ),
  );

  // Exported permission: delete package
  $permissions['delete package'] = array(
    'name' => 'delete package',
    'roles' => array(),
  );

  // Exported permission: delete platform
  $permissions['delete platform'] = array(
    'name' => 'delete platform',
    'roles' => array(
      '0' => 'admin',
      '1' => 'root',
    ),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(),
  );

  // Exported permission: delete server
  $permissions['delete server'] = array(
    'name' => 'delete server',
    'roles' => array(),
  );

  // Exported permission: delete site
  $permissions['delete site'] = array(
    'name' => 'delete site',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: display drupal links
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
  );

  // Exported permission: edit any book content
  $permissions['edit any book content'] = array(
    'name' => 'edit any book content',
    'roles' => array(
      '0' => 'root',
    ),
  );

  // Exported permission: edit client uname
  $permissions['edit client uname'] = array(
    'name' => 'edit client uname',
    'roles' => array(
      '0' => 'admin',
      '1' => 'root',
    ),
  );

  // Exported permission: edit client users
  $permissions['edit client users'] = array(
    'name' => 'edit client users',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir account manager',
      '2' => 'root',
    ),
  );

  // Exported permission: edit own book content
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(
      '0' => 'root',
    ),
  );

  // Exported permission: edit own client
  $permissions['edit own client'] = array(
    'name' => 'edit own client',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: edit package
  $permissions['edit package'] = array(
    'name' => 'edit package',
    'roles' => array(),
  );

  // Exported permission: edit platform
  $permissions['edit platform'] = array(
    'name' => 'edit platform',
    'roles' => array(
      '0' => 'admin',
      '1' => 'root',
    ),
  );

  // Exported permission: edit server
  $permissions['edit server'] = array(
    'name' => 'edit server',
    'roles' => array(),
  );

  // Exported permission: edit site
  $permissions['edit site'] = array(
    'name' => 'edit site',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
  );

  // Exported permission: mass delete revisions
  $permissions['mass delete revisions'] = array(
    'name' => 'mass delete revisions',
    'roles' => array(),
  );

  // Exported permission: retry failed tasks
  $permissions['retry failed tasks'] = array(
    'name' => 'retry failed tasks',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(),
  );

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(),
  );

  // Exported permission: view client
  $permissions['view client'] = array(
    'name' => 'view client',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir account manager',
      '2' => 'aegir client',
      '3' => 'root',
    ),
  );

  // Exported permission: view locked platforms
  $permissions['view locked platforms'] = array(
    'name' => 'view locked platforms',
    'roles' => array(),
  );

  // Exported permission: view own tasks
  $permissions['view own tasks'] = array(
    'name' => 'view own tasks',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: view package
  $permissions['view package'] = array(
    'name' => 'view package',
    'roles' => array(),
  );

  // Exported permission: view platform
  $permissions['view platform'] = array(
    'name' => 'view platform',
    'roles' => array(
      '0' => 'admin',
      '1' => 'root',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(),
  );

  // Exported permission: view server
  $permissions['view server'] = array(
    'name' => 'view server',
    'roles' => array(),
  );

  // Exported permission: view site
  $permissions['view site'] = array(
    'name' => 'view site',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  // Exported permission: view task
  $permissions['view task'] = array(
    'name' => 'view task',
    'roles' => array(
      '0' => 'admin',
      '1' => 'aegir client',
      '2' => 'root',
    ),
  );

  return $permissions;
}
