<?php
/**
 * @file
 * halle_96_service_info.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function halle_96_service_info_taxonomy_default_vocabularies() {
  return array(
    'service_info' => array(
      'name' => 'Service / Info',
      'machine_name' => 'service_info',
      'description' => 'Kategorisierung für die Infos seitens von Halle 96',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
