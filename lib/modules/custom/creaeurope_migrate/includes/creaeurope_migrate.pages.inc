<?php

/**
 * @file
 * Contains CreaEuropePagesMigration class.
 */

/**
 * Class CreaEuropePagesMigration .
 */
class CreaEuropePagesMigration extends CreaEuropeAbstractMigration {

  /**
   * {@inheritdoc}
   */
  public function __construct($arguments) {
    parent::__construct('pages', $arguments);

    $this->setMap(new MigrateSQLMap(
      $this->getMachineName(),
      $this->getSourceKey(),
      MigrateDestinationNode::getKeySchema()
    ));
    $this->setDestination(new MigrateDestinationNode('pages', array('text_format' => 'full_html')));

    // Entity translation requires that both title fields are mapped.
    $this->addFieldMapping('title', 'title_field');
    $this->addFieldMapping('title_field', 'title_field');

    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('field_meta_description', 'meta_description');

    // Mapping default language is necessary for correct translation handling.
    $this->addFieldMapping('language', 'default_language');

    $this->addFieldMapping('promote')->defaultValue(FALSE);
    $this->addFieldMapping('status')->defaultValue(NODE_PUBLISHED);
  }

}
