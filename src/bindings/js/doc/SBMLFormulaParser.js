/**
 * This class provides a wrapper for several unscoped functions
 * in libSBML which are used in parsing formulae.
 * The class must be instantiated by calling its constructor.
 *
 * @class SBMLFormulaParser
 */

/**
 * Constructs a new formula parser.
 *
 * @method SBMLFormulaParser
 * @constructor
 */

/**
 * Gets the id of the compartment. The id is unique within the document.
 *
 * @method getId
 * @return {String} The unique id
 */

/**
 * Parses an SBML level 3 formula.
 * Level 3 formulae have an expanded syntax over
 * previous generations. See [Here](http://sbml.org/Software/libSBML/5.10.2/docs/formatted/cpp-api/_l3_parser_8h.html#a58e584e7c21801b34d79fed7a7c05ac8)
 * for more info.
 *
 * @method parseL3Formula
 * @param {String} formula The infix form of the formula (e.g. `(x*y + z)/2^n`)
 * @return {ASTNode} AST representation of the formula
 */

/**
 * Parses an SBML level 1-2 formula.
 *
 * @method parseFormula
 * @param {String} formula The infix form of the formula (e.g. `(x*y + z)/2^n`)
 * @return {ASTNode} AST representation of the formula
 */
