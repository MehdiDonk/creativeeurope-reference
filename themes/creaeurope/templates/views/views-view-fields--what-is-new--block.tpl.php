<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * Rewrite the output of the whatsnew block of the homepage.
 *
 * Available variables:
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists.
 *     This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field.
 *     Do not use var_export to dump this object, as it can't handle
 *     the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html
 *     to use.
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
	<div class="image col-sm-4 col-md-3">
		<?php print $fields['field_images']->content; ?>
    <?php if ($fields['type']->raw == 'external_calls'): ?>
			<?php 
      $attributes = array('attributes' => array('class' => 'Prt'),'html' => true);
			print t(l( '<img src="'. $calls_img . '"/>', $fields['field_link']->content, $attributes)); 
			?>
    <?php endif; ?>

	</div>
	<div class="info col-sm-offset-4 col-md-offset-0 col-md-2">
		<h4><?php print $fields['type']->label; ?></h4>
		<p class="type-link">
    
    <?php 		
		switch ($fields['type']->raw) {
			case 'external_calls': {  
				print  l($fields['type']->content, 'calls', array('attributes' => array('class' => array('calls-link'))));;
				break;
			}
			case 'news': {  
				print  l($fields['type']->content, 'news', array('attributes' => array('class' => array('news-link'))));;
				break;
			}
			case 'events': {  
				print  l($fields['type']->content, 'events', array('attributes' => array('class' => array('events-link'))));;
				break;
			}			
			default: {
				print '';
			}
		}	
		?>
    </p>
    <?php if ($fields['type']->raw == 'external_calls'): ?>

 		<h4><?php print t('Status') ?></h4>
    <p><?php print $fields['field_status']->content; ?></p>
 		<h4><?php print t('Reference') ?></h4>
    <p><?php print $fields['field_calls_reference']->content; ?></p>
        
   <?php endif; ?>
    
    
    
		<?php if ($fields['type']->raw == 'events'): ?>
			<!-- Event date fromat "from -> to". -->
			<?php if (isset($fields['field_date_from'])): ?>
				<!-- Content in Configure field: Content: Event Date : rewrite results -->
				<?php print $fields['field_date_from']->content; ?>
		    <?php endif; ?>
			<!-- Event Location. -->
			<?php if (isset($fields['field_event_location'])): ?>
				<h4><?php print $fields['field_event_location']->label; ?></h4>
				<!-- Content in Configure field: Content: Event Location : rewrite results -->
				<p><?php print $fields['field_event_location']->content; ?></p>
		    <?php endif; ?>
    <?php endif; ?>
    <?php if ($fields['type']->raw == 'external_calls'): ?>
			<h4>Deadline</h4>
			<p class="date-published"><?php print $fields['field_calls_deadline']->content; ?></p>
		<?php endif ?>
	</div>
	<div class="article-content col-sm-8 col-md-7">
		<h3><?php print $fields['title']->content; ?></h3>
		<p>
      <?php if ($fields['type']->raw == 'external_calls'): ?>
        <?php print $fields['body']->content; ?>
			<?php endif; ?>
  		<?php print $fields['field_abstract']->content; ?>
		</p>
	</div>
</article>
