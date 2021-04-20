// -*- mode: c++ -*-
// This example demonstrates using FunctionalColor with useful default components,
// but nonessential plugins and comments removed to clarify the use of FunctionalColors

#ifndef BUILD_INFORMATION
#define BUILD_INFORMATION "locally built"
#endif

// Kaleidoscope firmware core and plugins used in Model 01's firmware
#include "Kaleidoscope.h"
#include "Kaleidoscope-EEPROM-Settings.h"
#include "Kaleidoscope-EEPROM-Keymap.h"
#include "Kaleidoscope-FocusSerial.h"
#include "Kaleidoscope-HardwareTestMode.h"
#include "Kaleidoscope-HostPowerManagement.h"
#include "Kaleidoscope-LEDControl.h"

// Support for keys that move the mouse (required for FunctionalColor)
#include "Kaleidoscope-MouseKeys.h"

// Support for macros (useful in FunctionalColor if you want brightness control)
#include "Kaleidoscope-Macros.h"

// "Boot greeting" pulses the 'LED' button for 10s when the keyboard is connected
#include "Kaleidoscope-LEDEffect-BootGreeting.h"

// Support for magic combos (key chords that trigger an action)
#include "Kaleidoscope-MagicCombo.h"

// Support for USB quirks, like changing the key state report protocol
#include "Kaleidoscope-USB-Quirks.h"

// Macros for FunctionalColor brightness control have been added to this enum
enum { MACRO_VERSION_INFO,
       MACRO_ANY,
       MACRO_FCUP,
       MACRO_FCDOWN
};



enum { PRIMARY, NUMPAD, FUNCTION }; // layers

#define PRIMARY_KEYMAP_QWERTY
// #define PRIMARY_KEYMAP_COLEMAK
// #define PRIMARY_KEYMAP_DVORAK
// #define PRIMARY_KEYMAP_CUSTOM

/* This comment temporarily turns off astyle's indent enforcement
 *   so we can make the keymaps actually resemble the physical key layout better
 */
// *INDENT-OFF*

