<?php
/**
 *
 */
function rules_convert_list_rules_action_info() {
  return array('rules_convert_list_action_integer_to_list' => array(
    'label' => t('Generate a list from an integer'),
    'parameter' => array(
      'integer' => array(
        'type' => 'integer',
        'label' => t('Integer'),
        'description' => t('The integer to be converted.'),
      ),
    ),
    'provides' => array(
      'converted_list' => array(
        'type' => 'list<integer>',
        'label' => t('Converted list'),
        'description' => t('The converted list, starting from zero. For example an input of "3" will be converted to (0,1,2).'),
      ),
    ),
    'group' => t('Data'),
    'base' => 'rules_convert_list_action_integer_to_list',
  ));
}
