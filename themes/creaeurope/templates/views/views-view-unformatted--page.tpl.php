<?php

/**
 * Views-view-unformatted--page.tpl.php
 * PHP version 5
 *
 * @category Production
 * @package  Creaeurope
 * @author   EAC WEB TEAM <nina.ahonen@ec.europa.eu>
 * @license  http://www.gnu.org/copyleft/gpl.html GNU General Public License
 * @link     http://ec.europa.eu/programmes/creative-europe
 * @see      us moving :)
 * 
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)) : ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
    <?php print $row; ?>
<?php endforeach; ?>
