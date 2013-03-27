<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function aegir_custom_settings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-administration:admin/user/user
  $menu_links['menu-administration:admin/user/user'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'admin/user/user',
    'router_path' => 'admin/user/user',
    'link_title' => 'Manage Clients',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Clients and Users',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-administration:hosting/signup
  $menu_links['menu-administration:hosting/signup'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'hosting/signup',
    'router_path' => 'hosting/signup',
    'link_title' => 'Add Site and Client',
    'options' => array(
      'attributes' => array(
        'title' => 'Add Site and Client',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-administration:node/add/client
  $menu_links['menu-administration:node/add/client'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'node/add/client',
    'router_path' => 'node/add/client',
    'link_title' => 'Add Client',
    'options' => array(
      'attributes' => array(
        'title' => 'Add New Client',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-administration:node/add/platform
  $menu_links['menu-administration:node/add/platform'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'node/add/platform',
    'router_path' => 'node/add/platform',
    'link_title' => 'Add Platform',
    'options' => array(
      'attributes' => array(
        'title' => 'Add New Platform',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: primary-links:hosting/platforms
  $menu_links['primary-links:hosting/platforms'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'hosting/platforms',
    'router_path' => 'hosting/platforms',
    'link_title' => 'Platforms',
    'options' => array(
      'attributes' => array(
        'title' => 'List of platforms',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: primary-links:hosting/servers
  $menu_links['primary-links:hosting/servers'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'hosting/servers',
    'router_path' => 'hosting/servers',
    'link_title' => 'Servers',
    'options' => array(
      'attributes' => array(
        'title' => 'List of servers',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: primary-links:hosting/sites
  $menu_links['primary-links:hosting/sites'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'hosting/sites',
    'router_path' => 'hosting/sites',
    'link_title' => 'Sites',
    'options' => array(
      'attributes' => array(
        'title' => 'Display a list of sites',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: primary-links:logout
  $menu_links['primary-links:logout'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'logout',
    'router_path' => 'logout',
    'link_title' => 'Exit',
    'options' => array(
      'attributes' => array(
        'title' => 'Log out',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: primary-links:node/add/site
  $menu_links['primary-links:node/add/site'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/add/site',
    'router_path' => 'node/add/site',
    'link_title' => 'Add Site',
    'options' => array(
      'attributes' => array(
        'title' => 'Add New Site',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: primary-links:user/%
  $menu_links['primary-links:user/%'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'user/%',
    'router_path' => 'user/%',
    'link_title' => 'Account',
    'options' => array(
      'attributes' => array(
        'title' => 'My Account',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Account');
  t('Add Client');
  t('Add Platform');
  t('Add Site');
  t('Add Site and Client');
  t('Exit');
  t('Manage Clients');
  t('Platforms');
  t('Servers');
  t('Sites');


  return $menu_links;
}
