SBasePlugin.prototype["asLayout"] = function(name) {
  var swtch = new Module.LayoutCaster();
  return swtch.castToLayoutPlugin(this);
}
