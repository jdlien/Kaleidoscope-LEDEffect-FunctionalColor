// -*- mode: c++ -*-
// Simplified FunctionalColor example by JD Lien

// Includes required/useful for FunctionalColors
#include "Kaleidoscope.h"
#include "Kaleidoscope-Macros.h"
//Note that FunctionalColor already includes LEDControl and MouseKeys
#include "Kaleidoscope-LEDEffect-FunctionalColor.h"
//Add this line if you don't want to have to prefix colors and functions with kaleidoscope::plugin
using namespace kaleidoscope::plugin::FunctionalColorStuff;

// Support for "Numpad" mode, which is mostly just the Numpad specific LED mode
#include "Kaleidoscope-NumPad.h"

#include "Kaleidoscope-LEDEffect-BootGreeting.h"

// List of macros includes names for FC brightness controls
enum { MACRO_ANY, MACRO_FCUP, MACRO_FCDOWN };

// Keymaps. This is the default with brightness controls added and version_info removed
// to fn+; and fn+'
enum { QWERTY, NUMPAD, FUNCTION };
// *INDENT-OFF*
KEYMAPS(

  [QWERTY] = KEYMAP_STACKED
  (___,          Key_1, Key_2, Key_3, Key_4, Key_5, Key_LEDEffectNext,
   Key_Backtick, Key_Q, Key_W, Key_E, Key_R, Key_T, Key_Tab,
   Key_PageUp,   Key_A, Key_S, Key_D, Key_F, Key_G,
   Key_PageDown, Key_Z, Key_X, Key_C, Key_V, Key_B, Key_Escape,
   Key_LeftControl, Key_Backspace, Key_LeftGui, Key_LeftShift,
   ShiftToLayer(FUNCTION),

   M(MACRO_ANY),  Key_6, Key_7, Key_8,     Key_9,         Key_0,         LockLayer(NUMPAD),
   Key_Enter,     Key_Y, Key_U, Key_I,     Key_O,         Key_P,         Key_Equals,
                  Key_H, Key_J, Key_K,     Key_L,         Key_Semicolon, Key_Quote,
   Key_RightAlt,  Key_N, Key_M, Key_Comma, Key_Period,    Key_Slash,     Key_Minus,
   Key_RightShift, Key_LeftAlt, Key_Spacebar, Key_RightControl,
   ShiftToLayer(FUNCTION)),


  [NUMPAD] =  KEYMAP_STACKED
  (___, ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___,
   ___,

   ___,  ___, Key_Keypad7, Key_Keypad8,   Key_Keypad9,        Key_KeypadSubtract, ___,
   ___,                    ___, Key_Keypad4, Key_Keypad5,   Key_Keypad6,        Key_KeypadAdd,      ___,
                           ___, Key_Keypad1, Key_Keypad2,   Key_Keypad3,        Key_Equals,         Key_Quote,
   ___,                    ___, Key_Keypad0, Key_KeypadDot, Key_KeypadMultiply, Key_KeypadDivide,   Key_Enter,
   ___, ___, ___, ___,
   ___),

  [FUNCTION] =  KEYMAP_STACKED
  (___,      Key_F1,           Key_F2,      Key_F3,     Key_F4,        Key_F5,           XXX,
   Key_Tab,  ___,              Key_mouseUp, ___,        Key_mouseBtnR, Key_mouseWarpEnd, Key_mouseWarpNE,
   Key_Home, Key_mouseL,       Key_mouseDn, Key_mouseR, Key_mouseBtnL, Key_mouseWarpNW,
   Key_End,  Key_PrintScreen,  Key_Insert,  ___,        Key_mouseBtnM, Key_mouseWarpSW,  Key_mouseWarpSE,
   ___, Key_Delete, ___, ___,
   ___,

   Consumer_ScanPreviousTrack, Key_F6,                 Key_F7,                   Key_F8,                   Key_F9,          Key_F10,          Key_F11,
   Consumer_PlaySlashPause,    Consumer_ScanNextTrack, Key_LeftCurlyBracket,     Key_RightCurlyBracket,    Key_LeftBracket, Key_RightBracket, Key_F12,
                               Key_LeftArrow,          Key_DownArrow,            Key_UpArrow,              Key_RightArrow,  M(MACRO_FCDOWN),    M(MACRO_FCUP),
   Key_PcApplication,          Consumer_Mute,          Consumer_VolumeDecrement, Consumer_VolumeIncrement, ___,             Key_Backslash,    Key_Pipe,
   ___, ___, Key_Enter, ___,
   ___)

)
// *INDENT-ON*


