#pragma once

#include "Kaleidoscope-LEDControl.h"
#include "Kaleidoscope-MouseKeys.h"
#include "LEDUtils.h" // need this for hsvToRgb()

namespace kaleidoscope {
class LEDFunctionalColor : public LEDMode {
 public:
  LEDFunctionalColor(uint8_t fLayer);
  LEDFunctionalColor(void);
  uint8_t functionLayer = 2;


  // Establish a palette of 16 colors. This is a rainbow of 14 vivid colors and two whites
  cRGB palette [16] = {
    CRGB(255,255,255), //white
    CRGB(255,235,215), //warm white aka antiquewhite
    CRGB(255,0,0), //red
    hsvToRgb(16,255,255), //red-orange
    hsvToRgb(32,255,255), //orange
    hsvToRgb(48,255,255), //yellow
    hsvToRgb(64,255,255), //green-yellow
    CRGB(0,255,0), //green aka lime
    hsvToRgb(112,255,255), //turquoise
    hsvToRgb(128,255,255), //cyan
    hsvToRgb(144,200,255), //royal blue
    CRGB(0,0,255),  //blue
    hsvToRgb(192,255,255), //purple
    hsvToRgb(208,255,255), //fuchsia
    hsvToRgb(224,255,255), //magenta
    hsvToRgb(240,255,255), //neon red
  };

//enumerate color names
enum{WHITE, WARMWHITE, RED, REDORANGE, ORANGE, YELLOW, GREENYELLOW, GREEN, TURQUOISE, CYAN, ROYALBLUE, BLUE, PURPLE, FUCHSIA, MAGENTA, NEONRED};

/*
   // An alternate set of 7 vivid colors with pale complements
  cRGB palette2 [16] = {
    CRGB(255,255,255), //white
    CRGB(255, 235, 215), //warm white aka antiquewhite
    CRGB(255,0,0), //red
    CRGB(255,200,200), //pale red (pink)
    // hsvToRgb(32,255,255), //orange
    hsvToRgb(48,255,255), //yellow
    hsvToRgb(48,70,255), //pale yellow
    //hsvToRgb(64,255,255), //green-yellow
    CRGB(0,255,0), //green aka lime
    CRGB(200,255,200), //pale green
    // hsvToRgb(112,255,255), //turquoise
    hsvToRgb(128,255,255), //cyan
    hsvToRgb(128,70,255), //pale cyan
    CRGB(0,0,255), //blue
    CRGB(200,200,255), //pale blue
    hsvToRgb(200,255,255), //purple
    hsvToRgb(200,70,255), //pale purple
    CRGB(255,0,255), //magenta
    CRGB(255,200,255), //pale magenta
    //hsvToRgb(240,255,255), //neon red
  };
*/
   
  // changePalette allows you to change colors in the palette
  // Specify the color index (0-15) and the new color as a CRGB object
  void changePalette(uint8_t colorIndex, cRGB newColor);

  // dims the brightness of all colors from 0-16 
  void brightness(byte brightness);

