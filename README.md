# Kaleidoscope-LEDEffect-FunctionalColor



This plugin automatically colors groups of keys per the user's preference
based on the current function of the key on the active layer. 

## Using the extension

To use the plugin, include the header, declare an effect using the
`LEDFunctionalColor` class, and tell the firmware to use the new effect.
Configure your own colors for groups of keys inside setup():

```c++
// Automatically sets key's LED on active layer based on the function of the key
#include <Kaleidoscope-LEDEffect-FunctionalColor.h>

kaleidoscope::LEDFunctionalColor FunColor;

void setup() {
  Kaleidoscope.use(&FunColor);

  Kaleidoscope.setup(

	  // Optionally Make things more human readable by naming your colors
	  cRGB antiquewhite = CRGB(250, 235, 215);
	  cRGB blue = CRGB(0, 0, 255);
	  cRGB cyan = CRGB(0, 255, 255);
	  cRGB green = CRGB(0, 128, 0);
	  cRGB lightskyblue = CRGB(135, 206, 250);
	  cRGB lime = CRGB(0, 255, 0);
	  cRGB mintcream = CRGB(245, 255, 250);
	  cRGB orange = CRGB(255, 165, 0);
	  cRGB orangered = CRGB(255, 100, 0);
	  cRGB palegreen = CRGB(152, 251, 152);
	  cRGB pink = CRGB(255, 192, 203);
	  cRGB red = CRGB(255, 0, 0);
	  cRGB skyblue = CRGB(135, 206, 235);
	  cRGB slateblue = CRGB(106, 90, 205);
	  cRGB violet = CRGB(238, 130, 238);
	  cRGB white = CRGB(255, 255, 255);
	  cRGB yellow = CRGB(255, 255, 0);
	  cRGB yellowgreen = CRGB(154, 205, 50);

	  // If your FUNCTION layer is not the default, you must set it here
	  FunColor.functionLayer = FUNCTION;

	  // Here we can set custom colors for FunctionalColor.
	  // You can optionally specify a brightness value, 0-255 to dim your lights.

	  // Set this first to provide a "default" color for all keys, then override with the other settings.
	  FunColor.setAll(CRGB(250, 235, 215));
	  
	  // This this second to change all modifiers (non-alphabet/numeric/punctuation keys)
	  FunColor.setModifiers(CRGB(250, 235, 215));
	  
	  //Set individual groups of colors. You may delete any lines you don't need.
	  FunColor.setEscape(red, 170);
	  FunColor.setNumbers(white, 160);
	  FunColor.setLetters(antiquewhite, 100);
	  FunColor.setPunctuation(antiquewhite, 170);
	  FunColor.setBrackets(antiquewhite, 200);
	  FunColor.setBackslash(antiquewhite, 170);
	  FunColor.setPipe(antiquewhite, 170);
	  FunColor.setTab(white, 170);
	  FunColor.setBackspace(red, 170);
	  FunColor.setDelete(red, 170);
	  FunColor.setEnter(white, 170);
	  FunColor.setArrows(white, 170);
	  FunColor.setNav(yellow, 170);
	  FunColor.setInsert(yellow, 170);
	  FunColor.setShift(palegreen, 170);
	  FunColor.setCtrl(skyblue, 170);
	  FunColor.setAlt(green, 170);
	  FunColor.setCmd(CRGB(250, 235, 215));
	  FunColor.setApp(CRGB(250, 235, 215));
	  FunColor.setPrintscreen(CRGB(250, 235, 215));
	  FunColor.setPause(CRGB(250, 235, 215));
	  FunColor.setScrolllock(CRGB(250, 235, 215));
	  FunColor.setCapslock(CRGB(250, 235, 215));
	  FunColor.setFkeys(red, 170);
	  FunColor.setFn(CRGB(250, 235, 215));
	  FunColor.setMedia(CRGB(250, 235, 215));
	  FunColor.setLed(blue, 190);
	  FunColor.setMouse(cyan, 170);

  );
}
```

## Dependencies

* [Kaleidoscope-LEDControl](https://github.com/keyboardio/Kaleidoscope-LEDControl)
