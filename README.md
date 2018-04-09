# Kaleidoscope-LEDEffect-FunctionalColor



This plugin automatically colors groups of keys based on the current function of the key on the active layer, dynamically switching colors when the fn key is pressed.

##### Table of Contents  
[Basic Use](#basic-use-of-functionalcolor)  
[Advanced Usage](#advanced-usage)  
[Using Custom Themes](#using-custom-themes)  
[Setting individual keys with FC_COLOR_LIST](#setting-individual-keys-with-fc_color_list)  
[Brightness Control with Macros](#brightness-control-with-macros)  


## Basic Use of FunctionalColor

To get started with FunctionalColor and use the default colors, you can just include the header,
declare an instance using the `FCPlugin` class, and tell the firmware to use it.
Configure your own colors for groups of keys inside setup():

```c++
// Automatically sets key's LED on active layer based on the function of the key
#include <Kaleidoscope-LEDEffect-FunctionalColor.h>
kaleidoscope::LEDFunctionalColor::FCPlugin funColor;

void setup() {
  Kaleidoscope.setup();
  Kaleidoscope.use(&funColor);
}
```

## Advanced Usage
FunctionalColor allows you to create completely custom themes, assigning any color
to any function that can be performed on the Model 01. It's probably easiest to examine
the well-commented [example .ino files](https://github.com/jdlien/Kaleidoscope-LEDEffect-FunctionalColor/blob/master/examples/) included in this repository to get up and running
and gain a full understanding of what is possible, but here is a summary.


Declare FCPlugin instances in the following ways:
```c++
// With no arguments to get the default theme and brightness.
kaleidoscope::LEDFunctionalColor::FCPlugin funColor1;

// Specify an optional brightness 0-255, and an optional colorList can follow.
kaleidoscope::LEDFunctionalColor::FCPlugin funColor2(200);

// Specify only a override colorList defined previously, beginning with FC_START_COLOR_LIST(customColors)
// See below for information on how to use override colorLists.
kaleidoscope::LEDFunctionalColor::FCPlugin funColor3(FC_COLOR_LIST(customColors));

//You can also specify a colorList with the brightness after.
kaleidoscope::LEDFunctionalColor::FCPlugin funColor4(FC_COLOR_LIST(customColors), 255);

// You can create and use custom themes - these are applied later in the setup() part of this .ino
kaleidoscope::LEDFunctionalColor::FCPlugin funColor5;

// Note that you can combine custom color overrides with a custom theme, demonstrated in funColor6
kaleidoscope::LEDFunctionalColor::FCPlugin funColor6(FC_COLOR_LIST(customColors));

```

## Using Custom Themes

If you want to customize one of the included themes, make a subclass of colorMap or any theme that you want to use as a starting point. They are colorMap, colorMapDefault, colorMapColorful, colorMapMono, colorMapDuo.

Your colormap must be applied in the setup() function. (See Below).

For colors, you can use cRGB objects with CRGB(red, green, blue). Note that FunctionalColor includes a large list of predefined colors that match the CSS color names that are common. For the most part, if you can think of a color name, it'll be defined. In addition, you can also tweak the brightness of a color using the included dim() function. For a dark red color, you could use something like dim(red, 100).

```c++
// Add this line after the FunctionalColor include if you don't want to
// have to prefix colors and functions with kaleidoscope::LEDFunctionalColor::
using namespace kaleidoscope::LEDFunctionalColor;

struct myTheme: public colorMapMono {
  static constexpr cRGB shift = darkseagreen;
  static constexpr cRGB control = skyblue;
  static constexpr cRGB alt = forestgreen;
  static constexpr cRGB gui = pink; 
  //You can also set something to "nocolor" which will avoid coloring a set of keys
  // if they already are part of another larger group - ie set shift to nocolor and
  // shiftkeys will inherit the color assigned to modifier
  // static constexpr cRGB shift = nocolor;
};
````

After creating your custom theme struct, apply it using FC_SET_THEME() in the setup() function near the bottom of the .ino file as shown here.

```c++
void setup() {
  Kaleidoscope.setup();
  Kaleidoscope.use(
    // All FunctionalColor instances go here in the order you want them in
    &funColor1,&funColor2,&funColor3,&funColor4,&funColor5,&funColor6
  );

  // Use the FC_SET_THEME() to apply colorMaps here.
  // If you aren't using namespace kaleidoscope::LEDFunctionalColor;
  // prefix built-in themes with that namespace
  // Here are all the defaults available:

  // The default is already used without specifying it anyways, but it's here for completeness
  FC_SET_THEME(funColor1, kaleidoscope::LEDFunctionalColor::colorMapDefault);
  FC_SET_THEME(funColor2, kaleidoscope::LEDFunctionalColor::colorMapMono);
  FC_SET_THEME(funColor3, kaleidoscope::LEDFunctionalColor::colorMapDuo);
  FC_SET_THEME(funColor4, kaleidoscope::LEDFunctionalColor::colorMap);

  // This applies our custom themes to funColor5 and funColor6
  FC_SET_THEME(funColor5, myTheme);
  FC_SET_THEME(funColor6, colorMapGreen);

} // end setup()

```


For reference, here is a full, annotated list of all the properties that are supported by FunctionalColors
```c++
// This is the only way to color "prog" if you don't assign a function to it.
defaultColor // used when there is no color defined for a key.

// shift, control, gui, and alt can all be colored by "modifier" if nocolor is set here.
shift
control // gui are Windows Logo or, on macOS, command keys 
gui
alt

modifier
alpha
number
punctuation

function // F1-F12 and F13-F24

navigation // Page Up, Page Down, Home, End, Insert, and Delete (if del has nocolor)

system // Print Screen, Pause/Break, and Scroll Lock keys (brightness on Macs)

arrow
keypad

media // Includes play/pause, next/prev, volume control, mute, etc.

mouseWheel
mouseButton
mouseWarp
mouseMove
mouse //includes the four above groups if nocolor is set for those
space
tab
enter
backspace
escape
del //Forward delete key

//fn will work properly for ShiftToLayer() with layers 1-3
fn

//NumLock and other layer locks
lock
LEDEffectNext // led key
```


## Setting individual keys with FC_COLOR_LIST

If you want to set specific colors for individual keys that are not specified in the colorMap struct, you can use a set of included macros to create a custom color override function **before** you declare a FunctionalColors instance, then specify your colorList when you initialize FunctionalColor.

The following example shows how this can be done.
Note that this example is done within the `kaleidoscope::LEDFunctionalColor` namespace -- add
`using namespace kaleidoscope::LEDFunctionalColor;`
to avoid needing to prefix colors and functions.
```c++
// Make a new colorList named "customColors"
FC_START_COLOR_LIST(customColors)
 // Use any number of FCGROUPKEYs above a FC_KEYCOLOR to set several keys to the same color
 FC_GROUPKEY(Key_A)
 FC_GROUPKEY(Key_S)
 FC_GROUPKEY(Key_D)
 FC_KEYCOLOR(Key_F, blue)

 FC_GROUPKEY(Key_J)
 FC_GROUPKEY(Key_K)
 FC_GROUPKEY(Key_L)
 FC_KEYCOLOR(Key_Semicolon, red)

 //FC_NOCOLOR makes a key not change color, as if "transparent".
 // In this example The uparrow key will not change the key color, even when on the active layer.
 FC_NOCOLOR(Key_UpArrow)

 // This shows how you can set the color of custom macros
 FC_GROUPKEY(M(MACRO_FCUP))
 FC_KEYCOLOR(M(MACRO_FCDOWN), cyan)
FC_END_COLOR_LIST

// Create a FunctionalColors instance using this new customColors colorList, with full brightness.
kaleidoscope::LEDFunctionalColor::FCPlugin funColorCustom(FC_COLOR_LIST(customColors), 255);
```

Now you can add &funColorCustom to the Kaleidoscope.use() list to make it show up on your keyboard.


## Brightness Control with Macros

FunctionalColor supports macros that allow you to add keys to adjust the brightness of your theme while using the keyboard. To do this, first ensure that you have MACRO_FCUP and MACRO_FCDOWN in the enum near the beginning of the .ino.

```c++
enum { MACRO_VERSION_INFO,
       MACRO_ANY,
       MACRO_FCUP,
       MACRO_FCDOWN
     };
```

Assign M(MACRO_FCDOWN) and M(MACRO_FCUP) to the keys you would like to use to control the brightness of the active FunctionalColor instance.

Finally, add the case statements to the macroAction function in your .ino file. If you're keeping the VERSION_INFO and ANY macros that come with the stock firmware, macroAction should look like this:

```c++
const macro_t *macroAction(uint8_t macroIndex, uint8_t keyState) {
  switch (macroIndex) {

  case MACRO_VERSION_INFO:
    versionInfoMacro(keyState);
    break;

  case MACRO_ANY:
    anyKeyMacro(keyState);
    break;

  // Add the following two case statements to make the FCUP/FCDOWN macros adjust brightness.
  case MACRO_FCUP:
    kaleidoscope::LEDFunctionalColor::FCPlugin::brightnessUp(keyState);
    break;
   
  case MACRO_FCDOWN:
    kaleidoscope::LEDFunctionalColor::FCPlugin::brightnessDown(keyState);
    break;
  }
  return MACRO_NONE;
}
```


## Questions or Comments?

If you have any questions or comments please let me know.

I want to give my thanks to @noseglasses for being tremendously helpful to me in making this plugin as efficient and user-friendly as it is. My early attempts at this consumed almost all the memory on the keyboard and this version should take about 4KB, which is a massive improvement.


## Dependencies

* [Kaleidoscope-LEDControl](https://github.com/keyboardio/Kaleidoscope-LEDControl)
* [Kaleidoscope-MouseKeys](https://github.com/keyboardio/Kaleidoscope-MouseKeys)