// A sample color override that makes mirrored rainbow homerows
// Note that FunctionalColors allows you to use CSS color names (in lowercase)
// You can also control the brightness from 0-255 by using a dim() function on the color.
// eg to make a half-dimmed white use dim(white, 128)
FC_START_COLOR_LIST(customColors)
 FC_GROUPKEY(Key_A)
 FC_KEYCOLOR(Key_Semicolon, orange)
 FC_GROUPKEY(Key_S)
 FC_KEYCOLOR(Key_L, yellow)
 FC_GROUPKEY(Key_D)
 FC_KEYCOLOR(Key_K, lime)
 FC_GROUPKEY(Key_F)
 FC_KEYCOLOR(Key_J, aqua)
 //FC_NOCOLOR makes a key not change color, as if "transparent".
 // In this example The uparrow key will not change the key color, even when on the active layer.
 FC_NOCOLOR(Key_UpArrow)

 // This shows how you can set the color of custom macros
 FC_GROUPKEY(M(MACRO_FCUP))
 FC_KEYCOLOR(M(MACRO_FCDOWN), cyan)
FC_END_COLOR_LIST


// An example showing how to make a simple configuration with no theme and a default color of pink.
// This is used in funColor7
FC_START_COLOR_LIST(simpleColors)
 // Make homing keys yellow
 FC_GROUPKEY(Key_A)
 FC_GROUPKEY(Key_F)
 FC_GROUPKEY(Key_J)
 FC_KEYCOLOR(Key_Semicolon, yellow)
 // Brightness macros
 FC_GROUPKEY(M(MACRO_FCUP))
 FC_KEYCOLOR(M(MACRO_FCDOWN), cyan)
// If you want to specify a default color and you are not using a theme,
// use FC_END_COLOR_LIST_DEFAULT and specify the default color for all keys not specified above.
FC_END_COLOR_LIST_DEFAULT(pink)

// There are several ways you can make FunctionalColor instances.

// No arguments are needed to use the default theme and brightness.
FunctionalColor funColor1;

//You can specify an optional brightness 0-255, and an optional colorList can follow.
FunctionalColor funColor2(200);

//You can specify only a color override list as shown above beginning with FC_START_COLOR_LIST(customColors)
FunctionalColor funColor3(FC_COLOR_LIST(customColors));

//You can also specify a colorList with the brightness after.
FunctionalColor funColor4(FC_COLOR_LIST(customColors), 255);

// The last two examples will use custom themes - these are applied later in the setup() part of this .ino
// Look near the bottom of this file to see how this is done.
FunctionalColor funColor5;
// Note that you can combine custom color overrides with a custom theme, demonstrated in funColor6
FunctionalColor funColor6(FC_COLOR_LIST(customColors));

// This is how you explicitly specify NOT to use a theme
// to save memory and make a simple configuration.
FunctionalColor funColor7(FC_COLOR_LIST(simpleColors), 220, false);

// If you're making a custom theme to be applied later, you can also avoid specifying a theme
// (to save memory) without specifying a colorList with the following:
FunctionalColor funColor8(220, false);

