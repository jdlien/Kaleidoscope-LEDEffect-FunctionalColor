#pragma once

#include "Kaleidoscope-LEDControl.h"
#include "Kaleidoscope-MouseKeys.h"

#include "colors.h"
#include "keygroups.h"

namespace kaleidoscope {
   
namespace plugin {
   
namespace FunctionalColorStuff {

#define FC_HAVE_COLOR_FUNCTIONS
   
#ifdef FC_HAVE_COLOR_FUNCTIONS
#define FC_COLOR_MAP_COLOR(NAME, ...) __attribute__((always_inline)) static constexpr cRGB NAME() { return __VA_ARGS__; }
#define FC_REF_MAP_COLOR(NAME) NAME()
#else
#define FC_COLOR_MAP_COLOR(NAME, ...) static constexpr cRGB NAME = __VA_ARGS__;
#define FC_REF_MAP_COLOR(NAME) NAME
#endif

// The base colormap - no colors are set, so everything falls back to the default color.
// You can subclass this and change defaultColor to make a new colorMap that is all one color.
struct colorMap {
  FC_COLOR_MAP_COLOR(defaultColor, dim(white, 120))
  FC_COLOR_MAP_COLOR(shift, nocolor)
  FC_COLOR_MAP_COLOR(control, nocolor)
  //Command keys (macOS) or Windows Logo keys
  FC_COLOR_MAP_COLOR(gui, nocolor)//dim(pink, 190);
  FC_COLOR_MAP_COLOR(alt, nocolor)
  // Includes all the above modifiers
  FC_COLOR_MAP_COLOR(modifier, nocolor)

  FC_COLOR_MAP_COLOR(alpha, nocolor)
  FC_COLOR_MAP_COLOR(number, nocolor)
  FC_COLOR_MAP_COLOR(punctuation, nocolor)
  FC_COLOR_MAP_COLOR(function, nocolor)
  FC_COLOR_MAP_COLOR(navigation, nocolor)
  FC_COLOR_MAP_COLOR(system, nocolor)
  FC_COLOR_MAP_COLOR(arrow, nocolor)
  FC_COLOR_MAP_COLOR(keypad, nocolor)
  FC_COLOR_MAP_COLOR(media, nocolor)

  FC_COLOR_MAP_COLOR(mouseWheel, nocolor)
  FC_COLOR_MAP_COLOR(mouseButton, nocolor)
  FC_COLOR_MAP_COLOR(mouseWarp, nocolor)
  FC_COLOR_MAP_COLOR(mouseMove, nocolor)
  // Includes all above mouse functions
  FC_COLOR_MAP_COLOR(mouse, nocolor)