KEYMAPS(

#if defined (PRIMARY_KEYMAP_QWERTY)
  [PRIMARY] = KEYMAP_STACKED
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

#elif defined (PRIMARY_KEYMAP_DVORAK)

  [PRIMARY] = KEYMAP_STACKED
  (___,          Key_1,         Key_2,     Key_3,      Key_4, Key_5, Key_LEDEffectNext,
   Key_Backtick, Key_Quote,     Key_Comma, Key_Period, Key_P, Key_Y, Key_Tab,
   Key_PageUp,   Key_A,         Key_O,     Key_E,      Key_U, Key_I,
   Key_PageDown, Key_Semicolon, Key_Q,     Key_J,      Key_K, Key_X, Key_Escape,
   Key_LeftControl, Key_Backspace, Key_LeftGui, Key_LeftShift,
   ShiftToLayer(FUNCTION),

   M(MACRO_ANY),   Key_6, Key_7, Key_8, Key_9, Key_0, LockLayer(NUMPAD),
   Key_Enter,      Key_F, Key_G, Key_C, Key_R, Key_L, Key_Slash,
                   Key_D, Key_H, Key_T, Key_N, Key_S, Key_Minus,
   Key_RightAlt,   Key_B, Key_M, Key_W, Key_V, Key_Z, Key_Equals,
   Key_RightShift, Key_LeftAlt, Key_Spacebar, Key_RightControl,
   ShiftToLayer(FUNCTION)),

#elif defined (PRIMARY_KEYMAP_COLEMAK)

  [PRIMARY] = KEYMAP_STACKED
  (___,          Key_1, Key_2, Key_3, Key_4, Key_5, Key_LEDEffectNext,
   Key_Backtick, Key_Q, Key_W, Key_F, Key_P, Key_G, Key_Tab,
   Key_PageUp,   Key_A, Key_R, Key_S, Key_T, Key_D,
   Key_PageDown, Key_Z, Key_X, Key_C, Key_V, Key_B, Key_Escape,
   Key_LeftControl, Key_Backspace, Key_LeftGui, Key_LeftShift,
   ShiftToLayer(FUNCTION),

   M(MACRO_ANY),  Key_6, Key_7, Key_8,     Key_9,         Key_0,         LockLayer(NUMPAD),
   Key_Enter,     Key_J, Key_L, Key_U,     Key_Y,         Key_Semicolon, Key_Equals,
                  Key_H, Key_N, Key_E,     Key_I,         Key_O,         Key_Quote,
   Key_RightAlt,  Key_K, Key_M, Key_Comma, Key_Period,    Key_Slash,     Key_Minus,
   Key_RightShift, Key_LeftAlt, Key_Spacebar, Key_RightControl,
   ShiftToLayer(FUNCTION)),

#elif defined (PRIMARY_KEYMAP_CUSTOM)
  // Edit this keymap to make a custom layout
  [PRIMARY] = KEYMAP_STACKED
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

#else

#error "No default keymap defined. You should make sure that you have a line like '#define PRIMARY_KEYMAP_QWERTY' in your sketch"

#endif



  [NUMPAD] =  KEYMAP_STACKED
  (___, ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___,
   ___,

   M(MACRO_VERSION_INFO),  ___, Key_7, Key_8,      Key_9,              Key_KeypadSubtract, ___,
   ___,                    ___, Key_4, Key_5,      Key_6,              Key_KeypadAdd,      ___,
                           ___, Key_1, Key_2,      Key_3,              Key_Equals,         ___,
   ___,                    ___, Key_0, Key_Period, Key_KeypadMultiply, Key_KeypadDivide,   Key_Enter,
   ___, ___, ___, ___,
   ___),

  [FUNCTION] =  KEYMAP_STACKED
  (___,      Key_F1,           Key_F2,      Key_F3,     Key_F4,        Key_F5,           Key_CapsLock,
   Key_Tab,  ___,              Key_mouseUp, ___,        Key_mouseBtnR, Key_mouseWarpEnd, Key_mouseWarpNE,
   Key_Home, Key_mouseL,       Key_mouseDn, Key_mouseR, Key_mouseBtnL, Key_mouseWarpNW,
   Key_End,  Key_PrintScreen,  Key_Insert,  ___,        Key_mouseBtnM, Key_mouseWarpSW,  Key_mouseWarpSE,
   ___, Key_Delete, ___, ___,
   ___,

   Consumer_ScanPreviousTrack, Key_F6,                 Key_F7,                   Key_F8,                   Key_F9,          Key_F10,          Key_F11,
   Consumer_PlaySlashPause,    Consumer_ScanNextTrack, Key_LeftCurlyBracket,     Key_RightCurlyBracket,    Key_LeftBracket, Key_RightBracket, Key_F12,
                               Key_LeftArrow,          Key_DownArrow,            Key_UpArrow,              Key_RightArrow,  ___,              ___,
   Key_PcApplication,          Consumer_Mute,          Consumer_VolumeDecrement, Consumer_VolumeIncrement, ___,             Key_Backslash,    Key_Pipe,
   ___, ___, Key_Enter, ___,
   ___)
) // KEYMAPS(

/* Re-enable astyle's indent enforcement */
// *INDENT-ON*

static void versionInfoMacro(uint8_t keyState) {
  if (keyToggledOn(keyState)) {
    Macros.type(PSTR("Keyboardio Model 01 - Kaleidoscope "));
    Macros.type(PSTR(BUILD_INFORMATION));
  }
}

// anyKeyMacro is used to provide the random functionality of the 'Any' key.
static void anyKeyMacro(uint8_t keyState) {
  static Key lastKey;
  bool toggledOn = false;
  if (keyToggledOn(keyState)) {
    lastKey.setKeyCode(Key_A.getKeyCode() + (uint8_t)(millis() % 36));
    toggledOn = true;
  }

  if (keyIsPressed(keyState))
    Kaleidoscope.hid().keyboard().pressKey(lastKey, toggledOn);
}