  // functions to set colors
  void all(uint8_t color);
  void allModifiers(uint8_t color);
  void allMouse(uint8_t color);
  void escape(uint8_t color);
  void numbers(uint8_t color);
  void letters(uint8_t color);
  void punctuation(uint8_t color);
  void brackets(uint8_t color);
  void backslash(uint8_t color);
  void pipe(uint8_t color);
  void tab(uint8_t color);
  void backspace(uint8_t color);
  void space(uint8_t color);
  void del(uint8_t color);
  void enter(uint8_t color);
  void arrows(uint8_t color);
  void nav(uint8_t color);
  void insert(uint8_t color);
  void shift(uint8_t color);
  void ctrl(uint8_t color);
  void alt(uint8_t color);
  void cmd(uint8_t color);
  void app(uint8_t color);
  void printscreen(uint8_t color);
  void pause(uint8_t color);
  void scrolllock(uint8_t color);
  void capslock(uint8_t color);
  void fkeys(uint8_t color);
  void fn(uint8_t color);
  void media(uint8_t color);
  void led(uint8_t color);
  void mousemove(uint8_t color);
  void mousebuttons(uint8_t color);
  void mousewarp(uint8_t color);
  void mousescroll(uint8_t color);
  // individual key colors
  void number_1(uint8_t color);
  void number_2(uint8_t color);
  void number_3(uint8_t color);
  void number_4(uint8_t color);
  void number_5(uint8_t color);
  void number_6(uint8_t color);
  void number_7(uint8_t color);
  void number_8(uint8_t color);
  void number_9(uint8_t color);
  void number_0(uint8_t color);
  void number_minus(uint8_t color);
  void number_equals(uint8_t color);
  void letter_a(uint8_t color);
  void letter_b(uint8_t color);
  void letter_c(uint8_t color);
  void letter_d(uint8_t color);
  void letter_e(uint8_t color);
  void letter_f(uint8_t color);
  void letter_g(uint8_t color);
  void letter_h(uint8_t color);
  void letter_i(uint8_t color);
  void letter_j(uint8_t color);
  void letter_k(uint8_t color);
  void letter_l(uint8_t color);
  void letter_m(uint8_t color);
  void letter_n(uint8_t color);
  void letter_o(uint8_t color);
  void letter_p(uint8_t color);
  void letter_q(uint8_t color);
  void letter_r(uint8_t color);
  void letter_s(uint8_t color);
  void letter_t(uint8_t color);
  void letter_u(uint8_t color);
  void letter_v(uint8_t color);
  void letter_w(uint8_t color);
  void letter_x(uint8_t color);
  void letter_y(uint8_t color);
  void letter_z(uint8_t color);
  void punctuation_backtick(uint8_t color);
  void punctuation_period(uint8_t color);
  void punctuation_comma(uint8_t color);
  void punctuation_semicolon(uint8_t color);
  void punctuation_quote(uint8_t color);
  void punctuation_slash(uint8_t color);
  void bracket_leftbracket(uint8_t color);
  void bracket_rightbracket(uint8_t color);
  void bracket_leftcurlybracket(uint8_t color);
  void bracket_rightcurlybracket(uint8_t color);
  void arrow_left(uint8_t color);
  void arrow_up(uint8_t color);
  void arrow_down(uint8_t color);
  void arrow_right(uint8_t color);
  void nav_home(uint8_t color);
  void nav_end(uint8_t color);
  void nav_pageup(uint8_t color);
  void nav_pagedown(uint8_t color);
  void fkey_f1(uint8_t color);
  void fkey_f2(uint8_t color);
  void fkey_f3(uint8_t color);
  void fkey_f4(uint8_t color);
  void fkey_f5(uint8_t color);
  void fkey_f6(uint8_t color);
  void fkey_f7(uint8_t color);
  void fkey_f8(uint8_t color);
  void fkey_f9(uint8_t color);
  void fkey_f10(uint8_t color);
  void fkey_f11(uint8_t color);
  void fkey_f12(uint8_t color);
  void fkey_f13(uint8_t color);
  void fkey_f14(uint8_t color);
  void fkey_f15(uint8_t color);
  void fkey_f16(uint8_t color);
  void fkey_f17(uint8_t color);
  void fkey_f18(uint8_t color);
  void fkey_f19(uint8_t color);
  void media_play(uint8_t color);
  void media_prev(uint8_t color);
  void media_next(uint8_t color);
  void media_stop(uint8_t color);
  void media_volup(uint8_t color);
  void media_voldown(uint8_t color);
  void media_mute(uint8_t color);


