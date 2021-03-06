<?php

/**
 * @file
 * Default theme implementation for entities.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) entity label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-{ENTITY_TYPE}
 *   - {ENTITY_TYPE}-{BUNDLE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */

//dpm($content);
$video = file_view_file($content['file']['#file']);
$url = file_create_url($content['file']['#file']->uri);
//dpm($url);
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <header>

  </header>
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <div class="content"<?php print $content_attributes; ?>>
    <a class="colorbox-inline" rel="gallery-all" href="?width=800&height=500&inline=true#inline-video-<?php print $content['file']['#file']->fid; ?>">
      <?php print render($content); ?>
    </a>
  </div>
  <div>

  <div class="element-invisible">
    <div id="inline-video-<?php print $content['file']['#file']->fid; ?>">
      <?php print render($video); ?>
    </div>
  </div>

</div>
