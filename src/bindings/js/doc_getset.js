Object.defineProperty(SBMLDocument.prototype, "errors", {
  get: function errors() {
    var result = [];
    for(var i=0; i<this.getNumErrors(); i++) {
      result.push(this.getError(i));
    }
    return result;
  }
});