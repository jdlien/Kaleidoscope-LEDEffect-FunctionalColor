#pragma once

#include "Kaleidoscope-LEDControl.h"
#include "Kaleidoscope-MouseKeys.h"

namespace kaleidoscope {
class LEDFunctionalColor : public LEDMode {
 public:
  LEDFunctionalColor(uint8_t fLayer);
  LEDFunctionalColor(void);
  uint8_t functionLayer = 2;

  // dims the brightness of all colors from 0-255
  void brightness(byte brightness);

  // functions to set colors
  void all(cRGB color);
  void allModifiers(cRGB color);
  void allMouse(cRGB color);
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
  void mousemove(cRGB color);
  void mousebuttons(cRGB color);
  void mousewarp(cRGB color);
  void mousescroll(cRGB color);
  // individual key colors
  void number_1(cRGB color);
  void number_2(cRGB color);
  void number_3(cRGB color);
  void number_4(cRGB color);
  void number_5(cRGB color);
  void number_6(cRGB color);
  void number_7(cRGB color);
  void number_8(cRGB color);
  void number_9(cRGB color);
  void number_0(cRGB color);
  void number_minus(cRGB color);
  void number_equals(cRGB color);
  void letter_a(cRGB color);
  void letter_b(cRGB color);
  void letter_c(cRGB color);
  void letter_d(cRGB color);
  void letter_e(cRGB color);
  void letter_f(cRGB color);
  void letter_g(cRGB color);
  void letter_h(cRGB color);
  void letter_i(cRGB color);
  void letter_j(cRGB color);
  void letter_k(cRGB color);
  void letter_l(cRGB color);
  void letter_m(cRGB color);
  void letter_n(cRGB color);
  void letter_o(cRGB color);
  void letter_p(cRGB color);
  void letter_q(cRGB color);
  void letter_r(cRGB color);
  void letter_s(cRGB color);
  void letter_t(cRGB color);
  void letter_u(cRGB color);
  void letter_v(cRGB color);
  void letter_w(cRGB color);
  void letter_x(cRGB color);
  void letter_y(cRGB color);
  void letter_z(cRGB color);
  void punctuation_backtick(cRGB color);
  void punctuation_period(cRGB color);
  void punctuation_comma(cRGB color);
  void punctuation_semicolon(cRGB color);
  void punctuation_quote(cRGB color);
  void punctuation_slash(cRGB color);
  void bracket_leftbracket(cRGB color);
  void bracket_rightbracket(cRGB color);
  void bracket_leftcurlybracket(cRGB color);
  void bracket_rightcurlybracket(cRGB color);
  void arrow_left(cRGB color);
  void arrow_up(cRGB color);
  void arrow_down(cRGB color);
  void arrow_right(cRGB color);
  void nav_home(cRGB color);
  void nav_end(cRGB color);
  void nav_pageup(cRGB color);
  void nav_pagedown(cRGB color);
  void fkey_f1(cRGB color);
  void fkey_f2(cRGB color);
  void fkey_f3(cRGB color);
  void fkey_f4(cRGB color);
  void fkey_f5(cRGB color);
  void fkey_f6(cRGB color);
  void fkey_f7(cRGB color);
  void fkey_f8(cRGB color);
  void fkey_f9(cRGB color);
  void fkey_f10(cRGB color);
  void fkey_f11(cRGB color);
  void fkey_f12(cRGB color);
  void fkey_f13(cRGB color);
  void fkey_f14(cRGB color);
  void fkey_f15(cRGB color);
  void fkey_f16(cRGB color);
  void fkey_f17(cRGB color);
  void fkey_f18(cRGB color);
  void fkey_f19(cRGB color);
  void media_play(cRGB color);
  void media_prev(cRGB color);
  void media_next(cRGB color);
  void media_stop(cRGB color);
  void media_volup(cRGB color);
  void media_voldown(cRGB color);
  void media_mute(cRGB color);


