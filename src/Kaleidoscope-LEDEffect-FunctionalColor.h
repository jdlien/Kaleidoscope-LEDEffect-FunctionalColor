#pragma once

#include "Kaleidoscope-LEDControl.h"
#include "Kaleidoscope-MouseKeys.h"

#include "colors.h"
#include "keygroups.h"

namespace kaleidoscope {
   
namespace plugin {
   
namespace FunctionalColorStuff {

#define FC_COLOR_FUNC __attribute__((always_inline)) static constexpr 

// The base colormap - no colors are set, so everything falls back to the default color.
// You can subclass this and change defaultColor to make a new colorMap that is all one color.
struct colorMap {
  FC_COLOR_FUNC cRGB defaultColor()  { return dim(white, 120); }
  FC_COLOR_FUNC cRGB shift()         { return nocolor; }
  FC_COLOR_FUNC cRGB control()       { return nocolor; }
  //Command keys (macOS) or Windows Logo keys
  FC_COLOR_FUNC cRGB gui()           { return nocolor; }//dim(pink, 190);
  FC_COLOR_FUNC cRGB alt()           { return nocolor; }
  // Includes all the above modifiers
  FC_COLOR_FUNC cRGB modifier()      { return nocolor; }

  FC_COLOR_FUNC cRGB alpha()         { return nocolor; }
  FC_COLOR_FUNC cRGB number()        { return nocolor; }
  FC_COLOR_FUNC cRGB punctuation()   { return nocolor; }
  FC_COLOR_FUNC cRGB function()      { return nocolor; }
  FC_COLOR_FUNC cRGB navigation()    { return nocolor; }
  FC_COLOR_FUNC cRGB system()        { return nocolor; }
  FC_COLOR_FUNC cRGB arrow()         { return nocolor; }
  FC_COLOR_FUNC cRGB keypad()        { return nocolor; }
  FC_COLOR_FUNC cRGB media()         { return nocolor; }

  FC_COLOR_FUNC cRGB mouseWheel()    { return nocolor; }
  FC_COLOR_FUNC cRGB mouseButton()   { return nocolor; }
  FC_COLOR_FUNC cRGB mouseWarp()     { return nocolor; }
  FC_COLOR_FUNC cRGB mouseMove()     { return nocolor; }
  // Includes all above mouse functions
  FC_COLOR_FUNC cRGB mouse()         { return nocolor; }

