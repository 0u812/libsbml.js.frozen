/**
 * Provides an interface for using SBML documents.
 *
 * @class Model
 */

/**
 * Gets the id of the model. The id is unique within the document.
 *
 * @method getId
 * @return {String} The unique id
 */

/**
 * Sets the id of the model. The id must be unique within the document,
 * and is required for this type of object.
 *
 * @method setId
 * @param {String} id The unique id
 * @return {Integer} Code indicating success/failure
 */

/**
 * Gets the number of reactions in the model.
 *
 * @method getNumReactions
 * @return {Integer} The number of reactions
 */

/**
 * Gets the reaction at index *i*.
 *
 * @method getReaction
 * @param {Integer} i The index of the reaction
 * @return {Reaction} The *i<sup>th</sup>* reaction object
 */

/**
 * Creates a new reaction and adds it to the model.
 * The new reaction is owned by the model.
 *
 * @method createReaction
 * @return {Reaction} The newly created reaction object
 */

/**
 * Creates a new species and adds it to the model.
 * The new species is owned by the model.
 * It can be assigned to reactions using
 * {{#crossLink "Reaction/createReactant:method"}}{{/crossLink}}
 * and calling `setSpecies` on the resultant species reference.
 *
 * @method createSpecies
 * @return {Species} The newly created species
 */

/**
 * Creates a new compartment object and adds it to the model.
 * The compartment is owned by the model.
 *
 * @method createCompartment
 * @return {Compartment} The new compartment
 */
