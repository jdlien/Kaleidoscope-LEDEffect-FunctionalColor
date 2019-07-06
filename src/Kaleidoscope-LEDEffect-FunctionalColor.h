#pragma once

#include "Kaleidoscope-LEDControl.h"
#include "Kaleidoscope-MouseKeys.h"

#include "colors.h"
#include "keygroups.h"

namespace kaleidoscope {
   
namespace plugin {

// The base colormap - no colors are set, so everything falls back to the default color.
// You can subclass this and change defaultColor to make a new colorMap that is all one color.
struct colorMap {
  static constexpr cRGB defaultColor = dim(white, 120);
  static constexpr cRGB shift        = nocolor;
  static constexpr cRGB control      = nocolor;
  //Command keys (macOS) or Windows Logo keys
  static constexpr cRGB gui          = nocolor;//dim(pink, 190);
  static constexpr cRGB alt          = nocolor;
  // Includes all the above modifiers
  static constexpr cRGB modifier     = nocolor;

  static constexpr cRGB alpha        = nocolor;
  static constexpr cRGB number       = nocolor;
  static constexpr cRGB punctuation  = nocolor;
  static constexpr cRGB function     = nocolor;
  static constexpr cRGB navigation   = nocolor;
  static constexpr cRGB system       = nocolor;
  static constexpr cRGB arrow        = nocolor;
  static constexpr cRGB keypad       = nocolor;
  static constexpr cRGB media        = nocolor;

  static constexpr cRGB mouseWheel   = nocolor;
  static constexpr cRGB mouseButton  = nocolor;
  static constexpr cRGB mouseWarp    = nocolor;
  static constexpr cRGB mouseMove    = nocolor;
  // Includes all above mouse functions
  static constexpr cRGB mouse        = nocolor;

