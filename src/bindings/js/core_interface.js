
// Bindings utilities

function WrapperObject() {
}
WrapperObject.prototype = Object.create(WrapperObject.prototype);
WrapperObject.prototype.constructor = WrapperObject;
WrapperObject.prototype.__class__ = WrapperObject;
WrapperObject.__cache__ = {};
Module['WrapperObject'] = WrapperObject;

function getCache(__class__) {
  return (__class__ || WrapperObject).__cache__;
}
Module['getCache'] = getCache;

function wrapPointer(ptr, __class__) {
  var cache = getCache(__class__);
  var ret = cache[ptr];
  if (ret) return ret;
  ret = Object.create((__class__ || WrapperObject).prototype);
  ret.ptr = ptr;
  return cache[ptr] = ret;
}
Module['wrapPointer'] = wrapPointer;

function castObject(obj, __class__) {
  return wrapPointer(obj.ptr, __class__);
}
Module['castObject'] = castObject;

Module['NULL'] = wrapPointer(0);

function destroy(obj) {
  if (!obj['__destroy__']) throw 'Error: Cannot destroy object. (Did you create it yourself?)';
  obj['__destroy__']();
  // Remove from cache, so the object can be GC'd and refs added onto it released
  delete getCache(obj.__class__)[obj.ptr];
}
Module['destroy'] = destroy;

function compare(obj1, obj2) {
  return obj1.ptr === obj2.ptr;
}
Module['compare'] = compare;

function getPointer(obj) {
  return obj.ptr;
}
Module['getPointer'] = getPointer;

function getClass(obj) {
  return obj.__class__;
}
Module['getClass'] = getClass;

// Converts a value into a C-style string.
function ensureString(value) {
  if (typeof value == 'string') return allocate(intArrayFromString(value), 'i8', ALLOC_STACK);
  return value;
}


// SBMLErrorLog
function SBMLErrorLog() { throw "cannot construct a SBMLErrorLog, no constructor in IDL" }
SBMLErrorLog.prototype = Object.create(WrapperObject.prototype);
SBMLErrorLog.prototype.constructor = SBMLErrorLog;
SBMLErrorLog.prototype.__class__ = SBMLErrorLog;
SBMLErrorLog.__cache__ = {};
Module['SBMLErrorLog'] = SBMLErrorLog;

  SBMLErrorLog.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_SBMLErrorLog___destroy___0(self);
}
// Reaction
function Reaction() { throw "cannot construct a Reaction, no constructor in IDL" }
Reaction.prototype = Object.create(WrapperObject.prototype);
Reaction.prototype.constructor = Reaction;
Reaction.prototype.__class__ = Reaction;
Reaction.__cache__ = {};
Module['Reaction'] = Reaction;

Reaction.prototype['getId'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_Reaction_getId_0(self));
};

Reaction.prototype['setId'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Reaction_setId_1(self, arg0);
};

Reaction.prototype['getNumReactants'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Reaction_getNumReactants_0(self);
};

Reaction.prototype['getNumProducts'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Reaction_getNumProducts_0(self);
};

Reaction.prototype['getNumModifiers'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Reaction_getNumModifiers_0(self);
};

Reaction.prototype['getReactant'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return wrapPointer(_emscripten_bind_Reaction_getReactant_1(self, arg0), SpeciesReference);
};

Reaction.prototype['getProduct'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return wrapPointer(_emscripten_bind_Reaction_getProduct_1(self, arg0), SpeciesReference);
};

Reaction.prototype['getModifier'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return wrapPointer(_emscripten_bind_Reaction_getModifier_1(self, arg0), ModifierSpeciesReference);
};

Reaction.prototype['addReactant'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Reaction_addReactant_1(self, arg0);
};

Reaction.prototype['addProduct'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Reaction_addProduct_1(self, arg0);
};

Reaction.prototype['createReactant'] = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_Reaction_createReactant_0(self), SpeciesReference);
};

Reaction.prototype['createProduct'] = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_Reaction_createProduct_0(self), SpeciesReference);
};

Reaction.prototype['createModifier'] = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_Reaction_createModifier_0(self), ModifierSpeciesReference);
};

Reaction.prototype['createKineticLaw'] = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_Reaction_createKineticLaw_0(self), KineticLaw);
};

