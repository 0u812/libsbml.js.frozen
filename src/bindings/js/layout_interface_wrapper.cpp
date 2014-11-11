#include "sbml/SBMLReader.h"
#include "sbml/SBMLWriter.h"
#include "sbml/SBMLDocument.h"
#include "sbml/Model.h"
#include "sbml/extension/SBasePlugin.h"
#include "sbml/extension/SBMLDocumentPlugin.h"
#include "sbml/packages/layout/common/LayoutExtensionTypes.h"

// LIBSBML_CPP_NAMESPACE_BEGIN
//
// LIBSBML_CPP_NAMESPACE_END

// Wrapper objects
namespace libsbmljs {

  class LayoutCaster {
  public:
    LayoutCaster() {}

    libsbml::LayoutModelPlugin* castToLayoutPlugin(libsbml::SBasePlugin* p) {
      libsbml::LayoutModelPlugin* result = dynamic_cast<libsbml::LayoutModelPlugin*>(p);
      assert(result && "Cast to layout plugin failed");
      return result;
    }
  };

}
