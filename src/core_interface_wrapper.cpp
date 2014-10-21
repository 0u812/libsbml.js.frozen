#include "sbml/SBMLReader.h"
#include "sbml/SBMLWriter.h"
#include "sbml/SBMLDocument.h"
#include "sbml/Model.h"

LIBSBML_CPP_NAMESPACE_BEGIN

class SBMLFormulaParser {
public:
  SBMLFormulaParser() {}

  ASTNode_t* parseL3Formula(const std::string& formula) {
    return SBML_parseL3Formula(formula.c_str());
  }

  ASTNode_t* parseFormula(const std::string& formula) {
    return SBML_parseFormula(formula.c_str());
  }
};

class SBMLWriterjs {
public:
  SBMLWriterjs() {}

  std::string writeSBMLToString(const SBMLDocument* doc) {
    return writer_.writeSBMLToString(doc);
  }

protected:
  SBMLWriter writer_;
};

LIBSBML_CPP_NAMESPACE_END

#include "core_interface.cpp"
