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
  void setAll(cRGB color);
  void setModifiers(cRGB color);
  void setEscape(cRGB color);
  void setNumbers(cRGB color);
  void setLetters(cRGB color);
  void setPunctuation(cRGB color);
  void setBrackets(cRGB color);
  void setBackslash(cRGB color);
  void setPipe(cRGB color);
  void setTab(cRGB color);
  void setBackspace(cRGB color);
  void setDelete(cRGB color);
  void setEnter(cRGB color);
  void setArrows(cRGB color);
  void setNav(cRGB color);
  void setInsert(cRGB color);
  void setShift(cRGB color);
  void setCtrl(cRGB color);
  void setAlt(cRGB color);
  void setCmd(cRGB color);
  void setApp(cRGB color);
  void setPrintscreen(cRGB color);
  void setPause(cRGB color);
  void setScrolllock(cRGB color);
  void setCapslock(cRGB color);
  void setFkeys(cRGB color);
  void setFn(cRGB color);
  void setMedia(cRGB color);
  void setLed(cRGB color);
  void setMouse(cRGB color);

  // functions to set colors with brightness
  void setAll(cRGB color, byte brightness);
  void setModifiers(cRGB color, byte brightness);
  void setEscape(cRGB color, byte brightness);
  void setNumbers(cRGB color, byte brightness);
  void setLetters(cRGB color, byte brightness);
  void setPunctuation(cRGB color, byte brightness);
  void setBrackets(cRGB color, byte brightness);
  void setBackslash(cRGB color, byte brightness);
  void setPipe(cRGB color, byte brightness);
  void setTab(cRGB color, byte brightness);
  void setBackspace(cRGB color, byte brightness);
  void setDelete(cRGB color, byte brightness);
  void setEnter(cRGB color, byte brightness);
  void setArrows(cRGB color, byte brightness);
  void setNav(cRGB color, byte brightness);
  void setInsert(cRGB color, byte brightness);
  void setShift(cRGB color, byte brightness);
  void setCtrl(cRGB color, byte brightness);
  void setAlt(cRGB color, byte brightness);
  void setCmd(cRGB color, byte brightness);
  void setApp(cRGB color, byte brightness);
  void setPrintscreen(cRGB color, byte brightness);
  void setPause(cRGB color, byte brightness);
  void setScrolllock(cRGB color, byte brightness);
  void setCapslock(cRGB color, byte brightness);
  void setFkeys(cRGB color, byte brightness);
  void setFn(cRGB color, byte brightness);
  void setMedia(cRGB color, byte brightness);
  void setLed(cRGB color, byte brightness);
  void setMouse(cRGB color, byte brightness);  

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