  // functions to set colors with brightness
  void all(cRGB color, byte brightness);
  void allModifiers(cRGB color, byte brightness);
  void allMouse(cRGB color, byte brightness);
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
  void mousemove(cRGB color, byte brightness);
  void mousebuttons(cRGB color, byte brightness);
  void mousewarp(cRGB color, byte brightness);
  void mousescroll(cRGB color, byte brightness);
  // here are the new individual key variables that need their own functions
  void number_1(cRGB color, byte brightness);
  void number_2(cRGB color, byte brightness);
  void number_3(cRGB color, byte brightness);
  void number_4(cRGB color, byte brightness);
  void number_5(cRGB color, byte brightness);
  void number_6(cRGB color, byte brightness);
  void number_7(cRGB color, byte brightness);
  void number_8(cRGB color, byte brightness);
  void number_9(cRGB color, byte brightness);
  void number_0(cRGB color, byte brightness);
  void number_minus(cRGB color, byte brightness);
  void number_equals(cRGB color, byte brightness);
  void letter_a(cRGB color, byte brightness);
  void letter_b(cRGB color, byte brightness);
  void letter_c(cRGB color, byte brightness);
  void letter_d(cRGB color, byte brightness);
  void letter_e(cRGB color, byte brightness);
  void letter_f(cRGB color, byte brightness);
  void letter_g(cRGB color, byte brightness);
  void letter_h(cRGB color, byte brightness);
  void letter_i(cRGB color, byte brightness);
  void letter_j(cRGB color, byte brightness);
  void letter_k(cRGB color, byte brightness);
  void letter_l(cRGB color, byte brightness);
  void letter_m(cRGB color, byte brightness);
  void letter_n(cRGB color, byte brightness);
  void letter_o(cRGB color, byte brightness);
  void letter_p(cRGB color, byte brightness);
  void letter_q(cRGB color, byte brightness);
  void letter_r(cRGB color, byte brightness);
  void letter_s(cRGB color, byte brightness);
  void letter_t(cRGB color, byte brightness);
  void letter_u(cRGB color, byte brightness);
  void letter_v(cRGB color, byte brightness);
  void letter_w(cRGB color, byte brightness);
  void letter_x(cRGB color, byte brightness);
  void letter_y(cRGB color, byte brightness);
  void letter_z(cRGB color, byte brightness);
  void punctuation_backtick(cRGB color, byte brightness);
  void punctuation_period(cRGB color, byte brightness);
  void punctuation_comma(cRGB color, byte brightness);
  void punctuation_semicolon(cRGB color, byte brightness);
  void punctuation_quote(cRGB color, byte brightness);
  void punctuation_slash(cRGB color, byte brightness);
  void bracket_leftbracket(cRGB color, byte brightness);
  void bracket_rightbracket(cRGB color, byte brightness);
  void bracket_leftcurlybracket(cRGB color, byte brightness);
  void bracket_rightcurlybracket(cRGB color, byte brightness);
  void arrow_left(cRGB color, byte brightness);
  void arrow_up(cRGB color, byte brightness);
  void arrow_down(cRGB color, byte brightness);
  void arrow_right(cRGB color, byte brightness);
  void nav_home(cRGB color, byte brightness);
  void nav_end(cRGB color, byte brightness);
  void nav_pageup(cRGB color, byte brightness);
  void nav_pagedown(cRGB color, byte brightness);
  void fkey_f1(cRGB color, byte brightness);
  void fkey_f2(cRGB color, byte brightness);
  void fkey_f3(cRGB color, byte brightness);
  void fkey_f4(cRGB color, byte brightness);
  void fkey_f5(cRGB color, byte brightness);
  void fkey_f6(cRGB color, byte brightness);
  void fkey_f7(cRGB color, byte brightness);
  void fkey_f8(cRGB color, byte brightness);
  void fkey_f9(cRGB color, byte brightness);
  void fkey_f10(cRGB color, byte brightness);
  void fkey_f11(cRGB color, byte brightness);
  void fkey_f12(cRGB color, byte brightness);
  void fkey_f13(cRGB color, byte brightness);
  void fkey_f14(cRGB color, byte brightness);
  void fkey_f15(cRGB color, byte brightness);
  void fkey_f16(cRGB color, byte brightness);
  void fkey_f17(cRGB color, byte brightness);
  void fkey_f18(cRGB color, byte brightness);
  void fkey_f19(cRGB color, byte brightness);
  void media_play(cRGB color, byte brightness);
  void media_prev(cRGB color, byte brightness);
  void media_next(cRGB color, byte brightness);
  void media_stop(cRGB color, byte brightness);
  void media_volup(cRGB color, byte brightness);
  void media_voldown(cRGB color, byte brightness);
  void media_mute(cRGB color, byte brightness);