  // Important single keys
  FC_COLOR_FUNC cRGB space()         { return nocolor; }
  FC_COLOR_FUNC cRGB tab()           { return nocolor; }
  FC_COLOR_FUNC cRGB enter()         { return nocolor; }
  FC_COLOR_FUNC cRGB backspace()     { return nocolor; }
  FC_COLOR_FUNC cRGB escape()        { return nocolor; }
  FC_COLOR_FUNC cRGB del()           { return nocolor; }
  FC_COLOR_FUNC cRGB fn()            { return nocolor; }
  //Numlock or any use of lockLayer
  FC_COLOR_FUNC cRGB lock()          { return nocolor; }
  FC_COLOR_FUNC cRGB LEDEffectNext() { return nocolor; }
  // Where's the any key?

};

struct colorMapDefault : public colorMap {
  FC_COLOR_FUNC cRGB shift()         { return dim(darkseagreen, 190); }
  FC_COLOR_FUNC cRGB control()       { return dim(lightskyblue, 190); }
  FC_COLOR_FUNC cRGB gui()           { return dim(pink, 190); }
  FC_COLOR_FUNC cRGB alt()           { return dim(forestgreen, 190); }
  FC_COLOR_FUNC cRGB alpha()         { return dim(warmwhite, 110); }
  FC_COLOR_FUNC cRGB number()        { return dim(white, 190); }
  FC_COLOR_FUNC cRGB punctuation()   { return dim(gold, 190); }
  FC_COLOR_FUNC cRGB function()      { return dim(red, 190); }
  FC_COLOR_FUNC cRGB navigation()    { return dim(yellow, 190); }
  FC_COLOR_FUNC cRGB system()        { return dim(orangered, 255); }
  FC_COLOR_FUNC cRGB arrow()         { return dim(white, 200); }
  FC_COLOR_FUNC cRGB keypad()        { return dim(green, 190); }
  FC_COLOR_FUNC cRGB mouseWheel()    { return dim(cyan, 190); }
  FC_COLOR_FUNC cRGB mouseButton()   { return dim(cyan, 240); }
  FC_COLOR_FUNC cRGB mouseWarp()     { return dim(turquoise, 110); }
  FC_COLOR_FUNC cRGB mouseMove()     { return dim(turquoise, 250); }
  FC_COLOR_FUNC cRGB media()         { return dim(magenta, 200); }
  FC_COLOR_FUNC cRGB space()         { return dim(white, 140); }
  FC_COLOR_FUNC cRGB tab()           { return dim(white, 140); }
  FC_COLOR_FUNC cRGB enter()         { return dim(white, 250); }
  FC_COLOR_FUNC cRGB backspace()     { return dim(red, 140); }
  FC_COLOR_FUNC cRGB escape()        { return dim(red, 130); }
  FC_COLOR_FUNC cRGB del()           { return dim(red, 255); }
  FC_COLOR_FUNC cRGB fn()            { return dim(white, 250); }
  FC_COLOR_FUNC cRGB lock()          { return dim(purple, 190); }
  FC_COLOR_FUNC cRGB LEDEffectNext() { return dim(blue, 255); }
};

struct colorMapFruit : public colorMap {
  FC_COLOR_FUNC cRGB shift()         { return dim(darkseagreen, 190); }
  FC_COLOR_FUNC cRGB control()       { return dim(purple, 255); }
  FC_COLOR_FUNC cRGB gui()           { return dim(pink, 190); }
  FC_COLOR_FUNC cRGB alt()           { return dim(forestgreen, 190); }
  FC_COLOR_FUNC cRGB alpha()         { return dim(orange, 190); }
  FC_COLOR_FUNC cRGB number()        { return dim(red, 190); }
  FC_COLOR_FUNC cRGB punctuation()   { return dim(yellow, 190); }
  FC_COLOR_FUNC cRGB function()      { return dim(white, 190); }
  FC_COLOR_FUNC cRGB navigation()    { return dim(yellow, 190); }
  FC_COLOR_FUNC cRGB system()        { return dim(orangered, 255); }
  FC_COLOR_FUNC cRGB arrow()         { return dim(white, 200); }
  FC_COLOR_FUNC cRGB keypad()        { return dim(green, 190); }
  FC_COLOR_FUNC cRGB mouseWheel()    { return dim(cyan, 190); }
  FC_COLOR_FUNC cRGB mouseButton()   { return dim(cyan, 240); }
  FC_COLOR_FUNC cRGB mouseWarp()     { return dim(turquoise, 110); }
  FC_COLOR_FUNC cRGB mouseMove()     { return dim(turquoise, 250); }
  FC_COLOR_FUNC cRGB media()         { return dim(magenta, 200); }
  FC_COLOR_FUNC cRGB space()         { return dim(white, 140); }
  FC_COLOR_FUNC cRGB tab()           { return dim(white, 140); }
  FC_COLOR_FUNC cRGB enter()         { return dim(white, 250); }
  FC_COLOR_FUNC cRGB backspace()     { return dim(red, 140); }
  FC_COLOR_FUNC cRGB escape()        { return dim(red, 130); }
  FC_COLOR_FUNC cRGB del()           { return dim(red, 255); }
  FC_COLOR_FUNC cRGB fn()            { return dim(white, 250); }
  FC_COLOR_FUNC cRGB lock()          { return dim(purple, 190); }
  FC_COLOR_FUNC cRGB LEDEffectNext() { return dim(blue, 255); }
};

// A subclass that is monochromatic... set base color and then adjust the brightness.
struct colorMapMono: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  FC_COLOR_FUNC cRGB baseColor()     { return white; }
  FC_COLOR_FUNC cRGB defaultColor()  { return dim(baseColor(), 100); }
  FC_COLOR_FUNC cRGB shift()         { return nocolor; }
  FC_COLOR_FUNC cRGB control()       { return nocolor; }
  FC_COLOR_FUNC cRGB gui()           { return nocolor; }
  FC_COLOR_FUNC cRGB alt()           { return nocolor; }
  FC_COLOR_FUNC cRGB modifier()      { return dim(baseColor(), 130); }
  FC_COLOR_FUNC cRGB alpha()         { return dim(baseColor(), 80); }
  FC_COLOR_FUNC cRGB number()        { return dim(baseColor(), 100); }
  FC_COLOR_FUNC cRGB punctuation()   { return dim(baseColor(), 120); }
  FC_COLOR_FUNC cRGB function()      { return dim(baseColor(), 150); }
  FC_COLOR_FUNC cRGB navigation()    { return dim(baseColor(), 180); }
  FC_COLOR_FUNC cRGB system()        { return dim(baseColor(), 50); }
  FC_COLOR_FUNC cRGB arrow ()        { return dim(baseColor(), 250); }
  FC_COLOR_FUNC cRGB keypad()        { return dim(baseColor(), 230); }
  FC_COLOR_FUNC cRGB media ()        { return dim(baseColor(), 250); }
  FC_COLOR_FUNC cRGB mouseWheel()    { return nocolor; }
  FC_COLOR_FUNC cRGB mouseButton()   { return nocolor; }
  FC_COLOR_FUNC cRGB mouseWarp()     { return nocolor; }
  FC_COLOR_FUNC cRGB mouseMove()     { return nocolor; }
  FC_COLOR_FUNC cRGB mouse()         { return dim(baseColor(), 220); }
  FC_COLOR_FUNC cRGB space()         { return dim(baseColor(), 100); }
  FC_COLOR_FUNC cRGB tab()           { return dim(baseColor(), 100); }
  FC_COLOR_FUNC cRGB enter()         { return dim(baseColor(), 255); }
  FC_COLOR_FUNC cRGB backspace()     { return dim(baseColor(), 100); }
  FC_COLOR_FUNC cRGB escape()        { return dim(baseColor(), 100); }
  FC_COLOR_FUNC cRGB del()           { return dim(baseColor(), 255); }
  FC_COLOR_FUNC cRGB fn()            { return dim(baseColor(), 255); }
  FC_COLOR_FUNC cRGB lock()          { return dim(baseColor(), 255); }
  FC_COLOR_FUNC cRGB LEDEffectNext() { return dim(baseColor(), 255); }
};

struct colorMapDuo: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  FC_COLOR_FUNC cRGB baseColor1()    { return white; }
  FC_COLOR_FUNC cRGB baseColor2()    { return red; }
  FC_COLOR_FUNC cRGB defaultColor()  { return dim(baseColor1(), 100); }
  FC_COLOR_FUNC cRGB shift()         { return nocolor; }
  FC_COLOR_FUNC cRGB control()       { return nocolor; }
  FC_COLOR_FUNC cRGB gui()           { return nocolor; }
  FC_COLOR_FUNC cRGB alt()           { return nocolor; }
  FC_COLOR_FUNC cRGB modifier()      { return dim(baseColor2(), 130); }
  FC_COLOR_FUNC cRGB alpha()         { return dim(baseColor1(), 80); }
  FC_COLOR_FUNC cRGB number()        { return dim(baseColor1(), 100); }
  FC_COLOR_FUNC cRGB punctuation()   { return dim(baseColor1(), 120); }
  FC_COLOR_FUNC cRGB function()      { return dim(baseColor1(), 150); }
  FC_COLOR_FUNC cRGB navigation()    { return dim(baseColor2(), 130); }
  FC_COLOR_FUNC cRGB system()        { return dim(baseColor2(), 50); }
  FC_COLOR_FUNC cRGB arrow()         { return dim(baseColor2(), 250); }
  FC_COLOR_FUNC cRGB keypad()        { return dim(baseColor2(), 230); }
  FC_COLOR_FUNC cRGB media()         { return dim(baseColor2(), 190); }
  FC_COLOR_FUNC cRGB mouseWheel()    { return nocolor; }
  FC_COLOR_FUNC cRGB mouseButton()   { return nocolor; }
  FC_COLOR_FUNC cRGB mouseWarp()     { return nocolor; }
  FC_COLOR_FUNC cRGB mouseMove()     { return nocolor; }
  FC_COLOR_FUNC cRGB mouse()         { return dim(baseColor2(), 250); }
  FC_COLOR_FUNC cRGB space()         { return dim(baseColor1(), 100); }
  FC_COLOR_FUNC cRGB tab()           { return dim(baseColor1(), 100); }
  FC_COLOR_FUNC cRGB enter()         { return dim(baseColor1(), 255); }
  FC_COLOR_FUNC cRGB backspace()     { return dim(baseColor2(), 100); }
  FC_COLOR_FUNC cRGB escape()        { return dim(baseColor2(), 100); }
  FC_COLOR_FUNC cRGB del()           { return dim(baseColor2(), 255); }
  FC_COLOR_FUNC cRGB fn()            { return dim(baseColor1(), 255); }
  FC_COLOR_FUNC cRGB lock()          { return dim(baseColor1(), 255); }
  FC_COLOR_FUNC cRGB LEDEffectNext() { return dim(baseColor2(), 255); }
};

struct colorMapPrincess: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  FC_COLOR_FUNC cRGB baseColor1()     { return hotpink; }
  FC_COLOR_FUNC cRGB baseColor2()     { return magenta; }
  FC_COLOR_FUNC cRGB defaultColor()   { return dim(baseColor1(), 100); }
  FC_COLOR_FUNC cRGB shift()          { return nocolor; }
  FC_COLOR_FUNC cRGB control()        { return nocolor; }
  FC_COLOR_FUNC cRGB gui()            { return nocolor; }
  FC_COLOR_FUNC cRGB alt()            { return nocolor; }
  FC_COLOR_FUNC cRGB modifier()       { return dim(baseColor2(), 130); }
  FC_COLOR_FUNC cRGB alpha()          { return dim(baseColor1(), 130); }
  FC_COLOR_FUNC cRGB number()         { return dim(white, 150); }
  FC_COLOR_FUNC cRGB punctuation()    { return dim(lightpink, 200); }
  FC_COLOR_FUNC cRGB function()       { return dim(crimson, 250); }
  FC_COLOR_FUNC cRGB navigation()     { return dim(gold, 255); }
  FC_COLOR_FUNC cRGB system()         { return dim(baseColor2(), 50); }
  FC_COLOR_FUNC cRGB arrow()          { return dim(yellow, 250); }
  FC_COLOR_FUNC cRGB keypad()         { return dim(baseColor2(), 230); }
  FC_COLOR_FUNC cRGB media()          { return dim(baseColor2(), 190); }
  FC_COLOR_FUNC cRGB mouseWheel()     { return nocolor; }
  FC_COLOR_FUNC cRGB mouseButton()    { return nocolor; }
  FC_COLOR_FUNC cRGB mouseWarp()      { return nocolor; }
  FC_COLOR_FUNC cRGB mouseMove()      { return nocolor; }
  FC_COLOR_FUNC cRGB mouse()          { return dim(baseColor2(), 250); }
  FC_COLOR_FUNC cRGB space()          { return dim(white, 100); }
  FC_COLOR_FUNC cRGB tab()            { return dim(baseColor1(), 100); }
  FC_COLOR_FUNC cRGB enter()          { return dim(white, 255); }
  FC_COLOR_FUNC cRGB backspace()      { return dim(yellow, 100); }
  FC_COLOR_FUNC cRGB escape()         { return dim(white, 100); }
  FC_COLOR_FUNC cRGB del()            { return dim(red, 255); }
  FC_COLOR_FUNC cRGB fn()             { return dim(white, 255); }
  FC_COLOR_FUNC cRGB lock()           { return dim(baseColor1(), 255); }
  FC_COLOR_FUNC cRGB LEDEffectNext()  { return dim(deeppink, 255); }
};

