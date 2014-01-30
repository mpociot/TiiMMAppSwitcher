TiMMAppSwitcher
===========================================


Replace iOS7 app switcher view with your own customized card view.
It's a wrapper module for [MMAppSwitcher](https://github.com/vpdn/MMAppSwitcher).

<img src="images/demo.gif" alt="TiMMAppSwitcher Demo" />

### Usage


	var TiMMAppSwitcher = require('de.marcelpociot.mmappswitcher');

	var customSwitchView = Ti.UI.createView({
		backgroundColor: "green"
	});
	
	// Set the switch view
	TiMMAppSwitcher.switchView = customSwitchView;	

## Options


#### switchView

Type: `View`  
Default: ``

View to load when the app switcher gets displayed.

## Known Bugs
Apparently there are a couple of bugs.

+ The custom view only gets displayed at the second time, the app switcher gets loaded
+ ImageViews can't be used as switch views

So this module basically is just a work in progress and it's more intended to be some kind of educational purpose. 

The given effect should be able to achieve with a simple CommonJS module for Titanium too.

ABOUT THE AUTHOR
========================
I'm a web enthusiast located in Germany and in charge of http://www.titaniumcontrols.com

Follow me on twitter: @marcelpociot / @TitaniumCTRLs


[![Bitdeli Badge](https://d2weczhvl823v0.cloudfront.net/mpociot/tiimmappswitcher/trend.png)](https://bitdeli.com/free "Bitdeli Badge")