  // Important single keys
  static constexpr cRGB space        = nocolor;
  static constexpr cRGB tab          = nocolor;
  static constexpr cRGB enter        = nocolor;
  static constexpr cRGB backspace    = nocolor;
  static constexpr cRGB escape       = nocolor;
  static constexpr cRGB del          = nocolor;
  static constexpr cRGB fn           = nocolor;
  //Numlock or any use of lockLayer
  static constexpr cRGB lock         = nocolor;
  static constexpr cRGB LEDEffectNext= nocolor;
  // Where's the any key?

};

struct colorMapDefault : public colorMap {
  static constexpr cRGB shift = dim(darkseagreen, 190);
  static constexpr cRGB control = dim(lightskyblue, 190);
  static constexpr cRGB gui = dim(pink, 190);
  static constexpr cRGB alt = dim(forestgreen, 190);
  static constexpr cRGB alpha = dim(warmwhite, 110);
  static constexpr cRGB number = dim(white, 190);
  static constexpr cRGB punctuation = dim(gold, 190);
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
  static constexpr cRGB lock = dim(purple, 190);
  static constexpr cRGB LEDEffectNext = dim(blue, 255);
};

struct colorMapFruit : public colorMap {
  static constexpr cRGB shift = dim(darkseagreen, 190);
  static constexpr cRGB control = dim(purple, 255);
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

struct colorMapPrincess: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  static constexpr cRGB baseColor1  = hotpink;
  static constexpr cRGB baseColor2  = magenta;
  static constexpr cRGB defaultColor= dim(baseColor1, 100);
  static constexpr cRGB shift       = nocolor;
  static constexpr cRGB control     = nocolor;
  static constexpr cRGB gui         = nocolor;
  static constexpr cRGB alt         = nocolor;
  static constexpr cRGB modifier    = dim(baseColor2, 130);
  static constexpr cRGB alpha       = dim(baseColor1, 130);
  static constexpr cRGB number      = dim(white, 150);
  static constexpr cRGB punctuation = dim(lightpink, 200);
  static constexpr cRGB function    = dim(crimson, 250);
  static constexpr cRGB navigation  = dim(gold, 255);
  static constexpr cRGB system      = dim(baseColor2, 50);
  static constexpr cRGB arrow       = dim(yellow, 250);
  static constexpr cRGB keypad      = dim(baseColor2, 230);
  static constexpr cRGB media       = dim(baseColor2, 190);
  static constexpr cRGB mouseWheel  = nocolor;
  static constexpr cRGB mouseButton = nocolor;
  static constexpr cRGB mouseWarp   = nocolor;
  static constexpr cRGB mouseMove   = nocolor;
  static constexpr cRGB mouse       = dim(baseColor2, 250);
  static constexpr cRGB space       = dim(white, 100);
  static constexpr cRGB tab         = dim(baseColor1, 100);
  static constexpr cRGB enter       = dim(white, 255);
  static constexpr cRGB backspace   = dim(yellow, 100);
  static constexpr cRGB escape      = dim(white, 100);
  static constexpr cRGB del         = dim(red, 255);
  static constexpr cRGB fn          = dim(white, 255);
  static constexpr cRGB lock        = dim(baseColor1, 255);
  static constexpr cRGB LEDEffectNext=dim(deeppink, 255);
};

struct colorMapSea: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  static constexpr cRGB baseColor1  = lightseagreen;
  static constexpr cRGB baseColor2  = aqua;
  static constexpr cRGB defaultColor= dim(baseColor1, 100);
  static constexpr cRGB shift       = nocolor;
  static constexpr cRGB control     = skyblue;
  static constexpr cRGB gui         = cadetblue;
  static constexpr cRGB alt         = turquoise;
  static constexpr cRGB modifier    = dim(baseColor2, 130);
  static constexpr cRGB alpha       = dim(baseColor1, 130);
  static constexpr cRGB number      = dim(lightcyan, 190);
  static constexpr cRGB punctuation = dim(aquamarine, 200);
  static constexpr cRGB function    = dim(white, 250);
  static constexpr cRGB navigation  = dim(gold, 255);
  static constexpr cRGB system      = dim(orange, 100);
  static constexpr cRGB arrow       = dim(yellow, 250);
  static constexpr cRGB keypad      = dim(baseColor2, 230);
  static constexpr cRGB media       = dim(dodgerblue, 190);
  static constexpr cRGB mouseWheel  = nocolor;
  static constexpr cRGB mouseButton = dim(lightcyan, 250);
  static constexpr cRGB mouseWarp   = nocolor;
  static constexpr cRGB mouseMove   = nocolor;
  static constexpr cRGB mouse       = dim(baseColor2, 250);
  static constexpr cRGB space       = dim(white, 100);
  static constexpr cRGB tab         = dim(baseColor1, 100);
  static constexpr cRGB enter       = dim(white, 255);
  static constexpr cRGB backspace   = dim(yellow, 100);
  static constexpr cRGB escape      = dim(orange, 190);
  static constexpr cRGB del         = dim(red, 255);
  static constexpr cRGB fn          = dim(white, 255);
  static constexpr cRGB lock        = dim(baseColor1, 255);
  static constexpr cRGB LEDEffectNext=dim(blue, 255);
};

struct colorMapFlower: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  static constexpr cRGB baseColor1  = violet;
  static constexpr cRGB baseColor2  = springgreen;
  static constexpr cRGB defaultColor= dim(baseColor1, 100);
  static constexpr cRGB shift       = lime;
  static constexpr cRGB control     = mediumspringgreen;
  static constexpr cRGB gui         = yellowgreen;
  static constexpr cRGB alt         = yellowgreen;
  static constexpr cRGB modifier    = dim(baseColor2, 130);
  static constexpr cRGB alpha       = dim(baseColor1, 130);
  static constexpr cRGB number      = dim(thistle, 200);
  static constexpr cRGB punctuation = dim(plum, 210);
  static constexpr cRGB function    = dim(white, 250);
  static constexpr cRGB navigation  = dim(palegoldenrod, 255);
  static constexpr cRGB system      = dim(orange, 100);
  static constexpr cRGB arrow       = dim(lightgoldenrodyellow, 250);
  static constexpr cRGB keypad      = dim(baseColor2, 230);
  static constexpr cRGB media       = dim(darkorchid, 200);
  static constexpr cRGB mouseWheel  = nocolor;
  static constexpr cRGB mouseButton = dim(lightcyan, 250);
  static constexpr cRGB mouseWarp   = nocolor;
  static constexpr cRGB mouseMove   = nocolor;
  static constexpr cRGB mouse       = dim(baseColor2, 250);
  static constexpr cRGB space       = dim(white, 100);
  static constexpr cRGB tab         = dim(baseColor1, 100);
  static constexpr cRGB enter       = dim(white, 255);
  static constexpr cRGB backspace   = dim(yellowgreen, 150);
  static constexpr cRGB escape      = dim(palegoldenrod, 190);
  static constexpr cRGB del         = dim(red, 255);
  static constexpr cRGB fn          = dim(white, 255);
  static constexpr cRGB lock        = dim(baseColor1, 255);
  static constexpr cRGB LEDEffectNext=dim(white, 255);
};

