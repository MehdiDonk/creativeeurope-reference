<?php

/**
 * @file
 * Contains IntegrationTestArticlesMigration class.
 */

/**
 * Class CreaEuropeCommonPageMigration .
 */
class CreaEuropeNewsMigration extends CreaEuropeAbstractMigration {

  /**
   * {@inheritdoc}
   */
  public function __construct($arguments) {
    parent::__construct('newseac', $arguments);

    $this->setMap(new MigrateSQLMap(
      $this->getMachineName(),
      $this->getSourceKey(),
      MigrateDestinationNode::getKeySchema()
    ));
    $this->setDestination(new MigrateDestinationNode('newseac', array('text_format' => 'full_html')));

    // Entity translation requires that both title fields are mapped.
    $this->addFieldMapping('title', 'long_title');
    $this->addFieldMapping('title_field', 'long_title');

    // Entity translation requires that both title fields are mapped.
    $this->addFieldMapping('field_abstract', 'abstract');
    $this->addFieldMapping('field_meta_description', 'meta_description');
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('field_images', 'media_reference');

    // Mapping default language is necessary for correct translation handling.
    $this->addFieldMapping('language', 'default_language');

    $this->addFieldMapping('promote')->defaultValue(FALSE);
    $this->addFieldMapping('status')->defaultValue(NODE_PUBLISHED);
  }

}
