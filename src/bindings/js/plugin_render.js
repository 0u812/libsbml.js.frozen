Object.defineProperty(LocalRenderInformation.prototype, "colors", {
  get: function errors() {
    var result = [];
    for(var i=0; i<this.getNumColorDefinitions(); i++) {
      result.push(this.getColorDefinition(i));
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