  // functions to set colors with brightness
  void all(uint8_t color, byte brightness);
  void allModifiers(uint8_t color, byte brightness);
  void allMouse(uint8_t color, byte brightness);
  void escape(uint8_t color, byte brightness);
  void numbers(uint8_t color, byte brightness);
  void letters(uint8_t color, byte brightness);
  void punctuation(uint8_t color, byte brightness);
  void brackets(uint8_t color, byte brightness);
  void backslash(uint8_t color, byte brightness);
  void pipe(uint8_t color, byte brightness);
  void tab(uint8_t color, byte brightness);
  void backspace(uint8_t color, byte brightness);
  void space(uint8_t color, byte brightness);
  void del(uint8_t color, byte brightness);
  void enter(uint8_t color, byte brightness);
  void arrows(uint8_t color, byte brightness);
  void nav(uint8_t color, byte brightness);
  void insert(uint8_t color, byte brightness);
  void shift(uint8_t color, byte brightness);
  void ctrl(uint8_t color, byte brightness);
  void alt(uint8_t color, byte brightness);
  void cmd(uint8_t color, byte brightness);
  void app(uint8_t color, byte brightness);
  void printscreen(uint8_t color, byte brightness);
  void pause(uint8_t color, byte brightness);
  void scrolllock(uint8_t color, byte brightness);
  void capslock(uint8_t color, byte brightness);
  void fkeys(uint8_t color, byte brightness);
  void fn(uint8_t color, byte brightness);
  void media(uint8_t color, byte brightness);
  void led(uint8_t color, byte brightness);
  void mousemove(uint8_t color, byte brightness);
  void mousebuttons(uint8_t color, byte brightness);
  void mousewarp(uint8_t color, byte brightness);
  void mousescroll(uint8_t color, byte brightness);
  // here are the new individual key variables that need their own functions
  void number_1(uint8_t color, byte brightness);
  void number_2(uint8_t color, byte brightness);
  void number_3(uint8_t color, byte brightness);
  void number_4(uint8_t color, byte brightness);
  void number_5(uint8_t color, byte brightness);
  void number_6(uint8_t color, byte brightness);
  void number_7(uint8_t color, byte brightness);
  void number_8(uint8_t color, byte brightness);
  void number_9(uint8_t color, byte brightness);
  void number_0(uint8_t color, byte brightness);
  void number_minus(uint8_t color, byte brightness);
  void number_equals(uint8_t color, byte brightness);
  void letter_a(uint8_t color, byte brightness);
  void letter_b(uint8_t color, byte brightness);
  void letter_c(uint8_t color, byte brightness);
  void letter_d(uint8_t color, byte brightness);
  void letter_e(uint8_t color, byte brightness);
  void letter_f(uint8_t color, byte brightness);
  void letter_g(uint8_t color, byte brightness);
  void letter_h(uint8_t color, byte brightness);
  void letter_i(uint8_t color, byte brightness);
  void letter_j(uint8_t color, byte brightness);
  void letter_k(uint8_t color, byte brightness);
  void letter_l(uint8_t color, byte brightness);
  void letter_m(uint8_t color, byte brightness);
  void letter_n(uint8_t color, byte brightness);
  void letter_o(uint8_t color, byte brightness);
  void letter_p(uint8_t color, byte brightness);
  void letter_q(uint8_t color, byte brightness);
  void letter_r(uint8_t color, byte brightness);
  void letter_s(uint8_t color, byte brightness);
  void letter_t(uint8_t color, byte brightness);
  void letter_u(uint8_t color, byte brightness);
  void letter_v(uint8_t color, byte brightness);
  void letter_w(uint8_t color, byte brightness);
  void letter_x(uint8_t color, byte brightness);
  void letter_y(uint8_t color, byte brightness);
  void letter_z(uint8_t color, byte brightness);
  void punctuation_backtick(uint8_t color, byte brightness);
  void punctuation_period(uint8_t color, byte brightness);
  void punctuation_comma(uint8_t color, byte brightness);
  void punctuation_semicolon(uint8_t color, byte brightness);
  void punctuation_quote(uint8_t color, byte brightness);
  void punctuation_slash(uint8_t color, byte brightness);
  void bracket_leftbracket(uint8_t color, byte brightness);
  void bracket_rightbracket(uint8_t color, byte brightness);
  void bracket_leftcurlybracket(uint8_t color, byte brightness);
  void bracket_rightcurlybracket(uint8_t color, byte brightness);
  void arrow_left(uint8_t color, byte brightness);
  void arrow_up(uint8_t color, byte brightness);
  void arrow_down(uint8_t color, byte brightness);
  void arrow_right(uint8_t color, byte brightness);
  void nav_home(uint8_t color, byte brightness);
  void nav_end(uint8_t color, byte brightness);
  void nav_pageup(uint8_t color, byte brightness);
  void nav_pagedown(uint8_t color, byte brightness);
  void fkey_f1(uint8_t color, byte brightness);
  void fkey_f2(uint8_t color, byte brightness);
  void fkey_f3(uint8_t color, byte brightness);
  void fkey_f4(uint8_t color, byte brightness);
  void fkey_f5(uint8_t color, byte brightness);
  void fkey_f6(uint8_t color, byte brightness);
  void fkey_f7(uint8_t color, byte brightness);
  void fkey_f8(uint8_t color, byte brightness);
  void fkey_f9(uint8_t color, byte brightness);
  void fkey_f10(uint8_t color, byte brightness);
  void fkey_f11(uint8_t color, byte brightness);
  void fkey_f12(uint8_t color, byte brightness);
  void fkey_f13(uint8_t color, byte brightness);
  void fkey_f14(uint8_t color, byte brightness);
  void fkey_f15(uint8_t color, byte brightness);
  void fkey_f16(uint8_t color, byte brightness);
  void fkey_f17(uint8_t color, byte brightness);
  void fkey_f18(uint8_t color, byte brightness);
  void fkey_f19(uint8_t color, byte brightness);
  void media_play(uint8_t color, byte brightness);
  void media_prev(uint8_t color, byte brightness);
  void media_next(uint8_t color, byte brightness);
  void media_stop(uint8_t color, byte brightness);
  void media_volup(uint8_t color, byte brightness);
  void media_voldown(uint8_t color, byte brightness);
  void media_mute(uint8_t color, byte brightness);


