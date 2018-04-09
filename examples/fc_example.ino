// -*- mode: c++ -*-
// This example demonstrates using FunctionalColor with completely stock Model 01 firmware.

#ifndef BUILD_INFORMATION
#define BUILD_INFORMATION "locally built"
#endif


/**
 * These #include directives pull in the Kaleidoscope firmware core,
 * as well as the Kaleidoscope plugins we use in the Model 01's firmware
 */


// The Kaleidoscope core
#include "Kaleidoscope.h"

// Support for keys that move the mouse
#include "Kaleidoscope-MouseKeys.h"

// Support for macros
#include "Kaleidoscope-Macros.h"

// Support for controlling the keyboard's LEDs
#include "Kaleidoscope-LEDControl.h"

// Support for "Numpad" mode, which is mostly just the Numpad specific LED mode
#include "Kaleidoscope-NumPad.h"

// Support for an "LED off mode"
#include "LED-Off.h"

// Support for the "Boot greeting" effect, which pulses the 'LED' button for 10s
// when the keyboard is connected to a computer (or that computer is powered on)
#include "Kaleidoscope-LEDEffect-BootGreeting.h"

// Support for LED modes that set all LEDs to a single color
#include "Kaleidoscope-LEDEffect-SolidColor.h"

// Support for an LED mode that makes all the LEDs 'breathe'
#include "Kaleidoscope-LEDEffect-Breathe.h"

// Support for an LED mode that makes a red pixel chase a blue pixel across the keyboard
#include "Kaleidoscope-LEDEffect-Chase.h"

// Support for LED modes that pulse the keyboard's LED in a rainbow pattern
#include "Kaleidoscope-LEDEffect-Rainbow.h"

// Support for an LED mode that lights up the keys as you press them
#include "Kaleidoscope-LED-Stalker.h"

// Support for an LED mode that prints the keys you press in letters 4px high
#include "Kaleidoscope-LED-AlphaSquare.h"

// Support for Keyboardio's internal keyboard testing mode
#include "Kaleidoscope-Model01-TestMode.h"


/** This 'enum' is a list of all the macros used by the Model 01's firmware
  * The names aren't particularly important. What is important is that each
  * is unique.
  *
  * These are the names of your macros. They'll be used in two places.
  * The first is in your keymap definitions. There, you'll use the syntax
  * `M(MACRO_NAME)` to mark a specific keymap position as triggering `MACRO_NAME`
  *
  * The second usage is in the 'switch' statement in the `macroAction` function.
  * That switch statement actually runs the code associated with a macro when
  * a macro key is pressed.
  */

enum { MACRO_VERSION_INFO,
       MACRO_ANY,
       MACRO_FCUP,
       MACRO_FCDOWN
     };



/** The Model 01's key layouts are defined as 'keymaps'. By default, there are three
  * keymaps: The standard QWERTY keymap, the "Function layer" keymap and the "Numpad"
  * keymap.
  *
  * Each keymap is defined as a list using the 'KEYMAP_STACKED' macro, built
  * of first the left hand's layout, followed by the right hand's layout.
  *
  * Keymaps typically consist mostly of `Key_` definitions. There are many, many keys
  * defined as part of the USB HID Keyboard specification. You can find the names
  * (if not yet the explanations) for all the standard `Key_` defintions offered by
  * Kaleidoscope in these files:
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/key_defs_keyboard.h
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/key_defs_consumerctl.h
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/key_defs_sysctl.h
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/key_defs_keymaps.h
  *
  * Additional things that should be documented here include
  *   using ___ to let keypresses fall through to the previously active layer
  *   using XXX to mark a keyswitch as 'blocked' on this layer
  *   using ShiftToLayer() and LockLayer() keys to change the active keymap.
  *   the special nature of the PROG key
  *   keeping NUM and FN consistent and accessible on all layers
  *
  *
  * The "keymaps" data structure is a list of the keymaps compiled into the firmware.
  * The order of keymaps in the list is important, as the ShiftToLayer(#) and LockLayer(#)
  * macros switch to key layers based on this list.
  *
  *

  * A key defined as 'ShiftToLayer(FUNCTION)' will switch to FUNCTION while held.
  * Similarly, a key defined as 'LockLayer(NUMPAD)' will switch to NUMPAD when tapped.
  */

