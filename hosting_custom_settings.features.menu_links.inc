<?php

/**
 * @file
 * hosting_custom_settings.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function hosting_custom_settings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_clients:hosting/clients.
  $menu_links['main-menu_clients:hosting/clients'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'hosting/clients',
    'router_path' => 'hosting/clients',
    'link_title' => 'Clients',
    'options' => array(
      'attributes' => array(
        'title' => 'List of Clients',
      ),
      'identifier' => 'main-menu_clients:hosting/clients',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
  );
  // Exported menu link: main-menu_platforms:hosting/platforms.
  $menu_links['main-menu_platforms:hosting/platforms'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'hosting/platforms',
    'router_path' => 'hosting/platforms',
    'link_title' => 'Platforms',
    'options' => array(
      'attributes' => array(
        'title' => 'List of Platforms',
      ),
      'identifier' => 'main-menu_platforms:hosting/platforms',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Exported menu link: main-menu_servers:hosting/servers.
  $menu_links['main-menu_servers:hosting/servers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'hosting/servers',
    'router_path' => 'hosting/servers',
    'link_title' => 'Servers',
    'options' => array(
      'attributes' => array(
        'title' => 'List of Servers',
      ),
      'identifier' => 'main-menu_servers:hosting/servers',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sites:hosting/sites.
  $menu_links['main-menu_sites:hosting/sites'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'hosting/sites',
    'router_path' => 'hosting/sites',
    'link_title' => 'Sites',
    'options' => array(
      'attributes' => array(
        'title' => 'List of Sites',
      ),
      'identifier' => 'main-menu_sites:hosting/sites',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: main-menu_tasks:hosting/tasks.
  $menu_links['main-menu_tasks:hosting/tasks'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'hosting/tasks',
    'router_path' => 'hosting/tasks',
    'link_title' => 'Tasks',
    'options' => array(
      'attributes' => array(
        'title' => 'List of Tasks',
      ),
      'identifier' => 'main-menu_tasks:hosting/tasks',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Exported menu link: menu-administration_add-new-platform:node/add/platform.
  $menu_links['menu-administration_add-new-platform:node/add/platform'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'node/add/platform',
    'router_path' => 'node/add/platform',
    'link_title' => 'Add New Platform',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration_add-new-platform:node/add/platform',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-administration_add-new-site:node/add/site.
  $menu_links['menu-administration_add-new-site:node/add/site'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'node/add/site',
    'router_path' => 'node/add/site',
    'link_title' => 'Add New Site',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration_add-new-site:node/add/site',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-administration_exit:user/logout.
  $menu_links['menu-administration_exit:user/logout'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Exit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration_exit:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: menu-administration_my-account:user.
  $menu_links['menu-administration_my-account:user'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration_my-account:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_exit:user/logout.
  $menu_links['user-menu_exit:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Exit',
    'options' => array(
      'attributes' => array(
        'title' => 'Log out',
      ),
      'identifier' => 'user-menu_exit:user/logout',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add New Platform');
  t('Add New Site');
  t('Clients');
  t('Exit');
  t('Log out');
  t('My Account');
  t('Platforms');
  t('Servers');
  t('Sites');
  t('Tasks');
  t('User account');

  return $menu_links;
}
