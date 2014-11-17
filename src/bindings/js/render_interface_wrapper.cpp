#include "sbml/SBMLReader.h"
#include "sbml/SBMLWriter.h"
#include "sbml/SBMLDocument.h"
#include "sbml/Model.h"
#include "sbml/extension/SBasePlugin.h"
#include "sbml/extension/SBMLDocumentPlugin.h"
#include "sbml/packages/layout/common/LayoutExtensionTypes.h"
#include "sbml/packages/render/common/RenderExtensionTypes.h"

// LIBSBML_CPP_NAMESPACE_BEGIN
//
// LIBSBML_CPP_NAMESPACE_END

// Wrapper objects
namespace libsbmljs {

  class RenderCaster {
  public:
    RenderCaster() {}

    libsbml::RenderListOfLayoutsPlugin* castToRenderListOfLayoutsPlugin(libsbml::SBasePlugin* p) {
      libsbml::RenderListOfLayoutsPlugin* result = dynamic_cast<libsbml::RenderListOfLayoutsPlugin*>(p);
      assert(result && "Cast to render list of layouts plugin failed");
      return result;
    }
  };

}