/**
  * Layers are "0-indexed" -- That is the first one is layer 0. The second one is layer 1.
  * The third one is layer 2.
  * This 'enum' lets us use names like QWERTY, FUNCTION, and NUMPAD in place of
  * the numbers 0, 1 and 2.
  *
  */

enum { QWERTY, NUMPAD, FUNCTION }; // layers

/* This comment temporarily turns off astyle's indent enforcement
 *   so we can make the keymaps actually resemble the physical key layout better
 */
// *INDENT-OFF*

const Key keymaps[][ROWS][COLS] PROGMEM = {

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

   M(MACRO_VERSION_INFO),  ___, Key_Keypad7, Key_Keypad8,   Key_Keypad9,        Key_KeypadSubtract, ___,
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

};

/* Re-enable astyle's indent enforcement */
// *INDENT-ON*

/** versionInfoMacro handles the 'firmware version info' macro
 *  When a key bound to the macro is pressed, this macro
 *  prints out the firmware build information as virtual keystrokes
 */

static void versionInfoMacro(uint8_t keyState) {
  if (keyToggledOn(keyState)) {
    Macros.type(PSTR("Keyboardio Model 01 - Kaleidoscope "));
    Macros.type(PSTR(BUILD_INFORMATION));
  }
}

/** anyKeyMacro is used to provide the functionality of the 'Any' key.
 *
 * When the 'any key' macro is toggled on, a random alphanumeric key is
 * selected. While the key is held, the function generates a synthetic
 * keypress event repeating that randomly selected key.
 *
 */

static void anyKeyMacro(uint8_t keyState) {
  static Key lastKey;
  if (keyToggledOn(keyState))
    lastKey.keyCode = Key_A.keyCode + (uint8_t)(millis() % 36);

  if (keyIsPressed(keyState))
    kaleidoscope::hid::pressKey(lastKey);
}

//Include FunctionalColor before creating your color override list and creating FC instances
#include "Kaleidoscope-LEDEffect-FunctionalColor.h"
//Add this line if you don't want to have to prefix colors and functions with kaleidoscope::LEDFunctionalColor
using namespace kaleidoscope::LEDFunctionalColor;

// Note: FunctionalColors allows you to use CSS color names (in lowercase)
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


// There are several ways you can make FunctionalColor instances.

// No arguments are needed to use the default theme and brightness.
FCPlugin funColor1;

//You can specify an optional brightness 0-255, and an optional colorList can follow.
FCPlugin funColor2(200);

//You can specify only a color override list as shown above beginning with FC_START_COLOR_LIST(customColors)
FCPlugin funColor3(FC_COLOR_LIST(customColors));

//You can also specify a colorList with the brightness after.
FCPlugin funColor4(FC_COLOR_LIST(customColors), 255);

// The last two examples will use custom themes - these are applied later in the setup() part of this .ino
// Look near the bottom of this file to see how this is done.
FCPlugin funColor5;
// Note that you can combine custom color overrides with a custom theme, demonstrated in funColor6
FCPlugin funColor6(FC_COLOR_LIST(customColors));

//To create customize a theme, make a subclass of one of the themes in FunctionalColor.
//They are colorMap, colorMapDefault, colorMapColorful, colorMapMono, colorMapDuo.
//This example makes a few tweaks to colorMapMono that customize specific modifier keys
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


// For reference, this example theme struct shows the full list of properties you can set
// in case you want to define a completely custom theme. In practice you can
// just subclass one you like and change only the elements you want to modify.
struct colorMapGreen: public colorMap {
  // baseColor is used with just changes in brightness for a largely monochromatic theme.
  // You can change baseColor from green to change all these colors at once
  static constexpr cRGB baseColor   = green;

