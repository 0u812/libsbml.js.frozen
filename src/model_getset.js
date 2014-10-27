Object.defineProperty(Model.prototype, "species", {
  get: function species() {
    var result = [];
    for(var i=0; i<this.getNumSpecies(); i++) {
      result.push(this.getSpecies(i));
    }
    return result;
  }
});