Reaction.prototype['getKineticLaw'] = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_Reaction_getKineticLaw_0(self), KineticLaw);
};

  Reaction.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_Reaction___destroy___0(self);
}
// Compartment
function Compartment() { throw "cannot construct a Compartment, no constructor in IDL" }
Compartment.prototype = Object.create(WrapperObject.prototype);
Compartment.prototype.constructor = Compartment;
Compartment.prototype.__class__ = Compartment;
Compartment.__cache__ = {};
Module['Compartment'] = Compartment;

Compartment.prototype['getId'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_Compartment_getId_0(self));
};

Compartment.prototype['setId'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Compartment_setId_1(self, arg0);
};

Compartment.prototype['getSize'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Compartment_getSize_0(self);
};

Compartment.prototype['setSize'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Compartment_setSize_1(self, arg0);
};

Compartment.prototype['getVolume'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Compartment_getVolume_0(self);
};

Compartment.prototype['setVolume'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Compartment_setVolume_1(self, arg0);
};

Compartment.prototype['getUnits'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_Compartment_getUnits_0(self));
};

Compartment.prototype['setUnits'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Compartment_setUnits_1(self, arg0);
};

Compartment.prototype['isSetUnits'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Compartment_isSetUnits_0(self);
};

  Compartment.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_Compartment___destroy___0(self);
}
// ModifierSpeciesReference
function ModifierSpeciesReference() { throw "cannot construct a ModifierSpeciesReference, no constructor in IDL" }
ModifierSpeciesReference.prototype = Object.create(WrapperObject.prototype);
ModifierSpeciesReference.prototype.constructor = ModifierSpeciesReference;
ModifierSpeciesReference.prototype.__class__ = ModifierSpeciesReference;
ModifierSpeciesReference.__cache__ = {};
Module['ModifierSpeciesReference'] = ModifierSpeciesReference;

ModifierSpeciesReference.prototype['getId'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_ModifierSpeciesReference_getId_0(self));
};

ModifierSpeciesReference.prototype['setId'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_ModifierSpeciesReference_setId_1(self, arg0);
};

ModifierSpeciesReference.prototype['getSpecies'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_ModifierSpeciesReference_getSpecies_0(self));
};

ModifierSpeciesReference.prototype['setSpecies'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_ModifierSpeciesReference_setSpecies_1(self, arg0);
};

  ModifierSpeciesReference.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_ModifierSpeciesReference___destroy___0(self);
}
// LocalParameter
function LocalParameter() { throw "cannot construct a LocalParameter, no constructor in IDL" }
LocalParameter.prototype = Object.create(WrapperObject.prototype);
LocalParameter.prototype.constructor = LocalParameter;
LocalParameter.prototype.__class__ = LocalParameter;
LocalParameter.__cache__ = {};
Module['LocalParameter'] = LocalParameter;

LocalParameter.prototype['getId'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_LocalParameter_getId_0(self));
};

LocalParameter.prototype['setId'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_LocalParameter_setId_1(self, arg0);
};

LocalParameter.prototype['getName'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_LocalParameter_getName_0(self));
};

LocalParameter.prototype['setName'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_LocalParameter_setName_1(self, arg0);
};

LocalParameter.prototype['isSetName'] = function() {
  var self = this.ptr;
  return _emscripten_bind_LocalParameter_isSetName_0(self);
};

LocalParameter.prototype['getValue'] = function() {
  var self = this.ptr;
  return _emscripten_bind_LocalParameter_getValue_0(self);
};

LocalParameter.prototype['setValue'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_LocalParameter_setValue_1(self, arg0);
};

LocalParameter.prototype['isSetValue'] = function() {
  var self = this.ptr;
  return _emscripten_bind_LocalParameter_isSetValue_0(self);
};

LocalParameter.prototype['isSetUnits'] = function() {
  var self = this.ptr;
  return _emscripten_bind_LocalParameter_isSetUnits_0(self);
};

LocalParameter.prototype['getUnits'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_LocalParameter_getUnits_0(self));
};

LocalParameter.prototype['setUnits'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_LocalParameter_setUnits_1(self, arg0);
};

  LocalParameter.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_LocalParameter___destroy___0(self);
}
// SpeciesReference
function SpeciesReference() { throw "cannot construct a SpeciesReference, no constructor in IDL" }
SpeciesReference.prototype = Object.create(WrapperObject.prototype);
SpeciesReference.prototype.constructor = SpeciesReference;
SpeciesReference.prototype.__class__ = SpeciesReference;
SpeciesReference.__cache__ = {};
Module['SpeciesReference'] = SpeciesReference;