struct colorMapKids: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  static constexpr cRGB defaultColor= dim(white, 160);
  static constexpr cRGB shift       = lime;
  static constexpr cRGB control     = dodgerblue;
  static constexpr cRGB gui         = yellow;
  static constexpr cRGB alt         = yellowgreen;
  static constexpr cRGB alpha       = dim(white, 130);
  static constexpr cRGB number      = dim(yellow, 200);
  static constexpr cRGB punctuation = dim(dodgerblue, 210);
  static constexpr cRGB function    = dim(red, 250);
  static constexpr cRGB navigation  = dim(orange, 255);
  static constexpr cRGB system      = dim(orange, 100);
  static constexpr cRGB arrow       = dim(gold, 250);
  static constexpr cRGB keypad      = dim(orange, 230);
  static constexpr cRGB media       = dim(lime, 200);
  static constexpr cRGB mouseWheel  = nocolor;
  static constexpr cRGB mouseButton = dim(lightcyan, 250);
  static constexpr cRGB mouseWarp   = nocolor;
  static constexpr cRGB mouseMove   = nocolor;
  static constexpr cRGB mouse       = dim(cyan, 250);
  static constexpr cRGB space       = dim(white, 100);
  static constexpr cRGB tab         = dim(white, 100);
  static constexpr cRGB enter       = dim(white, 255);
  static constexpr cRGB backspace   = dim(orangered, 150);
  static constexpr cRGB escape      = dim(red, 190);
  static constexpr cRGB del         = dim(red, 255);
  static constexpr cRGB fn          = dim(white, 255);
  static constexpr cRGB lock        = dim(green, 255);
  static constexpr cRGB LEDEffectNext=dim(blue, 255);
};

struct colorMapRedWhiteBlue: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  static constexpr cRGB baseColor1  = blue;
  static constexpr cRGB baseColor2  = white;
  static constexpr cRGB defaultColor= dim(baseColor1, 240);
  static constexpr cRGB shift       = nocolor;
  static constexpr cRGB control     = nocolor;
  static constexpr cRGB gui         = nocolor;
  static constexpr cRGB alt         = nocolor;
  static constexpr cRGB modifier    = dim(red, 170);
  static constexpr cRGB alpha       = dim(baseColor2, 150);
  static constexpr cRGB number      = dim(red, 190);
  static constexpr cRGB punctuation = dim(blue, 200);
  static constexpr cRGB function    = dim(white, 250);
  static constexpr cRGB navigation  = dim(white, 255);
  static constexpr cRGB system      = dim(orangered, 100);
  static constexpr cRGB arrow       = dim(white, 240);
  static constexpr cRGB keypad      = dim(baseColor2, 230);
  static constexpr cRGB media       = dim(dodgerblue, 200);
  static constexpr cRGB mouseWheel  = nocolor;
  static constexpr cRGB mouseButton = dim(lightcyan, 250);
  static constexpr cRGB mouseWarp   = nocolor;
  static constexpr cRGB mouseMove   = nocolor;
  static constexpr cRGB mouse       = dim(dodgerblue, 190);
  static constexpr cRGB space       = dim(white, 100);
  static constexpr cRGB tab         = dim(baseColor1, 100);
  static constexpr cRGB enter       = dim(white, 255);
  static constexpr cRGB backspace   = dim(red, 150);
  static constexpr cRGB escape      = dim(baseColor1, 190);
  static constexpr cRGB del         = dim(red, 255);
  static constexpr cRGB fn          = dim(white, 200);
  static constexpr cRGB lock        = dim(baseColor1, 255);
  static constexpr cRGB LEDEffectNext=dim(white, 255);
};