  private:
  uint16_t current_key = 0;
  uint16_t current_row = 0;
  uint16_t current_col = 0;
  uint16_t current_color = 0;
  uint8_t last_layer = 0;

  //define colors for certain groups of keys
  // Colors are all a single byte where the left nybble is a color index (0-16) from palette
  // The right nybble is a brightness from 0 (black) to 16 (full brightness).
  // We can set the color by bitshifting an integer 4 left and adding 15
  //  0 - 0000 1111 = 15  white
  //  1 - 0001 1111 = 31  warm white
  //  2 - 0010 1111 = 47  red
  //  3 - 0011 1111 =     red-orange
  //  4 - 0100 1111 =     orange
  //  5 - 0101 1111 =     yellow
  //  6 - 0110 1111 =     green-yellow
  //  7 - 0111 1111 =     green
  //  8 - 1000 1111 =     turquoise
  //  9 - 1001 1111 =     cyan
  // 10 - 1010 1111 =     deep sky blue
  // 11 - 1011 1111 =     blue
  // 12 - 1100 1111 =     purple
  // 13 - 1101 1111 =     fuchsia
  // 14 - 1110 1111 = 239 magenta
  // 15 - 1111 1111 = 255 neon red

  byte color_escape = (RED << 4) + 7; //red at half brightness
  byte color_numbers = WHITE + 13; //white at high brightness
  byte color_number_1 = WHITE + 13;
  byte color_number_2 = WHITE + 13;
  byte color_number_3 = WHITE + 13;
  byte color_number_4 = WHITE + 13;
  byte color_number_5 = WHITE + 13;
  byte color_number_6 = WHITE + 13;
  byte color_number_7 = WHITE + 13;
  byte color_number_8 = WHITE + 13;
  byte color_number_9 = WHITE + 13;
  byte color_number_0 = WHITE + 13;
  byte color_number_minus = WHITE + 13;
  byte color_number_equals = WHITE + 13;

  byte color_letters = (1 << 4) + 7; //warm white at medium brightness
  byte color_letter_a = (1 << 4) + 7;
  byte color_letter_b = (1 << 4) + 7;
  byte color_letter_c = (1 << 4) + 7;
  byte color_letter_d = (1 << 4) + 7;
  byte color_letter_e = (1 << 4) + 7;
  byte color_letter_f = (1 << 4) + 7;
  byte color_letter_g = (1 << 4) + 7;
  byte color_letter_h = (1 << 4) + 7;
  byte color_letter_i = (1 << 4) + 7;
  byte color_letter_j = (1 << 4) + 7;
  byte color_letter_k = (1 << 4) + 7;
  byte color_letter_l = (1 << 4) + 7;
  byte color_letter_m = (1 << 4) + 7;
  byte color_letter_n = (1 << 4) + 7;
  byte color_letter_o = (1 << 4) + 7;
  byte color_letter_p = (1 << 4) + 7;
  byte color_letter_q = (1 << 4) + 7;
  byte color_letter_r = (1 << 4) + 7;
  byte color_letter_s = (1 << 4) + 7;
  byte color_letter_t = (1 << 4) + 7;
  byte color_letter_u = (1 << 4) + 7;
  byte color_letter_v = (1 << 4) + 7;
  byte color_letter_w = (1 << 4) + 7;
  byte color_letter_x = (1 << 4) + 7;
  byte color_letter_y = (1 << 4) + 7;
  byte color_letter_z = (1 << 4) + 7;