  // Important single keys
  FC_COLOR_MAP_COLOR(space, nocolor)
  FC_COLOR_MAP_COLOR(tab, nocolor)
  FC_COLOR_MAP_COLOR(enter, nocolor)
  FC_COLOR_MAP_COLOR(backspace, nocolor)
  FC_COLOR_MAP_COLOR(escape, nocolor)
  FC_COLOR_MAP_COLOR(del, nocolor)
  FC_COLOR_MAP_COLOR(fn, nocolor)
  //Numlock or any use of lockLayer
  FC_COLOR_MAP_COLOR(lock, nocolor)
  FC_COLOR_MAP_COLOR(LEDEffectNext, nocolor)
  // Where's the any key?

};

struct colorMapDefault : public colorMap {
  FC_COLOR_MAP_COLOR(shift, dim(darkseagreen, 190))
  FC_COLOR_MAP_COLOR(control, dim(lightskyblue, 190))
  FC_COLOR_MAP_COLOR(gui, dim(pink, 190))
  FC_COLOR_MAP_COLOR(alt, dim(forestgreen, 190))
  FC_COLOR_MAP_COLOR(alpha, dim(warmwhite, 110))
  FC_COLOR_MAP_COLOR(number, dim(white, 190))
  FC_COLOR_MAP_COLOR(punctuation, dim(gold, 190))
  FC_COLOR_MAP_COLOR(function, dim(red, 190))
  FC_COLOR_MAP_COLOR(navigation, dim(yellow, 190))
  FC_COLOR_MAP_COLOR(system, dim(orangered, 255))
  FC_COLOR_MAP_COLOR(arrow, dim(white, 200))
  FC_COLOR_MAP_COLOR(keypad, dim(green, 190))
  FC_COLOR_MAP_COLOR(mouseWheel, dim(cyan, 190))
  FC_COLOR_MAP_COLOR(mouseButton, dim(cyan, 240))
  FC_COLOR_MAP_COLOR(mouseWarp, dim(turquoise, 110))
  FC_COLOR_MAP_COLOR(mouseMove, dim(turquoise, 250))
  FC_COLOR_MAP_COLOR(media, dim(magenta, 200))
  FC_COLOR_MAP_COLOR(space, dim(white, 140))
  FC_COLOR_MAP_COLOR(tab, dim(white, 140))
  FC_COLOR_MAP_COLOR(enter, dim(white, 250))
  FC_COLOR_MAP_COLOR(backspace, dim(red, 140))
  FC_COLOR_MAP_COLOR(escape, dim(red, 130))
  FC_COLOR_MAP_COLOR(del, dim(red, 255))
  FC_COLOR_MAP_COLOR(fn, dim(white, 250))
  FC_COLOR_MAP_COLOR(lock, dim(purple, 190))
  FC_COLOR_MAP_COLOR(LEDEffectNext, dim(blue, 255))
};

struct colorMapFruit : public colorMap {
  FC_COLOR_MAP_COLOR(shift, dim(darkseagreen, 190))
  FC_COLOR_MAP_COLOR(control, dim(purple, 255))
  FC_COLOR_MAP_COLOR(gui, dim(pink, 190))
  FC_COLOR_MAP_COLOR(alt, dim(forestgreen, 190))
  FC_COLOR_MAP_COLOR(alpha, dim(orange, 190))
  FC_COLOR_MAP_COLOR(number, dim(red, 190))
  FC_COLOR_MAP_COLOR(punctuation, dim(yellow, 190))
  FC_COLOR_MAP_COLOR(function, dim(white, 190))
  FC_COLOR_MAP_COLOR(navigation, dim(yellow, 190))
  FC_COLOR_MAP_COLOR(system, dim(orangered, 255))
  FC_COLOR_MAP_COLOR(arrow, dim(white, 200))
  FC_COLOR_MAP_COLOR(keypad, dim(green, 190))
  FC_COLOR_MAP_COLOR(mouseWheel, dim(cyan, 190))
  FC_COLOR_MAP_COLOR(mouseButton, dim(cyan, 240))
  FC_COLOR_MAP_COLOR(mouseWarp, dim(turquoise, 110))
  FC_COLOR_MAP_COLOR(mouseMove, dim(turquoise, 250))
  FC_COLOR_MAP_COLOR(media, dim(magenta, 200))
  FC_COLOR_MAP_COLOR(space, dim(white, 140))
  FC_COLOR_MAP_COLOR(tab, dim(white, 140))
  FC_COLOR_MAP_COLOR(enter, dim(white, 250))
  FC_COLOR_MAP_COLOR(backspace, dim(red, 140))
  FC_COLOR_MAP_COLOR(escape, dim(red, 130))
  FC_COLOR_MAP_COLOR(del, dim(red, 255))
  FC_COLOR_MAP_COLOR(fn, dim(white, 250))
  FC_COLOR_MAP_COLOR(lock, dim(purple, 190))
  FC_COLOR_MAP_COLOR(LEDEffectNext, dim(blue, 255))
};

// A subclass that is monochromatic... set base color and then adjust the brightness.
struct colorMapMono: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  FC_COLOR_MAP_COLOR(baseColor, white)
  FC_COLOR_MAP_COLOR(defaultColor, dim(FC_REF_MAP_COLOR(baseColor), 100))
  FC_COLOR_MAP_COLOR(shift, nocolor)
  FC_COLOR_MAP_COLOR(control, nocolor)
  FC_COLOR_MAP_COLOR(gui, nocolor)
  FC_COLOR_MAP_COLOR(alt, nocolor)
  FC_COLOR_MAP_COLOR(modifier, dim(FC_REF_MAP_COLOR(baseColor), 130))
  FC_COLOR_MAP_COLOR(alpha, dim(FC_REF_MAP_COLOR(baseColor), 80))
  FC_COLOR_MAP_COLOR(number, dim(FC_REF_MAP_COLOR(baseColor), 100))
  FC_COLOR_MAP_COLOR(punctuation, dim(FC_REF_MAP_COLOR(baseColor), 120))
  FC_COLOR_MAP_COLOR(function, dim(FC_REF_MAP_COLOR(baseColor), 150))
  FC_COLOR_MAP_COLOR(navigation, dim(FC_REF_MAP_COLOR(baseColor), 180))
  FC_COLOR_MAP_COLOR(system, dim(FC_REF_MAP_COLOR(baseColor), 50))
  FC_COLOR_MAP_COLOR(arrow, dim(FC_REF_MAP_COLOR(baseColor), 250))
  FC_COLOR_MAP_COLOR(keypad, dim(FC_REF_MAP_COLOR(baseColor), 230))
  FC_COLOR_MAP_COLOR(media, dim(FC_REF_MAP_COLOR(baseColor), 250))
  FC_COLOR_MAP_COLOR(mouseWheel, nocolor)
  FC_COLOR_MAP_COLOR(mouseButton, nocolor)
  FC_COLOR_MAP_COLOR(mouseWarp, nocolor)
  FC_COLOR_MAP_COLOR(mouseMove, nocolor)
  FC_COLOR_MAP_COLOR(mouse, dim(FC_REF_MAP_COLOR(baseColor), 220))
  FC_COLOR_MAP_COLOR(space, dim(FC_REF_MAP_COLOR(baseColor), 100))
  FC_COLOR_MAP_COLOR(tab, dim(FC_REF_MAP_COLOR(baseColor), 100))
  FC_COLOR_MAP_COLOR(enter, dim(FC_REF_MAP_COLOR(baseColor), 255))
  FC_COLOR_MAP_COLOR(backspace, dim(FC_REF_MAP_COLOR(baseColor), 100))
  FC_COLOR_MAP_COLOR(escape, dim(FC_REF_MAP_COLOR(baseColor), 100))
  FC_COLOR_MAP_COLOR(del, dim(FC_REF_MAP_COLOR(baseColor), 255))
  FC_COLOR_MAP_COLOR(fn, dim(FC_REF_MAP_COLOR(baseColor), 255))
  FC_COLOR_MAP_COLOR(lock, dim(FC_REF_MAP_COLOR(baseColor), 255))
  FC_COLOR_MAP_COLOR(LEDEffectNext, dim(FC_REF_MAP_COLOR(baseColor), 255))
};

struct colorMapDuo: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  FC_COLOR_MAP_COLOR(baseColor1, white)
  FC_COLOR_MAP_COLOR(baseColor2, red)
  FC_COLOR_MAP_COLOR(defaultColor, dim(FC_REF_MAP_COLOR(baseColor1), 100))
  FC_COLOR_MAP_COLOR(shift, nocolor)
  FC_COLOR_MAP_COLOR(control, nocolor)
  FC_COLOR_MAP_COLOR(gui, nocolor)
  FC_COLOR_MAP_COLOR(alt, nocolor)
  FC_COLOR_MAP_COLOR(modifier, dim(FC_REF_MAP_COLOR(baseColor2), 130))
  FC_COLOR_MAP_COLOR(alpha, dim(FC_REF_MAP_COLOR(baseColor1), 80))
  FC_COLOR_MAP_COLOR(number, dim(FC_REF_MAP_COLOR(baseColor1), 100))
  FC_COLOR_MAP_COLOR(punctuation, dim(FC_REF_MAP_COLOR(baseColor1), 120))
  FC_COLOR_MAP_COLOR(function, dim(FC_REF_MAP_COLOR(baseColor1), 150))
  FC_COLOR_MAP_COLOR(navigation, dim(FC_REF_MAP_COLOR(baseColor2), 130))
  FC_COLOR_MAP_COLOR(system, dim(FC_REF_MAP_COLOR(baseColor2), 50))
  FC_COLOR_MAP_COLOR(arrow, dim(FC_REF_MAP_COLOR(baseColor2), 250))
  FC_COLOR_MAP_COLOR(keypad, dim(FC_REF_MAP_COLOR(baseColor2), 230))
  FC_COLOR_MAP_COLOR(media, dim(FC_REF_MAP_COLOR(baseColor2), 190))
  FC_COLOR_MAP_COLOR(mouseWheel, nocolor)
  FC_COLOR_MAP_COLOR(mouseButton, nocolor)
  FC_COLOR_MAP_COLOR(mouseWarp, nocolor)
  FC_COLOR_MAP_COLOR(mouseMove, nocolor)
  FC_COLOR_MAP_COLOR(mouse, dim(FC_REF_MAP_COLOR(baseColor2), 250))
  FC_COLOR_MAP_COLOR(space, dim(FC_REF_MAP_COLOR(baseColor1), 100))
  FC_COLOR_MAP_COLOR(tab, dim(FC_REF_MAP_COLOR(baseColor1), 100))
  FC_COLOR_MAP_COLOR(enter, dim(FC_REF_MAP_COLOR(baseColor1), 255))
  FC_COLOR_MAP_COLOR(backspace, dim(FC_REF_MAP_COLOR(baseColor2), 100))
  FC_COLOR_MAP_COLOR(escape, dim(FC_REF_MAP_COLOR(baseColor2), 100))
  FC_COLOR_MAP_COLOR(del, dim(FC_REF_MAP_COLOR(baseColor2), 255))
  FC_COLOR_MAP_COLOR(fn, dim(FC_REF_MAP_COLOR(baseColor1), 255))
  FC_COLOR_MAP_COLOR(lock, dim(FC_REF_MAP_COLOR(baseColor1), 255))
  FC_COLOR_MAP_COLOR(LEDEffectNext, dim(FC_REF_MAP_COLOR(baseColor2), 255))
};

struct colorMapPrincess: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  FC_COLOR_MAP_COLOR(baseColor1, hotpink)
  FC_COLOR_MAP_COLOR(baseColor2, magenta)
  FC_COLOR_MAP_COLOR(defaultColor, dim(FC_REF_MAP_COLOR(baseColor1), 100))
  FC_COLOR_MAP_COLOR(shift, nocolor)
  FC_COLOR_MAP_COLOR(control, nocolor)
  FC_COLOR_MAP_COLOR(gui, nocolor)
  FC_COLOR_MAP_COLOR(alt, nocolor)
  FC_COLOR_MAP_COLOR(modifier, dim(FC_REF_MAP_COLOR(baseColor2), 130))
  FC_COLOR_MAP_COLOR(alpha, dim(FC_REF_MAP_COLOR(baseColor1), 130))
  FC_COLOR_MAP_COLOR(number, dim(white, 150))
  FC_COLOR_MAP_COLOR(punctuation, dim(lightpink, 200))
  FC_COLOR_MAP_COLOR(function, dim(crimson, 250))
  FC_COLOR_MAP_COLOR(navigation, dim(gold, 255))
  FC_COLOR_MAP_COLOR(system, dim(FC_REF_MAP_COLOR(baseColor2), 50))
  FC_COLOR_MAP_COLOR(arrow, dim(yellow, 250))
  FC_COLOR_MAP_COLOR(keypad, dim(FC_REF_MAP_COLOR(baseColor2), 230))
  FC_COLOR_MAP_COLOR(media, dim(FC_REF_MAP_COLOR(baseColor2), 190))
  FC_COLOR_MAP_COLOR(mouseWheel, nocolor)
  FC_COLOR_MAP_COLOR(mouseButton, nocolor)
  FC_COLOR_MAP_COLOR(mouseWarp, nocolor)
  FC_COLOR_MAP_COLOR(mouseMove, nocolor)
  FC_COLOR_MAP_COLOR(mouse, dim(FC_REF_MAP_COLOR(baseColor2), 250))
  FC_COLOR_MAP_COLOR(space, dim(white, 100))
  FC_COLOR_MAP_COLOR(tab, dim(FC_REF_MAP_COLOR(baseColor1), 100))
  FC_COLOR_MAP_COLOR(enter, dim(white, 255))
  FC_COLOR_MAP_COLOR(backspace, dim(yellow, 100))
  FC_COLOR_MAP_COLOR(escape, dim(white, 100))
  FC_COLOR_MAP_COLOR(del, dim(red, 255))
  FC_COLOR_MAP_COLOR(fn, dim(white, 255))
  FC_COLOR_MAP_COLOR(lock, dim(FC_REF_MAP_COLOR(baseColor1), 255))
  FC_COLOR_MAP_COLOR(LEDEffectNext, dim(deeppink, 255))
};

