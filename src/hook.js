var Module = {
  _main: function () {
    this.callbacks.forEach(function(e) {
      e.apply();
    });
    initialized = true;
  },
  onload: function(callback) {
    this.callbacks.push(callback)
    if(initialized) {
      callback.apply();
    }
  },
  callbacks: [],
  initialized: false,
};