  private:
  uint16_t current_key = 0;
  uint16_t current_row = 0;
  uint16_t current_col = 0;
  uint16_t current_color = 0;
  uint8_t last_layer = 0;

  //define colors for certain groups of keys
  cRGB color_escape = dim(CRGB(255, 0, 0), 140);
  cRGB color_numbers = dim(CRGB(250, 235, 215), 220);
  cRGB color_number_1 = dim(CRGB(250, 235, 215), 220);
  cRGB color_number_2 = dim(CRGB(250, 235, 215), 220);
  cRGB color_number_3 = dim(CRGB(250, 235, 215), 220);
  cRGB color_number_4 = dim(CRGB(250, 235, 215), 220);
  cRGB color_number_5 = dim(CRGB(250, 235, 215), 220);
  cRGB color_number_6 = dim(CRGB(250, 235, 215), 220);
  cRGB color_number_7 = dim(CRGB(250, 235, 215), 220);
  cRGB color_number_8 = dim(CRGB(250, 235, 215), 220);
  cRGB color_number_9 = dim(CRGB(250, 235, 215), 220);
  cRGB color_number_0 = dim(CRGB(250, 235, 215), 220);
  cRGB color_number_minus = dim(CRGB(250, 235, 215), 220);
  cRGB color_number_equals = dim(CRGB(250, 235, 215), 220);

  cRGB color_letters = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_a = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_b = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_c = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_d = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_e = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_f = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_g = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_h = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_i = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_j = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_k = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_l = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_m = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_n = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_o = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_p = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_q = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_r = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_s = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_t = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_u = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_v = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_w = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_x = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_y = dim(CRGB(250, 235, 215), 100);
  cRGB color_letter_z  = dim(CRGB(250, 235, 215), 100); 

  cRGB color_punctuation = dim(CRGB(250, 235, 215), 150);
  cRGB color_punctuation_backtick = dim(CRGB(250, 235, 215), 150);
  cRGB color_punctuation_period = dim(CRGB(250, 235, 215), 150);
  cRGB color_punctuation_comma = dim(CRGB(250, 235, 215), 150);
  cRGB color_punctuation_semicolon = dim(CRGB(250, 235, 215), 150);
  cRGB color_punctuation_quote = dim(CRGB(250, 235, 215), 150);
  cRGB color_punctuation_slash = dim(CRGB(250, 235, 215), 150);

  cRGB color_brackets = dim(CRGB(250, 235, 215), 200);
  cRGB color_bracket_leftbracket = dim(CRGB(250, 235, 215), 200);
  cRGB color_bracket_rightbracket = dim(CRGB(250, 235, 215), 200);
  cRGB color_bracket_leftcurlybracket = dim(CRGB(250, 235, 215), 200);
  cRGB color_bracket_rightcurlybracket = dim(CRGB(250, 235, 215), 200);