  // defaultColor is used when there is no color defined for a key.
  // This is the only way to color "prog" if you don't assign a function to it.
  static constexpr cRGB defaultColor= dim(baseColor, 100);

  // shift, control, gui, and alt can all be colored by "modifier" if nocolor is set here.
  static constexpr cRGB shift       = nocolor;
  static constexpr cRGB control     = nocolor;
  // Windows Logo or, on macOS, command keys 
  static constexpr cRGB gui         = nocolor;
  static constexpr cRGB alt         = nocolor;
  
  static constexpr cRGB modifier    = dim(baseColor, 130);
  static constexpr cRGB alpha       = dim(baseColor, 80);
  static constexpr cRGB number      = dim(baseColor, 100);
  static constexpr cRGB punctuation = dim(baseColor, 120);

  // F1-F12 and F13-F24
  static constexpr cRGB function    = dim(baseColor, 150);
  
  // Page Up, Page Down, Home, End, Insert, and Delete (if del has nocolor)
  static constexpr cRGB navigation  = dim(baseColor, 180);
  
  // Print Screen, Pause/Break, and Scroll Lock keys (brightness on Macs)
  static constexpr cRGB system      = dim(baseColor, 50);
  
  static constexpr cRGB arrow       = dim(baseColor, 250);
  static constexpr cRGB keypad      = dim(baseColor, 230);

  // Includes play/pause, next/prev, volume control, mute, etc.
  static constexpr cRGB media       = dim(baseColor, 250);
  
  static constexpr cRGB mouseWheel  = nocolor;
  static constexpr cRGB mouseButton = nocolor;
  static constexpr cRGB mouseWarp   = nocolor;
  static constexpr cRGB mouseMove   = nocolor;
  // mouse includes the four above groups if nocolor is set for those
  static constexpr cRGB mouse       = dim(baseColor, 220);
  static constexpr cRGB space       = dim(baseColor, 100);
  static constexpr cRGB tab         = dim(baseColor, 100);
  static constexpr cRGB enter       = dim(baseColor, 255);
  static constexpr cRGB backspace   = dim(baseColor, 100);
  static constexpr cRGB escape      = dim(baseColor, 100);
  static constexpr cRGB del         = dim(baseColor, 255);

  //fn will work properly if your FUNCTION layer is between layers 1-3
  static constexpr cRGB fn          = dim(baseColor, 255);
  
  //NumLock and other layer locks
  static constexpr cRGB lock        = dim(baseColor, 255);
  static constexpr cRGB LEDEffectNext=dim(baseColor, 255);
};



/** macroAction dispatches keymap events that are tied to a macro
    to that macro. It takes two uint8_t parameters.

    The first is the macro being called (the entry in the 'enum' earlier in this file).
    The second is the state of the keyswitch. You can use the keyswitch state to figure out
    if the key has just been toggled on, is currently pressed or if it's just been released.

    The 'switch' statement should have a 'case' for each entry of the macro enum.
    Each 'case' statement should call out to a function to handle the macro in question.

 */

const macro_t *macroAction(uint8_t macroIndex, uint8_t keyState) {
  switch (macroIndex) {

  case MACRO_VERSION_INFO:
    versionInfoMacro(keyState);
    break;

  case MACRO_ANY:
    anyKeyMacro(keyState);
    break;

  // Here are macros that control the brightness of the active FunctionalColor instance.
  // These names must be in the macros enum near the beginning of this file.
  // Assign M(MACRO_FCUP) and M(MACRO_FCDOWN) to keys you'd like to use for this purpose.
  // In this example they have been assigned to the semicolon and comma keys on the fn layer.
  case MACRO_FCUP:
    kaleidoscope::LEDFunctionalColor::FCPlugin::brightnessUp(keyState);
    break;
   
  case MACRO_FCDOWN:
    kaleidoscope::LEDFunctionalColor::FCPlugin::brightnessDown(keyState);
    break;
  }
  return MACRO_NONE;
}



