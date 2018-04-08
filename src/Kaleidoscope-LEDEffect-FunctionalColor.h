#pragma once

#include "Kaleidoscope-LEDControl.h"
#include "Kaleidoscope-MouseKeys.h"

#include "colors.h"
#include "keygroups.h"

using namespace kaleidoscope::LEDFunctionalColor;

namespace kaleidoscope {
   
namespace LEDFunctionalColor {

class FCPlugin : public LEDMode {
 public:
     
  typedef cRGB (*RGBLookup)(const Key &, bool &skip);
  //skip leaves the key "transparent" if set and doesn't change the color for this function.
  //none continues to the next part of the color return function.
  typedef cRGB (*RGBLookupException)(const Key &, bool &skip, bool &none);

  // Allow the user/programmer to create or specify their own color lookup function
  void setColorLookup(RGBLookup rgbLookup) {
      mainColorLookup = rgbLookup;
  }
  
  FCPlugin(RGBLookupException rgbLookupExc, byte brightness = 210, int themeID=99);
  FCPlugin(int themeID, byte brightness, RGBLookupException rgbLookupExc);
  // This is supposed to allow you to specify your own theme via an id.
  FCPlugin(int themeID = 99, byte brightness = 210);

  void refresh(void);

  // set brightness between 0-255
  void brightness(byte b);

  //return current brightness
  byte brightness();

  void themeSelect(int themeID);

  void thisBrightnessUp(uint8_t keyState);
  void thisBrightnessDown(uint8_t keyState);

  static void brightnessUp(uint8_t keyState);
  static void brightnessDown(uint8_t keyState);



  private:
  uint32_t last_layerState = 0;

  RGBLookup mainColorLookup = nullptr;

  static cRGB keyExceptionsLookup(const Key &k, bool &skip, bool &none) {
    //if (k.keyCode == (Key_A).keyCode && k.flags == (Key_A).flags) return cyan;
    none = true;
    //this shouldn't do anything, but I have to return something... some default, I guess.
    return nocolor;
  }

  RGBLookupException exceptionsLookup = keyExceptionsLookup;


  protected:
  // Default to 200 to hopefully avoid overloading people's USB ports.
  byte brightnessSetting = 200;
  // Pointer to the currently in-use instance of FC
  static FCPlugin *lastFC;
  void onActivate(void) final;
  void update(void) final;
  void setKeyLed(uint8_t r, uint8_t c);


};//end class FCPlugin


// We use groupColorLookup to retrieve the colors for the color groups
template<typename ColorMap> static cRGB groupColorLookup(const Key &k, bool &skip) {
  // If keys are a part of a larger group, they have precedence,
  // unless they are set to skip
  
  if (isControl(k)) if (!isColorMatch(ColorMap::control, nocolor)) return ColorMap::control;
  if (isGui(k)) if (!isColorMatch(ColorMap::gui, nocolor)) return ColorMap::gui;
  if (isShift(k)) if (!isColorMatch(ColorMap::shift, nocolor)) return ColorMap::shift;
  if (isAlt(k)) if (!isColorMatch(ColorMap::alt, nocolor)) return ColorMap::alt;

  if (isMouseWheel(k)) if (!isColorMatch(ColorMap::mouseWheel, nocolor)) return ColorMap::mouseWheel;
  if (isMouseButton(k)) if (!isColorMatch(ColorMap::mouseButton, nocolor)) return ColorMap::mouseButton;
  if (isMouseWarp(k)) if (!isColorMatch(ColorMap::mouseWarp, nocolor)) return ColorMap::mouseWarp;
  if (isMouseMove(k)) if (!isColorMatch(ColorMap::mouseMove, nocolor)) return ColorMap::mouseMove;
  if ((Key_Escape).flags == k.flags && (Key_Escape).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::escape, nocolor)) return ColorMap::escape;
  if ((Key_Delete).flags == k.flags && (Key_Delete).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::del, nocolor)) return ColorMap::del;


