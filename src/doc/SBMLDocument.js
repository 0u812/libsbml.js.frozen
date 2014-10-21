/**
 * Provides an interface for using SBML documents.
 *
 * @class SBMLDocument
 */

/**
 * Constructor for level / version.
 *
 * @method SBMLDocument
 * @param {Integer} level The SBML level to use when constructing the document
 * @param {Integer} version The SBML version to use when constructing the document
 * @constructor
 */

/**
 * Gets the number of errors reported for this document.
 *
 * @method getNumErrors
 * @return {Integer} The number of errors
 */

/**
 * Gets the model associated with this document.
 *
 * @method getModel
 * @return {Object} The model
 */

/**
 * Creates a new model object and assigns it to the document.
 * The model is owned by the document.
 *
 * @method createModel
 * @return {Object} The model
 */

/**
 * Gets the error log associated with this document.
 *
 * @method getErrorLog
 * @return {SBMLErrorLog} The error log
 */