/******************** ADD FUNCTIONALCOLOR CONFIGURATION HERE ********************/
//Include FunctionalColor before creating your color override list and creating FC instances
#include "Kaleidoscope-LEDEffect-FunctionalColor.h"
//Add this line if you don't want to have to prefix colors and functions with kaleidoscope::LEDFunctionalColor
using namespace kaleidoscope::plugin::LEDFunctionalColor;


// Note: FunctionalColor allows you to use CSS color names (in lowercase)
// You can also control the brightness from 0-255 by using a dim() function on the color.

// Use color override Macros to set the color of specific keys--even those not customizable in a ColorMap struct
FC_START_COLOR_LIST(customColors)
 // Use any number of FCGROUPKEYs above a FC_KEYCOLOR to set several keys to the same color
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
// This is used in funColorSimpleColors
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
// Some are commented out to save a few bytes of memory in the default jam-packed configuration.

// No arguments are needed to use the default theme and brightness.
FunctionalColor funColorDefault;

//You can specify an optional brightness 0-255, and an optional colorList can follow.
FunctionalColor funColorMono(200);

//You can specify only a color override list as shown above beginning with FC_START_COLOR_LIST(customColors)
FunctionalColor funColorCustomColors(FC_COLOR_LIST(customColors));

//You can also specify a colorList with the brightness after.
FunctionalColor funCustomColorsBright(FC_COLOR_LIST(customColors), 255);

// The last two examples will use custom themes - these are applied later in the setup() part of this .ino
// Look near the bottom of this file to see how this is done.
FunctionalColor funColorMyTheme;
// Note that you can combine custom color overrides with a custom theme, demonstrated in funColorGreen.
// adding ", 220, false" after the FC_COLOR_LIST saves about 32 bytes here but it's not necessary.
FunctionalColor funColorGreen(FC_COLOR_LIST(customColors));

// This is how you explicitly specify NOT to use a theme - add "false" after the brightness
// to save memory and make a simple configuration.
FunctionalColor funColorSimpleColors(FC_COLOR_LIST(simpleColors), 220, false);

// If you're making a custom theme to be applied later, you can also avoid specifying a theme
// (to save memory) without specifying a colorList with the following:
FunctionalColor funColorNoTheme(220, false);


//To create a theme, make a subclass of one of the themes in FunctionalColor.
//They are colorMap, colorMapDefault, colorMapMono, colorMapDuo, colorMapFruit, etc.
//This example makes a few tweaks to colorMapMono that customize specific modifier keys
struct myTheme: public colorMapMono {
  FC_MAP_COLOR(shift, darkseagreen)
  FC_MAP_COLOR(control, skyblue)
  FC_MAP_COLOR(alt, forestgreen)
  FC_MAP_COLOR(gui, pink)
  //You can also set something to "nocolor" which will avoid coloring a set of keys
  // if they already are part of another larger group - ie set shift to nocolor and
  // shiftkeys will inherit the color assigned to modifier
  // FC_MAP_COLOR(shift, nocolor);
};


// For reference, this example theme struct shows the full list of properties you can set
// in case you want to define a completely custom theme. In practice you can
// just subclass one you like and change only the elements you want to modify
// with the FC_MAP_COLOR() function.
struct colorMapGreen: public colorMap {
  // baseColor is used with just changes in brightness for a largely monochromatic theme.
  // You can change baseColor from green to change all these colors at once.
  FC_MAP_COLOR(baseColor, green)

  // defaultColor is used when there is no color defined for a key.
  // This is the only way to color "prog" if you don't assign a function to it.
  // When referring to a previously defined color that was defined with FC_MAP_COLOR
  // (including in base color map classes), you must use the FC_REF_MAP_COLOR() function.
  FC_MAP_COLOR(defaultColor, dim(FC_REF_MAP_COLOR(baseColor), 100))

