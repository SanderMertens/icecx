
if (Meteor.isClient) {
  var remote = DDP.connect("http://192.168.2.7:8000");
  var Devices = new Meteor.Collection("devices", remote);
  var Numerics = new Meteor.Collection("numerics", remote);
  
  remote.subscribe("devices", {meta: true, value: true})
  remote.subscribe("numerics", {meta: true, value: true})

  Template.body.helpers({
    devices: function() {
      return Devices.find();
    },
    numerics: function() {
      return Numerics.find();
    }
  });
}

if (Meteor.isServer) {
  Meteor.startup(function () {
  });
}
