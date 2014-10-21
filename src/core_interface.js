
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

Reaction.prototype['getNumModifiers'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Reaction_getNumModifiers_0(self);
};

Reaction.prototype['getNumProducts'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Reaction_getNumProducts_0(self);
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

  Reaction.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_Reaction___destroy___0(self);
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
// SBMLWriterjs
function SBMLWriterjs() {
  this.ptr = _emscripten_bind_SBMLWriterjs_SBMLWriterjs_0();
  getCache(SBMLWriterjs)[this.ptr] = this;
};
SBMLWriterjs.prototype = Object.create(WrapperObject.prototype);
SBMLWriterjs.prototype.constructor = SBMLWriterjs;
SBMLWriterjs.prototype.__class__ = SBMLWriterjs;
SBMLWriterjs.__cache__ = {};
Module['SBMLWriterjs'] = SBMLWriterjs;

SBMLWriterjs.prototype['writeSBMLToString'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return Pointer_stringify(_emscripten_bind_SBMLWriterjs_writeSBMLToString_1(self, arg0));
};

  SBMLWriterjs.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_SBMLWriterjs___destroy___0(self);
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
// KineticLaw
function KineticLaw() { throw "cannot construct a KineticLaw, no constructor in IDL" }
KineticLaw.prototype = Object.create(WrapperObject.prototype);
KineticLaw.prototype.constructor = KineticLaw;
KineticLaw.prototype.__class__ = KineticLaw;
KineticLaw.__cache__ = {};
Module['KineticLaw'] = KineticLaw;

KineticLaw.prototype['setMath'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_KineticLaw_setMath_1(self, arg0);
};

  KineticLaw.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_KineticLaw___destroy___0(self);
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
  return wrapPointer(_emscripten_bind_SBMLFormulaParser_parseL3Formula_1(self, arg0), ASTNode_t);
};

SBMLFormulaParser.prototype['parseFormula'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return wrapPointer(_emscripten_bind_SBMLFormulaParser_parseFormula_1(self, arg0), ASTNode_t);
};

  SBMLFormulaParser.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_SBMLFormulaParser___destroy___0(self);
}
// SBMLDocument
function SBMLDocument() { throw "cannot construct a SBMLDocument, no constructor in IDL" }
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

SBMLDocument.prototype['getErrorLog'] = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_SBMLDocument_getErrorLog_0(self), SBMLErrorLog);
};

  SBMLDocument.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_SBMLDocument___destroy___0(self);
}
// ASTNode_t
function ASTNode_t() { throw "cannot construct a ASTNode_t, no constructor in IDL" }
ASTNode_t.prototype = Object.create(WrapperObject.prototype);
ASTNode_t.prototype.constructor = ASTNode_t;
ASTNode_t.prototype.__class__ = ASTNode_t;
ASTNode_t.__cache__ = {};
Module['ASTNode_t'] = ASTNode_t;

  ASTNode_t.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_ASTNode_t___destroy___0(self);
}
// Model
function Model() { throw "cannot construct a Model, no constructor in IDL" }
Model.prototype = Object.create(WrapperObject.prototype);
Model.prototype.constructor = Model;
Model.prototype.__class__ = Model;
Model.__cache__ = {};
Module['Model'] = Model;

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

Model.prototype['createSpecies'] = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_Model_createSpecies_0(self), Species);
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

Species.prototype['setInitialAmount'] = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  else arg0 = ensureString(arg0);
  return _emscripten_bind_Species_setInitialAmount_1(self, arg0);
};

Species.prototype['getInitialAmount'] = function() {
  var self = this.ptr;
  return _emscripten_bind_Species_getInitialAmount_0(self);
};

  Species.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_Species___destroy___0(self);
}
