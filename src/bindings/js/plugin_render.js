Object.defineProperty(RelAbsVector.prototype, "r", {
  get: function() {
    return this.getRelativeValue();
  },
  set: function(x) {
    return this.setRelativeValue(x);
  }
});

Object.defineProperty(RelAbsVector.prototype, "a", {
  get: function() {
    return this.getAbsoluteValue();
  },
  set: function(x) {
    return this.setAbsoluteValue(x);
  }
});

Object.defineProperty(GradientBase.prototype, "stops", {
  get: function errors() {
    var result = [];
    for(var i=0; i<this.getNumGradientStops(); i++) {
      result.push(this.getGradientStop(i));
    }
    return result;
  }
});

Object.defineProperty(LinearGradient.prototype, "stops", {
  get: function errors() {
    var result = [];
    for(var i=0; i<this.getNumGradientStops(); i++) {
      result.push(this.getGradientStop(i));
    }
    return result;
  }
});

Object.defineProperty(RadialGradient.prototype, "stops", {
  get: function errors() {
    var result = [];
    for(var i=0; i<this.getNumGradientStops(); i++) {
      result.push(this.getGradientStop(i));
    }
    return result;
  }
});

// Local

Object.defineProperty(LocalRenderInformation.prototype, "colors", {
  get: function errors() {
    var result = [];
    for(var i=0; i<this.getNumColorDefinitions(); i++) {
      result.push(this.getColorDefinition(i));
    }
    return result;
  }
});

Object.defineProperty(LocalRenderInformation.prototype, "gradients", {
  get: function errors() {
    var swtch = new Module.GradientCaster();
    var result = [];
    for(var i=0; i<this.getNumGradientDefinitions(); i++) {
      if(swtch.isLinear(this.getGradientDefinition(i))) {
        result.push(swtch.asLinear(this.getGradientDefinition(i)));
      } else if(swtch.isRadial(this.getGradientDefinition(i))) {
        result.push(swtch.asRadial(this.getGradientDefinition(i)));
      }
    }
    return result;
  }
});

Object.defineProperty(LocalRenderInformation.prototype, "lineendings", {
  get: function errors() {
    var result = [];
    for(var i=0; i<this.getNumLineEndings(); i++) {
      result.push(this.getLineEnding(i));
    }
    return result;
  }
});

// Global

Object.defineProperty(GlobalRenderInformation.prototype, "colors", {
  get: function errors() {
    var result = [];
    for(var i=0; i<this.getNumColorDefinitions(); i++) {
      result.push(this.getColorDefinition(i));
    }
    return result;
  }
});

Object.defineProperty(GlobalRenderInformation.prototype, "gradients", {
  get: function errors() {
    var swtch = new Module.GradientCaster();
    var result = [];
    for(var i=0; i<this.getNumGradientDefinitions(); i++) {
      if(swtch.isLinear(this.getGradientDefinition(i))) {
        result.push(swtch.asLinear(this.getGradientDefinition(i)));
      } else if(swtch.isRadial(this.getGradientDefinition(i))) {
        result.push(swtch.asRadial(this.getGradientDefinition(i)));
      }
    }
    return result;
  }
});

Object.defineProperty(GlobalRenderInformation.prototype, "lineendings", {
  get: function errors() {
    var result = [];
    for(var i=0; i<this.getNumLineEndings(); i++) {
      result.push(this.getLineEnding(i));
    }
    return result;
  }
});

Object.defineProperty(RenderLayoutPlugin.prototype, "renderinfo", {
  get: function errors() {
    var result = [];
    for(var i=0; i<this.getNumLocalRenderInformationObjects(); i++) {
      result.push(this.getRenderInformation(i));
    }
    return result;
  }
});

SBasePlugin.prototype["asRenderListOfLayoutsPlugin"] = function(name) {
  var swtch = new Module.RenderCaster();
  var result = swtch.castToRenderListOfLayoutsPlugin(this);
  Module.destroy(swtch);
  return result;
}

SBasePlugin.prototype["asRenderLayoutPlugin"] = function(name) {
  var swtch = new Module.RenderCaster();
  var result = swtch.castToRenderLayoutPlugin(this);
  Module.destroy(swtch);
  return result;
}
