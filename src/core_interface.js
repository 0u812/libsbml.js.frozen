
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

  SBMLDocument.prototype['__destroy__'] = function() {
  var self = this.ptr;
  _emscripten_bind_SBMLDocument___destroy___0(self);
}