SpeciesReference.prototype['getId'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_SpeciesReference_getId_0(self));
};

SpeciesReference.prototype['setId'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_SpeciesReference_setId_1(self, arg0);
};

SpeciesReference.prototype['getSpecies'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_SpeciesReference_getSpecies_0(self));
};

SpeciesReference.prototype['setSpecies'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_SpeciesReference_setSpecies_1(self, arg0);
};

  SpeciesReference.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_SpeciesReference___destroy___0(self);
}
// SBMLWriter
function SBMLWriter() {
  this.ptr = _emscripten_bind_SBMLWriter_SBMLWriter_0();
  getCache(SBMLWriter)[this.ptr] = this;
};
SBMLWriter.prototype = Object.create(WrapperObject.prototype);
SBMLWriter.prototype.constructor = SBMLWriter;
SBMLWriter.prototype.__class__ = SBMLWriter;
SBMLWriter.__cache__ = {};
Module['SBMLWriter'] = SBMLWriter;

SBMLWriter.prototype['writeSBMLToString'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return Pointer_stringify(_emscripten_bind_SBMLWriter_writeSBMLToString_1(self, arg0));
};

  SBMLWriter.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_SBMLWriter___destroy___0(self);
}
// KineticLaw
function KineticLaw() { throw "cannot construct a KineticLaw, no constructor in IDL" }
KineticLaw.prototype = Object.create(WrapperObject.prototype);
KineticLaw.prototype.constructor = KineticLaw;
KineticLaw.prototype.__class__ = KineticLaw;
KineticLaw.__cache__ = {};
Module['KineticLaw'] = KineticLaw;

KineticLaw.prototype['getMath'] = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_KineticLaw_getMath_0(self), ASTNode);
};

KineticLaw.prototype['setMath'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_KineticLaw_setMath_1(self, arg0);
};

KineticLaw.prototype['getNumLocalParameters'] = function() {
  var self = this.ptr;
  return _emscripten_bind_KineticLaw_getNumLocalParameters_0(self);
};

KineticLaw.prototype['createLocalParameter'] = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_KineticLaw_createLocalParameter_0(self), LocalParameter);
};

KineticLaw.prototype['getLocalParameter'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return wrapPointer(_emscripten_bind_KineticLaw_getLocalParameter_1(self, arg0), LocalParameter);
};

KineticLaw.prototype['getNumParameters'] = function() {
  var self = this.ptr;
  return _emscripten_bind_KineticLaw_getNumParameters_0(self);
};

KineticLaw.prototype['createParameter'] = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_KineticLaw_createParameter_0(self), Parameter);
};

KineticLaw.prototype['getParameter'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return wrapPointer(_emscripten_bind_KineticLaw_getParameter_1(self, arg0), Parameter);
};

  KineticLaw.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_KineticLaw___destroy___0(self);
}
// SBMLReader
function SBMLReader() {
  this.ptr = _emscripten_bind_SBMLReader_SBMLReader_0();
  getCache(SBMLReader)[this.ptr] = this;
};
SBMLReader.prototype = Object.create(WrapperObject.prototype);
SBMLReader.prototype.constructor = SBMLReader;
SBMLReader.prototype.__class__ = SBMLReader;
SBMLReader.__cache__ = {};
Module['SBMLReader'] = SBMLReader;

SBMLReader.prototype['readSBMLFromString'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return wrapPointer(_emscripten_bind_SBMLReader_readSBMLFromString_1(self, arg0), SBMLDocument);
};

  SBMLReader.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_SBMLReader___destroy___0(self);
}
// SBMLFormulaParser
function SBMLFormulaParser() {
  this.ptr = _emscripten_bind_SBMLFormulaParser_SBMLFormulaParser_0();
  getCache(SBMLFormulaParser)[this.ptr] = this;
};
SBMLFormulaParser.prototype = Object.create(WrapperObject.prototype);
SBMLFormulaParser.prototype.constructor = SBMLFormulaParser;
SBMLFormulaParser.prototype.__class__ = SBMLFormulaParser;
SBMLFormulaParser.__cache__ = {};
Module['SBMLFormulaParser'] = SBMLFormulaParser;

SBMLFormulaParser.prototype['parseL3Formula'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return wrapPointer(_emscripten_bind_SBMLFormulaParser_parseL3Formula_1(self, arg0), ASTNode);
};

