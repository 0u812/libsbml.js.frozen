
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

// ColorDefinition

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_ColorDefinition_getId_0(libsbml::ColorDefinition* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ColorDefinition_setId_1(libsbml::ColorDefinition* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ColorDefinition_isSetId_0(libsbml::ColorDefinition* self) {
  return self->isSetId();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_ColorDefinition_createValueString_0(libsbml::ColorDefinition* self) {
  return (char*)self->createValueString().c_str();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ColorDefinition_setColorValue_1(libsbml::ColorDefinition* self, char* arg0) {
  return self->setColorValue(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ColorDefinition_setRGBA_4(libsbml::ColorDefinition* self, unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
  self->setRGBA(arg0, arg1, arg2, arg3);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ColorDefinition_setRed_1(libsbml::ColorDefinition* self, unsigned int arg0) {
  self->setRed(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ColorDefinition_setGreen_1(libsbml::ColorDefinition* self, unsigned int arg0) {
  self->setGreen(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ColorDefinition_setBlue_1(libsbml::ColorDefinition* self, unsigned int arg0) {
  self->setBlue(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ColorDefinition_setAlpha_1(libsbml::ColorDefinition* self, unsigned int arg0) {
  self->setAlpha(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_ColorDefinition_getRed_0(libsbml::ColorDefinition* self) {
  return self->getRed();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_ColorDefinition_getGreen_0(libsbml::ColorDefinition* self) {
  return self->getGreen();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_ColorDefinition_getBlue_0(libsbml::ColorDefinition* self) {
  return self->getBlue();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_ColorDefinition_getAlpha_0(libsbml::ColorDefinition* self) {
  return self->getAlpha();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ColorDefinition___destroy___0(libsbml::ColorDefinition* self) {
  delete self;
}

// GradientBase

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientBase_getId_0(libsbml::GradientBase* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientBase_setId_1(libsbml::GradientBase* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientBase_isSetId_0(libsbml::GradientBase* self) {
  return self->isSetId();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientBase_getNumGradientStops_0(libsbml::GradientBase* self) {
  return self->getNumGradientStops();
}

libsbml::GradientStop* EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientBase_getGradientStop_1(libsbml::GradientBase* self, unsigned int arg0) {
  return self->getGradientStop(arg0);
}

libsbml::GradientStop* EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientBase_createGradientStop_0(libsbml::GradientBase* self) {
  return self->createGradientStop();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientBase___destroy___0(libsbml::GradientBase* self) {
  delete self;
}

// GlobalStyle

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalStyle_getId_0(libsbml::GlobalStyle* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalStyle_setId_1(libsbml::GlobalStyle* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalStyle_isSetId_0(libsbml::GlobalStyle* self) {
  return self->isSetId();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalStyle_getName_0(libsbml::GlobalStyle* self) {
  return (char*)self->getName().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalStyle_setName_1(libsbml::GlobalStyle* self, char* arg0) {
  return self->setName(arg0);
}

libsbml::RenderGroup* EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalStyle_getGroup_0(libsbml::GlobalStyle* self) {
  return self->getGroup();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalStyle_setGroup_1(libsbml::GlobalStyle* self, libsbml::RenderGroup* arg0) {
  self->setGroup(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalStyle_getNumRoles_0(libsbml::GlobalStyle* self) {
  return self->getNumRoles();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalStyle_createRoleString_0(libsbml::GlobalStyle* self) {
  return (char*)self->createRoleString().c_str();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalStyle_createTypeString_0(libsbml::GlobalStyle* self) {
  return (char*)self->createTypeString().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalStyle_addRole_1(libsbml::GlobalStyle* self, char* arg0) {
  self->addRole(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalStyle_isInRoleList_1(libsbml::GlobalStyle* self, char* arg0) {
  return self->isInRoleList(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalStyle_removeRole_1(libsbml::GlobalStyle* self, char* arg0) {
  self->removeRole(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalStyle_getNumTypes_0(libsbml::GlobalStyle* self) {
  return self->getNumTypes();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalStyle_addType_1(libsbml::GlobalStyle* self, char* arg0) {
  self->addType(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalStyle_isInTypeList_1(libsbml::GlobalStyle* self, char* arg0) {
  self->isInTypeList(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalStyle_removeType_1(libsbml::GlobalStyle* self, char* arg0) {
  self->removeType(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalStyle___destroy___0(libsbml::GlobalStyle* self) {
  delete self;
}

// Layout

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_getId_0(libsbml::Layout* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_setId_1(libsbml::Layout* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_isSetId_0(libsbml::Layout* self) {
  return self->isSetId();
}

libsbml::Dimensions* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_getDimensions_0(libsbml::Layout* self) {
  return self->getDimensions();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_setDimensions_1(libsbml::Layout* self, libsbml::Dimensions* arg0) {
  self->setDimensions(arg0);
}

libsbml::GraphicalObject* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_createAdditionalGraphicalObject_0(libsbml::Layout* self) {
  return self->createAdditionalGraphicalObject();
}

libsbml::CompartmentGlyph* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_createCompartmentGlyph_0(libsbml::Layout* self) {
  return self->createCompartmentGlyph();
}

libsbml::CubicBezier* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_createCubicBezier_0(libsbml::Layout* self) {
  return self->createCubicBezier();
}

libsbml::GeneralGlyph* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_createGeneralGlyph_0(libsbml::Layout* self) {
  return self->createGeneralGlyph();
}

libsbml::LineSegment* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_createLineSegment_0(libsbml::Layout* self) {
  return self->createLineSegment();
}

libsbml::ReactionGlyph* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_createReactionGlyph_0(libsbml::Layout* self) {
  return self->createReactionGlyph();
}

libsbml::SpeciesGlyph* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_createSpeciesGlyph_0(libsbml::Layout* self) {
  return self->createSpeciesGlyph();
}

libsbml::SpeciesReferenceGlyph* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_createSpeciesReferenceGlyph_0(libsbml::Layout* self) {
  return self->createSpeciesReferenceGlyph();
}

libsbml::TextGlyph* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_createTextGlyph_0(libsbml::Layout* self) {
  return self->createTextGlyph();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_getNumAdditionalGraphicalObjects_0(libsbml::Layout* self) {
  return self->getNumAdditionalGraphicalObjects();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_getNumCompartmentGlyphs_0(libsbml::Layout* self) {
  return self->getNumCompartmentGlyphs();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_getNumGeneralGlyphs_0(libsbml::Layout* self) {
  return self->getNumGeneralGlyphs();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_getNumReactionGlyphs_0(libsbml::Layout* self) {
  return self->getNumReactionGlyphs();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_getNumSpeciesGlyphs_0(libsbml::Layout* self) {
  return self->getNumSpeciesGlyphs();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_getNumTextGlyphs_0(libsbml::Layout* self) {
  return self->getNumTextGlyphs();
}

libsbml::GraphicalObject* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_getAdditionalGraphicalObject_1(libsbml::Layout* self, unsigned int arg0) {
  return self->getAdditionalGraphicalObject(arg0);
}

libsbml::CompartmentGlyph* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_getCompartmentGlyph_1(libsbml::Layout* self, unsigned int arg0) {
  return self->getCompartmentGlyph(arg0);
}

libsbml::GeneralGlyph* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_getGeneralGlyph_1(libsbml::Layout* self, unsigned int arg0) {
  return self->getGeneralGlyph(arg0);
}

libsbml::ReactionGlyph* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_getReactionGlyph_1(libsbml::Layout* self, unsigned int arg0) {
  return self->getReactionGlyph(arg0);
}

libsbml::SpeciesGlyph* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_getSpeciesGlyph_1(libsbml::Layout* self, unsigned int arg0) {
  return self->getSpeciesGlyph(arg0);
}

libsbml::TextGlyph* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_getTextGlyph_1(libsbml::Layout* self, unsigned int arg0) {
  return self->getTextGlyph(arg0);
}

libsbml::GraphicalObject* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_removeAdditionalGraphicalObject_1(libsbml::Layout* self, unsigned int arg0) {
  return self->removeAdditionalGraphicalObject(arg0);
}

libsbml::CompartmentGlyph* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_removeCompartmentGlyph_1(libsbml::Layout* self, unsigned int arg0) {
  return self->removeCompartmentGlyph(arg0);
}

libsbml::ReactionGlyph* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_removeReactionGlyph_1(libsbml::Layout* self, unsigned int arg0) {
  return self->removeReactionGlyph(arg0);
}

libsbml::SpeciesGlyph* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_removeSpeciesGlyph_1(libsbml::Layout* self, unsigned int arg0) {
  return self->removeSpeciesGlyph(arg0);
}

libsbml::SpeciesReferenceGlyph* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_removeSpeciesReferenceGlyph_1(libsbml::Layout* self, char* arg0) {
  return self->removeSpeciesReferenceGlyph(arg0);
}

libsbml::TextGlyph* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_removeTextGlyph_1(libsbml::Layout* self, unsigned int arg0) {
  return self->removeTextGlyph(arg0);
}

libsbml::SBasePlugin* EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout_getPlugin_1(libsbml::Layout* self, char* arg0) {
  return self->getPlugin(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Layout___destroy___0(libsbml::Layout* self) {
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

// CubicBezier

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_CubicBezier_getId_0(libsbml::CubicBezier* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_CubicBezier_setId_1(libsbml::CubicBezier* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_CubicBezier_isSetId_0(libsbml::CubicBezier* self) {
  return self->isSetId();
}

libsbml::Point* EMSCRIPTEN_KEEPALIVE emscripten_bind_CubicBezier_getStart_0(libsbml::CubicBezier* self) {
  return self->getStart();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_CubicBezier_setStart_1(libsbml::CubicBezier* self, libsbml::Point* arg0) {
  self->setStart(arg0);
}

libsbml::Point* EMSCRIPTEN_KEEPALIVE emscripten_bind_CubicBezier_getEnd_0(libsbml::CubicBezier* self) {
  return self->getEnd();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_CubicBezier_setEnd_1(libsbml::CubicBezier* self, libsbml::Point* arg0) {
  self->setEnd(arg0);
}

libsbml::Point* EMSCRIPTEN_KEEPALIVE emscripten_bind_CubicBezier_getBasePoint1_0(libsbml::CubicBezier* self) {
  return self->getBasePoint1();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_CubicBezier_setBasePoint1_1(libsbml::CubicBezier* self, libsbml::Point* arg0) {
  self->setBasePoint1(arg0);
}

libsbml::Point* EMSCRIPTEN_KEEPALIVE emscripten_bind_CubicBezier_getBasePoint2_0(libsbml::CubicBezier* self) {
  return self->getBasePoint2();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_CubicBezier_setBasePoint2_1(libsbml::CubicBezier* self, libsbml::Point* arg0) {
  self->setBasePoint2(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_CubicBezier___destroy___0(libsbml::CubicBezier* self) {
  delete self;
}

// RenderPoint

libsbml::RelAbsVector* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderPoint_x_0(libsbml::RenderPoint* self) {
  return &self->x();
}

libsbml::RelAbsVector* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderPoint_y_0(libsbml::RenderPoint* self) {
  return &self->y();
}

libsbml::RelAbsVector* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderPoint_z_0(libsbml::RenderPoint* self) {
  return &self->z();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderPoint_setX_1(libsbml::RenderPoint* self, libsbml::RelAbsVector* arg0) {
  self->setX(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderPoint_setY_1(libsbml::RenderPoint* self, libsbml::RelAbsVector* arg0) {
  self->setY(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderPoint_setZ_1(libsbml::RenderPoint* self, libsbml::RelAbsVector* arg0) {
  self->setZ(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderPoint_setCoordinates_3(libsbml::RenderPoint* self, libsbml::RelAbsVector* arg0, libsbml::RelAbsVector* arg1, libsbml::RelAbsVector* arg2) {
  self->setCoordinates(*arg0, *arg1, *arg2);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderPoint_initDefaults_0(libsbml::RenderPoint* self) {
  self->initDefaults();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderPoint_getElementName_0(libsbml::RenderPoint* self) {
  return (char*)self->getElementName().c_str();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderPoint_hasRequiredElements_0(libsbml::RenderPoint* self) {
  return self->hasRequiredElements();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderPoint___destroy___0(libsbml::RenderPoint* self) {
  delete self;
}

// LocalRenderInformation

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation_getId_0(libsbml::LocalRenderInformation* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation_setId_1(libsbml::LocalRenderInformation* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation_isSetId_0(libsbml::LocalRenderInformation* self) {
  return self->isSetId();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation_getName_0(libsbml::LocalRenderInformation* self) {
  return (char*)self->getName().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation_setName_1(libsbml::LocalRenderInformation* self, char* arg0) {
  self->setName(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation_isSetName_0(libsbml::LocalRenderInformation* self) {
  return self->isSetName();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation_getProgramVersion_0(libsbml::LocalRenderInformation* self) {
  return (char*)self->getProgramVersion().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation_setProgramVersion_1(libsbml::LocalRenderInformation* self, char* arg0) {
  self->setProgramVersion(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation_getBackgroundColor_0(libsbml::LocalRenderInformation* self) {
  return (char*)self->getBackgroundColor().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation_setBackgroundColor_1(libsbml::LocalRenderInformation* self, char* arg0) {
  self->setBackgroundColor(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation_getNumColorDefinitions_0(libsbml::LocalRenderInformation* self) {
  return self->getNumColorDefinitions();
}

libsbml::ColorDefinition* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation_getColorDefinition_1(libsbml::LocalRenderInformation* self, unsigned int arg0) {
  return self->getColorDefinition(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation_getNumGradientDefinitions_0(libsbml::LocalRenderInformation* self) {
  return self->getNumGradientDefinitions();
}

libsbml::GradientBase* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation_getGradientDefinition_1(libsbml::LocalRenderInformation* self, unsigned int arg0) {
  return self->getGradientDefinition(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation_getNumLineEndings_0(libsbml::LocalRenderInformation* self) {
  return self->getNumLineEndings();
}

libsbml::LineEnding* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation_getLineEnding_1(libsbml::LocalRenderInformation* self, unsigned int arg0) {
  return self->getLineEnding(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation_getNumStyles_0(libsbml::LocalRenderInformation* self) {
  return self->getNumStyles();
}

libsbml::LocalStyle* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation_getStyle_1(libsbml::LocalRenderInformation* self, unsigned int arg0) {
  return self->getStyle(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalRenderInformation___destroy___0(libsbml::LocalRenderInformation* self) {
  delete self;
}

// AssignmentRule

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_AssignmentRule_getMetaId_0(libsbml::AssignmentRule* self) {
  return (char*)self->getMetaId().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_AssignmentRule_setMetaId_1(libsbml::AssignmentRule* self, char* arg0) {
  return self->setMetaId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_AssignmentRule_isSetMetaId_0(libsbml::AssignmentRule* self) {
  return self->isSetMetaId();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_AssignmentRule_getSBOTerm_0(libsbml::AssignmentRule* self) {
  return self->getSBOTerm();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_AssignmentRule_setSBOTerm_1(libsbml::AssignmentRule* self, int arg0) {
  return self->setSBOTerm(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_AssignmentRule_isSetSBOTerm_0(libsbml::AssignmentRule* self) {
  return self->isSetSBOTerm();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_AssignmentRule_getVariable_0(libsbml::AssignmentRule* self) {
  return (char*)self->getVariable().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_AssignmentRule_setVariable_1(libsbml::AssignmentRule* self, char* arg0) {
  return self->setVariable(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_AssignmentRule_isSetVariable_0(libsbml::AssignmentRule* self) {
  return self->isSetVariable();
}

const libsbml::ASTNode* EMSCRIPTEN_KEEPALIVE emscripten_bind_AssignmentRule_getMath_0(libsbml::AssignmentRule* self) {
  return self->getMath();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_AssignmentRule_setMath_1(libsbml::AssignmentRule* self, libsbml::ASTNode* arg0) {
  return self->setMath(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_AssignmentRule_isSetMath_0(libsbml::AssignmentRule* self) {
  return self->isSetMath();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_AssignmentRule_getFormula_0(libsbml::AssignmentRule* self) {
  return (char*)self->getFormula().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_AssignmentRule_setFormula_1(libsbml::AssignmentRule* self, char* arg0) {
  return self->setFormula(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_AssignmentRule_isParameter_0(libsbml::AssignmentRule* self) {
  return self->isParameter();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_AssignmentRule___destroy___0(libsbml::AssignmentRule* self) {
  delete self;
}

// KineticLaw

const libsbml::ASTNode* EMSCRIPTEN_KEEPALIVE emscripten_bind_KineticLaw_getMath_0(libsbml::KineticLaw* self) {
  return self->getMath();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_KineticLaw_setMath_1(libsbml::KineticLaw* self, libsbml::ASTNode* arg0) {
  return self->setMath(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_KineticLaw_isSetMath_0(libsbml::KineticLaw* self) {
  return self->isSetMath();
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

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_KineticLaw_getFormula_0(libsbml::KineticLaw* self) {
  return (char*)self->getFormula().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_KineticLaw_setFormula_1(libsbml::KineticLaw* self, char* arg0) {
  return self->setFormula(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_KineticLaw___destroy___0(libsbml::KineticLaw* self) {
  delete self;
}

// Capabilities

libsbmljs::Capabilities* EMSCRIPTEN_KEEPALIVE emscripten_bind_Capabilities_Capabilities_0() {
  return new libsbmljs::Capabilities();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Capabilities_isLayoutSupported_0(libsbmljs::Capabilities* self) {
  return self->isLayoutSupported();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Capabilities_isRenderSupported_0(libsbmljs::Capabilities* self) {
  return self->isRenderSupported();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Capabilities___destroy___0(libsbmljs::Capabilities* self) {
  delete self;
}

// RenderCaster

libsbmljs::RenderCaster* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCaster_RenderCaster_0() {
  return new libsbmljs::RenderCaster();
}

libsbml::RenderListOfLayoutsPlugin* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCaster_castToRenderListOfLayoutsPlugin_1(libsbmljs::RenderCaster* self, libsbml::SBasePlugin* arg0) {
  return self->castToRenderListOfLayoutsPlugin(arg0);
}

libsbml::RenderLayoutPlugin* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCaster_castToRenderLayoutPlugin_1(libsbmljs::RenderCaster* self, libsbml::SBasePlugin* arg0) {
  return self->castToRenderLayoutPlugin(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCaster___destroy___0(libsbmljs::RenderCaster* self) {
  delete self;
}

// LineEnding

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_LineEnding_getId_0(libsbml::LineEnding* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LineEnding_setId_1(libsbml::LineEnding* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_LineEnding_isSetId_0(libsbml::LineEnding* self) {
  return self->isSetId();
}

libsbml::RenderGroup* EMSCRIPTEN_KEEPALIVE emscripten_bind_LineEnding_getGroup_0(libsbml::LineEnding* self) {
  return self->getGroup();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LineEnding_setGroup_1(libsbml::LineEnding* self, libsbml::RenderGroup* arg0) {
  self->setGroup(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_LineEnding_getIsEnabledRotationalMapping_0(libsbml::LineEnding* self) {
  return self->getIsEnabledRotationalMapping();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LineEnding_setEnableRotationalMapping_1(libsbml::LineEnding* self, bool arg0) {
  self->setEnableRotationalMapping(arg0);
}

libsbml::BoundingBox* EMSCRIPTEN_KEEPALIVE emscripten_bind_LineEnding_getBoundingBox_0(libsbml::LineEnding* self) {
  return self->getBoundingBox();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LineEnding_setBoundingBox_1(libsbml::LineEnding* self, libsbml::BoundingBox* arg0) {
  self->setBoundingBox(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LineEnding___destroy___0(libsbml::LineEnding* self) {
  delete self;
}

// Dimensions

libsbml::Dimensions* EMSCRIPTEN_KEEPALIVE emscripten_bind_Dimensions_Dimensions_4(libsbml::LayoutPkgNamespaces* arg0, double arg1, double arg2, double arg3) {
  return new libsbml::Dimensions(arg0, arg1, arg2, arg3);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Dimensions_setWidth_1(libsbml::Dimensions* self, double arg0) {
  self->setWidth(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Dimensions_setHeight_1(libsbml::Dimensions* self, double arg0) {
  self->setHeight(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Dimensions_setDepth_1(libsbml::Dimensions* self, double arg0) {
  self->setDepth(arg0);
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_Dimensions_getWidth_0(libsbml::Dimensions* self) {
  return self->getWidth();
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_Dimensions_getHeight_0(libsbml::Dimensions* self) {
  return self->getHeight();
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_Dimensions_getDepth_0(libsbml::Dimensions* self) {
  return self->getDepth();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Dimensions___destroy___0(libsbml::Dimensions* self) {
  delete self;
}

// GraphicalObject

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_GraphicalObject_getId_0(libsbml::GraphicalObject* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GraphicalObject_setId_1(libsbml::GraphicalObject* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_GraphicalObject_isSetId_0(libsbml::GraphicalObject* self) {
  return self->isSetId();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GraphicalObject___destroy___0(libsbml::GraphicalObject* self) {
  delete self;
}

// LayoutCaster

libsbmljs::LayoutCaster* EMSCRIPTEN_KEEPALIVE emscripten_bind_LayoutCaster_LayoutCaster_0() {
  return new libsbmljs::LayoutCaster();
}

libsbml::LayoutModelPlugin* EMSCRIPTEN_KEEPALIVE emscripten_bind_LayoutCaster_castToLayoutPlugin_1(libsbmljs::LayoutCaster* self, libsbml::SBasePlugin* arg0) {
  return self->castToLayoutPlugin(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LayoutCaster___destroy___0(libsbmljs::LayoutCaster* self) {
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

// CurveCaster

libsbmljs::CurveCaster* EMSCRIPTEN_KEEPALIVE emscripten_bind_CurveCaster_CurveCaster_0() {
  return new libsbmljs::CurveCaster();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_CurveCaster_isCubicBezier_1(libsbmljs::CurveCaster* self, libsbml::LineSegment* arg0) {
  return self->isCubicBezier(arg0);
}

libsbml::CubicBezier* EMSCRIPTEN_KEEPALIVE emscripten_bind_CurveCaster_castToCubicBezier_1(libsbmljs::CurveCaster* self, libsbml::LineSegment* arg0) {
  return self->castToCubicBezier(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_CurveCaster___destroy___0(libsbmljs::CurveCaster* self) {
  delete self;
}

// Rectangle

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Rectangle___destroy___0(libsbml::Rectangle* self) {
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

// SBMLErrorLog

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLErrorLog___destroy___0(libsbml::SBMLErrorLog* self) {
  delete self;
}

// RadialGradient

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_RadialGradient_getId_0(libsbml::RadialGradient* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RadialGradient_setId_1(libsbml::RadialGradient* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_RadialGradient_isSetId_0(libsbml::RadialGradient* self) {
  return self->isSetId();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_RadialGradient_getNumGradientStops_0(libsbml::RadialGradient* self) {
  return self->getNumGradientStops();
}

libsbml::GradientStop* EMSCRIPTEN_KEEPALIVE emscripten_bind_RadialGradient_getGradientStop_1(libsbml::RadialGradient* self, unsigned int arg0) {
  return self->getGradientStop(arg0);
}

libsbml::GradientStop* EMSCRIPTEN_KEEPALIVE emscripten_bind_RadialGradient_createGradientStop_0(libsbml::RadialGradient* self) {
  return self->createGradientStop();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RadialGradient___destroy___0(libsbml::RadialGradient* self) {
  delete self;
}

// VoidPtr

void EMSCRIPTEN_KEEPALIVE emscripten_bind_VoidPtr___destroy___0(void** self) {
  delete self;
}

// RateRule

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_RateRule_getMetaId_0(libsbml::RateRule* self) {
  return (char*)self->getMetaId().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_RateRule_setMetaId_1(libsbml::RateRule* self, char* arg0) {
  return self->setMetaId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_RateRule_isSetMetaId_0(libsbml::RateRule* self) {
  return self->isSetMetaId();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_RateRule_getSBOTerm_0(libsbml::RateRule* self) {
  return self->getSBOTerm();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_RateRule_setSBOTerm_1(libsbml::RateRule* self, int arg0) {
  return self->setSBOTerm(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_RateRule_isSetSBOTerm_0(libsbml::RateRule* self) {
  return self->isSetSBOTerm();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_RateRule_getFormula_0(libsbml::RateRule* self) {
  return (char*)self->getFormula().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_RateRule_setFormula_1(libsbml::RateRule* self, char* arg0) {
  return self->setFormula(arg0);
}

const libsbml::ASTNode* EMSCRIPTEN_KEEPALIVE emscripten_bind_RateRule_getMath_0(libsbml::RateRule* self) {
  return self->getMath();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_RateRule_setMath_1(libsbml::RateRule* self, libsbml::ASTNode* arg0) {
  return self->setMath(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_RateRule_isSetMath_0(libsbml::RateRule* self) {
  return self->isSetMath();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_RateRule_isParameter_0(libsbml::RateRule* self) {
  return self->isParameter();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RateRule___destroy___0(libsbml::RateRule* self) {
  delete self;
}

// RelAbsVector

libsbml::RelAbsVector* EMSCRIPTEN_KEEPALIVE emscripten_bind_RelAbsVector_RelAbsVector_2(double arg0, double arg1) {
  return new libsbml::RelAbsVector(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RelAbsVector_setCoordinate_2(libsbml::RelAbsVector* self, double arg0, double arg1) {
  self->setCoordinate(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RelAbsVector_setAbsoluteValue_1(libsbml::RelAbsVector* self, double arg0) {
  self->setAbsoluteValue(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RelAbsVector_setRelativeValue_1(libsbml::RelAbsVector* self, double arg0) {
  self->setRelativeValue(arg0);
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_RelAbsVector_getAbsoluteValue_0(libsbml::RelAbsVector* self) {
  return self->getAbsoluteValue();
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_RelAbsVector_getRelativeValue_0(libsbml::RelAbsVector* self) {
  return self->getRelativeValue();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RelAbsVector___destroy___0(libsbml::RelAbsVector* self) {
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

// LayoutExtension

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LayoutExtension___destroy___0(libsbml::LayoutExtension* self) {
  delete self;
}

// ReactionGlyph

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_ReactionGlyph_getId_0(libsbml::ReactionGlyph* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ReactionGlyph_setId_1(libsbml::ReactionGlyph* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ReactionGlyph_isSetId_0(libsbml::ReactionGlyph* self) {
  return self->isSetId();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_ReactionGlyph_getReactionId_0(libsbml::ReactionGlyph* self) {
  return (char*)self->getReactionId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ReactionGlyph_setReactionId_1(libsbml::ReactionGlyph* self, char* arg0) {
  self->setReactionId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_ReactionGlyph_isSetReactionId_0(libsbml::ReactionGlyph* self) {
  return self->isSetReactionId();
}

libsbml::BoundingBox* EMSCRIPTEN_KEEPALIVE emscripten_bind_ReactionGlyph_getBoundingBox_0(libsbml::ReactionGlyph* self) {
  return self->getBoundingBox();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ReactionGlyph_setBoundingBox_1(libsbml::ReactionGlyph* self, libsbml::BoundingBox* arg0) {
  self->setBoundingBox(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_ReactionGlyph_getNumSpeciesReferenceGlyphs_0(libsbml::ReactionGlyph* self) {
  return self->getNumSpeciesReferenceGlyphs();
}

libsbml::SpeciesReferenceGlyph* EMSCRIPTEN_KEEPALIVE emscripten_bind_ReactionGlyph_getSpeciesReferenceGlyph_1(libsbml::ReactionGlyph* self, unsigned int arg0) {
  return self->getSpeciesReferenceGlyph(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ReactionGlyph___destroy___0(libsbml::ReactionGlyph* self) {
  delete self;
}

// GradientCaster

libsbmljs::GradientCaster* EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientCaster_GradientCaster_0() {
  return new libsbmljs::GradientCaster();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientCaster_isLinear_1(libsbmljs::GradientCaster* self, libsbml::GradientBase* arg0) {
  return self->isLinear(arg0);
}

libsbml::LinearGradient* EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientCaster_asLinear_1(libsbmljs::GradientCaster* self, libsbml::GradientBase* arg0) {
  return self->asLinear(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientCaster_isRadial_1(libsbmljs::GradientCaster* self, libsbml::GradientBase* arg0) {
  return self->isRadial(arg0);
}

libsbml::RadialGradient* EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientCaster_asRadial_1(libsbmljs::GradientCaster* self, libsbml::GradientBase* arg0) {
  return self->asRadial(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientCaster___destroy___0(libsbmljs::GradientCaster* self) {
  delete self;
}

// LineSegment

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_LineSegment_getId_0(libsbml::LineSegment* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LineSegment_setId_1(libsbml::LineSegment* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_LineSegment_isSetId_0(libsbml::LineSegment* self) {
  return self->isSetId();
}

libsbml::Point* EMSCRIPTEN_KEEPALIVE emscripten_bind_LineSegment_getStart_0(libsbml::LineSegment* self) {
  return self->getStart();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LineSegment_setStart_1(libsbml::LineSegment* self, libsbml::Point* arg0) {
  self->setStart(arg0);
}

libsbml::Point* EMSCRIPTEN_KEEPALIVE emscripten_bind_LineSegment_getEnd_0(libsbml::LineSegment* self) {
  return self->getEnd();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LineSegment_setEnd_1(libsbml::LineSegment* self, libsbml::Point* arg0) {
  self->setEnd(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LineSegment___destroy___0(libsbml::LineSegment* self) {
  delete self;
}

// BezierCaster

libsbmljs::BezierCaster* EMSCRIPTEN_KEEPALIVE emscripten_bind_BezierCaster_BezierCaster_0() {
  return new libsbmljs::BezierCaster();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_BezierCaster_isBezier_1(libsbmljs::BezierCaster* self, libsbml::RenderPoint* arg0) {
  return self->isBezier(arg0);
}

libsbml::RenderCubicBezier* EMSCRIPTEN_KEEPALIVE emscripten_bind_BezierCaster_asBezier_1(libsbmljs::BezierCaster* self, libsbml::RenderPoint* arg0) {
  return self->asBezier(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_BezierCaster___destroy___0(libsbmljs::BezierCaster* self) {
  delete self;
}

// RuleSwitch

libsbmljs::RuleSwitch* EMSCRIPTEN_KEEPALIVE emscripten_bind_RuleSwitch_RuleSwitch_0() {
  return new libsbmljs::RuleSwitch();
}

libsbml::AssignmentRule* EMSCRIPTEN_KEEPALIVE emscripten_bind_RuleSwitch_castToAssignmentRule_1(libsbmljs::RuleSwitch* self, libsbml::Rule* arg0) {
  return self->castToAssignmentRule(arg0);
}

libsbml::RateRule* EMSCRIPTEN_KEEPALIVE emscripten_bind_RuleSwitch_castToRateRule_1(libsbmljs::RuleSwitch* self, libsbml::Rule* arg0) {
  return self->castToRateRule(arg0);
}

libsbml::AlgebraicRule* EMSCRIPTEN_KEEPALIVE emscripten_bind_RuleSwitch_castToAlgebraicRule_1(libsbmljs::RuleSwitch* self, libsbml::Rule* arg0) {
  return self->castToAlgebraicRule(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RuleSwitch___destroy___0(libsbmljs::RuleSwitch* self) {
  delete self;
}

// LayoutExtensionWrapper

libsbmljs::LayoutExtensionWrapper* EMSCRIPTEN_KEEPALIVE emscripten_bind_LayoutExtensionWrapper_LayoutExtensionWrapper_0() {
  return new libsbmljs::LayoutExtensionWrapper();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_LayoutExtensionWrapper_getXmlnsL2_0(libsbmljs::LayoutExtensionWrapper* self) {
  return (char*)self->getXmlnsL2().c_str();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_LayoutExtensionWrapper_getXmlnsL3V1V1_0(libsbmljs::LayoutExtensionWrapper* self) {
  return (char*)self->getXmlnsL3V1V1().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LayoutExtensionWrapper___destroy___0(libsbmljs::LayoutExtensionWrapper* self) {
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

// SBMLError

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLError_getMessage_0(libsbml::SBMLError* self) {
  return (char*)self->getMessage().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLError___destroy___0(libsbml::SBMLError* self) {
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

// RenderLayoutPlugin

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderLayoutPlugin_getNumLocalRenderInformationObjects_0(libsbml::RenderLayoutPlugin* self) {
  return self->getNumLocalRenderInformationObjects();
}

libsbml::LocalRenderInformation* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderLayoutPlugin_getRenderInformation_1(libsbml::RenderLayoutPlugin* self, unsigned int arg0) {
  return self->getRenderInformation(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderLayoutPlugin___destroy___0(libsbml::RenderLayoutPlugin* self) {
  delete self;
}

// Curve

libsbml::CubicBezier* EMSCRIPTEN_KEEPALIVE emscripten_bind_Curve_createCubicBezier_0(libsbml::Curve* self) {
  return self->createCubicBezier();
}

libsbml::LineSegment* EMSCRIPTEN_KEEPALIVE emscripten_bind_Curve_createLineSegment_0(libsbml::Curve* self) {
  return self->createLineSegment();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_Curve_getNumCurveSegments_0(libsbml::Curve* self) {
  return self->getNumCurveSegments();
}

libsbml::LineSegment* EMSCRIPTEN_KEEPALIVE emscripten_bind_Curve_getCurveSegment_1(libsbml::Curve* self, unsigned int arg0) {
  return self->getCurveSegment(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Curve___destroy___0(libsbml::Curve* self) {
  delete self;
}

// GlobalRenderInformation

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation_getId_0(libsbml::GlobalRenderInformation* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation_setId_1(libsbml::GlobalRenderInformation* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation_isSetId_0(libsbml::GlobalRenderInformation* self) {
  return self->isSetId();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation_getName_0(libsbml::GlobalRenderInformation* self) {
  return (char*)self->getName().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation_setName_1(libsbml::GlobalRenderInformation* self, char* arg0) {
  self->setName(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation_isSetName_0(libsbml::GlobalRenderInformation* self) {
  return self->isSetName();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation_getProgramVersion_0(libsbml::GlobalRenderInformation* self) {
  return (char*)self->getProgramVersion().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation_setProgramVersion_1(libsbml::GlobalRenderInformation* self, char* arg0) {
  self->setProgramVersion(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation_getBackgroundColor_0(libsbml::GlobalRenderInformation* self) {
  return (char*)self->getBackgroundColor().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation_setBackgroundColor_1(libsbml::GlobalRenderInformation* self, char* arg0) {
  self->setBackgroundColor(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation_getNumColorDefinitions_0(libsbml::GlobalRenderInformation* self) {
  return self->getNumColorDefinitions();
}

libsbml::ColorDefinition* EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation_getColorDefinition_1(libsbml::GlobalRenderInformation* self, unsigned int arg0) {
  return self->getColorDefinition(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation_getNumGradientDefinitions_0(libsbml::GlobalRenderInformation* self) {
  return self->getNumGradientDefinitions();
}

libsbml::GradientBase* EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation_getGradientDefinition_1(libsbml::GlobalRenderInformation* self, unsigned int arg0) {
  return self->getGradientDefinition(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation_getNumLineEndings_0(libsbml::GlobalRenderInformation* self) {
  return self->getNumLineEndings();
}

libsbml::LineEnding* EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation_getLineEnding_1(libsbml::GlobalRenderInformation* self, unsigned int arg0) {
  return self->getLineEnding(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation_getNumStyles_0(libsbml::GlobalRenderInformation* self) {
  return self->getNumStyles();
}

libsbml::GlobalStyle* EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation_getStyle_1(libsbml::GlobalRenderInformation* self, unsigned int arg0) {
  return self->getStyle(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GlobalRenderInformation___destroy___0(libsbml::GlobalRenderInformation* self) {
  delete self;
}

// Rule

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Rule_isRate_0(libsbml::Rule* self) {
  return self->isRate();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Rule_isAssignment_0(libsbml::Rule* self) {
  return self->isAssignment();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Rule_isAlgebraic_0(libsbml::Rule* self) {
  return self->isAlgebraic();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Rule_getMetaId_0(libsbml::Rule* self) {
  return (char*)self->getMetaId().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Rule_setMetaId_1(libsbml::Rule* self, char* arg0) {
  return self->setMetaId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Rule_isSetMetaId_0(libsbml::Rule* self) {
  return self->isSetMetaId();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Rule_getSBOTerm_0(libsbml::Rule* self) {
  return self->getSBOTerm();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Rule_setSBOTerm_1(libsbml::Rule* self, int arg0) {
  return self->setSBOTerm(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Rule_isSetSBOTerm_0(libsbml::Rule* self) {
  return self->isSetSBOTerm();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Rule_getFormula_0(libsbml::Rule* self) {
  return (char*)self->getFormula().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Rule_setFormula_1(libsbml::Rule* self, char* arg0) {
  return self->setFormula(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Rule_isParameter_0(libsbml::Rule* self) {
  return self->isParameter();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Rule___destroy___0(libsbml::Rule* self) {
  delete self;
}

// ListOfLayouts

libsbml::SBasePlugin* EMSCRIPTEN_KEEPALIVE emscripten_bind_ListOfLayouts_getPlugin_1(libsbml::ListOfLayouts* self, char* arg0) {
  return self->getPlugin(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_ListOfLayouts___destroy___0(libsbml::ListOfLayouts* self) {
  delete self;
}

// PrimitiveCaster

libsbmljs::PrimitiveCaster* EMSCRIPTEN_KEEPALIVE emscripten_bind_PrimitiveCaster_PrimitiveCaster_0() {
  return new libsbmljs::PrimitiveCaster();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_PrimitiveCaster_isPolygon_1(libsbmljs::PrimitiveCaster* self, libsbml::Transformation2D* arg0) {
  return self->isPolygon(arg0);
}

libsbml::Polygon* EMSCRIPTEN_KEEPALIVE emscripten_bind_PrimitiveCaster_asPolygon_1(libsbmljs::PrimitiveCaster* self, libsbml::Transformation2D* arg0) {
  return self->asPolygon(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_PrimitiveCaster_isImage_1(libsbmljs::PrimitiveCaster* self, libsbml::Transformation2D* arg0) {
  return self->isImage(arg0);
}

libsbml::Image* EMSCRIPTEN_KEEPALIVE emscripten_bind_PrimitiveCaster_asImage_1(libsbmljs::PrimitiveCaster* self, libsbml::Transformation2D* arg0) {
  return self->asImage(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_PrimitiveCaster_isRectangle_1(libsbmljs::PrimitiveCaster* self, libsbml::Transformation2D* arg0) {
  return self->isRectangle(arg0);
}

libsbml::Rectangle* EMSCRIPTEN_KEEPALIVE emscripten_bind_PrimitiveCaster_asRectangle_1(libsbmljs::PrimitiveCaster* self, libsbml::Transformation2D* arg0) {
  return self->asRectangle(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_PrimitiveCaster_isEllipse_1(libsbmljs::PrimitiveCaster* self, libsbml::Transformation2D* arg0) {
  return self->isEllipse(arg0);
}

libsbml::Ellipse* EMSCRIPTEN_KEEPALIVE emscripten_bind_PrimitiveCaster_asEllipse_1(libsbmljs::PrimitiveCaster* self, libsbml::Transformation2D* arg0) {
  return self->asEllipse(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_PrimitiveCaster_isRenderCurve_1(libsbmljs::PrimitiveCaster* self, libsbml::Transformation2D* arg0) {
  return self->isRenderCurve(arg0);
}

libsbml::RenderCurve* EMSCRIPTEN_KEEPALIVE emscripten_bind_PrimitiveCaster_asRenderCurve_1(libsbmljs::PrimitiveCaster* self, libsbml::Transformation2D* arg0) {
  return self->asRenderCurve(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_PrimitiveCaster_isText_1(libsbmljs::PrimitiveCaster* self, libsbml::Transformation2D* arg0) {
  return self->isText(arg0);
}

libsbml::Text* EMSCRIPTEN_KEEPALIVE emscripten_bind_PrimitiveCaster_asText_1(libsbmljs::PrimitiveCaster* self, libsbml::Transformation2D* arg0) {
  return self->asText(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_PrimitiveCaster___destroy___0(libsbmljs::PrimitiveCaster* self) {
  delete self;
}

// LocalStyle

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_getId_0(libsbml::LocalStyle* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_setId_1(libsbml::LocalStyle* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_isSetId_0(libsbml::LocalStyle* self) {
  return self->isSetId();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_getName_0(libsbml::LocalStyle* self) {
  return (char*)self->getName().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_setName_1(libsbml::LocalStyle* self, char* arg0) {
  return self->setName(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_getNumIds_0(libsbml::LocalStyle* self) {
  return self->getNumIds();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_isInIdList_1(libsbml::LocalStyle* self, char* arg0) {
  return self->isInIdList(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_removeId_1(libsbml::LocalStyle* self, char* arg0) {
  self->removeId(arg0);
}

libsbml::RenderGroup* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_getGroup_0(libsbml::LocalStyle* self) {
  return self->getGroup();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_setGroup_1(libsbml::LocalStyle* self, libsbml::RenderGroup* arg0) {
  self->setGroup(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_getNumRoles_0(libsbml::LocalStyle* self) {
  return self->getNumRoles();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_createRoleString_0(libsbml::LocalStyle* self) {
  return (char*)self->createRoleString().c_str();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_createTypeString_0(libsbml::LocalStyle* self) {
  return (char*)self->createTypeString().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_addRole_1(libsbml::LocalStyle* self, char* arg0) {
  self->addRole(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_isInRoleList_1(libsbml::LocalStyle* self, char* arg0) {
  return self->isInRoleList(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_removeRole_1(libsbml::LocalStyle* self, char* arg0) {
  self->removeRole(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_getNumTypes_0(libsbml::LocalStyle* self) {
  return self->getNumTypes();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_addType_1(libsbml::LocalStyle* self, char* arg0) {
  self->addType(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_isInTypeList_1(libsbml::LocalStyle* self, char* arg0) {
  self->isInTypeList(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle_removeType_1(libsbml::LocalStyle* self, char* arg0) {
  self->removeType(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LocalStyle___destroy___0(libsbml::LocalStyle* self) {
  delete self;
}

// SBasePlugin

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBasePlugin_getPackageName_0(libsbml::SBasePlugin* self) {
  return (char*)self->getPackageName().c_str();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBasePlugin_getPrefix_0(libsbml::SBasePlugin* self) {
  return (char*)self->getPrefix().c_str();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBasePlugin_getURI_0(libsbml::SBasePlugin* self) {
  return (char*)self->getURI().c_str();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_SBasePlugin_getVersion_0(libsbml::SBasePlugin* self) {
  return self->getVersion();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_SBasePlugin_getLevel_0(libsbml::SBasePlugin* self) {
  return self->getLevel();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SBasePlugin___destroy___0(libsbml::SBasePlugin* self) {
  delete self;
}

// SBMLDocument

libsbml::SBMLDocument* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_SBMLDocument_2(int arg0, int arg1) {
  return new libsbml::SBMLDocument(arg0, arg1);
}

libsbml::Model* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_getModel_0(libsbml::SBMLDocument* self) {
  return self->getModel();
}

libsbml::Model* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_createModel_0(libsbml::SBMLDocument* self) {
  return self->createModel();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_getNumErrors_0(libsbml::SBMLDocument* self) {
  return self->getNumErrors();
}

const libsbml::SBMLError* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_getError_1(libsbml::SBMLDocument* self, unsigned int arg0) {
  return self->getError(arg0);
}

libsbml::SBMLErrorLog* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_getErrorLog_0(libsbml::SBMLDocument* self) {
  return self->getErrorLog();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_getVersion_0(libsbml::SBMLDocument* self) {
  return self->getVersion();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_getLevel_0(libsbml::SBMLDocument* self) {
  return self->getLevel();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_getNumPlugins_0(libsbml::SBMLDocument* self) {
  return self->getNumPlugins();
}

libsbml::SBasePlugin* EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_getPlugin_1(libsbml::SBMLDocument* self, unsigned int arg0) {
  return self->getPlugin(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_enablePackage_3(libsbml::SBMLDocument* self, char* arg0, char* arg1, bool arg2) {
  return self->enablePackage(arg0, arg1, arg2);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_disablePackage_2(libsbml::SBMLDocument* self, char* arg0, char* arg1) {
  return self->disablePackage(arg0, arg1);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_isPackageEnabled_1(libsbml::SBMLDocument* self, char* arg0) {
  return self->isPackageEnabled(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_checkConsistency_0(libsbml::SBMLDocument* self) {
  return self->checkConsistency();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_checkInternalConsistency_0(libsbml::SBMLDocument* self) {
  return self->checkInternalConsistency();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_validateSBML_0(libsbml::SBMLDocument* self) {
  return self->validateSBML();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_checkL1Compatibility_0(libsbml::SBMLDocument* self) {
  return self->checkL1Compatibility();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_checkL2v1Compatibility_0(libsbml::SBMLDocument* self) {
  return self->checkL2v1Compatibility();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_checkL2v2Compatibility_0(libsbml::SBMLDocument* self) {
  return self->checkL2v2Compatibility();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_checkL2v3Compatibility_0(libsbml::SBMLDocument* self) {
  return self->checkL2v3Compatibility();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_checkL2v4Compatibility_0(libsbml::SBMLDocument* self) {
  return self->checkL2v4Compatibility();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument_checkL3v1Compatibility_0(libsbml::SBMLDocument* self) {
  return self->checkL3v1Compatibility();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SBMLDocument___destroy___0(libsbml::SBMLDocument* self) {
  delete self;
}

// Polygon

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_Polygon_getNumElements_0(libsbml::Polygon* self) {
  return self->getNumElements();
}

libsbml::RenderPoint* EMSCRIPTEN_KEEPALIVE emscripten_bind_Polygon_getElement_1(libsbml::Polygon* self, unsigned int arg0) {
  return self->getElement(arg0);
}

libsbml::RenderPoint* EMSCRIPTEN_KEEPALIVE emscripten_bind_Polygon_createPoint_0(libsbml::Polygon* self) {
  return self->createPoint();
}

libsbml::RenderCubicBezier* EMSCRIPTEN_KEEPALIVE emscripten_bind_Polygon_createCubicBezier_0(libsbml::Polygon* self) {
  return self->createCubicBezier();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Polygon_getElementName_0(libsbml::Polygon* self) {
  return (char*)self->getElementName().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Polygon_getTypeCode_0(libsbml::Polygon* self) {
  return self->getTypeCode();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Polygon___destroy___0(libsbml::Polygon* self) {
  delete self;
}

// GradientStop

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientStop_getId_0(libsbml::GradientStop* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientStop_setId_1(libsbml::GradientStop* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientStop_isSetId_0(libsbml::GradientStop* self) {
  return self->isSetId();
}

libsbml::RelAbsVector* EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientStop_getOffset_0(libsbml::GradientStop* self) {
  return &self->getOffset();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientStop_setOffset_2(libsbml::GradientStop* self, double arg0, double arg1) {
  self->setOffset(arg0, arg1);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientStop_getStopColor_0(libsbml::GradientStop* self) {
  return (char*)self->getStopColor().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientStop_setStopColor_1(libsbml::GradientStop* self, char* arg0) {
  self->setStopColor(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GradientStop___destroy___0(libsbml::GradientStop* self) {
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

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_isSetMetaId_0(libsbml::Model* self) {
  return self->isSetMetaId();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getNumReactions_0(libsbml::Model* self) {
  return self->getNumReactions();
}

libsbml::Reaction* EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getReaction_1(libsbml::Model* self, unsigned int arg0) {
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

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getNumRules_0(libsbml::Model* self) {
  return self->getNumRules();
}

libsbml::Rule* EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getRule_1(libsbml::Model* self, unsigned int arg0) {
  return self->getRule(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getVersion_0(libsbml::Model* self) {
  return self->getVersion();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_setAnnotation_1(libsbml::Model* self, char* arg0) {
  return self->setAnnotation(arg0);
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getNumPlugins_0(libsbml::Model* self) {
  return self->getNumPlugins();
}

libsbml::SBasePlugin* EMSCRIPTEN_KEEPALIVE emscripten_bind_Model_getPlugin_1(libsbml::Model* self, unsigned int arg0) {
  return self->getPlugin(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Model___destroy___0(libsbml::Model* self) {
  delete self;
}

// RenderGroup

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_getId_0(libsbml::RenderGroup* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_setId_1(libsbml::RenderGroup* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_isSetId_0(libsbml::RenderGroup* self) {
  return self->isSetId();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_getFontFamily_0(libsbml::RenderGroup* self) {
  return (char*)self->getFontFamily().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_setFontFamily_1(libsbml::RenderGroup* self, char* arg0) {
  self->setFontFamily(arg0);
}

libsbml::RelAbsVector* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_getFontSize_0(libsbml::RenderGroup* self) {
  return &self->getFontSize();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_setFontSize_1(libsbml::RenderGroup* self, libsbml::RelAbsVector* arg0) {
  self->setFontSize(*arg0);
}

libsbml::Text::FONT_WEIGHT EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_getFontWeight_0(libsbml::RenderGroup* self) {
  return self->getFontWeight();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_setFontWeight_1(libsbml::RenderGroup* self, libsbml::Text::FONT_WEIGHT arg0) {
  self->setFontWeight(arg0);
}

libsbml::Text::FONT_STYLE EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_getFontStyle_0(libsbml::RenderGroup* self) {
  return self->getFontStyle();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_setFontStyle_1(libsbml::RenderGroup* self, libsbml::Text::FONT_STYLE arg0) {
  self->setFontStyle(arg0);
}

libsbml::Text::TEXT_ANCHOR EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_getTextAnchor_0(libsbml::RenderGroup* self) {
  return self->getTextAnchor();
}

libsbml::Text::TEXT_ANCHOR EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_getVTextAnchor_0(libsbml::RenderGroup* self) {
  return self->getVTextAnchor();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_setTextAnchor_1(libsbml::RenderGroup* self, libsbml::Text::TEXT_ANCHOR arg0) {
  self->setTextAnchor(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_setVTextAnchor_1(libsbml::RenderGroup* self, libsbml::Text::TEXT_ANCHOR arg0) {
  self->setVTextAnchor(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_isSetTextAnchor_0(libsbml::RenderGroup* self) {
  return self->isSetTextAnchor();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_isSetVTextAnchor_0(libsbml::RenderGroup* self) {
  return self->isSetVTextAnchor();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_getStartHead_0(libsbml::RenderGroup* self) {
  return (char*)self->getStartHead().c_str();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_getEndHead_0(libsbml::RenderGroup* self) {
  return (char*)self->getEndHead().c_str();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_getNumElements_0(libsbml::RenderGroup* self) {
  return self->getNumElements();
}

libsbml::Transformation2D* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_getElement_1(libsbml::RenderGroup* self, unsigned int arg0) {
  return self->getElement(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_getElementName_0(libsbml::RenderGroup* self) {
  return (char*)self->getElementName().c_str();
}

libsbml::Image* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_createImage_0(libsbml::RenderGroup* self) {
  return self->createImage();
}

libsbml::RenderGroup* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_createGroup_0(libsbml::RenderGroup* self) {
  return self->createGroup();
}

libsbml::Rectangle* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_createRectangle_0(libsbml::RenderGroup* self) {
  return self->createRectangle();
}

libsbml::Ellipse* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_createEllipse_0(libsbml::RenderGroup* self) {
  return self->createEllipse();
}

libsbml::RenderCurve* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_createCurve_0(libsbml::RenderGroup* self) {
  return self->createCurve();
}

libsbml::Polygon* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_createPolygon_0(libsbml::RenderGroup* self) {
  return self->createPolygon();
}

libsbml::Text* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_createText_0(libsbml::RenderGroup* self) {
  return self->createText();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_addChildElement_1(libsbml::RenderGroup* self, libsbml::Transformation2D* arg0) {
  return self->addChildElement(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_isSetStartHead_0(libsbml::RenderGroup* self) {
  return self->isSetStartHead();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_isSetEndHead_0(libsbml::RenderGroup* self) {
  return self->isSetEndHead();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_isSetFontFamily_0(libsbml::RenderGroup* self) {
  return self->isSetFontFamily();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_isSetFontWeight_0(libsbml::RenderGroup* self) {
  return self->isSetFontWeight();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_isSetFontStyle_0(libsbml::RenderGroup* self) {
  return self->isSetFontStyle();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup_getTypeCode_0(libsbml::RenderGroup* self) {
  return self->getTypeCode();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderGroup___destroy___0(libsbml::RenderGroup* self) {
  delete self;
}

// AlgebraicRule

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_AlgebraicRule_getMetaId_0(libsbml::AlgebraicRule* self) {
  return (char*)self->getMetaId().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_AlgebraicRule_setMetaId_1(libsbml::AlgebraicRule* self, char* arg0) {
  return self->setMetaId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_AlgebraicRule_isSetMetaId_0(libsbml::AlgebraicRule* self) {
  return self->isSetMetaId();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_AlgebraicRule_getSBOTerm_0(libsbml::AlgebraicRule* self) {
  return self->getSBOTerm();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_AlgebraicRule_setSBOTerm_1(libsbml::AlgebraicRule* self, int arg0) {
  return self->setSBOTerm(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_AlgebraicRule_isSetSBOTerm_0(libsbml::AlgebraicRule* self) {
  return self->isSetSBOTerm();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_AlgebraicRule_getFormula_0(libsbml::AlgebraicRule* self) {
  return (char*)self->getFormula().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_AlgebraicRule_setFormula_1(libsbml::AlgebraicRule* self, char* arg0) {
  return self->setFormula(arg0);
}

const libsbml::ASTNode* EMSCRIPTEN_KEEPALIVE emscripten_bind_AlgebraicRule_getMath_0(libsbml::AlgebraicRule* self) {
  return self->getMath();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_AlgebraicRule_setMath_1(libsbml::AlgebraicRule* self, libsbml::ASTNode* arg0) {
  return self->setMath(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_AlgebraicRule_isSetMath_0(libsbml::AlgebraicRule* self) {
  return self->isSetMath();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_AlgebraicRule_isParameter_0(libsbml::AlgebraicRule* self) {
  return self->isParameter();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_AlgebraicRule___destroy___0(libsbml::AlgebraicRule* self) {
  delete self;
}

// RenderListOfLayoutsPlugin

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderListOfLayoutsPlugin_getNumGlobalRenderInformationObjects_0(libsbml::RenderListOfLayoutsPlugin* self) {
  return self->getNumGlobalRenderInformationObjects();
}

libsbml::GlobalRenderInformation* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderListOfLayoutsPlugin_getRenderInformation_1(libsbml::RenderListOfLayoutsPlugin* self, unsigned int arg0) {
  return self->getRenderInformation(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderListOfLayoutsPlugin___destroy___0(libsbml::RenderListOfLayoutsPlugin* self) {
  delete self;
}

// RenderCurve

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCurve___destroy___0(libsbml::RenderCurve* self) {
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

// SpeciesReferenceGlyph

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReferenceGlyph_getId_0(libsbml::SpeciesReferenceGlyph* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReferenceGlyph_setId_1(libsbml::SpeciesReferenceGlyph* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReferenceGlyph_isSetId_0(libsbml::SpeciesReferenceGlyph* self) {
  return self->isSetId();
}

libsbml::BoundingBox* EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReferenceGlyph_getBoundingBox_0(libsbml::SpeciesReferenceGlyph* self) {
  return self->getBoundingBox();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReferenceGlyph_setBoundingBox_1(libsbml::SpeciesReferenceGlyph* self, libsbml::BoundingBox* arg0) {
  self->setBoundingBox(arg0);
}

libsbml::CubicBezier* EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReferenceGlyph_createCubicBezier_0(libsbml::SpeciesReferenceGlyph* self) {
  return self->createCubicBezier();
}

libsbml::LineSegment* EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReferenceGlyph_createLineSegment_0(libsbml::SpeciesReferenceGlyph* self) {
  return self->createLineSegment();
}

libsbml::Curve* EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReferenceGlyph_getCurve_0(libsbml::SpeciesReferenceGlyph* self) {
  return self->getCurve();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReferenceGlyph_isSetCurve_0(libsbml::SpeciesReferenceGlyph* self) {
  return self->isSetCurve();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesReferenceGlyph___destroy___0(libsbml::SpeciesReferenceGlyph* self) {
  delete self;
}

// Point

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Point_getId_0(libsbml::Point* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Point_setId_1(libsbml::Point* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_Point_isSetId_0(libsbml::Point* self) {
  return self->isSetId();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Point_setX_1(libsbml::Point* self, double arg0) {
  self->setX(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Point_setY_1(libsbml::Point* self, double arg0) {
  self->setY(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Point_setZ_1(libsbml::Point* self, double arg0) {
  self->setZ(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Point_setXOffset_1(libsbml::Point* self, double arg0) {
  self->setXOffset(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Point_setYOffset_1(libsbml::Point* self, double arg0) {
  self->setYOffset(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Point_setZOffset_1(libsbml::Point* self, double arg0) {
  self->setZOffset(arg0);
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_Point_x_0(libsbml::Point* self) {
  return self->x();
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_Point_y_0(libsbml::Point* self) {
  return self->y();
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_Point_z_0(libsbml::Point* self) {
  return self->z();
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_Point_getXOffset_0(libsbml::Point* self) {
  return self->getXOffset();
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_Point_getYOffset_0(libsbml::Point* self) {
  return self->getYOffset();
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_Point_getZOffset_0(libsbml::Point* self) {
  return self->getZOffset();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Point___destroy___0(libsbml::Point* self) {
  delete self;
}

// Text

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Text___destroy___0(libsbml::Text* self) {
  delete self;
}

// LayoutPkgNamespaces

libsbml::LayoutPkgNamespaces* EMSCRIPTEN_KEEPALIVE emscripten_bind_LayoutPkgNamespaces_LayoutPkgNamespaces_2(unsigned int arg0, unsigned int arg1) {
  return new libsbml::LayoutPkgNamespaces(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LayoutPkgNamespaces___destroy___0(libsbml::LayoutPkgNamespaces* self) {
  delete self;
}

// GeneralGlyph

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_GeneralGlyph_getId_0(libsbml::GeneralGlyph* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GeneralGlyph_setId_1(libsbml::GeneralGlyph* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_GeneralGlyph_isSetId_0(libsbml::GeneralGlyph* self) {
  return self->isSetId();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_GeneralGlyph___destroy___0(libsbml::GeneralGlyph* self) {
  delete self;
}

// Ellipse

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Ellipse___destroy___0(libsbml::Ellipse* self) {
  delete self;
}

// SpeciesGlyph

libsbml::BoundingBox* EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesGlyph_getBoundingBox_0(libsbml::SpeciesGlyph* self) {
  return self->getBoundingBox();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesGlyph_setBoundingBox_1(libsbml::SpeciesGlyph* self, libsbml::BoundingBox* arg0) {
  self->setBoundingBox(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesGlyph_getId_0(libsbml::SpeciesGlyph* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesGlyph_setId_1(libsbml::SpeciesGlyph* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesGlyph_isSetId_0(libsbml::SpeciesGlyph* self) {
  return self->isSetId();
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesGlyph_getSpeciesId_0(libsbml::SpeciesGlyph* self) {
  return (char*)self->getSpeciesId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesGlyph_setSpeciesId_1(libsbml::SpeciesGlyph* self, char* arg0) {
  self->setSpeciesId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesGlyph_isSetSpeciesId_0(libsbml::SpeciesGlyph* self) {
  return self->isSetSpeciesId();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_SpeciesGlyph___destroy___0(libsbml::SpeciesGlyph* self) {
  delete self;
}

// RenderCubicBezier

libsbml::RelAbsVector* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier_basePoint1_X_0(libsbml::RenderCubicBezier* self) {
  return &self->basePoint1_X();
}

libsbml::RelAbsVector* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier_basePoint1_Y_0(libsbml::RenderCubicBezier* self) {
  return &self->basePoint1_Y();
}

libsbml::RelAbsVector* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier_basePoint1_Z_0(libsbml::RenderCubicBezier* self) {
  return &self->basePoint1_Z();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier_setBasePoint1_X_1(libsbml::RenderCubicBezier* self, libsbml::RelAbsVector* arg0) {
  self->setBasePoint1_X(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier_setBasePoint1_Y_1(libsbml::RenderCubicBezier* self, libsbml::RelAbsVector* arg0) {
  self->setBasePoint1_Y(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier_setBasePoint1_Z_1(libsbml::RenderCubicBezier* self, libsbml::RelAbsVector* arg0) {
  self->setBasePoint1_Z(*arg0);
}

libsbml::RelAbsVector* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier_basePoint2_X_0(libsbml::RenderCubicBezier* self) {
  return &self->basePoint2_X();
}

libsbml::RelAbsVector* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier_basePoint2_Y_0(libsbml::RenderCubicBezier* self) {
  return &self->basePoint2_Y();
}

libsbml::RelAbsVector* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier_basePoint2_Z_0(libsbml::RenderCubicBezier* self) {
  return &self->basePoint2_Z();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier_setBasePoint2_X_1(libsbml::RenderCubicBezier* self, libsbml::RelAbsVector* arg0) {
  self->setBasePoint2_X(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier_setBasePoint2_Y_1(libsbml::RenderCubicBezier* self, libsbml::RelAbsVector* arg0) {
  self->setBasePoint2_Y(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier_setBasePoint2_Z_1(libsbml::RenderCubicBezier* self, libsbml::RelAbsVector* arg0) {
  self->setBasePoint2_Z(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier_setBasePoint1_3(libsbml::RenderCubicBezier* self, libsbml::RelAbsVector* arg0, libsbml::RelAbsVector* arg1, libsbml::RelAbsVector* arg2) {
  self->setBasePoint1(*arg0, *arg1, *arg2);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier_setBasePoint2_3(libsbml::RenderCubicBezier* self, libsbml::RelAbsVector* arg0, libsbml::RelAbsVector* arg1, libsbml::RelAbsVector* arg2) {
  self->setBasePoint2(*arg0, *arg1, *arg2);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier_getElementName_0(libsbml::RenderCubicBezier* self) {
  return (char*)self->getElementName().c_str();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier_getTypeCode_0(libsbml::RenderCubicBezier* self) {
  return self->getTypeCode();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier_hasRequiredElements_0(libsbml::RenderCubicBezier* self) {
  return self->hasRequiredElements();
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier_hasRequiredAttributes_0(libsbml::RenderCubicBezier* self) {
  return self->hasRequiredAttributes();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_RenderCubicBezier___destroy___0(libsbml::RenderCubicBezier* self) {
  delete self;
}

// TextGlyph

libsbml::BoundingBox* EMSCRIPTEN_KEEPALIVE emscripten_bind_TextGlyph_getBoundingBox_0(libsbml::TextGlyph* self) {
  return self->getBoundingBox();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TextGlyph_setBoundingBox_1(libsbml::TextGlyph* self, libsbml::BoundingBox* arg0) {
  self->setBoundingBox(arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_TextGlyph_getText_0(libsbml::TextGlyph* self) {
  return (char*)self->getText().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TextGlyph_setText_1(libsbml::TextGlyph* self, char* arg0) {
  self->setText(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_TextGlyph_isSetText_0(libsbml::TextGlyph* self) {
  return self->isSetText();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TextGlyph___destroy___0(libsbml::TextGlyph* self) {
  delete self;
}

// Transformation2D

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Transformation2D___destroy___0(libsbml::Transformation2D* self) {
  delete self;
}

// Image

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Image_setCoordinates_3(libsbml::Image* self, libsbml::RelAbsVector* arg0, libsbml::RelAbsVector* arg1, libsbml::RelAbsVector* arg2) {
  self->setCoordinates(*arg0, *arg1, *arg2);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Image_setX_1(libsbml::Image* self, libsbml::RelAbsVector* arg0) {
  self->setX(*arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Image___destroy___0(libsbml::Image* self) {
  delete self;
}

// BoundingBox

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_BoundingBox_getId_0(libsbml::BoundingBox* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_BoundingBox_setId_1(libsbml::BoundingBox* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_BoundingBox_isSetId_0(libsbml::BoundingBox* self) {
  return self->isSetId();
}

libsbml::Dimensions* EMSCRIPTEN_KEEPALIVE emscripten_bind_BoundingBox_getDimensions_0(libsbml::BoundingBox* self) {
  return self->getDimensions();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_BoundingBox_setDimensions_1(libsbml::BoundingBox* self, libsbml::Dimensions* arg0) {
  self->setDimensions(arg0);
}

libsbml::Point* EMSCRIPTEN_KEEPALIVE emscripten_bind_BoundingBox_getPosition_0(libsbml::BoundingBox* self) {
  return self->getPosition();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_BoundingBox_setPosition_1(libsbml::BoundingBox* self, libsbml::Point* arg0) {
  self->setPosition(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_BoundingBox_setX_1(libsbml::BoundingBox* self, double arg0) {
  self->setX(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_BoundingBox_setY_1(libsbml::BoundingBox* self, double arg0) {
  self->setY(arg0);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_BoundingBox_setZ_1(libsbml::BoundingBox* self, double arg0) {
  self->setZ(arg0);
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_BoundingBox_x_0(libsbml::BoundingBox* self) {
  return self->x();
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_BoundingBox_y_0(libsbml::BoundingBox* self) {
  return self->y();
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_BoundingBox_z_0(libsbml::BoundingBox* self) {
  return self->z();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_BoundingBox___destroy___0(libsbml::BoundingBox* self) {
  delete self;
}

// LayoutModelPlugin

libsbml::Layout* EMSCRIPTEN_KEEPALIVE emscripten_bind_LayoutModelPlugin_createLayout_0(libsbml::LayoutModelPlugin* self) {
  return self->createLayout();
}

int EMSCRIPTEN_KEEPALIVE emscripten_bind_LayoutModelPlugin_getNumLayouts_0(libsbml::LayoutModelPlugin* self) {
  return self->getNumLayouts();
}

libsbml::Layout* EMSCRIPTEN_KEEPALIVE emscripten_bind_LayoutModelPlugin_getLayout_1(libsbml::LayoutModelPlugin* self, unsigned int arg0) {
  return self->getLayout(arg0);
}

libsbml::ListOfLayouts* EMSCRIPTEN_KEEPALIVE emscripten_bind_LayoutModelPlugin_getListOfLayouts_0(libsbml::LayoutModelPlugin* self) {
  return self->getListOfLayouts();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LayoutModelPlugin___destroy___0(libsbml::LayoutModelPlugin* self) {
  delete self;
}

// CompartmentGlyph

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_CompartmentGlyph_getId_0(libsbml::CompartmentGlyph* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_CompartmentGlyph_setId_1(libsbml::CompartmentGlyph* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_CompartmentGlyph_isSetId_0(libsbml::CompartmentGlyph* self) {
  return self->isSetId();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_CompartmentGlyph___destroy___0(libsbml::CompartmentGlyph* self) {
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

// LinearGradient

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_LinearGradient_getId_0(libsbml::LinearGradient* self) {
  return (char*)self->getId().c_str();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LinearGradient_setId_1(libsbml::LinearGradient* self, char* arg0) {
  self->setId(arg0);
}

bool EMSCRIPTEN_KEEPALIVE emscripten_bind_LinearGradient_isSetId_0(libsbml::LinearGradient* self) {
  return self->isSetId();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LinearGradient_setCoordinates_4(libsbml::LinearGradient* self, libsbml::RelAbsVector* arg0, libsbml::RelAbsVector* arg1, libsbml::RelAbsVector* arg2, libsbml::RelAbsVector* arg3) {
  self->setCoordinates(*arg0, *arg1, *arg2, *arg3);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LinearGradient_setPoint1_3(libsbml::LinearGradient* self, libsbml::RelAbsVector* arg0, libsbml::RelAbsVector* arg1, libsbml::RelAbsVector* arg2) {
  self->setPoint1(*arg0, *arg1, *arg2);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LinearGradient_setPoint2_3(libsbml::LinearGradient* self, libsbml::RelAbsVector* arg0, libsbml::RelAbsVector* arg1, libsbml::RelAbsVector* arg2) {
  self->setPoint2(*arg0, *arg1, *arg2);
}

libsbml::RelAbsVector* EMSCRIPTEN_KEEPALIVE emscripten_bind_LinearGradient_getXPoint1_0(libsbml::LinearGradient* self) {
  return &self->getXPoint1();
}

libsbml::RelAbsVector* EMSCRIPTEN_KEEPALIVE emscripten_bind_LinearGradient_getYPoint1_0(libsbml::LinearGradient* self) {
  return &self->getYPoint1();
}

libsbml::RelAbsVector* EMSCRIPTEN_KEEPALIVE emscripten_bind_LinearGradient_getZPoint1_0(libsbml::LinearGradient* self) {
  return &self->getZPoint1();
}

libsbml::RelAbsVector* EMSCRIPTEN_KEEPALIVE emscripten_bind_LinearGradient_getXPoint2_0(libsbml::LinearGradient* self) {
  return &self->getXPoint2();
}

libsbml::RelAbsVector* EMSCRIPTEN_KEEPALIVE emscripten_bind_LinearGradient_getYPoint2_0(libsbml::LinearGradient* self) {
  return &self->getYPoint2();
}

libsbml::RelAbsVector* EMSCRIPTEN_KEEPALIVE emscripten_bind_LinearGradient_getZPoint2_0(libsbml::LinearGradient* self) {
  return &self->getZPoint2();
}

unsigned int EMSCRIPTEN_KEEPALIVE emscripten_bind_LinearGradient_getNumGradientStops_0(libsbml::LinearGradient* self) {
  return self->getNumGradientStops();
}

libsbml::GradientStop* EMSCRIPTEN_KEEPALIVE emscripten_bind_LinearGradient_getGradientStop_1(libsbml::LinearGradient* self, unsigned int arg0) {
  return self->getGradientStop(arg0);
}

libsbml::GradientStop* EMSCRIPTEN_KEEPALIVE emscripten_bind_LinearGradient_createGradientStop_0(libsbml::LinearGradient* self) {
  return self->createGradientStop();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_LinearGradient___destroy___0(libsbml::LinearGradient* self) {
  delete self;
}

// libsbml__idl__Text__idl__FONT_WEIGHT
libsbml::Text::FONT_WEIGHT EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__Text__idl__FONT_WEIGHT_WEIGHT_UNSET() {
  return libsbml::Text::WEIGHT_UNSET;
}
libsbml::Text::FONT_WEIGHT EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__Text__idl__FONT_WEIGHT_WEIGHT_NORMAL() {
  return libsbml::Text::WEIGHT_NORMAL;
}
libsbml::Text::FONT_WEIGHT EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__Text__idl__FONT_WEIGHT_WEIGHT_BOLD() {
  return libsbml::Text::WEIGHT_BOLD;
}

// libsbml__idl__Text__idl__TEXT_ANCHOR
libsbml::Text::TEXT_ANCHOR EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__Text__idl__TEXT_ANCHOR_ANCHOR_UNSET() {
  return libsbml::Text::ANCHOR_UNSET;
}
libsbml::Text::TEXT_ANCHOR EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__Text__idl__TEXT_ANCHOR_ANCHOR_START() {
  return libsbml::Text::ANCHOR_START;
}
libsbml::Text::TEXT_ANCHOR EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__Text__idl__TEXT_ANCHOR_ANCHOR_MIDDLE() {
  return libsbml::Text::ANCHOR_MIDDLE;
}
libsbml::Text::TEXT_ANCHOR EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__Text__idl__TEXT_ANCHOR_ANCHOR_END() {
  return libsbml::Text::ANCHOR_END;
}
libsbml::Text::TEXT_ANCHOR EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__Text__idl__TEXT_ANCHOR_ANCHOR_TOP() {
  return libsbml::Text::ANCHOR_TOP;
}
libsbml::Text::TEXT_ANCHOR EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__Text__idl__TEXT_ANCHOR_ANCHOR_BOTTOM() {
  return libsbml::Text::ANCHOR_BOTTOM;
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

// libsbml__idl__Text__idl__FONT_STYLE
libsbml::Text::FONT_STYLE EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__Text__idl__FONT_STYLE_STYLE_UNSET() {
  return libsbml::Text::STYLE_UNSET;
}
libsbml::Text::FONT_STYLE EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__Text__idl__FONT_STYLE_STYLE_NORMAL() {
  return libsbml::Text::STYLE_NORMAL;
}
libsbml::Text::FONT_STYLE EMSCRIPTEN_KEEPALIVE emscripten_enum_libsbml__idl__Text__idl__FONT_STYLE_STYLE_ITALIC() {
  return libsbml::Text::STYLE_ITALIC;
}

}