// These 'solid' color effect definitions define a rainbow of
// LED color modes calibrated to draw 500mA or less on the
// Keyboardio Model 01.


static kaleidoscope::LEDSolidColor solidRed(160, 0, 0);
static kaleidoscope::LEDSolidColor solidOrange(140, 70, 0);
static kaleidoscope::LEDSolidColor solidYellow(130, 100, 0);
static kaleidoscope::LEDSolidColor solidGreen(0, 160, 0);
static kaleidoscope::LEDSolidColor solidBlue(0, 70, 130);
static kaleidoscope::LEDSolidColor solidIndigo(0, 0, 170);
static kaleidoscope::LEDSolidColor solidViolet(130, 0, 120);



/** The 'setup' function is one of the two standard Arduino sketch functions.
  * It's called when your keyboard first powers up. This is where you set up
  * Kaleidoscope and any plugins.
  */

void setup() {
  // First, call Kaleidoscope's internal setup function
  Kaleidoscope.setup();

  // Next, tell Kaleidoscope which plugins you want to use.
  // The order can be important. For example, LED effects are
  // added in the order they're listed here.
  Kaleidoscope.use(
    // The boot greeting effect pulses the LED button for 10 seconds after the keyboard is first connected
    &BootGreetingEffect,

    // The hardware test mode, which can be invoked by tapping Prog, LED and the left Fn button at the same time.
    &TestMode,

    // LEDControl provides support for other LED modes
    &LEDControl,

    // We start with the LED effect that turns off all the LEDs.
    &LEDOff,

    // All FunctionalColor instances go here in the order you want them in
    &funColor1,&funColor2,&funColor3,&funColor4,&funColor5,&funColor6,

    // The rainbow effect changes the color of all of the keyboard's keys at the same time
    // running through all the colors of the rainbow.
    &LEDRainbowEffect,

    // The rainbow wave effect lights up your keyboard with all the colors of a rainbow
    // and slowly moves the rainbow across your keyboard
    &LEDRainbowWaveEffect,

    // The chase effect follows the adventure of a blue pixel which chases a red pixel across
    // your keyboard. Spoiler: the blue pixel never catches the red pixel
    &LEDChaseEffect,

    // These static effects turn your keyboard's LEDs a variety of colors
    &solidRed, &solidOrange, &solidYellow, &solidGreen, &solidBlue, &solidIndigo, &solidViolet,

    // The breathe effect slowly pulses all of the LEDs on your keyboard
    &LEDBreatheEffect,

    // The AlphaSquare effect prints each character you type, using your
    // keyboard's LEDs as a display
    &AlphaSquareEffect,

    // The stalker effect lights up the keys you've pressed recently
    &StalkerEffect,

    // The numpad plugin is responsible for lighting up the 'numpad' mode
    // with a custom LED effect
    &NumPad,

    // The macros plugin adds support for macros
    &Macros,

    // The MouseKeys plugin lets you add keys to your keymap which move the mouse.
    &MouseKeys
  );

  // While we hope to improve this in the future, the NumPad plugin
  // needs to be explicitly told which keymap layer is your numpad layer
  NumPad.numPadLayer = NUMPAD;

  // We configure the AlphaSquare effect to use RED letters
  AlphaSquare.color = { 255, 0, 0 };

  // We set the brightness of the rainbow effects to 150 (on a scale of 0-255)
  // This draws more than 500mA, but looks much nicer than a dimmer effect
  LEDRainbowEffect.brightness(150);
  LEDRainbowWaveEffect.brightness(150);

  // The LED Stalker mode has a few effects. The one we like is
  // called 'BlazingTrail'. For details on other options,
  // see https://github.com/keyboardio/Kaleidoscope-LED-Stalker
  StalkerEffect.variant = STALKER(BlazingTrail);

  // We want to make sure that the firmware starts with LED effects off
  // This avoids over-taxing devices that don't have a lot of power to share
  // with USB devices
  LEDOff.activate();


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

void loop() {
  Kaleidoscope.loop();
}