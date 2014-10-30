/**
 * A node in an abstract syntax tree (AST).
 * Used within libSBML to represent algebraic expressions.
 *
 * @class ASTNode
 */

/**
 * Gets the number of children of this node.
 * Multiplication and addition operations are treated
 * as n-ary by libSBML.
 *
 * @method getNumChildren
 * @return {Integer} Returns the number of children of this node
 */

/**
 * Gets the *i<sup>th</sup>* child of this node
 *
 * @method getChild
 * @param {Integer} i The index of the child node
 * @return {ASTNode} The child node at index *i*
 */

/**
 * Returns true if the "units" attribute is set, false otherwise.
 *
 * @method isSetUnits
 * @return {Boolean} Units are set?
 */

/**
 * Get the value of the "units" attribute.
 * SBML Level 3 Version 1 introduced the ability to specify units
 * on a _MathML_ `<cn>` node.
 *
 * @method getUnits
 * @return {String} The value of the "units" attribute
 */

/**
 * Set the value of the "units" attribute.
 * SBML Level 3 Version 1 introduced the ability to specify units
 * on a _MathML_ `<cn>` node.
 *
 * @method setUnits
 * @param {String} id The new value of the "units" attribute
 * @return {Integer} Code indicating success/failure
 */