struct colorMapSea: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  FC_COLOR_FUNC cRGB baseColor1()      { return lightseagreen; }
  FC_COLOR_FUNC cRGB baseColor2()      { return aqua; }
  FC_COLOR_FUNC cRGB defaultColor()    { return dim(baseColor1(), 100); }
  FC_COLOR_FUNC cRGB shift()           { return nocolor; }
  FC_COLOR_FUNC cRGB control()         { return skyblue; }
  FC_COLOR_FUNC cRGB gui()             { return cadetblue; }
  FC_COLOR_FUNC cRGB alt()             { return turquoise; }
  FC_COLOR_FUNC cRGB modifier()        { return dim(baseColor2(), 130); }
  FC_COLOR_FUNC cRGB alpha()           { return dim(baseColor1(), 130); }
  FC_COLOR_FUNC cRGB number()          { return dim(lightcyan, 190); }
  FC_COLOR_FUNC cRGB punctuation()     { return dim(aquamarine, 200); }
  FC_COLOR_FUNC cRGB function()        { return dim(white, 250); }
  FC_COLOR_FUNC cRGB navigation()      { return dim(gold, 255); }
  FC_COLOR_FUNC cRGB system()          { return dim(orange, 100); }
  FC_COLOR_FUNC cRGB arrow()           { return dim(yellow, 250); }
  FC_COLOR_FUNC cRGB keypad()          { return dim(baseColor2(), 230); }
  FC_COLOR_FUNC cRGB media()           { return dim(dodgerblue, 190); }
  FC_COLOR_FUNC cRGB mouseWheel()      { return nocolor; }
  FC_COLOR_FUNC cRGB mouseButton()     { return dim(lightcyan, 250); }
  FC_COLOR_FUNC cRGB mouseWarp()       { return nocolor; }
  FC_COLOR_FUNC cRGB mouseMove()       { return nocolor; }
  FC_COLOR_FUNC cRGB mouse()           { return dim(baseColor2(), 250); }
  FC_COLOR_FUNC cRGB space()           { return dim(white, 100); }
  FC_COLOR_FUNC cRGB tab()             { return dim(baseColor1(), 100); }
  FC_COLOR_FUNC cRGB enter()           { return dim(white, 255); }
  FC_COLOR_FUNC cRGB backspace()       { return dim(yellow, 100); }
  FC_COLOR_FUNC cRGB escape()          { return dim(orange, 190); }
  FC_COLOR_FUNC cRGB del()             { return dim(red, 255); }
  FC_COLOR_FUNC cRGB fn()              { return dim(white, 255); }
  FC_COLOR_FUNC cRGB lock()            { return dim(baseColor1(), 255); }
  FC_COLOR_FUNC cRGB LEDEffectNext()   { return dim(blue, 255); }
};