  if (isAlpha(k)) return ColorMap::alpha;
  if (isNumber(k)) return ColorMap::number;
  if (isPunctuation(k)) return ColorMap::punctuation; 
  if (isFunction(k)) return ColorMap::function; 
  if (isNavigation(k)) return ColorMap::navigation; 
  if (isSystem(k)) return ColorMap::system;
  if (isArrow(k)) return ColorMap::arrow; 
  if (isKeypad(k)) return ColorMap::keypad; 
  if (isMedia(k)) return ColorMap::media; 
  if (isModifier(k)) return ColorMap::modifier; 
  if (isMouse(k)) return ColorMap::mouse; 

  // Individual keys that are important and unique enough to justify having their own members here.
  if ((Key_Space).flags == k.flags && (Key_Space).keyCode == k.keyCode) return ColorMap::space;
  if ((Key_Enter).flags == k.flags && (Key_Enter).keyCode == k.keyCode) return ColorMap::enter;
  if ((Key_Tab).flags == k.flags && (Key_Tab).keyCode == k.keyCode) return ColorMap::tab;
  if ((Key_Backspace).flags == k.flags && (Key_Backspace).keyCode == k.keyCode) return ColorMap::backspace;

  if ((Key_LEDEffectNext).flags == k.flags && (Key_LEDEffectNext).keyCode == k.keyCode) return ColorMap::LEDEffectNext;

  // For these ones, I need to know what their layers are... they might change from the default. This should work for layers 1, 2 or 3
  if ( (ShiftToLayer(2)).flags == k.flags && ( (ShiftToLayer(1)).keyCode == k.keyCode || (ShiftToLayer(2)).keyCode == k.keyCode || (ShiftToLayer(3)).keyCode == k.keyCode) ) return ColorMap::fn;
  
  // Should work for all LockLayer keys
  if ( (LockLayer(1)).flags == k.flags && ( (LockLayer(1)).keyCode == k.keyCode || (LockLayer(1)).keyCode == k.keyCode) ) return ColorMap::lock;


  return ColorMap::defaultColor;

}


// The first of many potential included colorMaps
struct colorMap {
  static constexpr cRGB defaultColor = black;
  static constexpr cRGB shift = nocolor;
  static constexpr cRGB control = nocolor;
  //Command keys (macOS) or Windows Logo keys
  static constexpr cRGB gui = nocolor;//dim(pink, 190);
  static constexpr cRGB alt = nocolor;
  // Includes all the above modifiers
  static constexpr cRGB modifier = purple;

  static constexpr cRGB alpha = dim(warmwhite, 110);
  static constexpr cRGB number = dim(white, 190);
  static constexpr cRGB punctuation = dim(orange, 190);
  static constexpr cRGB function = dim(red, 190);
  static constexpr cRGB navigation = dim(yellow, 190);
  static constexpr cRGB system = dim(orangered, 255);
  static constexpr cRGB arrow = dim(white, 200);
  static constexpr cRGB keypad = dim(green, 190);
  static constexpr cRGB media = dim(magenta, 200);

  static constexpr cRGB mouseWheel = nocolor;
  static constexpr cRGB mouseButton = nocolor;
  static constexpr cRGB mouseWarp = nocolor;
  static constexpr cRGB mouseMove = nocolor;
  // Includes all above mouse functions
  static constexpr cRGB mouse = dim(cyan, 190);

  // Important single keys
  static constexpr cRGB space = dim(white, 140);
  static constexpr cRGB tab = dim(white, 140);
  static constexpr cRGB enter = dim(white, 250);
  static constexpr cRGB backspace = dim(red, 140);
  static constexpr cRGB escape = dim(red, 140);
  static constexpr cRGB del = dim(red, 255);
  static constexpr cRGB fn = dim(white, 250);
  //Numlock or any use of lockLayer
  static constexpr cRGB lock = dim(purple, 190);
  static constexpr cRGB LEDEffectNext = dim(blue, 255);
  // Where's the any key?

};

struct colorMapDefault : public colorMap {
  static constexpr cRGB shift = dim(darkseagreen, 190);
  static constexpr cRGB control = dim(lightskyblue, 190);
  //Command keys (macOS) or Windows Logo keys
  static constexpr cRGB gui = dim(pink, 190);
  static constexpr cRGB alt = dim(forestgreen, 190);

