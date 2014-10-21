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