//To create customize a theme, make a subclass of one of the themes in FunctionalColor.
//They are colorMap, colorMapDefault, colorMapColorful, colorMapMono, colorMapDuo.
//This example makes a few tweaks to colorMapMono that customize specific modifier keys
struct myTheme: public colorMapMono {
  FC_COLOR_MAP_COLOR(shift, darkseagreen)
  FC_COLOR_MAP_COLOR(control, skyblue)
  FC_COLOR_MAP_COLOR(alt, forestgreen)
  FC_COLOR_MAP_COLOR(gui, pink)
  //You can also set something to "nocolor" which will avoid coloring a set of keys
  // if they already are part of another larger group - ie set shift to nocolor and
  // shiftkeys will inherit the color assigned to modifier
  // FC_COLOR_FUNC cRGB shift = nocolor;
};


// For reference, this example theme struct shows the full list of properties you can set
// in case you want to define a completely custom theme. In practice you can
// just subclass one you like and change only the elements you want to modify.
struct colorMapGreen: public colorMap {
  // baseColor is used with just changes in brightness for a largely monochromatic theme.
  // You can change baseColor from green to change all these colors at once
  FC_COLOR_MAP_COLOR(baseColor, green)

  // defaultColor is used when there is no color defined for a key.
  // This is the only way to color "prog" if you don't assign a function to it.
  FC_COLOR_MAP_COLOR(defaultColor, dim(FC_REF_MAP_COLOR(baseColor), 100))

  // shift, control, gui, and alt can all be colored by "modifier" if nocolor is set here.
  FC_COLOR_MAP_COLOR(shift, nocolor)
  FC_COLOR_MAP_COLOR(control, nocolor)
  // Windows Logo or, on macOS, command keys 
  FC_COLOR_MAP_COLOR(gui, nocolor)
  FC_COLOR_MAP_COLOR(alt, nocolor)
  
  FC_COLOR_MAP_COLOR(modifier, dim(FC_REF_MAP_COLOR(baseColor), 130))
  FC_COLOR_MAP_COLOR(alpha, dim(FC_REF_MAP_COLOR(baseColor), 80))
  FC_COLOR_MAP_COLOR(number, dim(FC_REF_MAP_COLOR(baseColor), 100))
  FC_COLOR_MAP_COLOR(punctuation, dim(FC_REF_MAP_COLOR(baseColor), 120))

  // F1-F12 and F13-F24
  FC_COLOR_MAP_COLOR(function, dim(FC_REF_MAP_COLOR(baseColor), 150))
  
  // Page Up, Page Down, Home, End, Insert, and Delete (if del has nocolor)
  FC_COLOR_MAP_COLOR(navigation, dim(FC_REF_MAP_COLOR(baseColor), 180))
  
  // Print Screen, Pause/Break, and Scroll Lock keys (brightness on Macs)
  FC_COLOR_MAP_COLOR(system, dim(FC_REF_MAP_COLOR(baseColor), 50))
  
  FC_COLOR_MAP_COLOR(arrow, dim(FC_REF_MAP_COLOR(baseColor), 250))
  FC_COLOR_MAP_COLOR(keypad, dim(FC_REF_MAP_COLOR(baseColor), 230))

  // Includes play/pause, next/prev, volume control, mute, etc.
  FC_COLOR_MAP_COLOR(media, dim(FC_REF_MAP_COLOR(baseColor), 250))
  
  FC_COLOR_MAP_COLOR(mouseWheel, nocolor)
  FC_COLOR_MAP_COLOR(mouseButton, nocolor)
  FC_COLOR_MAP_COLOR(mouseWarp, nocolor)
  FC_COLOR_MAP_COLOR(mouseMove, nocolor)
  // mouse includes the four above groups if nocolor is set for those
  FC_COLOR_MAP_COLOR(mouse, dim(FC_REF_MAP_COLOR(baseColor), 220))
  FC_COLOR_MAP_COLOR(space, dim(FC_REF_MAP_COLOR(baseColor), 100))
  FC_COLOR_MAP_COLOR(tab, dim(FC_REF_MAP_COLOR(baseColor), 100))
  FC_COLOR_MAP_COLOR(enter, dim(FC_REF_MAP_COLOR(baseColor), 255))
  FC_COLOR_MAP_COLOR(backspace, dim(FC_REF_MAP_COLOR(baseColor), 100))
  FC_COLOR_MAP_COLOR(escape, dim(FC_REF_MAP_COLOR(baseColor), 100))
  FC_COLOR_MAP_COLOR(del, dim(FC_REF_MAP_COLOR(baseColor), 255))