  static constexpr cRGB alpha = dim(warmwhite, 110);
  static constexpr cRGB number = dim(white, 190);
  static constexpr cRGB punctuation = dim(orange, 190);
  static constexpr cRGB function = dim(red, 190);
  static constexpr cRGB navigation = dim(yellow, 190);
  static constexpr cRGB system = dim(orangered, 255);
  static constexpr cRGB arrow = dim(white, 200);
  static constexpr cRGB keypad = dim(green, 190);
  static constexpr cRGB mouseWheel = dim(cyan, 190);
  static constexpr cRGB mouseButton = dim(cyan, 240);
  static constexpr cRGB mouseWarp = dim(turquoise, 110);
  static constexpr cRGB mouseMove = dim(turquoise, 250);

  static constexpr cRGB media = dim(magenta, 200);

  static constexpr cRGB space = dim(white, 140);
  static constexpr cRGB tab = dim(white, 140);
  static constexpr cRGB enter = dim(white, 250);

  static constexpr cRGB backspace = dim(red, 140);
  static constexpr cRGB escape      = dim(red, 130);
  static constexpr cRGB del = dim(red, 255);
  static constexpr cRGB fn = dim(white, 250);
  //Numlock or any use of lockLayer
  static constexpr cRGB lock = dim(purple, 190);
  static constexpr cRGB LEDEffectNext = dim(blue, 255);
};

struct colorMapColorful : public colorMap {
  static constexpr cRGB shift = dim(darkseagreen, 190);
  static constexpr cRGB control = dim(purple, 255);
  //Command keys (macOS) or Windows Logo keys
  static constexpr cRGB gui = dim(pink, 190);
  static constexpr cRGB alt = dim(forestgreen, 190);

  static constexpr cRGB alpha = dim(orange, 190);
  static constexpr cRGB number = dim(red, 190);
  static constexpr cRGB punctuation = dim(yellow, 190);
  static constexpr cRGB function = dim(white, 190);
  static constexpr cRGB navigation = dim(yellow, 190);
  static constexpr cRGB system = dim(orangered, 255);
  static constexpr cRGB arrow = dim(white, 200);
  static constexpr cRGB keypad = dim(green, 190);
  static constexpr cRGB mouseWheel = dim(cyan, 190);
  static constexpr cRGB mouseButton = dim(cyan, 240);
  static constexpr cRGB mouseWarp = dim(turquoise, 110);
  static constexpr cRGB mouseMove = dim(turquoise, 250);

  static constexpr cRGB media = dim(magenta, 200);

  static constexpr cRGB space = dim(white, 140);
  static constexpr cRGB tab = dim(white, 140);
  static constexpr cRGB enter = dim(white, 250);

  static constexpr cRGB backspace = dim(red, 140);
  static constexpr cRGB escape      = dim(red, 130);
  static constexpr cRGB del = dim(red, 255);
  static constexpr cRGB fn = dim(white, 250);
  //Numlock or any use of lockLayer
  static constexpr cRGB lock = dim(purple, 190);
  static constexpr cRGB LEDEffectNext = dim(blue, 255);
};