SBMLFormulaParser.prototype['parseFormula'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return wrapPointer(_emscripten_bind_SBMLFormulaParser_parseFormula_1(self, arg0), ASTNode);
};

  SBMLFormulaParser.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_SBMLFormulaParser___destroy___0(self);
}
// SBMLDocument
function SBMLDocument(arg0, arg1) {
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  if (arg1 && typeof arg1 === 'object') arg1 = arg1.ptr;
  else arg1 = ensureString(arg1);
  this.ptr = _emscripten_bind_SBMLDocument_SBMLDocument_2(arg0, arg1);
  getCache(SBMLDocument)[this.ptr] = this;
};
SBMLDocument.prototype = Object.create(WrapperObject.prototype);
SBMLDocument.prototype.constructor = SBMLDocument;
SBMLDocument.prototype.__class__ = SBMLDocument;
SBMLDocument.__cache__ = {};
Module['SBMLDocument'] = SBMLDocument;

SBMLDocument.prototype['getNumErrors'] = function() {
  var self = this.ptr;
  return _emscripten_bind_SBMLDocument_getNumErrors_0(self);
};

SBMLDocument.prototype['getModel'] = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_SBMLDocument_getModel_0(self), Model);
};

SBMLDocument.prototype['createModel'] = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_SBMLDocument_createModel_0(self), Model);
};

SBMLDocument.prototype['getErrorLog'] = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_SBMLDocument_getErrorLog_0(self), SBMLErrorLog);
};

  SBMLDocument.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_SBMLDocument___destroy___0(self);
}
// Model
function Model() { throw "cannot construct a Model, no constructor in IDL" }
Model.prototype = Object.create(WrapperObject.prototype);
Model.prototype.constructor = Model;
Model.prototype.__class__ = Model;
Model.__cache__ = {};
Module['Model'] = Model;

Model.prototype['getId'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_Model_getId_0(self));
};

Model.prototype['setId'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Model_setId_1(self, arg0);
};

Model.prototype['getNumReactions'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Model_getNumReactions_0(self);
};

Model.prototype['getReaction'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return wrapPointer(_emscripten_bind_Model_getReaction_1(self, arg0), Reaction);
};

Model.prototype['createReaction'] = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_Model_createReaction_0(self), Reaction);
};

Model.prototype['getNumSpecies'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Model_getNumSpecies_0(self);
};

Model.prototype['createSpecies'] = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_Model_createSpecies_0(self), Species);
};

Model.prototype['getSpecies'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return wrapPointer(_emscripten_bind_Model_getSpecies_1(self, arg0), Species);
};

Model.prototype['removeSpecies'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return wrapPointer(_emscripten_bind_Model_removeSpecies_1(self, arg0), Species);
};

Model.prototype['getNumCompartments'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Model_getNumCompartments_0(self);
};

Model.prototype['getCompartment'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return wrapPointer(_emscripten_bind_Model_getCompartment_1(self, arg0), Compartment);
};

Model.prototype['createCompartment'] = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_Model_createCompartment_0(self), Compartment);
};

Model.prototype['getNumParameters'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Model_getNumParameters_0(self);
};

Model.prototype['createParameter'] = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_Model_createParameter_0(self), Parameter);
};

Model.prototype['getParameter'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return wrapPointer(_emscripten_bind_Model_getParameter_1(self, arg0), Parameter);
};

Model.prototype['getVersion'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Model_getVersion_0(self);
};

Model.prototype['setAnnotation'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Model_setAnnotation_1(self, arg0);
};

  Model.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_Model___destroy___0(self);
}
// VoidPtr
function VoidPtr() { throw "cannot construct a VoidPtr, no constructor in IDL" }
VoidPtr.prototype = Object.create(WrapperObject.prototype);
VoidPtr.prototype.constructor = VoidPtr;
VoidPtr.prototype.__class__ = VoidPtr;
VoidPtr.__cache__ = {};
Module['VoidPtr'] = VoidPtr;

  VoidPtr.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_VoidPtr___destroy___0(self);
}
// Parameter
function Parameter() { throw "cannot construct a Parameter, no constructor in IDL" }
Parameter.prototype = Object.create(WrapperObject.prototype);
Parameter.prototype.constructor = Parameter;
Parameter.prototype.__class__ = Parameter;
Parameter.__cache__ = {};
Module['Parameter'] = Parameter;

