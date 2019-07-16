#include <Arduino.h>
#line 1 "/Users/jdlien/kaleidoscope/Kaleidoscope-Bundle-Keyboardio/avr/libraries/Kaleidoscope-LEDEffect-FunctionalColor/examples/fc_test_minimal/fc_test_minimal.ino"
#line 1 "/Users/jdlien/kaleidoscope/Kaleidoscope-Bundle-Keyboardio/avr/libraries/Kaleidoscope-LEDEffect-FunctionalColor/examples/fc_test_minimal/fc_test_minimal.ino"
// -*- mode: c++ -*-
// Minimalist Sketch for testing FunctionalColors
#ifndef BUILD_INFORMATION
#define BUILD_INFORMATION "locally built"
#endif

// The Kaleidoscope core
#include "Kaleidoscope.h"

// Support for keys that move the mouse
#include "Kaleidoscope-MouseKeys.h"

// Support for controlling the keyboard's LEDs
#include "Kaleidoscope-LEDControl.h"

enum { PRIMARY, FUNCTION }; // layers

#define PRIMARY_KEYMAP_QWERTY
KEYMAPS(

#if defined (PRIMARY_KEYMAP_QWERTY)
  [PRIMARY] = KEYMAP_STACKED
  (___,          Key_1, Key_2, Key_3, Key_4, Key_5, Key_LEDEffectNext,
   Key_Backtick, Key_Q, Key_W, Key_E, Key_R, Key_T, Key_Tab,
   Key_PageUp,   Key_A, Key_S, Key_D, Key_F, Key_G,
   Key_PageDown, Key_Z, Key_X, Key_C, Key_V, Key_B, Key_Escape,
   Key_LeftControl, Key_Backspace, Key_LeftGui, Key_LeftShift,
   ShiftToLayer(FUNCTION),

   ___,  Key_6, Key_7, Key_8,     Key_9,         Key_0,         ___,
   Key_Enter,     Key_Y, Key_U, Key_I,     Key_O,         Key_P,         Key_Equals,
                  Key_H, Key_J, Key_K,     Key_L,         Key_Semicolon, Key_Quote,
   Key_RightAlt,  Key_N, Key_M, Key_Comma, Key_Period,    Key_Slash,     Key_Minus,
   Key_RightShift, Key_LeftAlt, Key_Spacebar, Key_RightControl,
   ShiftToLayer(FUNCTION)),

#else

#error "No default keymap defined. You should make sure that you have a line like '#define PRIMARY_KEYMAP_QWERTY' in your sketch"

#endif

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


#include "Kaleidoscope-LEDEffect-FunctionalColor.h"
static kaleidoscope::plugin::FunctionalColor funColor;

// First, tell Kaleidoscope which plugins you want to use.
KALEIDOSCOPE_INIT_PLUGINS(
  // LEDControl provides support for other LED modes
  LEDControl,
  // Add the default FunctionalColor theme
  funColor
);

/** The 'setup' function is one of the two standard Arduino sketch functions. */
void setup() {
  // First, call Kaleidoscope's internal setup function
  Kaleidoscope.setup();
}

/** loop is the second of the standard Arduino sketch functions. */
void loop() {
  Kaleidoscope.loop();
}