  cRGB color_backslash = dim(CRGB(250, 235, 215), 200);
  cRGB color_pipe = dim(CRGB(250, 235, 215), 200);
  cRGB color_space = dim(CRGB(255, 255, 255), 180);
  cRGB color_tab = dim(CRGB(255, 255, 255), 180);
  cRGB color_backspace = dim(CRGB(255, 0, 0), 120);
  cRGB color_delete = dim(CRGB(255, 100, 0), 250);
  cRGB color_enter = dim(CRGB(255, 255, 255), 250);
  cRGB color_arrows = dim(CRGB(255, 255, 255), 240);
  cRGB color_arrow_left = dim(CRGB(255, 255, 255), 240);
  cRGB color_arrow_up = dim(CRGB(255, 255, 255), 240);
  cRGB color_arrow_down = dim(CRGB(255, 255, 255), 240);
  cRGB color_arrow_right = dim(CRGB(255, 255, 255), 240);

  cRGB color_nav = dim(CRGB(255, 255, 0), 220);
  cRGB color_nav_home = dim(CRGB(255, 255, 0), 220);
  cRGB color_nav_end = dim(CRGB(255, 255, 0), 220);
  cRGB color_nav_pageup = dim(CRGB(255, 255, 0), 220);
  cRGB color_nav_pagedown = dim(CRGB(255, 255, 0), 220);

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
  cRGB color_fkey_f1 = dim(CRGB(255, 0, 0), 180);
  cRGB color_fkey_f2 = dim(CRGB(255, 0, 0), 180);
  cRGB color_fkey_f3 = dim(CRGB(255, 0, 0), 180);
  cRGB color_fkey_f4 = dim(CRGB(255, 0, 0), 180);
  cRGB color_fkey_f5 = dim(CRGB(255, 0, 0), 180);
  cRGB color_fkey_f6 = dim(CRGB(255, 0, 0), 180);
  cRGB color_fkey_f7 = dim(CRGB(255, 0, 0), 180);
  cRGB color_fkey_f8 = dim(CRGB(255, 0, 0), 180);
  cRGB color_fkey_f9 = dim(CRGB(255, 0, 0), 180);
  cRGB color_fkey_f10 = dim(CRGB(255, 0, 0), 180);
  cRGB color_fkey_f11 = dim(CRGB(255, 0, 0), 180);
  cRGB color_fkey_f12 = dim(CRGB(255, 0, 0), 180);
  cRGB color_fkey_f13 = dim(CRGB(255, 0, 0), 180);
  cRGB color_fkey_f14 = dim(CRGB(255, 0, 0), 180);
  cRGB color_fkey_f15 = dim(CRGB(255, 0, 0), 180);
  cRGB color_fkey_f16 = dim(CRGB(255, 0, 0), 180);
  cRGB color_fkey_f17 = dim(CRGB(255, 0, 0), 180);
  cRGB color_fkey_f18 = dim(CRGB(255, 0, 0), 180);
  cRGB color_fkey_f19 = dim(CRGB(255, 0, 0), 180);

  cRGB color_fn = dim(CRGB(255, 255, 255), 140);
  cRGB color_media = dim(CRGB(238, 130, 238), 250);
  cRGB color_media_play = dim(CRGB(238, 130, 238), 250);
  cRGB color_media_prev = dim(CRGB(238, 130, 238), 250);
  cRGB color_media_next = dim(CRGB(238, 130, 238), 250);
  cRGB color_media_stop = dim(CRGB(238, 130, 238), 250);
  cRGB color_media_volup = dim(CRGB(238, 130, 238), 250);
  cRGB color_media_voldown = dim(CRGB(238, 130, 238), 250);
  cRGB color_media_mute = dim(CRGB(238, 130, 238), 250);

  cRGB color_led = dim(CRGB(0, 0, 255), 250);
  cRGB color_mousemove = dim(CRGB(0, 255, 255), 200);
  cRGB color_mousebuttons = dim(CRGB(128, 255, 255), 250);
  cRGB color_mousewarp = dim(CRGB(0, 255, 255), 150);
  cRGB color_mousescroll = dim(CRGB(0, 255, 255), 150);




  protected:
  void onActivate(void) final;
  void update(void) final;
  cRGB dim(cRGB color, byte brightness);
  void setKeyLed(uint8_t r, uint8_t c);



};

}