struct colorMapFlower: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  FC_COLOR_FUNC cRGB baseColor1()      { return violet; }
  FC_COLOR_FUNC cRGB baseColor2()      { return springgreen; }
  FC_COLOR_FUNC cRGB defaultColor()    { return dim(baseColor1(), 100); }
  FC_COLOR_FUNC cRGB shift()           { return lime; }
  FC_COLOR_FUNC cRGB control()         { return mediumspringgreen; }
  FC_COLOR_FUNC cRGB gui()             { return yellowgreen; }
  FC_COLOR_FUNC cRGB alt()             { return yellowgreen; }
  FC_COLOR_FUNC cRGB modifier()        { return dim(baseColor2(), 130); }
  FC_COLOR_FUNC cRGB alpha()           { return dim(baseColor1(), 130); }
  FC_COLOR_FUNC cRGB number()          { return dim(thistle, 200); }
  FC_COLOR_FUNC cRGB punctuation()     { return dim(plum, 210); }
  FC_COLOR_FUNC cRGB function()        { return dim(white, 250); }
  FC_COLOR_FUNC cRGB navigation()      { return dim(palegoldenrod, 255); }
  FC_COLOR_FUNC cRGB system()          { return dim(orange, 100); }
  FC_COLOR_FUNC cRGB arrow()           { return dim(lightgoldenrodyellow, 250); }
  FC_COLOR_FUNC cRGB keypad()          { return dim(baseColor2(), 230); }
  FC_COLOR_FUNC cRGB media()           { return dim(darkorchid, 200); }
  FC_COLOR_FUNC cRGB mouseWheel()      { return nocolor; }
  FC_COLOR_FUNC cRGB mouseButton()     { return dim(lightcyan, 250); }
  FC_COLOR_FUNC cRGB mouseWarp()       { return nocolor; }
  FC_COLOR_FUNC cRGB mouseMove()       { return nocolor; }
  FC_COLOR_FUNC cRGB mouse()           { return dim(baseColor2(), 250); }
  FC_COLOR_FUNC cRGB space()           { return dim(white, 100); }
  FC_COLOR_FUNC cRGB tab()             { return dim(baseColor1(), 100); }
  FC_COLOR_FUNC cRGB enter()           { return dim(white, 255); }
  FC_COLOR_FUNC cRGB backspace()       { return dim(yellowgreen, 150); }
  FC_COLOR_FUNC cRGB escape()          { return dim(palegoldenrod, 190); }
  FC_COLOR_FUNC cRGB del()             { return dim(red, 255); }
  FC_COLOR_FUNC cRGB fn()              { return dim(white, 255); }
  FC_COLOR_FUNC cRGB lock()            { return dim(baseColor1(), 255); }
  FC_COLOR_FUNC cRGB LEDEffectNext()   { return dim(white, 255); }
};

