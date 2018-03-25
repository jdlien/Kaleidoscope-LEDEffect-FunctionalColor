// -*- mode: c++ -*-
// Copyright 2016 Keyboardio, inc. <jesse@keyboard.io>
// See "LICENSE" for license details

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
// #include "LED-Off.h"

// Support for the "Boot greeting" effect, which pulses the 'LED' button for 10s
// when the keyboard is connected to a computer (or that computer is powered on)
// #include "Kaleidoscope-LEDEffect-BootGreeting.h"

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
// #include "Kaleidoscope-Model01-TestMode.h"

// Support for host power management (suspend & wakeup)
// #include "Kaleidoscope-HostPowerManagement.h"

#include "Kaleidoscope-LEDEffect-FunctionalColor.h"


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
       MACRO_ANY
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
                           ___, Key_Keypad1, Key_Keypad2,   Key_Keypad3,        Key_Equals,         ___,
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
                               Key_LeftArrow,          Key_DownArrow,            Key_UpArrow,              Key_RightArrow,  ___,              ___,
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

/** toggleLedsOnSuspendResume toggles the LEDs off when the host goes to sleep,
 * and turns them back on when it wakes up.
 */
// void toggleLedsOnSuspendResume(kaleidoscope::HostPowerManagement::Event event) {
//   switch (event) {
//   case kaleidoscope::HostPowerManagement::Suspend:
//     LEDControl.paused = true;
//     LEDControl.set_all_leds_to({0, 0, 0});
//     LEDControl.syncLeds();
//     break;
//   case kaleidoscope::HostPowerManagement::Resume:
//     LEDControl.paused = false;
//     LEDControl.refreshAll();
//     break;
//   case kaleidoscope::HostPowerManagement::Sleep:
//     break;
//   }
// }

/** hostPowerManagementEventHandler dispatches power management events (suspend,
 * resume, and sleep) to other functions that perform action based on these
 * events.
 */
// void hostPowerManagementEventHandler(kaleidoscope::HostPowerManagement::Event event) {
//   toggleLedsOnSuspendResume(event);
// }

/** The 'setup' function is one of the two standard Arduino sketch functions.
  * It's called when your keyboard first powers up. This is where you set up
  * Kaleidoscope and any plugins.
  */

using namespace kaleidoscope::LEDEffect_FunctionalColor;

//*****************************************************************************
// Color-brightness example
//*****************************************************************************

// This example additionaly uses 1334 bytes of PROGMEM and 62 of ram
/* I have no idea what I'm doing and I totally broke this

// Let the user define a palette
//
cRGB palette[] = {
   CRGB(0, 0, 0), // fallback color
   green,
   blue,
   red,
   yellow
};

// For convenience
//
enum paletteIds {
   fallbackId,
   greenId,
   blueId,
   redId,
   yellowId
};

//Specify the color list, the color you want as the default, and the default brightness of that color (from 0-15)
FC_CB_START_COLOR_LIST(myCBColorList, greenId, 7)

   FC_CB_COLOR(A, blueId, 15)
   FC_CB_COLOR(B, redId, 15)
   
   // Let some keys share the same palette entry and overlay brightness
   //
   FC_CB_SHARE_COLOR(0)
   FC_CB_SHARE_COLOR(1)
   FC_CB_SHARE_COLOR(2)
   FC_CB_SHARE_COLOR(3)
   FC_CB_SHARE_COLOR(4)
   FC_CB_SHARE_COLOR(5)
   FC_CB_SHARE_COLOR(6)
   FC_CB_SHARE_COLOR(7)
   FC_CB_SHARE_COLOR(8)
   FC_CB_COLOR(9, greenId, 15)

   FC_CB_SHARE_COLOR(F1)
   FC_CB_SHARE_COLOR(F2)
   FC_CB_SHARE_COLOR(F3)
   FC_CB_SHARE_COLOR(F4)
   FC_CB_SHARE_COLOR(F5)
   FC_CB_SHARE_COLOR(F6)
   FC_CB_SHARE_COLOR(F7)
   FC_CB_SHARE_COLOR(F8)
   FC_CB_SHARE_COLOR(F9)
   FC_CB_SHARE_COLOR(F10)
   FC_CB_SHARE_COLOR(F11)
   FC_CB_COLOR(F12, redId, 14)
   
   
FC_CB_END_COLOR_LIST


kaleidoscope::LEDFunctionalColorCB fcCB(&FC_CB_COLOR_LIST(myCBColorList),
                                      FC_CB_PALETTE(palette),
                                      FUNCTION;
*
*
*/
  // Configure the colors used for FunctionalColors groups

