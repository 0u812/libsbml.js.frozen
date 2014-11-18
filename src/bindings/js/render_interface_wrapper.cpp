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

  class GradientCaster {
  public:
    GradientCaster() {}

    bool isLinear(libsbml::GradientBase* p) {
      libsbml::LinearGradient* result = dynamic_cast<libsbml::LinearGradient*>(p);
      return result;
    }

    libsbml::LinearGradient* asLinear(libsbml::GradientBase* p) {
      libsbml::LinearGradient* result = dynamic_cast<libsbml::LinearGradient*>(p);
      assert(result && "Cast to linear gradient failed");
      return result;
    }

    bool isRadial(libsbml::GradientBase* p) {
      libsbml::RadialGradient* result = dynamic_cast<libsbml::RadialGradient*>(p);
      return result;
    }

    libsbml::RadialGradient* asRadial(libsbml::GradientBase* p) {
      libsbml::RadialGradient* result = dynamic_cast<libsbml::RadialGradient*>(p);
      assert(result && "Cast to radial gradient failed");
      return result;
    }
  };

  class RenderCaster {
  public:
    RenderCaster() {}

    libsbml::RenderListOfLayoutsPlugin* castToRenderListOfLayoutsPlugin(libsbml::SBasePlugin* p) {
      libsbml::RenderListOfLayoutsPlugin* result = dynamic_cast<libsbml::RenderListOfLayoutsPlugin*>(p);
      assert(result && "Cast to render list of layouts plugin failed");
      return result;
    }

    libsbml::RenderLayoutPlugin* castToRenderLayoutPlugin(libsbml::SBasePlugin* p) {
      libsbml::RenderLayoutPlugin* result = dynamic_cast<libsbml::RenderLayoutPlugin*>(p);
      assert(result && "Cast to render layout plugin failed");
      return result;
    }
  };

}
