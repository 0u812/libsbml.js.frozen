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

LIBSBML_CPP_NAMESPACE_END

// Wrapper objects
namespace libsbmljs {

  class SBMLWriter {
  public:
    SBMLWriter() {}

    std::string writeSBMLToString(const libsbml::SBMLDocument* doc) {
      return writer_.writeSBMLToString(doc);
    }

  protected:
    libsbml::SBMLWriter writer_;
  };

}

#include "core_interface.cpp"