struct colorMapKids: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  FC_COLOR_FUNC cRGB defaultColor()    { return dim(white, 160); }
  FC_COLOR_FUNC cRGB shift()           { return lime; }
  FC_COLOR_FUNC cRGB control()         { return dodgerblue; }
  FC_COLOR_FUNC cRGB gui()             { return yellow; }
  FC_COLOR_FUNC cRGB alt()             { return yellowgreen; }
  FC_COLOR_FUNC cRGB alpha()           { return dim(white, 130); }
  FC_COLOR_FUNC cRGB number()          { return dim(yellow, 200); }
  FC_COLOR_FUNC cRGB punctuation()     { return dim(dodgerblue, 210); }
  FC_COLOR_FUNC cRGB function()        { return dim(red, 250); }
  FC_COLOR_FUNC cRGB navigation()      { return dim(orange, 255); }
  FC_COLOR_FUNC cRGB system()          { return dim(orange, 100); }
  FC_COLOR_FUNC cRGB arrow()           { return dim(gold, 250); }
  FC_COLOR_FUNC cRGB keypad()          { return dim(orange, 230); }
  FC_COLOR_FUNC cRGB media()           { return dim(lime, 200); }
  FC_COLOR_FUNC cRGB mouseWheel()      { return nocolor; }
  FC_COLOR_FUNC cRGB mouseButton()     { return dim(lightcyan, 250); }
  FC_COLOR_FUNC cRGB mouseWarp()       { return nocolor; }
  FC_COLOR_FUNC cRGB mouseMove()       { return nocolor; }
  FC_COLOR_FUNC cRGB mouse()           { return dim(cyan, 250); }
  FC_COLOR_FUNC cRGB space()           { return dim(white, 100); }
  FC_COLOR_FUNC cRGB tab()             { return dim(white, 100); }
  FC_COLOR_FUNC cRGB enter()           { return dim(white, 255); }
  FC_COLOR_FUNC cRGB backspace()       { return dim(orangered, 150); }
  FC_COLOR_FUNC cRGB escape()          { return dim(red, 190); }
  FC_COLOR_FUNC cRGB del()             { return dim(red, 255); }
  FC_COLOR_FUNC cRGB fn()              { return dim(white, 255); }
  FC_COLOR_FUNC cRGB lock()            { return dim(green, 255); }
  FC_COLOR_FUNC cRGB LEDEffectNext()   { return dim(blue, 255); }
};