Parameter.prototype['getId'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_Parameter_getId_0(self));
};

Parameter.prototype['setId'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Parameter_setId_1(self, arg0);
};

Parameter.prototype['getName'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_Parameter_getName_0(self));
};

Parameter.prototype['setName'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Parameter_setName_1(self, arg0);
};

Parameter.prototype['isSetName'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Parameter_isSetName_0(self);
};

Parameter.prototype['getValue'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Parameter_getValue_0(self);
};

Parameter.prototype['setValue'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Parameter_setValue_1(self, arg0);
};

Parameter.prototype['isSetValue'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Parameter_isSetValue_0(self);
};

Parameter.prototype['isSetUnits'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Parameter_isSetUnits_0(self);
};

Parameter.prototype['getUnits'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_Parameter_getUnits_0(self));
};

Parameter.prototype['setUnits'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Parameter_setUnits_1(self, arg0);
};

  Parameter.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_Parameter___destroy___0(self);
}
// Species
function Species() { throw "cannot construct a Species, no constructor in IDL" }
Species.prototype = Object.create(WrapperObject.prototype);
Species.prototype.constructor = Species;
Species.prototype.__class__ = Species;
Species.__cache__ = {};
Module['Species'] = Species;

Species.prototype['getId'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_Species_getId_0(self));
};

Species.prototype['setId'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Species_setId_1(self, arg0);
};

Species.prototype['getName'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_Species_getName_0(self));
};

Species.prototype['setName'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Species_setName_1(self, arg0);
};

Species.prototype['getInitialAmount'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Species_getInitialAmount_0(self);
};

Species.prototype['setInitialAmount'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Species_setInitialAmount_1(self, arg0);
};

Species.prototype['getInitialConcentration'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Species_getInitialConcentration_0(self);
};

Species.prototype['setInitialConcentration'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Species_setInitialConcentration_1(self, arg0);
};

Species.prototype['getCompartment'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_Species_getCompartment_0(self));
};

Species.prototype['setCompartment'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Species_setCompartment_1(self, arg0);
};

Species.prototype['isSetCompartment'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Species_isSetCompartment_0(self);
};

Species.prototype['getUnits'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_Species_getUnits_0(self));
};

Species.prototype['setUnits'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Species_setUnits_1(self, arg0);
};

Species.prototype['isSetUnits'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Species_isSetUnits_0(self);
};

  Species.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_Species___destroy___0(self);
}
// ASTNode
function ASTNode() { throw "cannot construct a ASTNode, no constructor in IDL" }
ASTNode.prototype = Object.create(WrapperObject.prototype);
ASTNode.prototype.constructor = ASTNode;
ASTNode.prototype.__class__ = ASTNode;
ASTNode.__cache__ = {};
Module['ASTNode'] = ASTNode;

ASTNode.prototype['getNumChildren'] = function() {
  var self = this.ptr;
  return _emscripten_bind_ASTNode_getNumChildren_0(self);
};

ASTNode.prototype['getChild'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return wrapPointer(_emscripten_bind_ASTNode_getChild_1(self, arg0), ASTNode);
};

ASTNode.prototype['getType'] = function() {
  var self = this.ptr;
  return _emscripten_bind_ASTNode_getType_0(self);
};

ASTNode.prototype['isSetUnits'] = function() {
  var self = this.ptr;
  return _emscripten_bind_ASTNode_isSetUnits_0(self);
};

ASTNode.prototype['getUnits'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_ASTNode_getUnits_0(self));
};

ASTNode.prototype['setUnits'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_ASTNode_setUnits_1(self, arg0);
};

ASTNode.prototype['getName'] = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_ASTNode_getName_0(self));
};