struct colorMapSea: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  FC_COLOR_MAP_COLOR(baseColor1, lightseagreen)
  FC_COLOR_MAP_COLOR(baseColor2, aqua)
  FC_COLOR_MAP_COLOR(defaultColor, dim(FC_REF_MAP_COLOR(baseColor1), 100))
  FC_COLOR_MAP_COLOR(shift, nocolor)
  FC_COLOR_MAP_COLOR(control, skyblue)
  FC_COLOR_MAP_COLOR(gui, cadetblue)
  FC_COLOR_MAP_COLOR(alt, turquoise)
  FC_COLOR_MAP_COLOR(modifier, dim(FC_REF_MAP_COLOR(baseColor2), 130))
  FC_COLOR_MAP_COLOR(alpha, dim(FC_REF_MAP_COLOR(baseColor1), 130))
  FC_COLOR_MAP_COLOR(number, dim(lightcyan, 190))
  FC_COLOR_MAP_COLOR(punctuation, dim(aquamarine, 200))
  FC_COLOR_MAP_COLOR(function, dim(white, 250))
  FC_COLOR_MAP_COLOR(navigation, dim(gold, 255))
  FC_COLOR_MAP_COLOR(system, dim(orange, 100))
  FC_COLOR_MAP_COLOR(arrow, dim(yellow, 250))
  FC_COLOR_MAP_COLOR(keypad, dim(FC_REF_MAP_COLOR(baseColor2), 230))
  FC_COLOR_MAP_COLOR(media, dim(dodgerblue, 190))
  FC_COLOR_MAP_COLOR(mouseWheel, nocolor)
  FC_COLOR_MAP_COLOR(mouseButton, dim(lightcyan, 250))
  FC_COLOR_MAP_COLOR(mouseWarp, nocolor)
  FC_COLOR_MAP_COLOR(mouseMove, nocolor)
  FC_COLOR_MAP_COLOR(mouse, dim(FC_REF_MAP_COLOR(baseColor2), 250))
  FC_COLOR_MAP_COLOR(space, dim(white, 100))
  FC_COLOR_MAP_COLOR(tab, dim(FC_REF_MAP_COLOR(baseColor1), 100))
  FC_COLOR_MAP_COLOR(enter, dim(white, 255))
  FC_COLOR_MAP_COLOR(backspace, dim(yellow, 100))
  FC_COLOR_MAP_COLOR(escape, dim(orange, 190))
  FC_COLOR_MAP_COLOR(del, dim(red, 255))
  FC_COLOR_MAP_COLOR(fn, dim(white, 255))
  FC_COLOR_MAP_COLOR(lock, dim(FC_REF_MAP_COLOR(baseColor1), 255))
  FC_COLOR_MAP_COLOR(LEDEffectNext, dim(blue, 255))
};

