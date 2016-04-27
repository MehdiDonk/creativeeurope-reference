<?php

/**
 * @file
 * Contains CreaEuropeCallsMigration class.
 */

/**
 * Class CreaEuropeCallsMigration .
 */
class CreaEuropeCallsMigration extends CreaEuropeAbstractMigration {

  /**
   * {@inheritdoc}
   */
  public function __construct($arguments) {
    parent::__construct('external_calls', $arguments);

    $this->setMap(new MigrateSQLMap(
      $this->getMachineName(),
      $this->getSourceKey(),
      MigrateDestinationNode::getKeySchema()
    ));
    $this->setDestination(new MigrateDestinationNode('external_calls', array('text_format' => 'full_html')));

    // Entity translation requires that both title fields are mapped.
    $this->addFieldMapping('title', 'long_title');
    $this->addFieldMapping('title_field', 'long_title');

    // Entity translation requires that both title fields are mapped.
    $this->addFieldMapping('field_abstract', 'abstract');
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('field_meta_description', 'meta_description');
    $this->addFieldMapping('field_images', 'media_reference');

    // Mapping default language is necessary for correct translation handling.
    $this->addFieldMapping('language', 'default_language');

    $this->addFieldMapping('promote')->defaultValue(FALSE);
    $this->addFieldMapping('status')->defaultValue(NODE_PUBLISHED);
  }

}
