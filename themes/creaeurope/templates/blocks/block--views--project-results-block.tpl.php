<section class="hp-projectresults">
  <?php if ($title && $block->subject): ?>
    <h2 class="section-title">
      <?php print $block->subject ?>
    </h2>
  <?php endif;?>

  <div class="container-fluid">
    <?php
      print $content;
     ?>
  </div>
</section>