<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<article class="hp-whatsnew-box">
	<div class="image col-md-3">
		<?php print $fields['field_images']->content; ?>
	</div>
	<div class="info col-md-2">
		<h4><?php print $fields['type']->label; ?></h4>
		<p class="type-link"><a href="#"><?php print $fields['type']->content; ?></a></p>
		<?php if ($fields['type']->raw == 'events'): ?>
			<!-- Event date format "from -> to". -->
			<?php if (isset($fields['field_date_from'])): ?>
				<!-- Content in Configure field: Content: Event Date : rewrite results -->
				<?php print $fields['field_date_from']->content; ?>
		    <?php endif; ?>
			<!-- Event Location. -->
			<?php if (isset($fields['field_event_location'])): ?>
				<h4>Event location</h4>
				<!-- Content in Configure field: Content: Event Location : rewrite results -->
				<p><?php print $fields['field_event_location']->content; ?></p>
		    <?php endif; ?>
		<?php else : ?>
			<h4><?php print $fields['created']->label; ?></h4>
			<p class="date-published"><?php print $fields['created']->content; ?></p>
		<?php endif ?>
	</div>
	<div class="article-content col-md-7">
		<h3><?php print $fields['title']->content; ?></h3>
		<p>
			<?php print $fields['field_abstract']->content; ?>
		</p>
	</div>
</article>