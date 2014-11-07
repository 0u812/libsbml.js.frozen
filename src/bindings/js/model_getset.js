Object.defineProperty(Model.prototype, "species", {
  get: function species() {
    var result = [];
    for(var i=0; i<this.getNumSpecies(); i++) {
      result.push(this.getSpecies(i));
    }
    return result;
  }
});

Object.defineProperty(Model.prototype, "reactions", {
  get: function reactions() {
    var result = [];
    for(var i=0; i<this.getNumReactions(); i++) {
      result.push(this.getReaction(i));
    }
    return result;
  }
});

Object.defineProperty(Model.prototype, "parameters", {
  get: function parameters() {
    var result = [];
    for(var i=0; i<this.getNumParameters(); i++) {
      result.push(this.getParameter(i));
    }
    return result;
  }
});

Object.defineProperty(Model.prototype, "compartments", {
  get: function parameters() {
    var result = [];
    for(var i=0; i<this.getNumCompartments(); i++) {
      result.push(this.getCompartment(i));
    }
    return result;
  }
});

Model.prototype["findSpecies"] = function(id) {
  for(var i=0; i<this.getNumSpecies(); i++) {
    if(this.getSpecies(i).getId() == id) {
      return this.getSpecies(i);
    }
  }
  throw new Error('No such species with id ' + id);
}