// List of themes (without colorMap).
enum { Base, Default, Fruit, Mono, Duo, Princess, Sea, Flower, Kids, RedWhiteBlue };



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


  if (isAlpha(k)) if (!isColorMatch(ColorMap::alpha, nocolor)) return ColorMap::alpha;
  if (isNumber(k)) if (!isColorMatch(ColorMap::number, nocolor)) return ColorMap::number;
  if (isPunctuation(k)) if (!isColorMatch(ColorMap::punctuation, nocolor)) return ColorMap::punctuation; 
  if (isFunction(k)) if (!isColorMatch(ColorMap::function, nocolor)) return ColorMap::function; 
  if (isNavigation(k)) if (!isColorMatch(ColorMap::navigation, nocolor)) return ColorMap::navigation; 
  if (isSystem(k)) if (!isColorMatch(ColorMap::system, nocolor)) return ColorMap::system;
  if (isArrow(k)) if (!isColorMatch(ColorMap::arrow, nocolor)) return ColorMap::arrow; 
  if (isKeypad(k)) if (!isColorMatch(ColorMap::keypad, nocolor)) return ColorMap::keypad; 
  if (isMedia(k)) if (!isColorMatch(ColorMap::media, nocolor)) return ColorMap::media; 
  if (isModifier(k)) if (!isColorMatch(ColorMap::modifier, nocolor)) return ColorMap::modifier; 
  if (isMouse(k)) if (!isColorMatch(ColorMap::mouse, nocolor)) return ColorMap::mouse; 

  // Individual keys that are important and unique enough to justify having their own members here.
  if ((Key_Space).flags == k.flags && (Key_Space).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::space, nocolor)) return ColorMap::space;
  if ((Key_Enter).flags == k.flags && (Key_Enter).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::enter, nocolor)) return ColorMap::enter;
  if ((Key_Tab).flags == k.flags && (Key_Tab).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::tab, nocolor)) return ColorMap::tab;
  if ((Key_Backspace).flags == k.flags && (Key_Backspace).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::backspace, nocolor)) return ColorMap::backspace;

  if ((Key_LEDEffectNext).flags == k.flags && (Key_LEDEffectNext).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::LEDEffectNext, nocolor)) return ColorMap::LEDEffectNext;

  // For these ones, I need to know what their layers are... they might change from the default.
  // This should work for layers 1, 2 or 3
  if ( (ShiftToLayer(2)).flags == k.flags && ( (ShiftToLayer(1)).keyCode == k.keyCode ||
    (ShiftToLayer(2)).keyCode == k.keyCode || (ShiftToLayer(3)).keyCode == k.keyCode) )
    if (!isColorMatch(ColorMap::fn, nocolor)) return ColorMap::fn;
  
  // Should work for all LockLayer keys
  if ( (LockLayer(1)).flags == k.flags && ( (LockLayer(1)).keyCode == k.keyCode || (LockLayer(1)).keyCode == k.keyCode) )
    if (!isColorMatch(ColorMap::lock, nocolor)) return ColorMap::lock;


  return ColorMap::defaultColor;

}


class FunctionalColor : public LEDMode {
 public:
     
  typedef cRGB (*RGBLookup)(const Key &, bool &skip);
  //skip leaves the key "transparent" if set and doesn't change the color for this function.
  //none continues to the next part of the color return function.
  typedef cRGB (*RGBLookupException)(const Key &, bool &skip, bool &none);

  // Allow the user/programmer to create or specify their own color lookup function
  void setColorLookup(RGBLookup rgbLookup) {
      mainColorLookup = rgbLookup;
  }
  
  inline FunctionalColor(byte brightness, RGBLookupException rgbLookupExc)
   : exceptionsLookup(rgbLookupExc)
  {
    themeDefault();
    brightnessSetting = brightness;
  }

  inline FunctionalColor(RGBLookupException rgbLookupExc, byte brightness = 210)
   : exceptionsLookup(rgbLookupExc)
  {
    themeDefault();
    brightnessSetting = brightness;
  }

  inline FunctionalColor(byte brightness, RGBLookupException rgbLookupExc, int theme)
   : exceptionsLookup(rgbLookupExc)     
  {
    themeSelect(theme);
    brightnessSetting = brightness;
  }


  inline FunctionalColor(RGBLookupException rgbLookupExc, byte brightness, int theme)
   : exceptionsLookup(rgbLookupExc)
  {
    themeSelect(theme);
    brightnessSetting = brightness;
  }


