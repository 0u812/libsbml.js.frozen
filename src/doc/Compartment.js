/**
 * Provides an interface for using SBML documents.
 *
 * @class Compartment
 */

/**
 * Gets the id of the compartment. The id is unique within the document.
 *
 * @method getId
 * @return {String} The unique id
 */

/**
 * Sets the id of the compartment. The id must be unique within the document,
 * and is required for this type of object.
 *
 * @method setId
 * @param {String} id The unique id
 * @return {Integer} Code indicating success/failure
 */

/**
 * This method gets the "size" attribute of a compartment object,
 * which corresponds to the numeric value of the associated spatial
 * dimension.
 *
 * @method getSize
 * @return {String} The current value of the "size" attribute
 */

/**
 * This method sets the "size" attribute of a compartment object.
 * The semantics of the size attribute depend on the spatial dimensions
 * of the compartment. See {{#crossLink "Compartment/setUnits:method"}}{{/crossLink}}.
 *
 * @method setSize
 * @param {Real} val The new size
 * @return {Integer} Code indicating success/failure
 */

/**
 * Legacy - use getSize. This method gets the "volume" attribute of a compartment object.
 *
 * @method getVolume
 * @return {String} The current value of the "units" attribute
 */

/**
 * Legacy. This method is identical to setSize.
 *
 * @method setVolume
 * @param {Real} val The new size
 * @return {Integer} Code indicating success/failure
 */

/**
 * This method gets the "units" attribute of a compartment object.
 *
 * @method getUnits
 * @return {String} The current value of the "units" attribute
 */

/**
 * This method sets the "units" attribute of a compartment object.
 *
 * @method setUnits
 * @param {String} units The new units to be applied to the compartment
 * @return {Integer} Code indicating success/failure
 */
