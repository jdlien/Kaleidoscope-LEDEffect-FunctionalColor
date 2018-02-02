#pragma once

#include "Kaleidoscope-LEDControl.h"
#include "Kaleidoscope-MouseKeys.h"

namespace kaleidoscope {
class LEDFunctionalColor : public LEDMode {
 public:
  LEDFunctionalColor(uint8_t fLayer);
  LEDFunctionalColor(void);
  uint8_t functionLayer = 2;


  // functions to set colors
  void all(cRGB color);
  void allModifiers(cRGB color);
  void escape(cRGB color);
  void numbers(cRGB color);
  void letters(cRGB color);
  void punctuation(cRGB color);
  void brackets(cRGB color);
  void backslash(cRGB color);
  void pipe(cRGB color);
  void tab(cRGB color);
  void backspace(cRGB color);
  void del(cRGB color);
  void enter(cRGB color);
  void arrows(cRGB color);
  void nav(cRGB color);
  void insert(cRGB color);
  void shift(cRGB color);
  void ctrl(cRGB color);
  void alt(cRGB color);
  void cmd(cRGB color);
  void app(cRGB color);
  void printscreen(cRGB color);
  void pause(cRGB color);
  void scrolllock(cRGB color);
  void capslock(cRGB color);
  void fkeys(cRGB color);
  void fn(cRGB color);
  void media(cRGB color);
  void led(cRGB color);
  void mouse(cRGB color);

  // functions to set colors with brightness
  void all(cRGB color, byte brightness);
  void allModifiers(cRGB color, byte brightness);
  void escape(cRGB color, byte brightness);
  void numbers(cRGB color, byte brightness);
  void letters(cRGB color, byte brightness);
  void punctuation(cRGB color, byte brightness);
  void brackets(cRGB color, byte brightness);
  void backslash(cRGB color, byte brightness);
  void pipe(cRGB color, byte brightness);
  void tab(cRGB color, byte brightness);
  void backspace(cRGB color, byte brightness);
  void del(cRGB color, byte brightness);
  void enter(cRGB color, byte brightness);
  void arrows(cRGB color, byte brightness);
  void nav(cRGB color, byte brightness);
  void insert(cRGB color, byte brightness);
  void shift(cRGB color, byte brightness);
  void ctrl(cRGB color, byte brightness);
  void alt(cRGB color, byte brightness);
  void cmd(cRGB color, byte brightness);
  void app(cRGB color, byte brightness);
  void printscreen(cRGB color, byte brightness);
  void pause(cRGB color, byte brightness);
  void scrolllock(cRGB color, byte brightness);
  void capslock(cRGB color, byte brightness);
  void fkeys(cRGB color, byte brightness);
  void fn(cRGB color, byte brightness);
  void media(cRGB color, byte brightness);
  void led(cRGB color, byte brightness);
  void mouse(cRGB color, byte brightness);  

  private:
  uint16_t current_key = 0;
  uint16_t current_row = 0;
  uint16_t current_col = 0;
  uint16_t current_color = 0;
  uint8_t last_layer = 0;

  //define colors for certain groups of keys
  cRGB color_escape = dim(CRGB(255, 0, 0), 140);
  cRGB color_numbers = dim(CRGB(250, 235, 215), 220);
  cRGB color_letters = dim(CRGB(250, 235, 215), 100);
  cRGB color_punctuation = dim(CRGB(250, 235, 215), 150);
  cRGB color_brackets = dim(CRGB(250, 235, 215), 200);
  cRGB color_backslash = dim(CRGB(250, 235, 215), 200);
  cRGB color_pipe = dim(CRGB(250, 235, 215), 200);
  cRGB color_space = dim(CRGB(255, 255, 255), 180);
  cRGB color_tab = dim(CRGB(255, 255, 255), 180);
  cRGB color_backspace = dim(CRGB(255, 0, 0), 120);
  cRGB color_delete = dim(CRGB(255, 100, 0), 250);
  cRGB color_enter = dim(CRGB(255, 255, 255), 250);
  cRGB color_arrows = dim(CRGB(255, 255, 255), 240);
  cRGB color_nav = dim(CRGB(255, 255, 0), 220);
  cRGB color_insert = dim(CRGB(154, 205, 50), 200);
  cRGB color_shift = dim(CRGB(152, 251, 152), 220);
  cRGB color_ctrl = dim(CRGB(135, 206, 235), 170);
  cRGB color_alt = dim(CRGB(34, 139, 34), 240);
  //Mac command or Windows logo key
  cRGB color_cmd = dim(CRGB(255, 192, 203), 170);
  //application context menu key
  cRGB color_app = dim(CRGB(250, 235, 215), 150);
  
  cRGB color_printscreen = dim(CRGB(255, 165, 0), 200);
  cRGB color_pause = dim(CRGB(255, 100, 0), 150);
  cRGB color_scrolllock = dim(CRGB(255, 165, 0), 150);
  cRGB color_capslock = dim(CRGB(255, 165, 0), 150);
  
  cRGB color_fkeys = dim(CRGB(255, 0, 0), 180);
  cRGB color_fn = dim(CRGB(255, 255, 255), 140);
  cRGB color_media = dim(CRGB(238, 130, 238), 250);
  cRGB color_led = dim(CRGB(0, 0, 255), 250);
  cRGB color_mouse = dim(CRGB(0, 255, 255), 250);


  protected:
  void onActivate(void) final;
  void update(void) final;
  cRGB dim(cRGB color, byte brightness);
  void setKeyLed(uint8_t r, uint8_t c);



};

}
