
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

// Reaction

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_getId_0(libsbml::Reaction* self) {
  return (char*)self->getId().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_getNumReactants_0(libsbml::Reaction* self) {
  return self->getNumReactants();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_getNumModifiers_0(libsbml::Reaction* self) {
  return self->getNumModifiers();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_getNumProducts_0(libsbml::Reaction* self) {
  return self->getNumProducts();
}

libsbml::SpeciesReference* EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_getReactant_1(libsbml::Reaction* self, int arg0) {
  return self->getReactant(arg0);
}

libsbml::SpeciesReference* EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_getProduct_1(libsbml::Reaction* self, int arg0) {
  return self->getProduct(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction___destroy___0(libsbml::Reaction* self) {
  delete self;
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

// SpeciesReference

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReference_getId_0(libsbml::SpeciesReference* self) {
  return (char*)self->getId().c_str();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReference_getSpecies_0(libsbml::SpeciesReference* self) {
  return (char*)self->getSpecies().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReference___destroy___0(libsbml::SpeciesReference* self) {
  delete self;
}

// SBMLDocument

int EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_getNumErrors_0(libsbml::SBMLDocument* self) {
  return self->getNumErrors();
}

libsbml::Model* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_getModel_0(libsbml::SBMLDocument* self) {
  return self->getModel();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument___destroy___0(libsbml::SBMLDocument* self) {
  delete self;
}

// Model

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getNumReactions_0(libsbml::Model* self) {
  return self->getNumReactions();
}

libsbml::Reaction* EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getReaction_1(libsbml::Model* self, int arg0) {
  return self->getReaction(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Model___destroy___0(libsbml::Model* self) {
  delete self;
}

// VoidPtr

void EMSCRIPTEN_KEEPALIVE emscripten_bind_VoidPtr___destroy___0(void** self) {
  delete self;
}

}