ASTNode.prototype['setName'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_ASTNode_setName_1(self, arg0);
};

  ASTNode.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_ASTNode___destroy___0(self);
}
// libsbml__idl__ASTNodeType_t
Module['AST_PLUS'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_PLUS();
Module['AST_MINUS'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_MINUS();
Module['AST_TIMES'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_TIMES();
Module['AST_DIVIDE'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_DIVIDE();
Module['AST_POWER'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_POWER();
Module['AST_INTEGER'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_INTEGER();
Module['AST_REAL'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_REAL();
Module['AST_REAL_E'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_REAL_E();
Module['AST_RATIONAL'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_RATIONAL();
Module['AST_NAME'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_NAME();
Module['AST_NAME_AVOGADRO'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_NAME_AVOGADRO();
Module['AST_NAME_TIME'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_NAME_TIME();
Module['AST_CONSTANT_E'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_CONSTANT_E();
Module['AST_CONSTANT_FALSE'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_CONSTANT_FALSE();
Module['AST_CONSTANT_PI'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_CONSTANT_PI();
Module['AST_CONSTANT_TRUE'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_CONSTANT_TRUE();
Module['AST_LAMBDA'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_LAMBDA();
Module['AST_FUNCTION'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION();
Module['AST_FUNCTION_ABS'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ABS();
Module['AST_FUNCTION_ARCCOS'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCCOS();
Module['AST_FUNCTION_ARCCOSH'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCCOSH();
Module['AST_FUNCTION_ARCCOT'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCCOT();
Module['AST_FUNCTION_ARCCOTH'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCCOTH();
Module['AST_FUNCTION_ARCCSC'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCCSC();
Module['AST_FUNCTION_ARCCSCH'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCCSCH();
Module['AST_FUNCTION_ARCSEC'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCSEC();
Module['AST_FUNCTION_ARCSECH'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCSECH();
Module['AST_FUNCTION_ARCSIN'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCSIN();
Module['AST_FUNCTION_ARCSINH'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCSINH();
Module['AST_FUNCTION_ARCTAN'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCTAN();
Module['AST_FUNCTION_ARCTANH'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCTANH();
Module['AST_FUNCTION_CEILING'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_CEILING();
Module['AST_FUNCTION_COS'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_COS();
Module['AST_FUNCTION_COSH'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_COSH();
Module['AST_FUNCTION_COT'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_COT();
Module['AST_FUNCTION_COTH'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_COTH();
Module['AST_FUNCTION_CSC'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_CSC();
Module['AST_FUNCTION_CSCH'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_CSCH();
Module['AST_FUNCTION_DELAY'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_DELAY();
Module['AST_FUNCTION_EXP'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_EXP();
Module['AST_FUNCTION_FACTORIAL'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_FACTORIAL();
Module['AST_FUNCTION_FLOOR'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_FLOOR();
Module['AST_FUNCTION_LN'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_LN();
Module['AST_FUNCTION_LOG'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_LOG();
Module['AST_FUNCTION_PIECEWISE'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_PIECEWISE();
Module['AST_FUNCTION_POWER'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_POWER();
Module['AST_FUNCTION_ROOT'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ROOT();
Module['AST_FUNCTION_SEC'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_SEC();
Module['AST_FUNCTION_SECH'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_SECH();
Module['AST_FUNCTION_SIN'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_SIN();
Module['AST_FUNCTION_SINH'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_SINH();
Module['AST_FUNCTION_TAN'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_TAN();
Module['AST_FUNCTION_TANH'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_TANH();
Module['AST_LOGICAL_AND'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_LOGICAL_AND();
Module['AST_LOGICAL_NOT'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_LOGICAL_NOT();
Module['AST_LOGICAL_OR'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_LOGICAL_OR();
Module['AST_LOGICAL_XOR'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_LOGICAL_XOR();
Module['AST_RELATIONAL_EQ'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_RELATIONAL_EQ();
Module['AST_RELATIONAL_GEQ'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_RELATIONAL_GEQ();
Module['AST_RELATIONAL_GT'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_RELATIONAL_GT();
Module['AST_RELATIONAL_LEQ'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_RELATIONAL_LEQ();
Module['AST_RELATIONAL_LT'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_RELATIONAL_LT();
Module['AST_RELATIONAL_NEQ'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_RELATIONAL_NEQ();
Module['AST_QUALIFIER_BVAR'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_QUALIFIER_BVAR();
Module['AST_QUALIFIER_LOGBASE'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_QUALIFIER_LOGBASE();
Module['AST_QUALIFIER_DEGREE'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_QUALIFIER_DEGREE();
Module['AST_SEMANTICS'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_SEMANTICS();
Module['AST_CONSTRUCTOR_PIECE'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_CONSTRUCTOR_PIECE();
Module['AST_CONSTRUCTOR_OTHERWISE'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_CONSTRUCTOR_OTHERWISE();
Module['AST_UNKNOWN'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_UNKNOWN();
Module['AST_ORIGINATES_IN_PACKAGE'] = _emscripten_enum_libsbml__idl__ASTNodeType_t_AST_ORIGINATES_IN_PACKAGE();

