Object.defineProperty(BoundingBox.prototype, "width", {
  get: function errors() {
    return this.getDimensions().getWidth();
  }
});

Object.defineProperty(BoundingBox.prototype, "height", {
  get: function errors() {
    return this.getDimensions().getHeight();
  }
});

Object.defineProperty(BoundingBox.prototype, "depth", {
  get: function errors() {
    return this.getDimensions().getDepth();
  }
});

Object.defineProperty(Layout.prototype, "compglyphs", {
  get: function errors() {
    var result = [];
    for(var i=0; i<this.getNumCompartmentGlyphs(); i++) {
      result.push(this.getCompartmentGlyph(i));
    }
    return result;
  }
});

Object.defineProperty(Layout.prototype, "rxnglyphs", {
  get: function errors() {
    var result = [];
    for(var i=0; i<this.getNumReactionGlyphs(); i++) {
      result.push(this.getReactionGlyph(i));
    }
    return result;
  }
});

Object.defineProperty(Layout.prototype, "specglyphs", {
  get: function errors() {
    var result = [];
    for(var i=0; i<this.getNumSpeciesGlyphs(); i++) {
      result.push(this.getSpeciesGlyph(i));
    }
    return result;
  }
});

Object.defineProperty(Layout.prototype, "txtglyphs", {
  get: function errors() {
    var result = [];
    for(var i=0; i<this.getNumTextGlyphs(); i++) {
      result.push(this.getTextGlyph(i));
    }
    return result;
  }
});

Object.defineProperty(LayoutModelPlugin.prototype, "layouts", {
  get: function errors() {
    var result = [];
    for(var i=0; i<this.getNumLayouts(); i++) {
      result.push(this.getLayout(i));
    }
    return result;
  }
});

SBasePlugin.prototype["asLayout"] = function(name) {
  var swtch = new Module.LayoutCaster();
  return swtch.castToLayoutPlugin(this);
}