struct colorMapFlower: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  FC_COLOR_MAP_COLOR(baseColor1, violet)
  FC_COLOR_MAP_COLOR(baseColor2, springgreen)
  FC_COLOR_MAP_COLOR(defaultColor, dim(FC_REF_MAP_COLOR(baseColor1), 100))
  FC_COLOR_MAP_COLOR(shift, lime)
  FC_COLOR_MAP_COLOR(control, mediumspringgreen)
  FC_COLOR_MAP_COLOR(gui, yellowgreen)
  FC_COLOR_MAP_COLOR(alt, yellowgreen)
  FC_COLOR_MAP_COLOR(modifier, dim(FC_REF_MAP_COLOR(baseColor2), 130))
  FC_COLOR_MAP_COLOR(alpha, dim(FC_REF_MAP_COLOR(baseColor1), 130))
  FC_COLOR_MAP_COLOR(number, dim(thistle, 200))
  FC_COLOR_MAP_COLOR(punctuation, dim(plum, 210))
  FC_COLOR_MAP_COLOR(function, dim(white, 250))
  FC_COLOR_MAP_COLOR(navigation, dim(palegoldenrod, 255))
  FC_COLOR_MAP_COLOR(system, dim(orange, 100))
  FC_COLOR_MAP_COLOR(arrow, dim(lightgoldenrodyellow, 250))
  FC_COLOR_MAP_COLOR(keypad, dim(FC_REF_MAP_COLOR(baseColor2), 230))
  FC_COLOR_MAP_COLOR(media, dim(darkorchid, 200))
  FC_COLOR_MAP_COLOR(mouseWheel, nocolor)
  FC_COLOR_MAP_COLOR(mouseButton, dim(lightcyan, 250))
  FC_COLOR_MAP_COLOR(mouseWarp, nocolor)
  FC_COLOR_MAP_COLOR(mouseMove, nocolor)
  FC_COLOR_MAP_COLOR(mouse, dim(FC_REF_MAP_COLOR(baseColor2), 250))
  FC_COLOR_MAP_COLOR(space, dim(white, 100))
  FC_COLOR_MAP_COLOR(tab, dim(FC_REF_MAP_COLOR(baseColor1), 100))
  FC_COLOR_MAP_COLOR(enter, dim(white, 255))
  FC_COLOR_MAP_COLOR(backspace, dim(yellowgreen, 150))
  FC_COLOR_MAP_COLOR(escape, dim(palegoldenrod, 190))
  FC_COLOR_MAP_COLOR(del, dim(red, 255))
  FC_COLOR_MAP_COLOR(fn, dim(white, 255))
  FC_COLOR_MAP_COLOR(lock, dim(FC_REF_MAP_COLOR(baseColor1), 255))
  FC_COLOR_MAP_COLOR(LEDEffectNext, dim(white, 255))
};