struct colorMapRedWhiteBlue: public colorMap {
  // baseColor allows you to use a base color that just changes in brightness
  FC_COLOR_FUNC cRGB baseColor1()      { return blue; }
  FC_COLOR_FUNC cRGB baseColor2()      { return  white; }
  FC_COLOR_FUNC cRGB defaultColor()    { return dim(baseColor1(), 240); }
  FC_COLOR_FUNC cRGB shift()           { return nocolor; }
  FC_COLOR_FUNC cRGB control()         { return nocolor; }
  FC_COLOR_FUNC cRGB gui()             { return nocolor; }
  FC_COLOR_FUNC cRGB alt()             { return nocolor; }
  FC_COLOR_FUNC cRGB modifier()        { return dim(red, 170); }
  FC_COLOR_FUNC cRGB alpha()           { return dim(baseColor2(), 150); }
  FC_COLOR_FUNC cRGB number()          { return dim(red, 190); }
  FC_COLOR_FUNC cRGB punctuation()     { return dim(blue, 200); }
  FC_COLOR_FUNC cRGB function()        { return dim(white, 250); }
  FC_COLOR_FUNC cRGB navigation()      { return dim(white, 255); }
  FC_COLOR_FUNC cRGB system()          { return dim(orangered, 100); }
  FC_COLOR_FUNC cRGB arrow()           { return dim(white, 240); }
  FC_COLOR_FUNC cRGB keypad()          { return dim(baseColor2(), 230); }
  FC_COLOR_FUNC cRGB media()           { return dim(dodgerblue, 200); }
  FC_COLOR_FUNC cRGB mouseWheel()      { return nocolor; }
  FC_COLOR_FUNC cRGB mouseButton()     { return dim(lightcyan, 250); }
  FC_COLOR_FUNC cRGB mouseWarp()       { return nocolor; }
  FC_COLOR_FUNC cRGB mouseMove()       { return nocolor; }
  FC_COLOR_FUNC cRGB mouse()           { return dim(dodgerblue, 190); }
  FC_COLOR_FUNC cRGB space()           { return dim(white, 100); }
  FC_COLOR_FUNC cRGB tab()             { return dim(baseColor1(), 100); }
  FC_COLOR_FUNC cRGB enter()           { return dim(white, 255); }
  FC_COLOR_FUNC cRGB backspace()       { return dim(red, 150); }
  FC_COLOR_FUNC cRGB escape()          { return dim(baseColor1(), 190); }
  FC_COLOR_FUNC cRGB del()             { return dim(red, 255); }
  FC_COLOR_FUNC cRGB fn()              { return dim(white, 200); }
  FC_COLOR_FUNC cRGB lock()            { return dim(baseColor1(), 255); }
  FC_COLOR_FUNC cRGB LEDEffectNext()   { return dim(white, 255); }
};



