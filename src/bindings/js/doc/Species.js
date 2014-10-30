/**
 * A species in SBML is an entity which can participate
 * in chemical reactions (as a reactant, product, or modifier).
 * Species often are used to represent types of molecules, e.g.
 * glucose. As such, they are not conserved in reactions, but may
 * be converted to other species or annihilated completely.
 *
 * @class Species
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
 * Gets the name of the species. Unlike ids, names need not be unique.
 *
 * @method getName
 * @return {String} The name of the species
 */

/**
 * Sets the name of the species. Unlike ids, names need not be unique.
 *
 * @method setName
 * @param {String} name The name of the species
 * @return {Integer} Code indicating success/failure
 */

/**
 * Gets the initial amount of this species.
 *
 * @method getInitialAmount
 * @return {Real} amt The initial amount
 */

/**
 * Sets the initial amount of this species.
 *
 * @method setInitialAmount
 * @param {Real} amt The initial amount
 * @return {Integer} Code indicating success/failure
 */

/**
 * Gets the initial concentration of this species.
 *
 * @method getInitialConcentration
 * @return {Real} amt The initial concentration
 */

/**
 * Sets the initial concentration of this species.
 *
 * @method setInitialConcentration
 * @param {Real} conc The initial concentration
 * @return {Integer} Code indicating success/failure
 */
