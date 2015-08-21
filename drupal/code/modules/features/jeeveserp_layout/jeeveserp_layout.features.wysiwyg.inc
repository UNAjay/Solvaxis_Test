<?php
/**
 * @file
 * jeeveserp_layout.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function jeeveserp_layout_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: basic_html
  $profiles['basic_html'] = array(
    'format' => 'basic_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'JustifyBlock' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Link' => 1,
          'Image' => 1,
          'Cut' => 1,
          'PasteFromWord' => 1,
          'Styles' => 1,
          'Table' => 1,
          'Flash' => 1,
          'CreateDiv' => 1,
          'Iframe' => 1,
          'Scayt' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
        'drupal_path' => array(
          'Link' => 1,
        ),
      ),
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'ckeditor_styles' => array(
        'stylesheetparser' => 0,
      ),
      'simple_source_formatting' => 0,
      'resize_enabled' => 1,
      'toolbarLocation' => 'top',
      'forcePasteAsPlainText' => 1,
      'stylesSet' => '',
    ),
  );

  // Exported profile: full_html
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'add_to_summaries' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'JustifyBlock' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Link' => 1,
          'Image' => 1,
          'Cut' => 1,
          'PasteFromWord' => 1,
          'Styles' => 1,
          'Table' => 1,
          'Flash' => 1,
          'CreateDiv' => 1,
          'Iframe' => 1,
          'Scayt' => 1,
        ),
        'custom_link' => array(
          'collapse_text' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
        'linkit' => array(
          'linkit' => 1,
        ),
        'drupal' => array(
          'shortcode_wysiwyg' => 1,
          'break' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'self',
      'css_path' => '/sites/all/themes/custom/solvaxis/css/editor.css',
      'stylesSet' => 'Download PDF=a.call-to-action.download-pdf
Call to action=p.call-to-action
Heading 1=h1
Heading 2=h2
Heading 3=h3
Key features bullets=ul.key_features
Paragraph=p
Section title=h2.section-title',
      'block_formats' => 'p,address,h2,h3,div',
      'advanced__active_tab' => 'edit-css',
      'forcePasteAsPlainText' => 1,
    ),
  );

  return $profiles;
}