  // shift, control, gui, and alt can all be colored by "modifier" if nocolor is set here.
  FC_MAP_COLOR(shift, nocolor)
  FC_MAP_COLOR(control, nocolor)
  // Windows Logo or, on macOS, command keys 
  FC_MAP_COLOR(gui, nocolor)
  FC_MAP_COLOR(alt, nocolor)
  
  FC_MAP_COLOR(modifier, dim(FC_REF_MAP_COLOR(baseColor), 130))
  FC_MAP_COLOR(alpha, dim(FC_REF_MAP_COLOR(baseColor), 80))
  FC_MAP_COLOR(number, dim(FC_REF_MAP_COLOR(baseColor), 100))
  FC_MAP_COLOR(punctuation, dim(FC_REF_MAP_COLOR(baseColor), 120))

  // F1-F12 and F13-F24
  FC_MAP_COLOR(function, dim(FC_REF_MAP_COLOR(baseColor), 150))
  
  // Page Up, Page Down, Home, End, Insert, and Delete (if del has nocolor)
  FC_MAP_COLOR(navigation, dim(FC_REF_MAP_COLOR(baseColor), 180))
  
  // Print Screen, Pause/Break, and Scroll Lock keys (brightness on Macs)
  FC_MAP_COLOR(system, dim(FC_REF_MAP_COLOR(baseColor), 50))
  
  FC_MAP_COLOR(arrow, dim(FC_REF_MAP_COLOR(baseColor), 250))
  FC_MAP_COLOR(keypad, dim(FC_REF_MAP_COLOR(baseColor), 230))

  // Includes play/pause, next/prev, volume control, mute, etc.
  FC_MAP_COLOR(media, dim(FC_REF_MAP_COLOR(baseColor), 250))
  
  FC_MAP_COLOR(mouseWheel, nocolor)
  FC_MAP_COLOR(mouseButton,nocolor)
  FC_MAP_COLOR(mouseWarp, nocolor)
  FC_MAP_COLOR(mouseMove, nocolor)
  // mouse includes the four above groups if nocolor is set for those
  FC_MAP_COLOR(mouse, dim(FC_REF_MAP_COLOR(baseColor), 220))
  FC_MAP_COLOR(space, dim(FC_REF_MAP_COLOR(baseColor), 100))
  FC_MAP_COLOR(tab, dim(FC_REF_MAP_COLOR(baseColor), 100))
  FC_MAP_COLOR(enter, dim(FC_REF_MAP_COLOR(baseColor), 255))
  FC_MAP_COLOR(backspace, dim(FC_REF_MAP_COLOR(baseColor), 100))
  FC_MAP_COLOR(escape, dim(FC_REF_MAP_COLOR(baseColor), 100))
  FC_MAP_COLOR(del, dim(FC_REF_MAP_COLOR(baseColor), 255))

  //fn will work properly if your FUNCTION layer is between layers 1-3
  FC_MAP_COLOR(fn, dim(FC_REF_MAP_COLOR(baseColor), 255))
  
  //NumLock and other layer locks
  FC_MAP_COLOR(lock, dim(FC_REF_MAP_COLOR(baseColor), 255))
  FC_MAP_COLOR(LEDEffectNext, dim(FC_REF_MAP_COLOR(baseColor), 255))
};


