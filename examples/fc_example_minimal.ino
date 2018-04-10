// -*- mode: c++ -*-
// Minimalist FunctionalColor example by JD Lien

// Includes required/useful for FunctionalColors
#include "Kaleidoscope.h"
#include "Kaleidoscope-Macros.h"
//Note that FunctionalColor already includes LEDControl and MouseKeys
#include "Kaleidoscope-LEDEffect-FunctionalColor.h"
//Add this line if you don't want to have to prefix colors and functions with kaleidoscope::LEDFunctionalColor
using namespace kaleidoscope::LEDFunctionalColor;

// List of macros includes names for FC brightness controls
enum { MACRO_FCUP, MACRO_FCDOWN };

// Keymaps. This is the default with brightness controls added and version_info removed
// to fn+; and fn+'
enum { QWERTY, FUNCTION };
const Key keymaps[][ROWS][COLS] PROGMEM = {

  [QWERTY] = KEYMAP_STACKED
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

  [FUNCTION] =  KEYMAP_STACKED
  (___,      Key_F1,           Key_F2,      Key_F3,     Key_F4,        Key_F5,           XXX,
   Key_Tab,  ___,              Key_mouseUp, ___,        Key_mouseBtnR, Key_mouseWarpEnd, Key_mouseWarpNE,
   Key_Home, Key_mouseL,       Key_mouseDn, Key_mouseR, Key_mouseBtnL, Key_mouseWarpNW,
   Key_End,  Key_PrintScreen,  Key_Insert,  Key_Pause,        Key_mouseBtnM, Key_mouseWarpSW,  Key_mouseWarpSE,
   ___, Key_Delete, ___, ___,
   ___,

   Consumer_ScanPreviousTrack, Key_F6,                 Key_F7,                   Key_F8,                   Key_F9,          Key_F10,          Key_F11,
   Consumer_PlaySlashPause,    Consumer_ScanNextTrack, Key_LeftCurlyBracket,     Key_RightCurlyBracket,    Key_LeftBracket, Key_RightBracket, Key_F12,
                               Key_LeftArrow,          Key_DownArrow,            Key_UpArrow,              Key_RightArrow,  M(MACRO_FCDOWN),    M(MACRO_FCUP),
   Key_PcApplication,          Consumer_Mute,          Consumer_VolumeDecrement, Consumer_VolumeIncrement, ___,             Key_Backslash,    Key_Pipe,
   ___, ___, Key_Enter, ___,
   ___)

};


// A sample color override
// Note: FunctionalColors allows you to use CSS color names (in lowercase)
// You can also control the brightness from 0-255 by using a dim() function on the color.
FC_START_COLOR_LIST(customColors)
 // Set the color of keys with brightness macros
 // Use any number of FCGROUPKEYs above a FC_KEYCOLOR to set several keys to the same color
 FC_GROUPKEY(M(MACRO_FCUP))
 FC_KEYCOLOR(M(MACRO_FCDOWN), dim(cyan, 240))
 
 //FC_NOCOLOR() makes a key not change color, as if "transparent".
 // In this example The key with uparrow won't change color, when uprrow appears on the active layer.
 FC_NOCOLOR(Key_UpArrow)
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
// just subclass one you like and change only the elements you want to modify
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


// This example shows FunctionalColors brightness controls used with macros
const macro_t *macroAction(uint8_t macroIndex, uint8_t keyState) {
  switch (macroIndex) {

  // Here are macros that control the brightness of the active FunctionalColor instance.
  // These names must be in the macros enum near the beginning of this file.
  // Assign M(MACRO_FCUP) and M(MACRO_FCDOWN) to keys you'd like to use for this purpose.
  case MACRO_FCUP:
    kaleidoscope::LEDFunctionalColor::FCPlugin::brightnessUp(keyState);
    break;
   
  case MACRO_FCDOWN:
    kaleidoscope::LEDFunctionalColor::FCPlugin::brightnessDown(keyState);
    break;
  }
  return MACRO_NONE;
}

//This setup() function is where you set up any plugins.
void setup() {
  // First, call Kaleidoscope's internal setup function
  Kaleidoscope.setup();

  // Next, tell Kaleidoscope which plugins you want to use.
  Kaleidoscope.use(
    // All FunctionalColor instances go here in the order you want them in
    &funColor1,&funColor2,&funColor3,&funColor4,&funColor5,&funColor6,

    // Useful Default Plugins
    &LEDControl,&Macros,&MouseKeys    
  );


  // Use the FC_SET_THEME() to apply colorMaps here.
  // If you aren't using namespace kaleidoscope::LEDFunctionalColor;
  // prefix built-in themes with that namespace
  // Here are all the defaults available:

  // The default is already used without specifying it anyways, but it's here for completeness
  FC_SET_THEME(funColor1, kaleidoscope::LEDFunctionalColor::colorMapDefault);
  FC_SET_THEME(funColor2, kaleidoscope::LEDFunctionalColor::colorMapMono);
  // The themes are: colorMap, colorMapDefault, colorMapFruit, colorMapMono, colorMapDuo,
  // colorMapPrincess, colorMapSea, colorMapFlower, colorMapKids, colorMapRedWhiteBlue.

  // This applies our custom themes to funColor5 and funColor6
  FC_SET_THEME(funColor5, myTheme);
  FC_SET_THEME(funColor6, colorMapGreen);

} // end setup()


void loop() {
  Kaleidoscope.loop();
}