struct colorMapKids: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  FC_COLOR_MAP_COLOR(defaultColor, dim(white, 160))
  FC_COLOR_MAP_COLOR(shift, lime)
  FC_COLOR_MAP_COLOR(control, dodgerblue)
  FC_COLOR_MAP_COLOR(gui, yellow)
  FC_COLOR_MAP_COLOR(alt, yellowgreen)
  FC_COLOR_MAP_COLOR(alpha, dim(white, 130))
  FC_COLOR_MAP_COLOR(number, dim(yellow, 200))
  FC_COLOR_MAP_COLOR(punctuation, dim(dodgerblue, 210))
  FC_COLOR_MAP_COLOR(function, dim(red, 250))
  FC_COLOR_MAP_COLOR(navigation, dim(orange, 255))
  FC_COLOR_MAP_COLOR(system, dim(orange, 100))
  FC_COLOR_MAP_COLOR(arrow, dim(gold, 250))
  FC_COLOR_MAP_COLOR(keypad, dim(orange, 230))
  FC_COLOR_MAP_COLOR(media, dim(lime, 200))
  FC_COLOR_MAP_COLOR(mouseWheel, nocolor)
  FC_COLOR_MAP_COLOR(mouseButton, dim(lightcyan, 250))
  FC_COLOR_MAP_COLOR(mouseWarp, nocolor)
  FC_COLOR_MAP_COLOR(mouseMove, nocolor)
  FC_COLOR_MAP_COLOR(mouse, dim(cyan, 250))
  FC_COLOR_MAP_COLOR(space, dim(white, 100))
  FC_COLOR_MAP_COLOR(tab, dim(white, 100))
  FC_COLOR_MAP_COLOR(enter, dim(white, 255))
  FC_COLOR_MAP_COLOR(backspace, dim(orangered, 150))
  FC_COLOR_MAP_COLOR(escape, dim(red, 190))
  FC_COLOR_MAP_COLOR(del, dim(red, 255))
  FC_COLOR_MAP_COLOR(fn, dim(white, 255))
  FC_COLOR_MAP_COLOR(lock, dim(green, 255))
  FC_COLOR_MAP_COLOR(LEDEffectNext, dim(blue, 255))
};

