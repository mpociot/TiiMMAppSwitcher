var TiMMAppSwitcher = require('de.marcelpociot.mmappswitcher');

var customSwitchView = Ti.UI.createView({
	backgroundColor: "green",
	width: 300,
	height: 300
});

TiMMAppSwitcher.switchView = customSwitchView;

// open a single window
var win = Ti.UI.createWindow({
	backgroundColor:'red'
});
win.open();