
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

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_getMetaId_0(libsbml::Reaction* self) {
  return (char*)self->getMetaId().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_setMetaId_1(libsbml::Reaction* self, char* arg0) {
  return self->setMetaId(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_getName_0(libsbml::Reaction* self) {
  return (char*)self->getName().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_setName_1(libsbml::Reaction* self, char* arg0) {
  return self->setName(arg0);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_getNumReactants_0(libsbml::Reaction* self) {
  return self->getNumReactants();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_getNumProducts_0(libsbml::Reaction* self) {
  return self->getNumProducts();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_getNumModifiers_0(libsbml::Reaction* self) {
  return self->getNumModifiers();
}

libsbml::SpeciesReference* EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_getReactant_1(libsbml::Reaction* self, int arg0) {
  return self->getReactant(arg0);
}

libsbml::SpeciesReference* EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_getProduct_1(libsbml::Reaction* self, int arg0) {
  return self->getProduct(arg0);
}

libsbml::ModifierSpeciesReference* EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_getModifier_1(libsbml::Reaction* self, int arg0) {
  return self->getModifier(arg0);
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

libsbml::KineticLaw* EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_getKineticLaw_0(libsbml::Reaction* self) {
  return self->getKineticLaw();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_getReversible_0(libsbml::Reaction* self) {
  return self->getReversible();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_setReversible_1(libsbml::Reaction* self, bool arg0) {
  return self->setReversible(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_isSetReversible_0(libsbml::Reaction* self) {
  return self->isSetReversible();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_getSBOTerm_0(libsbml::Reaction* self) {
  return self->getSBOTerm();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_setSBOTerm_1(libsbml::Reaction* self, int arg0) {
  return self->setSBOTerm(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Reaction_isSetSBOTerm_0(libsbml::Reaction* self) {
  return self->isSetSBOTerm();
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

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Compartment_getMetaId_0(libsbml::Compartment* self) {
  return (char*)self->getMetaId().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Compartment_setMetaId_1(libsbml::Compartment* self, char* arg0) {
  return self->setMetaId(arg0);
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_Compartment_getSize_0(libsbml::Compartment* self) {
  return self->getSize();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Compartment_setSize_1(libsbml::Compartment* self, double arg0) {
  return self->setSize(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Compartment_isSetSize_0(libsbml::Compartment* self) {
  return self->isSetSize();
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_Compartment_getVolume_0(libsbml::Compartment* self) {
  return self->getVolume();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Compartment_setVolume_1(libsbml::Compartment* self, double arg0) {
  return self->setVolume(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Compartment_getUnits_0(libsbml::Compartment* self) {
  return (char*)self->getUnits().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Compartment_setUnits_1(libsbml::Compartment* self, char* arg0) {
  return self->setUnits(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Compartment_isSetUnits_0(libsbml::Compartment* self) {
  return self->isSetUnits();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Compartment_getSBOTerm_0(libsbml::Compartment* self) {
  return self->getSBOTerm();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Compartment_setSBOTerm_1(libsbml::Compartment* self, int arg0) {
  return self->setSBOTerm(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Compartment_isSetSBOTerm_0(libsbml::Compartment* self) {
  return self->isSetSBOTerm();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Compartment___destroy___0(libsbml::Compartment* self) {
  delete self;
}

// ModifierSpeciesReference

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_ModifierSpeciesReference_getId_0(libsbml::ModifierSpeciesReference* self) {
  return (char*)self->getId().c_str();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ModifierSpeciesReference_setId_1(libsbml::ModifierSpeciesReference* self, char* arg0) {
  return self->setId(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_ModifierSpeciesReference_getMetaId_0(libsbml::ModifierSpeciesReference* self) {
  return (char*)self->getMetaId().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_ModifierSpeciesReference_setMetaId_1(libsbml::ModifierSpeciesReference* self, char* arg0) {
  return self->setMetaId(arg0);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_ModifierSpeciesReference_getSBOTerm_0(libsbml::ModifierSpeciesReference* self) {
  return self->getSBOTerm();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_ModifierSpeciesReference_setSBOTerm_1(libsbml::ModifierSpeciesReference* self, int arg0) {
  return self->setSBOTerm(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ModifierSpeciesReference_isSetSBOTerm_0(libsbml::ModifierSpeciesReference* self) {
  return self->isSetSBOTerm();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_ModifierSpeciesReference_getSpecies_0(libsbml::ModifierSpeciesReference* self) {
  return (char*)self->getSpecies().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_ModifierSpeciesReference_setSpecies_1(libsbml::ModifierSpeciesReference* self, char* arg0) {
  return self->setSpecies(arg0);
}

const libsbml::Model* EMSCRIPTEN_KEEPALIVE emscripten_bind_ModifierSpeciesReference_getModel_0(libsbml::ModifierSpeciesReference* self) {
  return self->getModel();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ModifierSpeciesReference___destroy___0(libsbml::ModifierSpeciesReference* self) {
  delete self;
}

// LocalParameter

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalParameter_getId_0(libsbml::LocalParameter* self) {
  return (char*)self->getId().c_str();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalParameter_setId_1(libsbml::LocalParameter* self, char* arg0) {
  return self->setId(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalParameter_getName_0(libsbml::LocalParameter* self) {
  return (char*)self->getName().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalParameter_setName_1(libsbml::LocalParameter* self, char* arg0) {
  return self->setName(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalParameter_isSetName_0(libsbml::LocalParameter* self) {
  return self->isSetName();
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalParameter_getValue_0(libsbml::LocalParameter* self) {
  return self->getValue();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalParameter_setValue_1(libsbml::LocalParameter* self, double arg0) {
  return self->setValue(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalParameter_isSetValue_0(libsbml::LocalParameter* self) {
  return self->isSetValue();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalParameter_isSetUnits_0(libsbml::LocalParameter* self) {
  return self->isSetUnits();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalParameter_getUnits_0(libsbml::LocalParameter* self) {
  return (char*)self->getUnits().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalParameter_setUnits_1(libsbml::LocalParameter* self, char* arg0) {
  return self->setUnits(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalParameter___destroy___0(libsbml::LocalParameter* self) {
  delete self;
}

// SpeciesReference

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReference_getId_0(libsbml::SpeciesReference* self) {
  return (char*)self->getId().c_str();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReference_setId_1(libsbml::SpeciesReference* self, char* arg0) {
  return self->setId(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReference_getMetaId_0(libsbml::SpeciesReference* self) {
  return (char*)self->getMetaId().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReference_setMetaId_1(libsbml::SpeciesReference* self, char* arg0) {
  return self->setMetaId(arg0);
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReference_getSBOTerm_0(libsbml::SpeciesReference* self) {
  return self->getSBOTerm();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReference_setSBOTerm_1(libsbml::SpeciesReference* self, int arg0) {
  return self->setSBOTerm(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReference_isSetSBOTerm_0(libsbml::SpeciesReference* self) {
  return self->isSetSBOTerm();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReference_getSpecies_0(libsbml::SpeciesReference* self) {
  return (char*)self->getSpecies().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReference_setSpecies_1(libsbml::SpeciesReference* self, char* arg0) {
  return self->setSpecies(arg0);
}

const libsbml::Model* EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReference_getModel_0(libsbml::SpeciesReference* self) {
  return self->getModel();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReference___destroy___0(libsbml::SpeciesReference* self) {
  delete self;
}

// SBMLWriter

libsbml::SBMLWriter* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLWriter_SBMLWriter_0() {
  return new libsbml::SBMLWriter();
}

const char* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLWriter_writeSBMLToString_1(libsbml::SBMLWriter* self, libsbml::SBMLDocument* arg0) {
  return self->writeSBMLToString(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLWriter___destroy___0(libsbml::SBMLWriter* self) {
  delete self;
}

// KineticLaw

const libsbml::ASTNode* EMSCRIPTEN_KEEPALIVE emscripten_bind_KineticLaw_getMath_0(libsbml::KineticLaw* self) {
  return self->getMath();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_KineticLaw_setMath_1(libsbml::KineticLaw* self, libsbml::ASTNode* arg0) {
  return self->setMath(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_KineticLaw_getMetaId_0(libsbml::KineticLaw* self) {
  return (char*)self->getMetaId().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_KineticLaw_setMetaId_1(libsbml::KineticLaw* self, char* arg0) {
  return self->setMetaId(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_KineticLaw_getNumLocalParameters_0(libsbml::KineticLaw* self) {
  return self->getNumLocalParameters();
}

libsbml::LocalParameter* EMSCRIPTEN_KEEPALIVE emscripten_bind_KineticLaw_createLocalParameter_0(libsbml::KineticLaw* self) {
  return self->createLocalParameter();
}

libsbml::LocalParameter* EMSCRIPTEN_KEEPALIVE emscripten_bind_KineticLaw_getLocalParameter_1(libsbml::KineticLaw* self, unsigned int arg0) {
  return self->getLocalParameter(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_KineticLaw_getNumParameters_0(libsbml::KineticLaw* self) {
  return self->getNumParameters();
}

libsbml::Parameter* EMSCRIPTEN_KEEPALIVE emscripten_bind_KineticLaw_createParameter_0(libsbml::KineticLaw* self) {
  return self->createParameter();
}

libsbml::Parameter* EMSCRIPTEN_KEEPALIVE emscripten_bind_KineticLaw_getParameter_1(libsbml::KineticLaw* self, unsigned int arg0) {
  return self->getParameter(arg0);
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

// SBMLError

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLError_getMessage_0(libsbml::SBMLError* self) {
  return (char*)self->getMessage().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLError___destroy___0(libsbml::SBMLError* self) {
  delete self;
}

// SBMLFormulaParser

libsbml::SBMLFormulaParser* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLFormulaParser_SBMLFormulaParser_0() {
  return new libsbml::SBMLFormulaParser();
}

libsbml::ASTNode* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLFormulaParser_parseL3Formula_1(libsbml::SBMLFormulaParser* self, char* arg0) {
  return self->parseL3Formula(arg0);
}

libsbml::ASTNode* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLFormulaParser_parseFormula_1(libsbml::SBMLFormulaParser* self, char* arg0) {
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

const libsbml::SBMLError* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_getError_1(libsbml::SBMLDocument* self, unsigned int arg0) {
  return self->getError(arg0);
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

// Model

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getId_0(libsbml::Model* self) {
  return (char*)self->getId().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_setId_1(libsbml::Model* self, char* arg0) {
  return self->setId(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getMetaId_0(libsbml::Model* self) {
  return (char*)self->getMetaId().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_setMetaId_1(libsbml::Model* self, char* arg0) {
  return self->setMetaId(arg0);
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

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getNumSpecies_0(libsbml::Model* self) {
  return self->getNumSpecies();
}

libsbml::Species* EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_createSpecies_0(libsbml::Model* self) {
  return self->createSpecies();
}

libsbml::Species* EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getSpecies_1(libsbml::Model* self, unsigned int arg0) {
  return self->getSpecies(arg0);
}

libsbml::Species* EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_removeSpecies_1(libsbml::Model* self, unsigned int arg0) {
  return self->removeSpecies(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getNumCompartments_0(libsbml::Model* self) {
  return self->getNumCompartments();
}

libsbml::Compartment* EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getCompartment_1(libsbml::Model* self, unsigned int arg0) {
  return self->getCompartment(arg0);
}

libsbml::Compartment* EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_createCompartment_0(libsbml::Model* self) {
  return self->createCompartment();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getNumParameters_0(libsbml::Model* self) {
  return self->getNumParameters();
}

libsbml::Parameter* EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_createParameter_0(libsbml::Model* self) {
  return self->createParameter();
}

libsbml::Parameter* EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getParameter_1(libsbml::Model* self, unsigned int arg0) {
  return self->getParameter(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getVersion_0(libsbml::Model* self) {
  return self->getVersion();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_setAnnotation_1(libsbml::Model* self, char* arg0) {
  return self->setAnnotation(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Model___destroy___0(libsbml::Model* self) {
  delete self;
}

// VoidPtr

void EMSCRIPTEN_KEEPALIVE emscripten_bind_VoidPtr___destroy___0(void** self) {
  delete self;
}

// Parameter

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Parameter_getId_0(libsbml::Parameter* self) {
  return (char*)self->getId().c_str();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Parameter_setId_1(libsbml::Parameter* self, char* arg0) {
  return self->setId(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Parameter_getName_0(libsbml::Parameter* self) {
  return (char*)self->getName().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Parameter_setName_1(libsbml::Parameter* self, char* arg0) {
  return self->setName(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Parameter_isSetName_0(libsbml::Parameter* self) {
  return self->isSetName();
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_Parameter_getValue_0(libsbml::Parameter* self) {
  return self->getValue();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Parameter_setValue_1(libsbml::Parameter* self, double arg0) {
  return self->setValue(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Parameter_isSetValue_0(libsbml::Parameter* self) {
  return self->isSetValue();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Parameter_isSetUnits_0(libsbml::Parameter* self) {
  return self->isSetUnits();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Parameter_getUnits_0(libsbml::Parameter* self) {
  return (char*)self->getUnits().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Parameter_setUnits_1(libsbml::Parameter* self, char* arg0) {
  return self->setUnits(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Parameter___destroy___0(libsbml::Parameter* self) {
  delete self;
}

// Species

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_getId_0(libsbml::Species* self) {
  return (char*)self->getId().c_str();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_setId_1(libsbml::Species* self, char* arg0) {
  return self->setId(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_getMetaId_0(libsbml::Species* self) {
  return (char*)self->getMetaId().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_setMetaId_1(libsbml::Species* self, char* arg0) {
  return self->setMetaId(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_getName_0(libsbml::Species* self) {
  return (char*)self->getName().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_setName_1(libsbml::Species* self, char* arg0) {
  return self->setName(arg0);
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_getInitialAmount_0(libsbml::Species* self) {
  return self->getInitialAmount();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_setInitialAmount_1(libsbml::Species* self, double arg0) {
  return self->setInitialAmount(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_isSetInitialAmount_0(libsbml::Species* self) {
  return self->isSetInitialAmount();
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_getInitialConcentration_0(libsbml::Species* self) {
  return self->getInitialConcentration();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_setInitialConcentration_1(libsbml::Species* self, double arg0) {
  return self->setInitialConcentration(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_isSetInitialConcentration_0(libsbml::Species* self) {
  return self->isSetInitialConcentration();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_getHasOnlySubstanceUnits_0(libsbml::Species* self) {
  return self->getHasOnlySubstanceUnits();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_setHasOnlySubstanceUnits_1(libsbml::Species* self, bool arg0) {
  return self->setHasOnlySubstanceUnits(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_isSetHasOnlySubstanceUnits_0(libsbml::Species* self) {
  return self->isSetHasOnlySubstanceUnits();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_getCompartment_0(libsbml::Species* self) {
  return (char*)self->getCompartment().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_setCompartment_1(libsbml::Species* self, char* arg0) {
  return self->setCompartment(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_isSetCompartment_0(libsbml::Species* self) {
  return self->isSetCompartment();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_getUnits_0(libsbml::Species* self) {
  return (char*)self->getUnits().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_setUnits_1(libsbml::Species* self, char* arg0) {
  return self->setUnits(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_isSetUnits_0(libsbml::Species* self) {
  return self->isSetUnits();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_getSBOTerm_0(libsbml::Species* self) {
  return self->getSBOTerm();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_setSBOTerm_1(libsbml::Species* self, int arg0) {
  return self->setSBOTerm(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Species_isSetSBOTerm_0(libsbml::Species* self) {
  return self->isSetSBOTerm();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Species___destroy___0(libsbml::Species* self) {
  delete self;
}

// ASTNode

int EMSCRIPTEN_KEEPALIVE emscripten_bind_ASTNode_getNumChildren_0(libsbml::ASTNode* self) {
  return self->getNumChildren();
}

libsbml::ASTNode* EMSCRIPTEN_KEEPALIVE emscripten_bind_ASTNode_getChild_1(libsbml::ASTNode* self, int arg0) {
  return self->getChild(arg0);
}

libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_bind_ASTNode_getType_0(libsbml::ASTNode* self) {
  return self->getType();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ASTNode_isSetUnits_0(libsbml::ASTNode* self) {
  return self->isSetUnits();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_ASTNode_getUnits_0(libsbml::ASTNode* self) {
  return (char*)self->getUnits().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_ASTNode_setUnits_1(libsbml::ASTNode* self, char* arg0) {
  return self->setUnits(arg0);
}

const char* EMSCRIPTEN_KEEPALIVE emscripten_bind_ASTNode_getName_0(libsbml::ASTNode* self) {
  return self->getName();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_ASTNode_setName_1(libsbml::ASTNode* self, const char* arg0) {
  return self->setName(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ASTNode___destroy___0(libsbml::ASTNode* self) {
  delete self;
}

// libsbml__idl__ASTNodeType_t
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_PLUS() {
  return libsbml::AST_PLUS;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_MINUS() {
  return libsbml::AST_MINUS;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_TIMES() {
  return libsbml::AST_TIMES;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_DIVIDE() {
  return libsbml::AST_DIVIDE;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_POWER() {
  return libsbml::AST_POWER;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_INTEGER() {
  return libsbml::AST_INTEGER;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_REAL() {
  return libsbml::AST_REAL;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_REAL_E() {
  return libsbml::AST_REAL_E;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_RATIONAL() {
  return libsbml::AST_RATIONAL;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_NAME() {
  return libsbml::AST_NAME;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_NAME_AVOGADRO() {
  return libsbml::AST_NAME_AVOGADRO;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_NAME_TIME() {
  return libsbml::AST_NAME_TIME;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_CONSTANT_E() {
  return libsbml::AST_CONSTANT_E;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_CONSTANT_FALSE() {
  return libsbml::AST_CONSTANT_FALSE;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_CONSTANT_PI() {
  return libsbml::AST_CONSTANT_PI;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_CONSTANT_TRUE() {
  return libsbml::AST_CONSTANT_TRUE;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_LAMBDA() {
  return libsbml::AST_LAMBDA;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION() {
  return libsbml::AST_FUNCTION;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ABS() {
  return libsbml::AST_FUNCTION_ABS;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCCOS() {
  return libsbml::AST_FUNCTION_ARCCOS;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCCOSH() {
  return libsbml::AST_FUNCTION_ARCCOSH;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCCOT() {
  return libsbml::AST_FUNCTION_ARCCOT;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCCOTH() {
  return libsbml::AST_FUNCTION_ARCCOTH;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCCSC() {
  return libsbml::AST_FUNCTION_ARCCSC;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCCSCH() {
  return libsbml::AST_FUNCTION_ARCCSCH;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCSEC() {
  return libsbml::AST_FUNCTION_ARCSEC;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCSECH() {
  return libsbml::AST_FUNCTION_ARCSECH;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCSIN() {
  return libsbml::AST_FUNCTION_ARCSIN;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCSINH() {
  return libsbml::AST_FUNCTION_ARCSINH;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCTAN() {
  return libsbml::AST_FUNCTION_ARCTAN;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ARCTANH() {
  return libsbml::AST_FUNCTION_ARCTANH;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_CEILING() {
  return libsbml::AST_FUNCTION_CEILING;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_COS() {
  return libsbml::AST_FUNCTION_COS;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_COSH() {
  return libsbml::AST_FUNCTION_COSH;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_COT() {
  return libsbml::AST_FUNCTION_COT;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_COTH() {
  return libsbml::AST_FUNCTION_COTH;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_CSC() {
  return libsbml::AST_FUNCTION_CSC;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_CSCH() {
  return libsbml::AST_FUNCTION_CSCH;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_DELAY() {
  return libsbml::AST_FUNCTION_DELAY;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_EXP() {
  return libsbml::AST_FUNCTION_EXP;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_FACTORIAL() {
  return libsbml::AST_FUNCTION_FACTORIAL;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_FLOOR() {
  return libsbml::AST_FUNCTION_FLOOR;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_LN() {
  return libsbml::AST_FUNCTION_LN;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_LOG() {
  return libsbml::AST_FUNCTION_LOG;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_PIECEWISE() {
  return libsbml::AST_FUNCTION_PIECEWISE;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_POWER() {
  return libsbml::AST_FUNCTION_POWER;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_ROOT() {
  return libsbml::AST_FUNCTION_ROOT;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_SEC() {
  return libsbml::AST_FUNCTION_SEC;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_SECH() {
  return libsbml::AST_FUNCTION_SECH;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_SIN() {
  return libsbml::AST_FUNCTION_SIN;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_SINH() {
  return libsbml::AST_FUNCTION_SINH;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_TAN() {
  return libsbml::AST_FUNCTION_TAN;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_FUNCTION_TANH() {
  return libsbml::AST_FUNCTION_TANH;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_LOGICAL_AND() {
  return libsbml::AST_LOGICAL_AND;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_LOGICAL_NOT() {
  return libsbml::AST_LOGICAL_NOT;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_LOGICAL_OR() {
  return libsbml::AST_LOGICAL_OR;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_LOGICAL_XOR() {
  return libsbml::AST_LOGICAL_XOR;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_RELATIONAL_EQ() {
  return libsbml::AST_RELATIONAL_EQ;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_RELATIONAL_GEQ() {
  return libsbml::AST_RELATIONAL_GEQ;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_RELATIONAL_GT() {
  return libsbml::AST_RELATIONAL_GT;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_RELATIONAL_LEQ() {
  return libsbml::AST_RELATIONAL_LEQ;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_RELATIONAL_LT() {
  return libsbml::AST_RELATIONAL_LT;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_RELATIONAL_NEQ() {
  return libsbml::AST_RELATIONAL_NEQ;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_QUALIFIER_BVAR() {
  return libsbml::AST_QUALIFIER_BVAR;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_QUALIFIER_LOGBASE() {
  return libsbml::AST_QUALIFIER_LOGBASE;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_QUALIFIER_DEGREE() {
  return libsbml::AST_QUALIFIER_DEGREE;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_SEMANTICS() {
  return libsbml::AST_SEMANTICS;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_CONSTRUCTOR_PIECE() {
  return libsbml::AST_CONSTRUCTOR_PIECE;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_CONSTRUCTOR_OTHERWISE() {
  return libsbml::AST_CONSTRUCTOR_OTHERWISE;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_UNKNOWN() {
  return libsbml::AST_UNKNOWN;
}
libsbml::ASTNodeType_t EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__ASTNodeType_t_AST_ORIGINATES_IN_PACKAGE() {
  return libsbml::AST_ORIGINATES_IN_PACKAGE;
}

}

