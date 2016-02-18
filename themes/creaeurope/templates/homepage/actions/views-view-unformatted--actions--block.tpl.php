<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h2 class="section-title"><?php print $title; ?></h2>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <article class="col-lg-3 image-text-box">
    <div class="image-text-box--wrapper">
      <?php print $row; ?>
    </div>
  </article>
<?php endforeach; ?>