// List of themes (without colorMap).
enum { Base, Default, Fruit, Mono, Duo, Princess, Sea, Flower, Kids, RedWhiteBlue };



// We use groupColorLookup to retrieve the colors for the color groups
template<typename ColorMap> static cRGB groupColorLookup(const Key &k, bool &skip) {
  // If keys are a part of a larger group, they have precedence,
  // unless they are set to skip
  
  if (isControl(k)) if (!isColorMatch(ColorMap::control(), nocolor)) return ColorMap::control();
  if (isGui(k)) if (!isColorMatch(ColorMap::gui(), nocolor)) return ColorMap::gui();
  if (isShift(k)) if (!isColorMatch(ColorMap::shift(), nocolor)) return ColorMap::shift();
  if (isAlt(k)) if (!isColorMatch(ColorMap::alt(), nocolor)) return ColorMap::alt();

  if (isMouseWheel(k)) if (!isColorMatch(ColorMap::mouseWheel(), nocolor)) return ColorMap::mouseWheel();
  if (isMouseButton(k)) if (!isColorMatch(ColorMap::mouseButton(), nocolor)) return ColorMap::mouseButton();
  if (isMouseWarp(k)) if (!isColorMatch(ColorMap::mouseWarp(), nocolor)) return ColorMap::mouseWarp();
  if (isMouseMove(k)) if (!isColorMatch(ColorMap::mouseMove(), nocolor)) return ColorMap::mouseMove();
  if ((Key_Escape).flags == k.flags && (Key_Escape).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::escape(), nocolor)) return ColorMap::escape();
  if ((Key_Delete).flags == k.flags && (Key_Delete).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::del(), nocolor)) return ColorMap::del();


  if (isAlpha(k)) if (!isColorMatch(ColorMap::alpha(), nocolor)) return ColorMap::alpha();
  if (isNumber(k)) if (!isColorMatch(ColorMap::number(), nocolor)) return ColorMap::number();
  if (isPunctuation(k)) if (!isColorMatch(ColorMap::punctuation(), nocolor)) return ColorMap::punctuation(); 
  if (isFunction(k)) if (!isColorMatch(ColorMap::function(), nocolor)) return ColorMap::function(); 
  if (isNavigation(k)) if (!isColorMatch(ColorMap::navigation(), nocolor)) return ColorMap::navigation(); 
  if (isSystem(k)) if (!isColorMatch(ColorMap::system(), nocolor)) return ColorMap::system();
  if (isArrow(k)) if (!isColorMatch(ColorMap::arrow(), nocolor)) return ColorMap::arrow(); 
  if (isKeypad(k)) if (!isColorMatch(ColorMap::keypad(), nocolor)) return ColorMap::keypad(); 
  if (isMedia(k)) if (!isColorMatch(ColorMap::media(), nocolor)) return ColorMap::media(); 
  if (isModifier(k)) if (!isColorMatch(ColorMap::modifier(), nocolor)) return ColorMap::modifier(); 
  if (isMouse(k)) if (!isColorMatch(ColorMap::mouse(), nocolor)) return ColorMap::mouse(); 

  // Individual keys that are important and unique enough to justify having their own members here.
  if ((Key_Space).flags == k.flags && (Key_Space).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::space(), nocolor)) return ColorMap::space();
  if ((Key_Enter).flags == k.flags && (Key_Enter).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::enter(), nocolor)) return ColorMap::enter();
  if ((Key_Tab).flags == k.flags && (Key_Tab).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::tab(), nocolor)) return ColorMap::tab();
  if ((Key_Backspace).flags == k.flags && (Key_Backspace).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::backspace(), nocolor)) return ColorMap::backspace();

  if ((Key_LEDEffectNext).flags == k.flags && (Key_LEDEffectNext).keyCode == k.keyCode)
    if (!isColorMatch(ColorMap::LEDEffectNext(), nocolor)) return ColorMap::LEDEffectNext();

  // For these ones, I need to know what their layers are... they might change from the default.
  // This should work for layers 1, 2 or 3
  if ( (ShiftToLayer(2)).flags == k.flags && ( (ShiftToLayer(1)).keyCode == k.keyCode ||
    (ShiftToLayer(2)).keyCode == k.keyCode || (ShiftToLayer(3)).keyCode == k.keyCode) )
    if (!isColorMatch(ColorMap::fn(), nocolor)) return ColorMap::fn();
  
  // Should work for all LockLayer keys
  if ( (LockLayer(1)).flags == k.flags && ( (LockLayer(1)).keyCode == k.keyCode || (LockLayer(1)).keyCode == k.keyCode) )
    if (!isColorMatch(ColorMap::lock(), nocolor)) return ColorMap::lock();


  return ColorMap::defaultColor();

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
