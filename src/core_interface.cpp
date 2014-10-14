
#include <emscripten.h>

extern "C" {

// Not using size_t for array indices as the values used by the javascript code are signed.
void array_bounds_check(const int array_size, const int array_idx) {
  if (array_idx < 0 || array_idx >= array_size) {
    EM_ASM_INT({
      throw 'Array index ' + $0 + ' out of bounds: [0,' + $1 + ')';
    }, array_idx, array_size);
  }
}

// SBMLReader

libsbml::SBMLReader* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLReader_SBMLReader_0() {
  return new libsbml::SBMLReader();
}

libsbml::SBMLDocument* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLReader_readSBMLFromString_1(libsbml::SBMLReader* self, char* arg0) {
  return self->readSBMLFromString(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLReader___destroy___0(libsbml::SBMLReader* self) {
  delete self;
}

// VoidPtr

void EMSCRIPTEN_KEEPALIVE emscripten_bind_VoidPtr___destroy___0(void** self) {
  delete self;
}

// SBMLDocument

int EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_getNumErrors_0(libsbml::SBMLDocument* self) {
  return self->getNumErrors();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument___destroy___0(libsbml::SBMLDocument* self) {
  delete self;
}

}

