/**
 * Provides an object encapsulating SBML reactions.
 * Reactions reside within a model, and may reference
 * multiple species as well as modifiers.
 * To create a reaction, use
 * `Model.`{{#crossLink "Model/createReaction:method"}}{{/crossLink}}
 *
 * @class Reaction
 */

/**
 * Gets the id of the reaction. The id is unique within the document.
 *
 * @method getId
 * @return {String} The unique id
 */

/**
 * Sets the id of the reaction. The id must be unique within the document,
 * and is required for this type of object.
 *
 * @method setId
 * @param {String} id The unique id
 * @return {Integer} Code indicating success/failure
 */

/**
 * Gets the number of reactants.
 *
 * @method getNumReactants
 * @return {Integer} The number of reactants in the reaction
 */

/**
 * Gets the number of products.
 *
 * @method getNumProducts
 * @return {Integer} The number of products in the reaction
 */

/**
 * Gets the number of modifiers.
 *
 * @method getNumModifiers
 * @return {Integer} The number of modifiers in the reaction
 */

/**
 * Gets the reactant at index *i*.
 *
 * @method getReactant
 * @param {Integer} i The index of the reactant (range: 0-`getNumReactants`)
 * @return {SpeciesReference} The *i<sup>th</sup>* reactant reference
 */

/**
 * Gets the product at index *i*.
 *
 * @method getProduct
 * @param {Integer} i The index of the product (range: 0-`getNumProducts`)
 * @return {SpeciesReference} The *i<sup>th</sup>* reactant reference
 */

/**
 * Gets the modifier at index *i*.
 *
 * @method getModifier
 * @param {Integer} i The index of the modifier (range: 0-`getNumModifiers`)
 * @return {ModifierSpeciesReference} The *i<sup>th</sup>* modifier reference
 */

/**
 * Creates a new reactant species reference and adds it to the reaction.
 * The new reactant species reference is owned by the reaction.
 *
 * @method createReactant
 * @return {SpeciesReference} The newly created species reference
 */

/**
 * Creates a new product species reference and adds it to the reaction.
 * The new product species reference is owned by the reaction.
 *
 * @method createProduct
 * @return {SpeciesReference} The newly created species reference
 */

/**
 * Creates a new modifier species reference and adds it to the reaction.
 * The new modifier species reference is owned by the reaction.
 *
 * @method createModifier
 * @return {ModifierSpeciesReference} The newly created modifier species reference
 */

/**
 * Creates a new kinetic law and adds it to the reaction.
 * A reaction may have at most one kinetic law.
 * If a previous kinetic law was assigned to this reaction,
 * it will be discarded.
 *
 * @method createKineticLaw
 * @return {KineticLaw} The newly created kinetic law
 */

/**
 * Gets the current kinetic law associated with this
 * reaction object.
 *
 * @method getKineticLaw
 * @return {KineticLaw} The kinetic law
 */