  byte color_punctuation = (1 << 4) + 13;
  byte color_punctuation_backtick = (1 << 4) + 13;
  byte color_punctuation_period = (1 << 4) + 13;
  byte color_punctuation_comma = (1 << 4) + 13;
  byte color_punctuation_semicolon = (1 << 4) + 13;
  byte color_punctuation_quote = (1 << 4) + 13;
  byte color_punctuation_slash = (1 << 4) + 13;

  byte color_brackets = (1 << 4) + 13;
  byte color_bracket_leftbracket = (1 << 4) + 13;
  byte color_bracket_rightbracket = (1 << 4) + 13;
  byte color_bracket_leftcurlybracket = (1 << 4) + 13;
  byte color_bracket_rightcurlybracket = (1 << 4) + 13;

  byte color_backslash = (1 << 4) + 13;
  byte color_pipe = (1 << 4) + 13;
  byte color_space = 11;
  byte color_tab = 12;
  byte color_backspace = (2 << 4) + 9;
  byte color_delete = (2 << 4) + 15;
  byte color_enter = 15; //white at full brightness
  byte color_arrows = 14; //white at high brightness
  byte color_arrow_left = 14;
  byte color_arrow_up = 14;
  byte color_arrow_down = 14;
  byte color_arrow_right = 14;

  byte color_nav = (5 << 4) + 12;
  byte color_nav_home = (5 << 4) + 12;
  byte color_nav_end = (5 << 4) + 12;
  byte color_nav_pageup = (5 << 4) + 12;
  byte color_nav_pagedown = (5 << 4) + 12;

  byte color_insert = (4 << 4) + 12;
  byte color_shift = (8 << 4) + 10;
  byte color_ctrl = (10 << 4) + 10;
  byte color_alt = (7 << 4) + 10;
  //Mac command or Windows logo key
  byte color_cmd = (14 << 4) + 8;
  //application context menu key
  byte color_app = (13 << 4) + 8;
  
  byte color_printscreen = (3 << 4) + 8;
  byte color_pause = (3 << 4) + 8;
  byte color_scrolllock = (3 << 4) + 8;
  byte color_capslock = (3 << 4) + 8;
  
  byte color_fkeys = (15 << 4) + 13;
  byte color_fkey_f1 = (15 << 4) + 13;
  byte color_fkey_f2 = (15 << 4) + 13;
  byte color_fkey_f3 = (15 << 4) + 13;
  byte color_fkey_f4 = (15 << 4) + 13;
  byte color_fkey_f5 = (15 << 4) + 13;
  byte color_fkey_f6 = (15 << 4) + 13;
  byte color_fkey_f7 = (15 << 4) + 13;
  byte color_fkey_f8 = (15 << 4) + 13;
  byte color_fkey_f9 = (15 << 4) + 13;
  byte color_fkey_f10 = (15 << 4) + 13;
  byte color_fkey_f11 = (15 << 4) + 13;
  byte color_fkey_f12 = (15 << 4) + 13;
  byte color_fkey_f13 = (15 << 4) + 13;
  byte color_fkey_f14 = (15 << 4) + 13;
  byte color_fkey_f15 = (15 << 4) + 13;
  byte color_fkey_f16 = (15 << 4) + 13;
  byte color_fkey_f17 = (15 << 4) + 13;
  byte color_fkey_f18 = (15 << 4) + 13;
  byte color_fkey_f19 = (15 << 4) + 13;

  byte color_fn = 8;
  byte color_media = (13 << 4) + 14;
  byte color_media_play = (13 << 4) + 14;
  byte color_media_prev = (13 << 4) + 14;
  byte color_media_next = (13 << 4) + 14;
  byte color_media_stop = (13 << 4) + 14;
  byte color_media_volup = (13 << 4) + 14;
  byte color_media_voldown = (13 << 4) + 14;
  byte color_media_mute = (13 << 4) + 14;

  byte color_led = (11 << 4) + 15;
  byte color_mousemove = (9 << 4) + 14;
  byte color_mousebuttons = (8 << 4) + 15;
  byte color_mousewarp = (9 << 4) + 14;
  byte color_mousescroll = (9 << 4) + 14;




  protected:
  void onActivate(void) final;
  void update(void) final;
  byte dim(byte color, uint8_t brightness);
  cRGB getCRGB(byte colorbrightness);
  void setKeyLed(uint8_t r, uint8_t c);



};

}