// macroAction dispatches keymap events that are tied to a macro to that macro.
const macro_t *macroAction(uint8_t macroIndex, uint8_t keyState) {
  switch (macroIndex) {

  case MACRO_VERSION_INFO:
    versionInfoMacro(keyState);
    break;

  case MACRO_ANY:
    anyKeyMacro(keyState);
    break;

  /******************** FUNCTIONALCOLOR MACROS GO HERE ********************/
  // Here are macros that control the brightness of the active FunctionalColor instance.
  // These names must be in the macros enum near the beginning of this file.
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

// toggleLedsOnSuspendResume toggles the LEDs off when the host goes to sleep.
void toggleLedsOnSuspendResume(kaleidoscope::plugin::HostPowerManagement::Event event) {
  switch (event) {
  case kaleidoscope::plugin::HostPowerManagement::Suspend:
    LEDControl.set_all_leds_to({0, 0, 0});
    LEDControl.syncLeds();
    LEDControl.disable();
    break;
  case kaleidoscope::plugin::HostPowerManagement::Resume:
    LEDControl.enable();
    LEDControl.refreshAll();
    break;
  case kaleidoscope::plugin::HostPowerManagement::Sleep:
    break;
  }
}

// hostPowerManagementEventHandler dispatches power management events
void hostPowerManagementEventHandler(kaleidoscope::plugin::HostPowerManagement::Event event) {
  toggleLedsOnSuspendResume(event);
}

// A tiny wrapper, to be used by MagicCombo. Toggles the keyboard protocol via USBQuirks
static void toggleKeyboardProtocol(uint8_t combo_index) {
  USBQuirks.toggleKeyboardProtocol();
}

// Magic combo list, a list of key combo and action pairs the firmware should recognise.
USE_MAGIC_COMBOS({.action = toggleKeyboardProtocol,
                  // Left Fn + Esc + Shift
                  .keys = { R3C6, R2C6, R3C7 }
                 });

// First, tell Kaleidoscope which plugins you want to use, in order.
KALEIDOSCOPE_INIT_PLUGINS(
  EEPROMSettings,EEPROMKeymap,Focus,FocusSettingsCommand,FocusEEPROMCommand,
  BootGreetingEffect,
  HardwareTestMode,
  LEDControl,
  HostPowerManagement,
  MagicCombo,
  USBQuirks,
  //LEDOff is commented out so the LEDs turn on immediately
  //LEDOff,

  // The macros plugin adds support for macros
  Macros,



  /********************** FUNCTIONALCOLOR EFFECTS INITIALIZED HERE **********************/
  // All FunctionalColor instances go here in the order you want them in
  funColorDefault,
  funColorMono,
  funColorCustomColors,
  funCustomColorsBright,
  funColorMyTheme,
  funColorGreen,
  funColorSimpleColors,
  funColorNoTheme,

  // The MouseKeys plugin lets you add keys to your keymap which move the mouse.
  MouseKeys  
);

/** The 'setup' function is one of the two standard Arduino sketch functions.
 * It's called when your keyboard first powers up. This is where you set up
 * Kaleidoscope and any plugins.
 */
void setup() {
  // First, call Kaleidoscope's internal setup function
  Kaleidoscope.setup();

  /********************** FUNCTIONALCOLOR CUSTOM THEMES APPLIED HERE **********************/
  // Use the FC_SET_THEME() to apply colorMaps here.
  // If you aren't using namespace kaleidoscope::plugin::LEDFunctionalColor;
  // prefix built-in themes with that namespace
  // Here are all the defaults available:

  // The default is already used without specifying it so specifying it wastes ~556 bytes of memory
  //FC_SET_THEME(funColorDefault, kaleidoscope::plugin::LEDFunctionalColor::colorMapDefault);
  FC_SET_THEME(funColorMono, kaleidoscope::plugin::LEDFunctionalColor::colorMapMono);
  // The themes are: colorMap, colorMapDefault, colorMapFruit, colorMapMono, colorMapDuo,
  // colorMapPrincess, colorMapSea, colorMapFlower, colorMapKids, colorMapRedWhiteBlue.

  // This applies our custom themes to funColorMyTheme, funColorGreen, and funcolorNoTheme
  FC_SET_THEME(funColorMyTheme, myTheme);
  FC_SET_THEME(funColorGreen, colorMapGreen);
  // When a FunctionalColors instance is instantiated with no theme, one can be added later
  FC_SET_THEME(funColorNoTheme, colorMapGreen);


  // Reserve layers for editable keymaps in EEPROM.
  EEPROMKeymap.setup(5);
}

void loop() {
  Kaleidoscope.loop();
}
