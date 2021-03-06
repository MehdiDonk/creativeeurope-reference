<?php

/**
 * @file
 * Contains DateFieldHandler.
 */

namespace Drupal\integration_producer\FieldHandlers;

/**
 * Class DateFieldHandler.
 *
 * @package Drupal\integration_producer\FieldHandlers
 */
class DateFieldHandler extends AbstractFieldHandler {

  /**
   * Default Entity Wrapper date format.
   */
  const DEFAULT_DATE_FORMAT = 'Y-m-d H:i:s';

  /**
   * {@inheritdoc}
   */
  public function getSubFieldList() {
    return [
      'start' => t('Start date'),
      'end' => t('End date'),
      'timezone' => t('Timezone'),
    ];
  }

  /**
   * {@inheritdoc}
   */
  public function processField() {

    foreach ($this->getFieldValues() as $value) {
      // Make sure value is an array.
      $value = !is_array($value) ? ['value' => $value] : $value;

      // Set default values if none given.
      $value['value2'] = isset($value['value2']) ? $value['value'] : '';
      $value['timezone'] = isset($value['timezone']) ? $value['timezone'] : '';

      // Make sure we convert timestamp into default date format.
      if (is_numeric($value['value'])) {
        $value['value'] = date(self::DEFAULT_DATE_FORMAT, $value['value']);
      }
      if (is_numeric($value['value2'])) {
        $value['value2'] = date(self::DEFAULT_DATE_FORMAT, $value['value2']);
      }

      // Set field values on document.
      $this->getDocument()->addFieldValue($this->getDestinationField(), $value['value']);
      $this->getDocument()->addFieldValue($this->getDestinationField() . '_start', $value['value']);
      $this->getDocument()->addFieldValue($this->getDestinationField() . '_end', $value['value2']);
      $this->getDocument()->addFieldValue($this->getDestinationField() . '_timezone', $value['timezone']);
    }
  }

}
