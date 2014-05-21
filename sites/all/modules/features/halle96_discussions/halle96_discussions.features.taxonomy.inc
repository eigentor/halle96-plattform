<?php
/**
 * @file
 * halle96_discussions.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function halle96_discussions_taxonomy_default_vocabularies() {
  return array(
    'themen' => array(
      'name' => 'Themen',
      'machine_name' => 'themen',
      'description' => 'Die Themen für Abonnenments und zum Kategorisieren der Diskussionen',
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
