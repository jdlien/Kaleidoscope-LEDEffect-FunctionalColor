# Kaleidoscope-LEDEffect-FunctionalColor



This plugin automatically colors groups of keys based on the current function of the key on the active layer, dynamically switching colors when the active layer is changed (eg fn key is pressed).

##### Table of Contents  
[Basic Use](#basic-use-of-functionalcolor)  
[Easily Use Included Themes](#easily-use-included-themes)
[Advanced Usage](#advanced-usage)
[Using As Little Memory As Possible](#using-as-little-memory-as-possible)
[Using Custom Themes](#using-custom-themes)  
[Setting individual keys with FC_COLOR_LIST](#setting-individual-keys-with-fc_color_list)  
[Brightness Control with Macros](#brightness-control-with-macros)  


## Basic Use of FunctionalColor
To get started with FunctionalColor and use the default colors, you can just include the header,
declare an instance using the `FCPlugin` class, and tell the firmware to use it in KALEIDOSCOPE_INIT_PLUGINS().

```c++
// Automatically sets key's LED on active layer based on the function of the key
#include "Kaleidoscope-LEDEffect-FunctionalColor.h"
kaleidoscope::plugin::LEDFunctionalColor::FunctionalColor funColor;

KALEIDOSCOPE_INIT_PLUGINS(funColor)
```


## Easily Use Included Themes
If you have a little extra Program memory available (about 1kB - 2kB), you can use a shortcut to easily specify a built-in theme after the brightness.

To do this, specify a theme name (or an integer) after the brightness. These are within the kaleidosope::LEDFunctionalColor namespace and are
Base, Default, Fruit, Mono, Duo, Princess, Sea, Flower, Kids, RedWhiteBlue
```
// Without using the LEDFunctionalColor namespace, specifying a theme looks like this
kaleidoscope::plugin::LEDFunctionalColor::FunctionalColor funColor1(200, kaleidoscope::plugin::LEDFunctionalColor::Fruit);

// Add this line to make invocation easier as you won't need to specify the namespace
using namespace kaleidoscope::plugin::LEDFunctionalColor;

FunctionalColor funColor1(200, Fruit);
FunctionalColor funColor2(200, Mono);
FunctionalColor funColor3(200, Duo);
FunctionalColor funColor4(200, Princess);
FunctionalColor funColor5(200, Sea); 
//(Using all the above consume about 4kB memory)

//You can also specify a colorlist at the same time as an included theme
FunctionalColor funColor6(FC_COLOR_LIST(customColors), 200, Flower);
FunctionalColor funColor7(FC_COLOR_LIST(customColors), 200, Kids);
FunctionalColor funColor8(FC_COLOR_LIST(customColors), 200, RedWhiteBlue);
```


## Advanced Usage
FunctionalColor allows you to create completely custom themes, assigning any color
to any function that can be performed on the Model01. It's probably easiest to examine
the well-commented [example .ino files](https://github.com/jdlien/Kaleidoscope-LEDEffect-FunctionalColor/blob/master/examples/) included in this repository to get up and running and gain a full understanding of what is possible, but here is a summary.


Declare FunctionalColor instances in the following ways:
```c++
// With no arguments to get the default theme and brightness.
kaleidoscope::plugin::LEDFunctionalColor::FunctionalColor funColor1;

// Specify an optional brightness 0-255, and an optional colorList can follow.
kaleidoscope::plugin::LEDFunctionalColor::FunctionalColor funColor2(200);

// Specify only a override colorList defined previously, beginning with FC_START_COLOR_LIST(customColors)
// See below for information on how to use override colorLists.
kaleidoscope::plugin::LEDFunctionalColor::FunctionalColor funColor3(FC_COLOR_LIST(customColors));

//You can also specify a colorList with the brightness after.
kaleidoscope::plugin::LEDFunctionalColor::FunctionalColor funColor4(FC_COLOR_LIST(customColors), 255);

// You can create and use custom themes - these are applied later in the setup() part of this .ino
kaleidoscope::plugin::LEDFunctionalColor::FunctionalColor funColor5;

// You can combine custom color overrides with a custom theme, demonstrated in funColor6 in example inos
kaleidoscope::plugin::LEDFunctionalColor::FunctionalColor funColor6(FC_COLOR_LIST(customColors));

```


## Using As Little Memory As Possible
You can save memory by specifying `false` after your brightness setting, and no theme will be applied. This is useful if
1. Your needs are simple, say, you only want to color a few keys or most keys will be the same color.
2. You are creating and applying a custom theme and won't use the default theme anyways.

```
// Apply no theme to save memory. We will apply a colorList.
kaleidoscope::plugin::LEDFunctionalColor::FunctionalColor funColorSimple(FC_COLOR_LIST(customColors), 240, false);

// We don't need the theme as we will apply our own later. We won't use a colorList here.
kaleidoscope::plugin::LEDFunctionalColor::FunctionalColor funColorCustom(240, false);
```


## Using Custom Themes
If you want to customize one of the included themes, make a subclass of colorMap or any theme struct that you want to use as a starting point. They are colorMap, colorMapDefault, colorMapFruit, colorMapMono, colorMapDuo, colorMapPrincess, colorMapSea, colorMapFlower, colorMapKids, colorMapRedWhiteBlue.

Your colormap must be applied in the setup() function. (See Below).

For colors, you can use cRGB objects with CRGB(red, green, blue). Note that FunctionalColor includes a large list of predefined colors that match common color names ([as with CSS](https://www.w3schools.com/cssref/css_colors.asp)). You can also reduce the brightness of a color using the dim(color, brightness) function - 0 for black, 255 for full brightness. A dark red color would be dim(red, 100).

Within a theme, use the function FC_MAP_COLOR(key, color, [brightness]) to set the color of a keygroup.

Themes can use placeholder colors that can be changed to easily modify several groups at once (colorMapMono and colorMapDuo use these). These are baseColor, baseColor1, baseColor2. To use these in place of colors to assign them to a keygroup use the FC_REF_MAP_COLOR(baseColor) functions.

```c++
// Add this line after the FunctionalColor include if you don't want to
// have to prefix colors and functions with kaleidoscope::LEDFunctionalColor::
using namespace kaleidoscope::plugin::LEDFunctionalColor;

struct myTheme: public colorMapMono {
  FC_MAP_COLOR(baseColor, white)
  FC_MAP_COLOR(defaultColor, dim(FC_REF_MAP_COLOR(baseColor), 100))
  FC_MAP_COLOR(shift, darkseagreen)
  FC_MAP_COLOR(control, skyblue)
  FC_MAP_COLOR(alt, forestgreen)
  FC_MAP_COLOR(gui, pink)
  //You can also set something to "nocolor" which will avoid coloring a set of keys
  // if they already are part of another larger group - ie set shift to nocolor and
  // shiftkeys will inherit the color assigned to modifier
  FC_MAP_COLOR(system, nocolor)
};
````

After creating your custom theme struct, apply it using FC_SET_THEME() in the setup() function near the bottom of the .ino file as shown here.

```c++
KALEIDOSCOPE_INIT_PLUGINS(funColor1,funColor2,funColor3,funColor4,funColor5,funColor6)

void setup() {
  Kaleidoscope.setup();

  // Use the FC_SET_THEME() to apply colorMaps here.
  // If you aren't using namespace kaleidoscope::LEDFunctionalColor;
  // prefix built-in themes with that namespace
  // Here are all the defaults available:

  // The default is already used without specifying it anyways, but it's here for completeness
  FC_SET_THEME(funColor1, kaleidoscope::plugin::LEDFunctionalColor::colorMapDefault);
  FC_SET_THEME(funColor2, kaleidoscope::plugin::LEDFunctionalColor::colorMapMono);
  // The themes are: colorMap, colorMapDefault, colorMapFruit, colorMapMono, colorMapDuo,
  // colorMapPrincess, colorMapSea, colorMapFlower, colorMapKids, colorMapRedWhiteBlue.

  // This applies your custom theme to funColor5
  FC_SET_THEME(funColor5, myTheme);

} // end setup()

```


For reference, here is a full, annotated list of all the properties that are supported by FunctionalColors
```c++
// This is the only way to color "prog" if you don't assign a function to it.
defaultColor // used when there is no color defined for a key.

// shift, control, gui, and alt can all be colored by "modifier" if nocolor is set here.
shift
control
gui // gui are Windows Logo or, on macOS, command keys 
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

Also, if you merely want a very simple configuration that is primarily one color with a few exceptions, you can create a colorList that ends with FC_END_COLOR_LIST_DEFAULT(color). Note that this default color will only be applied if you instantiate FCPlugin with "false" after the brightness, which prevents any theme from being applied.

The following examples show how these things can be done.
Note that this example is done within the `kaleidoscope::LEDFunctionalColor` namespace -- add
`using namespace kaleidoscope::plugin::LEDFunctionalColor;`
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

 // This shows how you can set the color of custom macros.
 //Remove these if you haven't defined these macros.
 FC_GROUPKEY(M(MACRO_FCUP))
 FC_KEYCOLOR(M(MACRO_FCDOWN), cyan)
FC_END_COLOR_LIST


// An example simple configuration with no theme and a default color of pink.
// This is used in funColor7
FC_START_COLOR_LIST(simpleColors)
 // Make homing keys yellow
 FC_GROUPKEY(Key_A)
 FC_GROUPKEY(Key_F)
 FC_GROUPKEY(Key_J)
 FC_KEYCOLOR(Key_Semicolon, yellow)
// If you want to specify a default color and you are not using a theme,
// use FC_END_COLOR_LIST_DEFAULT and specify the default color for all keys not specified above.
FC_END_COLOR_LIST_DEFAULT(pink)

// Create a FunctionalColors instance using this new customColors colorList, with full brightness.
kaleidoscope::plugin::LEDFunctionalColor::FunctionalColor funColorCustom(FC_COLOR_LIST(customColors), 255);

// This instance will not have a theme applied and will be pink except for the homing keys
kaleidoscope::plugin::LEDFunctionalColor::FunctionalColor funColorSimple(FC_COLOR_LIST(simpleColors), 255, false);
```

Now you can add funColorCustom to the KALEIDOSCOPE_INIT_PLUGINS() list to make it show up on your keyboard.


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
    kaleidoscope::plugin::LEDFunctionalColor::FunctionalColor::brightnessUp(keyState);
    break;
   
  case MACRO_FCDOWN:
    kaleidoscope::plugin::LEDFunctionalColor::FunctionalColor::brightnessDown(keyState);
    break;
  }
  return MACRO_NONE;
}
```


## Questions or Comments?
If you have any questions or comments please let me know.

Thanks to @noseglasses for being tremendously helpful in making this plugin as efficient as it is. This version should take about 2-4KB in typical use - less with a simple, efficient configuration.


## Dependencies
* [Kaleidoscope-LEDControl](https://github.com/keyboardio/Kaleidoscope-LEDControl)
* [Kaleidoscope-MouseKeys](https://github.com/keyboardio/Kaleidoscope-MouseKeys)