struct colorMapRedWhiteBlue: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  FC_COLOR_MAP_COLOR(baseColor1, blue)
  FC_COLOR_MAP_COLOR(baseColor2,  white)
  FC_COLOR_MAP_COLOR(defaultColor, dim(FC_REF_MAP_COLOR(baseColor1), 240))
  FC_COLOR_MAP_COLOR(shift, nocolor)
  FC_COLOR_MAP_COLOR(control, nocolor)
  FC_COLOR_MAP_COLOR(gui, nocolor)
  FC_COLOR_MAP_COLOR(alt, nocolor)
  FC_COLOR_MAP_COLOR(modifier, dim(red, 170))
  FC_COLOR_MAP_COLOR(alpha, dim(FC_REF_MAP_COLOR(baseColor2), 150))
  FC_COLOR_MAP_COLOR(number, dim(red, 190))
  FC_COLOR_MAP_COLOR(punctuation, dim(blue, 200))
  FC_COLOR_MAP_COLOR(function, dim(white, 250))
  FC_COLOR_MAP_COLOR(navigation, dim(white, 255))
  FC_COLOR_MAP_COLOR(system, dim(orangered, 100))
  FC_COLOR_MAP_COLOR(arrow, dim(white, 240))
  FC_COLOR_MAP_COLOR(keypad, dim(FC_REF_MAP_COLOR(baseColor2), 230))
  FC_COLOR_MAP_COLOR(media, dim(dodgerblue, 200))
  FC_COLOR_MAP_COLOR(mouseWheel, nocolor)
  FC_COLOR_MAP_COLOR(mouseButton, dim(lightcyan, 250))
  FC_COLOR_MAP_COLOR(mouseWarp, nocolor)
  FC_COLOR_MAP_COLOR(mouseMove, nocolor)
  FC_COLOR_MAP_COLOR(mouse, dim(dodgerblue, 190))
  FC_COLOR_MAP_COLOR(space, dim(white, 100))
  FC_COLOR_MAP_COLOR(tab, dim(FC_REF_MAP_COLOR(baseColor1), 100))
  FC_COLOR_MAP_COLOR(enter, dim(white, 255))
  FC_COLOR_MAP_COLOR(backspace, dim(red, 150))
  FC_COLOR_MAP_COLOR(escape, dim(FC_REF_MAP_COLOR(baseColor1), 190))
  FC_COLOR_MAP_COLOR(del, dim(red, 255))
  FC_COLOR_MAP_COLOR(fn, dim(white, 200))
  FC_COLOR_MAP_COLOR(lock, dim(FC_REF_MAP_COLOR(baseColor1), 255))
  FC_COLOR_MAP_COLOR(LEDEffectNext, dim(white, 255))
};