// A subclass that is monochromatic... set base color and then adjust the brightness.
struct colorMapMono: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  static constexpr cRGB baseColor   = white;
  static constexpr cRGB defaultColor= dim(baseColor, 100);
  static constexpr cRGB shift       = nocolor;
  static constexpr cRGB control     = nocolor;
  static constexpr cRGB gui         = nocolor;
  static constexpr cRGB alt         = nocolor;
  static constexpr cRGB modifier    = dim(baseColor, 130);
  static constexpr cRGB alpha       = dim(baseColor, 80);
  static constexpr cRGB number      = dim(baseColor, 100);
  static constexpr cRGB punctuation = dim(baseColor, 120);
  static constexpr cRGB function    = dim(baseColor, 150);
  static constexpr cRGB navigation  = dim(baseColor, 180);
  static constexpr cRGB system      = dim(baseColor, 50);
  static constexpr cRGB arrow       = dim(baseColor, 250);
  static constexpr cRGB keypad      = dim(baseColor, 230);
  static constexpr cRGB media       = dim(baseColor, 250);
  static constexpr cRGB mouseWheel  = nocolor;
  static constexpr cRGB mouseButton = nocolor;
  static constexpr cRGB mouseWarp   = nocolor;
  static constexpr cRGB mouseMove   = nocolor;
  static constexpr cRGB mouse       = dim(baseColor, 220);
  static constexpr cRGB space       = dim(baseColor, 100);
  static constexpr cRGB tab         = dim(baseColor, 100);
  static constexpr cRGB enter       = dim(baseColor, 255);
  static constexpr cRGB backspace   = dim(baseColor, 100);
  static constexpr cRGB escape      = dim(baseColor, 100);
  static constexpr cRGB del         = dim(baseColor, 255);
  static constexpr cRGB fn          = dim(baseColor, 255);
  static constexpr cRGB lock        = dim(baseColor, 255);
  static constexpr cRGB LEDEffectNext=dim(baseColor, 255);
};

struct colorMapDuo: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  static constexpr cRGB baseColor1  = white;
  static constexpr cRGB baseColor2  = red;
  static constexpr cRGB defaultColor= dim(baseColor1, 100);
  static constexpr cRGB shift       = nocolor;
  static constexpr cRGB control     = nocolor;
  static constexpr cRGB gui         = nocolor;
  static constexpr cRGB alt         = nocolor;
  static constexpr cRGB modifier    = dim(baseColor2, 130);
  static constexpr cRGB alpha       = dim(baseColor1, 80);
  static constexpr cRGB number      = dim(baseColor1, 100);
  static constexpr cRGB punctuation = dim(baseColor1, 120);
  static constexpr cRGB function    = dim(baseColor1, 150);
  static constexpr cRGB navigation  = dim(baseColor2, 130);
  static constexpr cRGB system      = dim(baseColor2, 50);
  static constexpr cRGB arrow       = dim(baseColor2, 250);
  static constexpr cRGB keypad      = dim(baseColor2, 230);
  static constexpr cRGB media       = dim(baseColor2, 190);
  static constexpr cRGB mouseWheel  = nocolor;
  static constexpr cRGB mouseButton = nocolor;
  static constexpr cRGB mouseWarp   = nocolor;
  static constexpr cRGB mouseMove   = nocolor;
  static constexpr cRGB mouse       = dim(baseColor2, 250);
  static constexpr cRGB space       = dim(baseColor1, 100);
  static constexpr cRGB tab         = dim(baseColor1, 100);
  static constexpr cRGB enter       = dim(baseColor1, 255);
  static constexpr cRGB backspace   = dim(baseColor2, 100);
  static constexpr cRGB escape      = dim(baseColor2, 100);
  static constexpr cRGB del         = dim(baseColor2, 255);
  static constexpr cRGB fn          = dim(baseColor1, 255);
  static constexpr cRGB lock        = dim(baseColor1, 255);
  static constexpr cRGB LEDEffectNext=dim(baseColor2, 255);
};


// These macros allow a user to create an exceptions function that they can pass to FCPlugin when initializing it

#define FC_COLOR_LIST(ID) cRGBLookup_##ID

#define FC_START_COLOR_LIST(NAME) \
   cRGB FC_COLOR_LIST(NAME)(const Key &k, bool &skip, bool &none) { \
      switch(k.raw) {

#define FC_NOCOLOR(KEY) \
    case (KEY).flags << 8 | (KEY).keyCode: \
       skip = true; \
       return nocolor; // could return any color as a dummy

#define FC_END_COLOR_LIST \
   } \
   none = true; \
   return nocolor; \
}

#define FC_KEYCOLOR(KEY, COLOR) \
    case (KEY).flags << 8 | (KEY).keyCode: \
       { static cRGB color = COLOR; return color; }

#define FC_GROUPKEY(KEY) \
   case (KEY).flags << 8 | (KEY).keyCode:


}//namespace LEDFunctionalColor

}//namespace kaleidoscope
