<?php

/**
 * Region.tpl.php
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
 * Default theme implementation to display a region.
 *
 * Available variables:
 * - $content: The content for this region, typically blocks.
 * - $classes: String of classes.
 * - $region: The name of the region variable as in the .info file.
 * Helper variables:
 * - $classes_array: Array of html class attribute values.
 *   Flattened into a string within the variable $classes.
 * - $is_admin: Flags true when the current user is an administrator.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 *
 */
?>
<?php if ($content) : ?>
    <?php print $content; ?>
<?php endif; ?>