// List of themes (without colorMap).
enum { Base, Default, Fruit, Mono, Duo, Princess, Sea, Flower, Kids, RedWhiteBlue };



// We use groupColorLookup to retrieve the colors for the color groups
template<typename ColorMap> static cRGB groupColorLookup(const Key &k, bool &skip) {
  // If keys are a part of a larger group, they have precedence,
  // unless they are set to skip
  
  if (isControl(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(control), nocolor)) return ColorMap::FC_REF_MAP_COLOR(control);
  if (isGui(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(gui), nocolor)) return ColorMap::FC_REF_MAP_COLOR(gui);
  if (isShift(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(shift), nocolor)) return ColorMap::FC_REF_MAP_COLOR(shift);
  if (isAlt(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(alt), nocolor)) return ColorMap::FC_REF_MAP_COLOR(alt);

  if (isMouseWheel(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(mouseWheel), nocolor)) return ColorMap::FC_REF_MAP_COLOR(mouseWheel);
  if (isMouseButton(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(mouseButton), nocolor)) return ColorMap::FC_REF_MAP_COLOR(mouseButton);
  if (isMouseWarp(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(mouseWarp), nocolor)) return ColorMap::FC_REF_MAP_COLOR(mouseWarp);
  if (isMouseMove(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(mouseMove), nocolor)) return ColorMap::FC_REF_MAP_COLOR(mouseMove);
  if ((Key_Escape).flags == k.flags && (Key_Escape).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(escape), nocolor)) return ColorMap::FC_REF_MAP_COLOR(escape);
  if ((Key_Delete).flags == k.flags && (Key_Delete).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(del), nocolor)) return ColorMap::FC_REF_MAP_COLOR(del);


  if (isAlpha(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(alpha), nocolor)) return ColorMap::FC_REF_MAP_COLOR(alpha);
  if (isNumber(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(number), nocolor)) return ColorMap::FC_REF_MAP_COLOR(number);
  if (isPunctuation(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(punctuation), nocolor)) return ColorMap::FC_REF_MAP_COLOR(punctuation); 
  if (isFunction(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(function), nocolor)) return ColorMap::FC_REF_MAP_COLOR(function); 
  if (isNavigation(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(navigation), nocolor)) return ColorMap::FC_REF_MAP_COLOR(navigation); 
  if (isSystem(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(system), nocolor)) return ColorMap::FC_REF_MAP_COLOR(system);
  if (isArrow(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(arrow), nocolor)) return ColorMap::FC_REF_MAP_COLOR(arrow); 
  if (isKeypad(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(keypad), nocolor)) return ColorMap::FC_REF_MAP_COLOR(keypad); 
  if (isMedia(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(media), nocolor)) return ColorMap::FC_REF_MAP_COLOR(media); 
  if (isModifier(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(modifier), nocolor)) return ColorMap::FC_REF_MAP_COLOR(modifier); 
  if (isMouse(k)) if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(mouse), nocolor)) return ColorMap::FC_REF_MAP_COLOR(mouse); 

  // Individual keys that are important and unique enough to justify having their own members here.
  if ((Key_Space).flags == k.flags && (Key_Space).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(space), nocolor)) return ColorMap::FC_REF_MAP_COLOR(space);
  if ((Key_Enter).flags == k.flags && (Key_Enter).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(enter), nocolor)) return ColorMap::FC_REF_MAP_COLOR(enter);
  if ((Key_Tab).flags == k.flags && (Key_Tab).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(tab), nocolor)) return ColorMap::FC_REF_MAP_COLOR(tab);
  if ((Key_Backspace).flags == k.flags && (Key_Backspace).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(backspace), nocolor)) return ColorMap::FC_REF_MAP_COLOR(backspace);

  if ((Key_LEDEffectNext).flags == k.flags && (Key_LEDEffectNext).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(LEDEffectNext), nocolor)) return ColorMap::FC_REF_MAP_COLOR(LEDEffectNext);

  // For these ones, I need to know what their layers are... they might change from the default.
  // This should work for layers 1, 2 or 3
  if ( (ShiftToLayer(2)).flags == k.flags && ( (ShiftToLayer(1)).keyCode == k.keyCode ||
    (ShiftToLayer(2)).keyCode == k.keyCode || (ShiftToLayer(3)).keyCode == k.keyCode) )
    if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(fn), nocolor)) return ColorMap::FC_REF_MAP_COLOR(fn);
  
  // Should work for all LockLayer keys
  if ( (LockLayer(1)).flags == k.flags && ( (LockLayer(1)).keyCode == k.keyCode || (LockLayer(1)).keyCode == k.keyCode) )
    if (!isColorMatch(ColorMap::FC_REF_MAP_COLOR(lock), nocolor)) return ColorMap::FC_REF_MAP_COLOR(lock);


  return ColorMap::FC_REF_MAP_COLOR(defaultColor);

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
     
     using namespace FunctionalColorStuff;
     
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
       return kaleidoscope::plugin::FunctionalColorStuff::nocolor; // could return any color as a dummy

#define FC_END_COLOR_LIST \
   } \
   none = true; \
   return kaleidoscope::plugin::FunctionalColorStuff::nocolor; \
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
   PLUGIN.setColorLookup(&kaleidoscope::plugin::FunctionalColorStuff::groupColorLookup<COLOR_MAP>);


}//namespace FunctionalColorStuff
}//namespace plugin

}//namespace kaleidoscope

typedef kaleidoscope::plugin::FunctionalColorStuff::FunctionalColor FunctionalColor;