  // Another constructor that uses the default theme  and allows an optional brightness.
  inline FunctionalColor(byte brightness = 210){
  // Switch block to specify themeid
    themeDefault();
    brightnessSetting = brightness;
  }

  // Another constructor that uses the default theme  and allows an optional brightness.
  inline FunctionalColor(byte brightness, int theme){
  // Switch block to specify themeid
    themeSelect(theme);
    brightnessSetting = brightness;
  }

  // Constructors that set no theme at all - can use this to save memory
  // if you're assigning your own theme later or only using exceptions
  inline FunctionalColor(byte brightness, bool notheme){
  // Switch block to specify themeid
    brightnessSetting = brightness;
  }

  inline FunctionalColor(byte brightness, RGBLookupException rgbLookupExc, bool notheme)
   : exceptionsLookup(rgbLookupExc)     
  {
    brightnessSetting = brightness;
  }

  inline FunctionalColor(RGBLookupException rgbLookupExc, byte brightness, bool notheme)
   : exceptionsLookup(rgbLookupExc)
  {
    brightnessSetting = brightness;
  }

  // Yet more constructors that can be used to set a default color.



  template<typename IntType> void themeSelect(IntType themeID) {
      // Switch block to specify theme
    switch(themeID) {
        case Base:
          this->setColorLookup(&groupColorLookup<colorMap>);
          break;

        case Mono:
          this->setColorLookup(&groupColorLookup<colorMapMono>);
          break;

        case Duo:
          this->setColorLookup(&groupColorLookup<colorMapDuo>);
          break;

        case Fruit:
          this->setColorLookup(&groupColorLookup<colorMapFruit>);
          break;

        case Princess:
          this->setColorLookup(&groupColorLookup<colorMapPrincess>);
          break;

        case Sea:
          this->setColorLookup(&groupColorLookup<colorMapSea>);
          break;        

        case Flower:
          this->setColorLookup(&groupColorLookup<colorMapFlower>);
          break;  

        case Kids:
          this->setColorLookup(&groupColorLookup<colorMapKids>);
          break;  

        case RedWhiteBlue:
          this->setColorLookup(&groupColorLookup<colorMapRedWhiteBlue>);
          break;  

        case Default:
        default:
          this->setColorLookup(&groupColorLookup<colorMapDefault>);
    }
  }

  void refresh(void);

  // set brightness between 0-255
  void brightness(byte b);

  //return current brightness
  byte brightness();

  void themeDefault();

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
  // This is used when there's no mainColorLookup. Can I avoid using the memory if I don't need it, though?
  // CRGB defaultColor = black;

  // Pointer to the currently in-use instance of FC
  static FunctionalColor *lastFC;
  void onActivate(void) final;
  void update(void) final;
  void refreshAt(byte r, byte c) final;


};//end class FunctionalColor






// These macros allow a user to create an exceptions function that they can pass to FunctionalColor when initializing it

#define FC_COLOR_LIST(ID) cRGBLookup_##ID

#define FC_START_COLOR_LIST(NAME) \
   cRGB FC_COLOR_LIST(NAME)(const Key &k, bool &skip, bool &none) { \
      switch(k.raw) {

#define FC_NOCOLOR(KEY) \
    case (KEY).flags << 8 | (KEY).keyCode: \
       skip = true; \
       return plugin::nocolor; // could return any color as a dummy

#define FC_END_COLOR_LIST \
   } \
   none = true; \
   return plugin::nocolor; \
}

// You can use this in lieu of FC_END_COLOR_LIST to return a default color if you're not using any colorMap
#define FC_END_COLOR_LIST_DEFAULT(DEFAULTCOLOR) \
   } \
   none = true; \
   return DEFAULTCOLOR; \
}


#define FC_KEYCOLOR(KEY, COLOR) \
    case (KEY).flags << 8 | (KEY).keyCode: \
       { static cRGB color = COLOR; return color; }

#define FC_GROUPKEY(KEY) \
   case (KEY).flags << 8 | (KEY).keyCode:


#define FC_SET_THEME(PLUGIN, COLOR_MAP) \
   PLUGIN.setColorLookup(&plugin::groupColorLookup<COLOR_MAP>);

}//namespace plugin

}//namespace kaleidoscope