  //fn will work properly if your FUNCTION layer is between layers 1-3
  FC_COLOR_MAP_COLOR(fn, dim(FC_REF_MAP_COLOR(baseColor), 255))
  
  //NumLock and other layer locks
  FC_COLOR_MAP_COLOR(lock, dim(FC_REF_MAP_COLOR(baseColor), 255))
  FC_COLOR_MAP_COLOR(LEDEffectNext, dim(FC_REF_MAP_COLOR(baseColor), 255))
};



// Definition of anyKey macro used on "any" key by default.
static void anyKeyMacro(uint8_t keyState) {
  static Key lastKey;
  if (keyToggledOn(keyState)) lastKey.keyCode = Key_A.keyCode + (uint8_t)(millis() % 36);
  if (keyIsPressed(keyState)) kaleidoscope::hid::pressKey(lastKey);
}

// macroAction dispatches keymap events tied to a macro to that macro.
// This example adds FunctionalColors brightness controls
const macro_t *macroAction(uint8_t macroIndex, uint8_t keyState) {
  switch (macroIndex) {

  case MACRO_ANY:
    anyKeyMacro(keyState);
    break;

  // Here are some macros you can use to control the brightness of your FunctionalColor instances.
  // These names must be in the macros enum closer to the beginning of this file.
  // Assign M(MACRO_FCUP) and M(MACRO_FCDOWN) to keys you'd like to use for this purpose.
  // In this example they have been assigned to the semicolon and comma keys on the fn layer.
  case MACRO_FCUP:
    FunctionalColor::brightnessUp(keyState);
    break;
   
  case MACRO_FCDOWN:
    FunctionalColor::brightnessDown(keyState);
    break;
  }
  return MACRO_NONE;
}

KALEIDOSCOPE_INIT_PLUGINS(
    
    // All FunctionalColor themes you want go here in the order you want
    funColor1,funColor2,funColor3,funColor4,funColor5,funColor6,funColor7,funColor8,

    // Useful Default Plugins
    BootGreetingEffect,LEDControl,NumPad,Macros,MouseKeys   
);

//This setup() function is where you set up any plugins.
void setup() {
  // First, call Kaleidoscope's internal setup function
  Kaleidoscope.setup();

  // Tell numPad plugin which keymap layer is your numpad layer
  NumPad.numPadLayer = NUMPAD;

  // Use the FC_SET_THEME() to apply colorMaps here.
  // If you aren't using namespace kaleidoscope::plugin;
  // prefix built-in themes with that namespace
  // Here are all the defaults available:

  // The default is already used without specifying it anyways, but it's here for completeness
  FC_SET_THEME(funColor1, colorMapDefault);
//   FC_SET_THEME(funColor2, colorMapMono);
//   // The themes are: colorMap, colorMapDefault, colorMapFruit, colorMapMono, colorMapDuo,
//   // colorMapPrincess, colorMapSea, colorMapFlower, colorMapKids, colorMapRedWhiteBlue.
//   
//   // This applies our custom themes to funColor5, funColor6, and funColor8
//   FC_SET_THEME(funColor5, myTheme);
//   FC_SET_THEME(funColor6, colorMapGreen);
//   FC_SET_THEME(funColor8, colorMapGreen);

} // end setup()

// Run the firmware. Don't change anything past this line.
void loop() {
  Kaleidoscope.loop();
}
