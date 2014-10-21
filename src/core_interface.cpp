
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

// SBMLErrorLog

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLErrorLog___destroy___0(libsbml::SBMLErrorLog* self) {
  delete self;
}

// Reaction

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_getId_0(libsbml::Reaction* self) {
  return (char*)self->getId().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_setId_1(libsbml::Reaction* self, char* arg0) {
  return self->setId(arg0);
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

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_addReactant_1(libsbml::Reaction* self, libsbml::SpeciesReference* arg0) {
  return self->addReactant(arg0);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_addProduct_1(libsbml::Reaction* self, libsbml::SpeciesReference* arg0) {
  return self->addProduct(arg0);
}

libsbml::SpeciesReference* EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_createReactant_0(libsbml::Reaction* self) {
  return self->createReactant();
}

libsbml::SpeciesReference* EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_createProduct_0(libsbml::Reaction* self) {
  return self->createProduct();
}

libsbml::ModifierSpeciesReference* EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_createModifier_0(libsbml::Reaction* self) {
  return self->createModifier();
}

libsbml::KineticLaw* EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_createKineticLaw_0(libsbml::Reaction* self) {
  return self->createKineticLaw();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction___destroy___0(libsbml::Reaction* self) {
  delete self;
}

// Compartment

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Compartment_getId_0(libsbml::Compartment* self) {
  return (char*)self->getId().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Compartment_setId_1(libsbml::Compartment* self, char* arg0) {
  return self->setId(arg0);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Compartment_setSize_1(libsbml::Compartment* self, double arg0) {
  return self->setSize(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Compartment___destroy___0(libsbml::Compartment* self) {
  delete self;
}

// ModifierSpeciesReference

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_ModifierSpeciesReference_getId_0(libsbml::ModifierSpeciesReference* self) {
  return (char*)self->getId().c_str();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_ModifierSpeciesReference_getSpecies_0(libsbml::ModifierSpeciesReference* self) {
  return (char*)self->getSpecies().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_ModifierSpeciesReference_setSpecies_1(libsbml::ModifierSpeciesReference* self, char* arg0) {
  return self->setSpecies(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ModifierSpeciesReference___destroy___0(libsbml::ModifierSpeciesReference* self) {
  delete self;
}

// SBMLWriterjs

libsbml::SBMLWriterjs* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLWriterjs_SBMLWriterjs_0() {
  return new libsbml::SBMLWriterjs();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLWriterjs_writeSBMLToString_1(libsbml::SBMLWriterjs* self, libsbml::SBMLDocument* arg0) {
  return (char*)self->writeSBMLToString(arg0).c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLWriterjs___destroy___0(libsbml::SBMLWriterjs* self) {
  delete self;
}

// SpeciesReference

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReference_getId_0(libsbml::SpeciesReference* self) {
  return (char*)self->getId().c_str();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReference_getSpecies_0(libsbml::SpeciesReference* self) {
  return (char*)self->getSpecies().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReference_setSpecies_1(libsbml::SpeciesReference* self, char* arg0) {
  return self->setSpecies(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReference___destroy___0(libsbml::SpeciesReference* self) {
  delete self;
}

// KineticLaw

int EMSCRIPTEN_KEEPALIVE emscripten_bind_KineticLaw_setMath_1(libsbml::KineticLaw* self, libsbml::ASTNode_t* arg0) {
  return self->setMath(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_KineticLaw___destroy___0(libsbml::KineticLaw* self) {
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

// SBMLFormulaParser

libsbml::SBMLFormulaParser* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLFormulaParser_SBMLFormulaParser_0() {
  return new libsbml::SBMLFormulaParser();
}

libsbml::ASTNode_t* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLFormulaParser_parseL3Formula_1(libsbml::SBMLFormulaParser* self, char* arg0) {
  return self->parseL3Formula(arg0);
}

libsbml::ASTNode_t* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLFormulaParser_parseFormula_1(libsbml::SBMLFormulaParser* self, char* arg0) {
  return self->parseFormula(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLFormulaParser___destroy___0(libsbml::SBMLFormulaParser* self) {
  delete self;
}

// SBMLDocument

libsbml::SBMLDocument* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_SBMLDocument_2(int arg0, int arg1) {
  return new libsbml::SBMLDocument(arg0, arg1);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_getNumErrors_0(libsbml::SBMLDocument* self) {
  return self->getNumErrors();
}

libsbml::Model* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_getModel_0(libsbml::SBMLDocument* self) {
  return self->getModel();
}

libsbml::Model* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_createModel_0(libsbml::SBMLDocument* self) {
  return self->createModel();
}

libsbml::SBMLErrorLog* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_getErrorLog_0(libsbml::SBMLDocument* self) {
  return self->getErrorLog();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument___destroy___0(libsbml::SBMLDocument* self) {
  delete self;
}

// ASTNode_t

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ASTNode_t___destroy___0(libsbml::ASTNode_t* self) {
  delete self;
}

// Model

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getId_0(libsbml::Model* self) {
  return (char*)self->getId().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_setId_1(libsbml::Model* self, char* arg0) {
  return self->setId(arg0);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getNumReactions_0(libsbml::Model* self) {
  return self->getNumReactions();
}

libsbml::Reaction* EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getReaction_1(libsbml::Model* self, int arg0) {
  return self->getReaction(arg0);
}

libsbml::Reaction* EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_createReaction_0(libsbml::Model* self) {
  return self->createReaction();
}

libsbml::Species* EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_createSpecies_0(libsbml::Model* self) {
  return self->createSpecies();
}

libsbml::Compartment* EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_createCompartment_0(libsbml::Model* self) {
  return self->createCompartment();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Model___destroy___0(libsbml::Model* self) {
  delete self;
}

// VoidPtr

void EMSCRIPTEN_KEEPALIVE emscripten_bind_VoidPtr___destroy___0(void** self) {
  delete self;
}

// Species

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_getId_0(libsbml::Species* self) {
  return (char*)self->getId().c_str();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_setId_1(libsbml::Species* self, char* arg0) {
  return self->setId(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_getName_0(libsbml::Species* self) {
  return (char*)self->getName().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_setName_1(libsbml::Species* self, char* arg0) {
  return self->setName(arg0);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_setInitialAmount_1(libsbml::Species* self, double arg0) {
  return self->setInitialAmount(arg0);
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_getInitialAmount_0(libsbml::Species* self) {
  return self->getInitialAmount();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Species___destroy___0(libsbml::Species* self) {
  delete self;
}

}