//specify your colorlist, the default color, and the default brightness (255 for full brightness)
FC_START_COLOR_LIST(myRGBColorList, white)   
  // Let multiple keys be grouped by color to make it easier to change them all at once
  FC_GROUPKEY(Key_LeftShift)
  FC_KEYCOLOR(Key_RightShift, darkseagreen)
  
  FC_GROUPKEY(Key_LeftAlt)
  FC_KEYCOLOR(Key_RightAlt, forestgreen)
  
  FC_GROUPKEY(Key_LeftGui)
  FC_KEYCOLOR(Key_RightGui, pink)
  
  FC_KEYCOLOR(Key_Escape, dim(red, 150))
  FC_KEYCOLOR(Key_Enter, white)
  FC_KEYCOLOR(Key_Space, dim(white, 150))
  FC_KEYCOLOR(Key_Backspace, dim(red, 150))
  FC_KEYCOLOR(Key_Delete, red)
  FC_KEYCOLOR(Key_LEDEffectNext, blue)
  FC_KEYCOLOR(Key_PrintScreen, orange)
  FC_KEYCOLOR(Key_ScrollLock, orange)
  FC_KEYCOLOR(Key_Pause, orange)
  FC_ENDKEYS //Need this after individual key definitions, even if there are none
  
  //Now add desired colors for any groups: Alpha, Number, Punctuation, Function, Navigation, Arrow, Keypad, Media, Modifier, Mousewheel, MouseButton, MouseWarp, MouseMove, and Lang
  FC_GROUPCOLOR(Alpha, dim(warmwhite, 100))
  FC_GROUPCOLOR(Number, dim(antiquewhite, 200))
  FC_GROUPCOLOR(Punctuation, dim(orange, 190))
  FC_GROUPCOLOR(Function, dim(red, 190))
  FC_GROUPCOLOR(Navigation, dim(yellow, 180))
  FC_GROUPCOLOR(Arrow, white)
  FC_GROUPCOLOR(Keypad, red)
  FC_GROUPCOLOR(Media, dim(magenta, 200))
  FC_GROUPCOLOR(Modifier, skyblue)
  FC_GROUPCOLOR(MouseMove, pink)
  FC_GROUPCOLOR(MouseWheel, purple)
  FC_GROUPCOLOR(MouseButton, cyan)
  FC_GROUPCOLOR(MouseWarp, green)
FC_END_COLOR_LIST

kaleidoscope::LEDFunctionalColorRGB fcMax(FC_COLOR_LIST(myRGBColorList), 255, FUNCTION);
kaleidoscope::LEDFunctionalColorRGB fcHi = fcMax;
kaleidoscope::LEDFunctionalColorRGB fcMHi = fcMax;
kaleidoscope::LEDFunctionalColorRGB fcM = fcMax;
kaleidoscope::LEDFunctionalColorRGB fcMLo = fcMax;
kaleidoscope::LEDFunctionalColorRGB fcLo = fcMax;
void setup() {

  // First, call Kaleidoscope's internal setup function
  Kaleidoscope.setup();

  // Next, tell Kaleidoscope which plugins you want to use.
  // The order can be important. For example, LED effects are
  // added in the order they're listed here.
  Kaleidoscope.use(
    
    // LEDControl provides support for other LED modes
    &LEDControl,

    //&fcCB,
    &fcMax, &fcHi, &fcMHi, &fcM, &fcMLo, &fcLo,

    &NumPad,&Macros,&MouseKeys
  );

  fcHi.brightness(80);
  fcMHi.brightness(70);
  fcM.brightness(60);
  fcMLo.brightness(50);
  fcLo.brightness(40);
  
  //fcHi.setColorLookup(kaleidoscope::LEDFunctionalColorRGB::template groupColorLookup<groupColors>);

  NumPad.numPadLayer = NUMPAD;

}

/** loop is the second of the standard Arduino sketch functions.
  * As you might expect, it runs in a loop, never exiting.
  *
  * For Kaleidoscope-based keyboard firmware, you usually just want to
  * call Kaleidoscope.loop(); and not do anything custom here.
  */

void loop() {
  Kaleidoscope.loop();
}
