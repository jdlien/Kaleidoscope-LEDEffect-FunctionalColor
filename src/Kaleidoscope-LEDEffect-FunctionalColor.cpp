#include "Kaleidoscope-LEDEffect-FunctionalColor.h"

namespace kaleidoscope {

LEDFunctionalColor::LEDFunctionalColor(uint8_t fLayer) {
  functionLayer = fLayer;
}

LEDFunctionalColor::LEDFunctionalColor(void) {
}

// Allow changing palette colors
void LEDFunctionalColor::changePalette(uint8_t colorIndex, cRGB newColor) {
  if (colorIndex > 15 || colorIndex < 0) {return;}
  palette[colorIndex] = newColor;
}

// Just reduce brighness of everything without changing color
void LEDFunctionalColor::brightness(uint8_t brightness) {
  color_escape = dim(color_escape, brightness);
  color_numbers = dim(color_numbers, brightness);
  color_number_1 = dim(color_number_1, brightness);
  color_number_2 = dim(color_number_2, brightness);
  color_number_3 = dim(color_number_3, brightness);
  color_number_4 = dim(color_number_4, brightness);
  color_number_5 = dim(color_number_5, brightness);
  color_number_6 = dim(color_number_6, brightness);
  color_number_7 = dim(color_number_7, brightness);
  color_number_8 = dim(color_number_8, brightness);
  color_number_9 = dim(color_number_9, brightness);
  color_number_0 = dim(color_number_0, brightness);
  color_number_minus = dim(color_number_minus, brightness);
  color_number_equals = dim(color_number_equals, brightness);
  color_letters = dim(color_letters, brightness);
  color_letter_a = dim(color_letter_a, brightness);
  color_letter_b = dim(color_letter_b, brightness);
  color_letter_c = dim(color_letter_c, brightness);
  color_letter_d = dim(color_letter_d, brightness);
  color_letter_e = dim(color_letter_e, brightness);
  color_letter_f = dim(color_letter_f, brightness);
  color_letter_g = dim(color_letter_g, brightness);
  color_letter_h = dim(color_letter_h, brightness);
  color_letter_i = dim(color_letter_i, brightness);
  color_letter_j = dim(color_letter_j, brightness);
  color_letter_k = dim(color_letter_k, brightness);
  color_letter_l = dim(color_letter_l, brightness);
  color_letter_m = dim(color_letter_m, brightness);
  color_letter_n = dim(color_letter_n, brightness);
  color_letter_o = dim(color_letter_o, brightness);
  color_letter_p = dim(color_letter_p, brightness);
  color_letter_q = dim(color_letter_q, brightness);
  color_letter_r = dim(color_letter_r, brightness);
  color_letter_s = dim(color_letter_s, brightness);
  color_letter_t = dim(color_letter_t, brightness);
  color_letter_u = dim(color_letter_u, brightness);
  color_letter_v = dim(color_letter_v, brightness);
  color_letter_w = dim(color_letter_w, brightness);
  color_letter_x = dim(color_letter_x, brightness);
  color_letter_y = dim(color_letter_y, brightness);
  color_letter_z = dim(color_letter_z, brightness);
  color_punctuation = dim(color_punctuation, brightness);
  color_punctuation_backtick = dim(color_punctuation_backtick, brightness);
  color_punctuation_period = dim(color_punctuation_period, brightness);
  color_punctuation_comma = dim(color_punctuation_comma, brightness);
  color_punctuation_semicolon = dim(color_punctuation_semicolon, brightness);
  color_punctuation_quote = dim(color_punctuation_quote, brightness);
  color_punctuation_slash = dim(color_punctuation_slash, brightness);
  color_brackets = dim(color_brackets, brightness);
  color_bracket_leftbracket = dim(color_bracket_leftbracket, brightness);
  color_bracket_rightbracket = dim(color_bracket_rightbracket, brightness);
  color_bracket_leftcurlybracket = dim(color_bracket_leftcurlybracket, brightness);
  color_bracket_rightcurlybracket = dim(color_bracket_rightcurlybracket, brightness);
  color_backslash = dim(color_backslash, brightness);
  color_pipe = dim(color_pipe, brightness);
  color_tab = dim(color_tab, brightness);
  color_backspace = dim(color_backspace, brightness);
  color_space = dim(color_space, brightness);
  color_delete = dim(color_delete, brightness);
  color_enter = dim(color_enter, brightness);
  color_arrows = dim(color_arrows, brightness);
  color_arrow_left = dim(color_arrow_left, brightness);
  color_arrow_up = dim(color_arrow_up, brightness);
  color_arrow_down = dim(color_arrow_down, brightness);
  color_arrow_right = dim(color_arrow_right, brightness);
  color_nav = dim(color_nav, brightness);
  color_nav_home = dim(color_nav_home, brightness);
  color_nav_end = dim(color_nav_end, brightness);
  color_nav_pageup = dim(color_nav_pageup, brightness);
  color_nav_pagedown = dim(color_nav_pagedown, brightness);
  color_insert = dim(color_insert, brightness);
  color_shift = dim(color_shift, brightness);
  color_ctrl = dim(color_ctrl, brightness);
  color_alt = dim(color_alt, brightness);
  color_cmd = dim(color_cmd, brightness);
  color_app = dim(color_app, brightness);
  color_printscreen = dim(color_printscreen, brightness);
  color_pause = dim(color_pause, brightness);
  color_scrolllock = dim(color_scrolllock, brightness);
  color_capslock = dim(color_capslock, brightness);
  color_fkeys = dim(color_fkeys, brightness);
  color_fkey_f1 = dim(color_fkey_f1, brightness);
  color_fkey_f2 = dim(color_fkey_f2, brightness);
  color_fkey_f3 = dim(color_fkey_f3, brightness);
  color_fkey_f4 = dim(color_fkey_f4, brightness);
  color_fkey_f5 = dim(color_fkey_f5, brightness);
  color_fkey_f6 = dim(color_fkey_f6, brightness);
  color_fkey_f7 = dim(color_fkey_f7, brightness);
  color_fkey_f8 = dim(color_fkey_f8, brightness);
  color_fkey_f9 = dim(color_fkey_f9, brightness);
  color_fkey_f10 = dim(color_fkey_f10, brightness);
  color_fkey_f11 = dim(color_fkey_f11, brightness);
  color_fkey_f12 = dim(color_fkey_f12, brightness);
  color_fkey_f13 = dim(color_fkey_f13, brightness);
  color_fkey_f14 = dim(color_fkey_f14, brightness);
  color_fkey_f15 = dim(color_fkey_f15, brightness);
  color_fkey_f16 = dim(color_fkey_f16, brightness);
  color_fkey_f17 = dim(color_fkey_f17, brightness);
  color_fkey_f18 = dim(color_fkey_f18, brightness);
  color_fkey_f19 = dim(color_fkey_f19, brightness);
  color_fn = dim(color_fn, brightness);
  color_media = dim(color_media, brightness);
  color_media_play = dim(color_media_play, brightness);
  color_media_prev = dim(color_media_prev, brightness);
  color_media_next = dim(color_media_next, brightness);
  color_media_stop = dim(color_media_stop, brightness);
  color_media_volup = dim(color_media_volup, brightness);
  color_media_voldown = dim(color_media_voldown, brightness);
  color_media_mute = dim(color_media_mute, brightness);
  color_led = dim(color_led, brightness);
  color_mousemove = dim(color_mousemove, brightness);
  color_mousebuttons = dim(color_mousebuttons, brightness);
  color_mousewarp = dim(color_mousewarp, brightness);
  color_mousescroll = dim(color_mousescroll, brightness);
}

// Sets all the colors to a color index without brightness
void LEDFunctionalColor::all(uint8_t color){
  byte colorbrightness = (color << 4) + 15;
  color_escape = colorbrightness;
  color_numbers = colorbrightness;
  color_number_1 = colorbrightness;
  color_number_2 = colorbrightness;
  color_number_3 = colorbrightness;
  color_number_4 = colorbrightness;
  color_number_5 = colorbrightness;
  color_number_6 = colorbrightness;
  color_number_7 = colorbrightness;
  color_number_8 = colorbrightness;
  color_number_9 = colorbrightness;
  color_number_0 = colorbrightness;
  color_number_minus = colorbrightness;
  color_number_equals = colorbrightness;
  color_letters = colorbrightness;
  color_letter_a = colorbrightness;
  color_letter_b = colorbrightness;
  color_letter_c = colorbrightness;
  color_letter_d = colorbrightness;
  color_letter_e = colorbrightness;
  color_letter_f = colorbrightness;
  color_letter_g = colorbrightness;
  color_letter_h = colorbrightness;
  color_letter_i = colorbrightness;
  color_letter_j = colorbrightness;
  color_letter_k = colorbrightness;
  color_letter_l = colorbrightness;
  color_letter_m = colorbrightness;
  color_letter_n = colorbrightness;
  color_letter_o = colorbrightness;
  color_letter_p = colorbrightness;
  color_letter_q = colorbrightness;
  color_letter_r = colorbrightness;
  color_letter_s = colorbrightness;
  color_letter_t = colorbrightness;
  color_letter_u = colorbrightness;
  color_letter_v = colorbrightness;
  color_letter_w = colorbrightness;
  color_letter_x = colorbrightness;
  color_letter_y = colorbrightness;
  color_letter_z = colorbrightness;
  color_punctuation = colorbrightness;
  color_punctuation_backtick = colorbrightness;
  color_punctuation_period = colorbrightness;
  color_punctuation_comma = colorbrightness;
  color_punctuation_semicolon = colorbrightness;
  color_punctuation_quote = colorbrightness;
  color_punctuation_slash = colorbrightness;
  color_brackets = colorbrightness;
  color_bracket_leftbracket = colorbrightness;
  color_bracket_rightbracket = colorbrightness;
  color_bracket_leftcurlybracket = colorbrightness;
  color_bracket_rightcurlybracket = colorbrightness;
  color_backslash = colorbrightness;
  color_pipe = colorbrightness;
  color_tab = colorbrightness;
  color_backspace = colorbrightness;
  color_space = colorbrightness;
  color_delete = colorbrightness;
  color_enter = colorbrightness;
  color_arrows = colorbrightness;
  color_arrow_left = colorbrightness;
  color_arrow_up = colorbrightness;
  color_arrow_down = colorbrightness;
  color_arrow_right = colorbrightness;
  color_nav = colorbrightness;
  color_nav_home = colorbrightness;
  color_nav_end = colorbrightness;
  color_nav_pageup = colorbrightness;
  color_nav_pagedown = colorbrightness;
  color_insert = colorbrightness;
  color_shift = colorbrightness;
  color_ctrl = colorbrightness;
  color_alt = colorbrightness;
  color_cmd = colorbrightness;
  color_app = colorbrightness;
  color_printscreen = colorbrightness;
  color_pause = colorbrightness;
  color_scrolllock = colorbrightness;
  color_capslock = colorbrightness;
  color_fkeys = colorbrightness;
  color_fkey_f1 = colorbrightness;
  color_fkey_f2 = colorbrightness;
  color_fkey_f3 = colorbrightness;
  color_fkey_f4 = colorbrightness;
  color_fkey_f5 = colorbrightness;
  color_fkey_f6 = colorbrightness;
  color_fkey_f7 = colorbrightness;
  color_fkey_f8 = colorbrightness;
  color_fkey_f9 = colorbrightness;
  color_fkey_f10 = colorbrightness;
  color_fkey_f11 = colorbrightness;
  color_fkey_f12 = colorbrightness;
  color_fkey_f13 = colorbrightness;
  color_fkey_f14 = colorbrightness;
  color_fkey_f15 = colorbrightness;
  color_fkey_f16 = colorbrightness;
  color_fkey_f17 = colorbrightness;
  color_fkey_f18 = colorbrightness;
  color_fkey_f19 = colorbrightness;
  color_fn = colorbrightness;
  color_media = colorbrightness;
  color_media_play = colorbrightness;
  color_media_prev = colorbrightness;
  color_media_next = colorbrightness;
  color_media_stop = colorbrightness;
  color_media_volup = colorbrightness;
  color_media_voldown = colorbrightness;
  color_media_mute = colorbrightness;
  color_led = colorbrightness;
  color_mousemove = colorbrightness;
  color_mousebuttons = colorbrightness;
  color_mousewarp = colorbrightness;
  color_mousescroll = colorbrightness;
}

// Color keys that aren't letters, numbers, or punctuation
void LEDFunctionalColor::allModifiers(uint8_t color) {
  byte colorbrightness = (color << 4) + 15;
  color_escape = colorbrightness;
  color_backspace = colorbrightness;
  color_delete = colorbrightness;
  color_enter = colorbrightness;
  color_arrows = colorbrightness;
  color_nav = colorbrightness;
  color_insert = colorbrightness;
  color_shift = colorbrightness;
  color_ctrl = colorbrightness;
  color_alt = colorbrightness;
  color_cmd = colorbrightness;
  color_app = colorbrightness;
  color_printscreen = colorbrightness;
  color_pause = colorbrightness;
  color_scrolllock = colorbrightness;
  color_capslock = colorbrightness;
  color_fkeys = colorbrightness;
  color_fn = colorbrightness;
}

void LEDFunctionalColor::allMouse(uint8_t color){
  byte colorbrightness = (color << 4) + 15;
  color_mousemove = colorbrightness;
  color_mousebuttons = colorbrightness;
  color_mousewarp = colorbrightness;
  color_mousescroll = colorbrightness;
}

void LEDFunctionalColor::escape(uint8_t color) {
  color_escape = (color << 4) + 15;
}

void LEDFunctionalColor::numbers(uint8_t color){
  byte colorbrightness = (color << 4) + 15;
  color_numbers = colorbrightness;
  color_number_1 = colorbrightness;
  color_number_2 = colorbrightness;
  color_number_3 = colorbrightness;
  color_number_4 = colorbrightness;
  color_number_5 = colorbrightness;
  color_number_6 = colorbrightness;
  color_number_7 = colorbrightness;
  color_number_8 = colorbrightness;
  color_number_9 = colorbrightness;
  color_number_0 = colorbrightness;
  color_number_minus = colorbrightness;
  color_number_equals = colorbrightness;
}

void LEDFunctionalColor::letters(uint8_t color){
  byte colorbrightness = (color << 4) + 15;
  color_letters = colorbrightness;
  color_letter_a = colorbrightness;
  color_letter_b = colorbrightness;
  color_letter_c = colorbrightness;
  color_letter_d = colorbrightness;
  color_letter_e = colorbrightness;
  color_letter_f = colorbrightness;
  color_letter_g = colorbrightness;
  color_letter_h = colorbrightness;
  color_letter_i = colorbrightness;
  color_letter_j = colorbrightness;
  color_letter_k = colorbrightness;
  color_letter_l = colorbrightness;
  color_letter_m = colorbrightness;
  color_letter_n = colorbrightness;
  color_letter_o = colorbrightness;
  color_letter_p = colorbrightness;
  color_letter_q = colorbrightness;
  color_letter_r = colorbrightness;
  color_letter_s = colorbrightness;
  color_letter_t = colorbrightness;
  color_letter_u = colorbrightness;
  color_letter_v = colorbrightness;
  color_letter_w = colorbrightness;
  color_letter_x = colorbrightness;
  color_letter_y = colorbrightness;
  color_letter_z = colorbrightness;
}

void LEDFunctionalColor::punctuation(uint8_t color){
  byte colorbrightness = (color << 4) + 15;
  color_punctuation = colorbrightness;
  color_punctuation_backtick = colorbrightness;
  color_punctuation_period = colorbrightness;
  color_punctuation_comma = colorbrightness;
  color_punctuation_semicolon = colorbrightness;
  color_punctuation_quote = colorbrightness;
  color_punctuation_slash = colorbrightness;
}

void LEDFunctionalColor::brackets(uint8_t color){
  byte colorbrightness = (color << 4) + 15;
  color_brackets = colorbrightness;
  color_bracket_leftbracket = colorbrightness;
  color_bracket_rightbracket = colorbrightness;
  color_bracket_leftcurlybracket = colorbrightness;
  color_bracket_rightcurlybracket = colorbrightness;
}

void LEDFunctionalColor::backslash(uint8_t color){
  color_backslash = (color << 4) + 15;
}

void LEDFunctionalColor::pipe(uint8_t color){
  color_pipe = (color << 4) + 15;
}

void LEDFunctionalColor::tab(uint8_t color){
  color_tab = (color << 4) + 15;
}

void LEDFunctionalColor::backspace(uint8_t color){
  color_backspace = (color << 4) + 15;
}

void LEDFunctionalColor::space(uint8_t color){
  color_space = (color << 4) + 15;
}

void LEDFunctionalColor::del(uint8_t color){
  color_delete = (color << 4) + 15;
}

void LEDFunctionalColor::enter(uint8_t color){
  color_enter = (color << 4) + 15;
}

void LEDFunctionalColor::arrows(uint8_t color){
  color_arrows = color;
  color_arrow_left = color;
  color_arrow_up = color;
  color_arrow_down = color;
  color_arrow_right = color;
}

void LEDFunctionalColor::nav(uint8_t color){
  byte colorbrightness = (color << 4) + 15;
  color_nav = colorbrightness;
  color_nav_home = colorbrightness;
  color_nav_end = colorbrightness;
  color_nav_pageup = colorbrightness;
  color_nav_pagedown = colorbrightness;

}

void LEDFunctionalColor::insert(uint8_t color){
  color_insert = (color << 4) + 15;
}

void LEDFunctionalColor::shift(uint8_t color){
  color_shift = (color << 4) + 15;
}

void LEDFunctionalColor::ctrl(uint8_t color){
  color_ctrl = (color << 4) + 15;
}

void LEDFunctionalColor::alt(uint8_t color){
  color_alt = (color << 4) + 15;
}

void LEDFunctionalColor::cmd(uint8_t color){
  color_cmd = (color << 4) + 15;
}

void LEDFunctionalColor::app(uint8_t color){
  color_app = (color << 4) + 15;
}

void LEDFunctionalColor::printscreen(uint8_t color){
  color_printscreen = (color << 4) + 15;
}

void LEDFunctionalColor::pause(uint8_t color){
  color_pause = (color << 4) + 15;
}

void LEDFunctionalColor::scrolllock(uint8_t color){
  color_scrolllock = (color << 4) + 15;
}

void LEDFunctionalColor::capslock(uint8_t color){
  color_capslock = (color << 4) + 15;
}

void LEDFunctionalColor::fkeys(uint8_t color){
  byte colorbrightness = (color << 4) + 15;
  color_fkeys = colorbrightness;
  color_fkey_f1 = colorbrightness;
  color_fkey_f2 = colorbrightness;
  color_fkey_f3 = colorbrightness;
  color_fkey_f4 = colorbrightness;
  color_fkey_f5 = colorbrightness;
  color_fkey_f6 = colorbrightness;
  color_fkey_f7 = colorbrightness;
  color_fkey_f8 = colorbrightness;
  color_fkey_f9 = colorbrightness;
  color_fkey_f10 = colorbrightness;
  color_fkey_f11 = colorbrightness;
  color_fkey_f12 = colorbrightness;
  color_fkey_f13 = colorbrightness;
  color_fkey_f14 = colorbrightness;
  color_fkey_f15 = colorbrightness;
  color_fkey_f16 = colorbrightness;
  color_fkey_f17 = colorbrightness;
  color_fkey_f18 = colorbrightness;
  color_fkey_f19 = colorbrightness;
}

void LEDFunctionalColor::fn(uint8_t color){
  color_fn = (color << 4) + 15;
}

void LEDFunctionalColor::media(uint8_t color){
  byte colorbrightness = (color << 4) + 15;
  color_media = colorbrightness;
  color_media_play = colorbrightness;
  color_media_prev = colorbrightness;
  color_media_next = colorbrightness;
  color_media_stop = colorbrightness;
  color_media_volup = colorbrightness;
  color_media_voldown = colorbrightness;
  color_media_mute = colorbrightness;
}

void LEDFunctionalColor::led(uint8_t color){
  color_led = (color << 4) + 15;
}

void LEDFunctionalColor::mousemove(uint8_t color){
  color_mousemove = (color << 4) + 15;
}

void LEDFunctionalColor::mousebuttons(uint8_t color){
  color_mousebuttons = (color << 4) + 15;
}

void LEDFunctionalColor::mousewarp(uint8_t color){
  color_mousewarp = (color << 4) + 15;
}

void LEDFunctionalColor::mousescroll(uint8_t color){
  color_mousescroll = (color << 4) + 15;
}

// All the new individual key functions
void LEDFunctionalColor::number_1(uint8_t color){color_number_1 = (color << 4) + 15;}
void LEDFunctionalColor::number_2(uint8_t color){color_number_2 = (color << 4) + 15;}
void LEDFunctionalColor::number_3(uint8_t color){color_number_3 = (color << 4) + 15;}
void LEDFunctionalColor::number_4(uint8_t color){color_number_4 = (color << 4) + 15;}
void LEDFunctionalColor::number_5(uint8_t color){color_number_5 = (color << 4) + 15;}
void LEDFunctionalColor::number_6(uint8_t color){color_number_6 = (color << 4) + 15;}
void LEDFunctionalColor::number_7(uint8_t color){color_number_7 = (color << 4) + 15;}
void LEDFunctionalColor::number_8(uint8_t color){color_number_8 = (color << 4) + 15;}
void LEDFunctionalColor::number_9(uint8_t color){color_number_9 = (color << 4) + 15;}
void LEDFunctionalColor::number_0(uint8_t color){color_number_0 = (color << 4) + 15;}
void LEDFunctionalColor::number_minus(uint8_t color){color_number_minus = (color << 4) + 15;}
void LEDFunctionalColor::number_equals(uint8_t color){color_number_equals = (color << 4) + 15;}
void LEDFunctionalColor::letter_a(uint8_t color){color_letter_a = (color << 4) + 15;}
void LEDFunctionalColor::letter_b(uint8_t color){color_letter_b = (color << 4) + 15;}
void LEDFunctionalColor::letter_c(uint8_t color){color_letter_c = (color << 4) + 15;}
void LEDFunctionalColor::letter_d(uint8_t color){color_letter_d = (color << 4) + 15;}
void LEDFunctionalColor::letter_e(uint8_t color){color_letter_e = (color << 4) + 15;}
void LEDFunctionalColor::letter_f(uint8_t color){color_letter_f = (color << 4) + 15;}
void LEDFunctionalColor::letter_g(uint8_t color){color_letter_g = (color << 4) + 15;}
void LEDFunctionalColor::letter_h(uint8_t color){color_letter_h = (color << 4) + 15;}
void LEDFunctionalColor::letter_i(uint8_t color){color_letter_i = (color << 4) + 15;}
void LEDFunctionalColor::letter_j(uint8_t color){color_letter_j = (color << 4) + 15;}
void LEDFunctionalColor::letter_k(uint8_t color){color_letter_k = (color << 4) + 15;}
void LEDFunctionalColor::letter_l(uint8_t color){color_letter_l = (color << 4) + 15;}
void LEDFunctionalColor::letter_m(uint8_t color){color_letter_m = (color << 4) + 15;}
void LEDFunctionalColor::letter_n(uint8_t color){color_letter_n = (color << 4) + 15;}
void LEDFunctionalColor::letter_o(uint8_t color){color_letter_o = (color << 4) + 15;}
void LEDFunctionalColor::letter_p(uint8_t color){color_letter_p = (color << 4) + 15;}
void LEDFunctionalColor::letter_q(uint8_t color){color_letter_q = (color << 4) + 15;}
void LEDFunctionalColor::letter_r(uint8_t color){color_letter_r = (color << 4) + 15;}
void LEDFunctionalColor::letter_s(uint8_t color){color_letter_s = (color << 4) + 15;}
void LEDFunctionalColor::letter_t(uint8_t color){color_letter_t = (color << 4) + 15;}
void LEDFunctionalColor::letter_u(uint8_t color){color_letter_u = (color << 4) + 15;}
void LEDFunctionalColor::letter_v(uint8_t color){color_letter_v = (color << 4) + 15;}
void LEDFunctionalColor::letter_w(uint8_t color){color_letter_w = (color << 4) + 15;}
void LEDFunctionalColor::letter_x(uint8_t color){color_letter_x = (color << 4) + 15;}
void LEDFunctionalColor::letter_y(uint8_t color){color_letter_y = (color << 4) + 15;}
void LEDFunctionalColor::letter_z(uint8_t color){color_letter_z = (color << 4) + 15;}
void LEDFunctionalColor::punctuation_backtick(uint8_t color){color_punctuation_backtick = (color << 4) + 15;}
void LEDFunctionalColor::punctuation_period(uint8_t color){color_punctuation_period = (color << 4) + 15;}
void LEDFunctionalColor::punctuation_comma(uint8_t color){color_punctuation_comma = (color << 4) + 15;}
void LEDFunctionalColor::punctuation_semicolon(uint8_t color){color_punctuation_semicolon = (color << 4) + 15;}
void LEDFunctionalColor::punctuation_quote(uint8_t color){color_punctuation_quote = (color << 4) + 15;}
void LEDFunctionalColor::punctuation_slash(uint8_t color){color_punctuation_slash = (color << 4) + 15;}
void LEDFunctionalColor::bracket_leftbracket(uint8_t color){color_bracket_leftbracket = (color << 4) + 15;}
void LEDFunctionalColor::bracket_rightbracket(uint8_t color){color_bracket_rightbracket = (color << 4) + 15;}
void LEDFunctionalColor::bracket_leftcurlybracket(uint8_t color){color_bracket_leftcurlybracket = (color << 4) + 15;}
void LEDFunctionalColor::bracket_rightcurlybracket(uint8_t color){color_bracket_rightcurlybracket = (color << 4) + 15;}
void LEDFunctionalColor::arrow_left(uint8_t color){color_arrow_left = (color << 4) + 15;}
void LEDFunctionalColor::arrow_up(uint8_t color){color_arrow_up = (color << 4) + 15;}
void LEDFunctionalColor::arrow_down(uint8_t color){color_arrow_down = (color << 4) + 15;}
void LEDFunctionalColor::arrow_right(uint8_t color){color_arrow_right = (color << 4) + 15;}
void LEDFunctionalColor::nav_home(uint8_t color){color_nav_home = (color << 4) + 15;}
void LEDFunctionalColor::nav_end(uint8_t color){color_nav_end = (color << 4) + 15;}
void LEDFunctionalColor::nav_pageup(uint8_t color){color_nav_pageup = (color << 4) + 15;}
void LEDFunctionalColor::nav_pagedown(uint8_t color){color_nav_pagedown = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f1(uint8_t color){color_fkey_f1 = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f2(uint8_t color){color_fkey_f2 = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f3(uint8_t color){color_fkey_f3 = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f4(uint8_t color){color_fkey_f4 = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f5(uint8_t color){color_fkey_f5 = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f6(uint8_t color){color_fkey_f6 = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f7(uint8_t color){color_fkey_f7 = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f8(uint8_t color){color_fkey_f8 = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f9(uint8_t color){color_fkey_f9 = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f10(uint8_t color){color_fkey_f10 = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f11(uint8_t color){color_fkey_f11 = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f12(uint8_t color){color_fkey_f12 = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f13(uint8_t color){color_fkey_f13 = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f14(uint8_t color){color_fkey_f14 = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f15(uint8_t color){color_fkey_f15 = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f16(uint8_t color){color_fkey_f16 = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f17(uint8_t color){color_fkey_f17 = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f18(uint8_t color){color_fkey_f18 = (color << 4) + 15;}
void LEDFunctionalColor::fkey_f19(uint8_t color){color_fkey_f19 = (color << 4) + 15;}
void LEDFunctionalColor::media_play(uint8_t color){color_media_play = (color << 4) + 15;}
void LEDFunctionalColor::media_prev(uint8_t color){color_media_prev = (color << 4) + 15;}
void LEDFunctionalColor::media_next(uint8_t color){color_media_next = (color << 4) + 15;}
void LEDFunctionalColor::media_stop(uint8_t color){color_media_stop = (color << 4) + 15;}
void LEDFunctionalColor::media_volup(uint8_t color){color_media_volup = (color << 4) + 15;}
void LEDFunctionalColor::media_voldown(uint8_t color){color_media_voldown = (color << 4) + 15;}
void LEDFunctionalColor::media_mute(uint8_t color){color_media_mute = (color << 4) + 15;}





// Now all the versions that set brightness

// Sets all the colors to the same thing
void LEDFunctionalColor::all(uint8_t color, uint8_t brightness){
  byte colorbrightness = (color << 4) + brightness;
  color_escape = colorbrightness;
  color_numbers = colorbrightness;
  color_number_1 = colorbrightness;
  color_number_2 = colorbrightness;
  color_number_3 = colorbrightness;
  color_number_4 = colorbrightness;
  color_number_5 = colorbrightness;
  color_number_6 = colorbrightness;
  color_number_7 = colorbrightness;
  color_number_8 = colorbrightness;
  color_number_9 = colorbrightness;
  color_number_0 = colorbrightness;
  color_number_minus = colorbrightness;
  color_number_equals = colorbrightness;
  color_letters = colorbrightness;
  color_letter_a = colorbrightness;
  color_letter_b = colorbrightness;
  color_letter_c = colorbrightness;
  color_letter_d = colorbrightness;
  color_letter_e = colorbrightness;
  color_letter_f = colorbrightness;
  color_letter_g = colorbrightness;
  color_letter_h = colorbrightness;
  color_letter_i = colorbrightness;
  color_letter_j = colorbrightness;
  color_letter_k = colorbrightness;
  color_letter_l = colorbrightness;
  color_letter_m = colorbrightness;
  color_letter_n = colorbrightness;
  color_letter_o = colorbrightness;
  color_letter_p = colorbrightness;
  color_letter_q = colorbrightness;
  color_letter_r = colorbrightness;
  color_letter_s = colorbrightness;
  color_letter_t = colorbrightness;
  color_letter_u = colorbrightness;
  color_letter_v = colorbrightness;
  color_letter_w = colorbrightness;
  color_letter_x = colorbrightness;
  color_letter_y = colorbrightness;
  color_letter_z = colorbrightness;
  color_punctuation = colorbrightness;
  color_punctuation_backtick = colorbrightness;
  color_punctuation_period = colorbrightness;
  color_punctuation_comma = colorbrightness;
  color_punctuation_semicolon = colorbrightness;
  color_punctuation_quote = colorbrightness;
  color_punctuation_slash = colorbrightness;
  color_brackets = colorbrightness;
  color_bracket_leftbracket = colorbrightness;
  color_bracket_rightbracket = colorbrightness;
  color_bracket_leftcurlybracket = colorbrightness;
  color_bracket_rightcurlybracket = colorbrightness;
  color_backslash = colorbrightness;
  color_pipe = colorbrightness;
  color_tab = colorbrightness;
  color_space = colorbrightness;
  color_backspace = colorbrightness;
  color_delete = colorbrightness;
  color_enter = colorbrightness;
  color_arrows = colorbrightness;
  color_arrow_left = colorbrightness;
  color_arrow_up = colorbrightness;
  color_arrow_down = colorbrightness;
  color_arrow_right = colorbrightness;
  color_nav = colorbrightness;
  color_nav_home = colorbrightness;
  color_nav_end = colorbrightness;
  color_nav_pageup = colorbrightness;
  color_nav_pagedown = colorbrightness;
  color_insert = colorbrightness;
  color_shift = colorbrightness;
  color_ctrl = colorbrightness;
  color_alt = colorbrightness;
  color_cmd = colorbrightness;
  color_app = colorbrightness;
  color_printscreen = colorbrightness;
  color_pause = colorbrightness;
  color_scrolllock = colorbrightness;
  color_capslock = colorbrightness;
  color_fkeys = colorbrightness;
  color_fkey_f1 = colorbrightness;
  color_fkey_f2 = colorbrightness;
  color_fkey_f3 = colorbrightness;
  color_fkey_f4 = colorbrightness;
  color_fkey_f5 = colorbrightness;
  color_fkey_f6 = colorbrightness;
  color_fkey_f7 = colorbrightness;
  color_fkey_f8 = colorbrightness;
  color_fkey_f9 = colorbrightness;
  color_fkey_f10 = colorbrightness;
  color_fkey_f11 = colorbrightness;
  color_fkey_f12 = colorbrightness;
  color_fkey_f13 = colorbrightness;
  color_fkey_f14 = colorbrightness;
  color_fkey_f15 = colorbrightness;
  color_fkey_f16 = colorbrightness;
  color_fkey_f17 = colorbrightness;
  color_fkey_f18 = colorbrightness;
  color_fkey_f19 = colorbrightness;
  color_fn = colorbrightness;
  color_media = colorbrightness;
  color_media_play = colorbrightness;
  color_media_prev = colorbrightness;
  color_media_next = colorbrightness;
  color_media_stop = colorbrightness;
  color_media_volup = colorbrightness;
  color_media_voldown = colorbrightness;
  color_media_mute = colorbrightness;
  color_led = colorbrightness;
  color_mousemove = colorbrightness;
  color_mousebuttons = colorbrightness;
  color_mousewarp = colorbrightness;
  color_mousescroll = colorbrightness;
}

// Color keys that aren't letters, numbers, or punctuation
void LEDFunctionalColor::allModifiers(uint8_t color, uint8_t brightness) {
  byte colorbrightness = (color << 4) + brightness;
  color_escape = colorbrightness;
  color_backspace = colorbrightness;
  color_delete = colorbrightness;
  color_enter = colorbrightness;
  color_arrows = colorbrightness;
  color_nav = colorbrightness;
  color_insert = colorbrightness;
  color_shift = colorbrightness;
  color_ctrl = colorbrightness;
  color_alt = colorbrightness;
  color_cmd = colorbrightness;
  color_app = colorbrightness;
  color_printscreen = colorbrightness;
  color_pause = colorbrightness;
  color_scrolllock = colorbrightness;
  color_capslock = colorbrightness;
  color_fkeys = colorbrightness;
  color_fn = colorbrightness;
}

void LEDFunctionalColor::allMouse(uint8_t color, uint8_t brightness){
  byte colorbrightness = (color << 4) + brightness;
  color_mousemove = colorbrightness;
  color_mousebuttons = colorbrightness;
  color_mousewarp = colorbrightness;
  color_mousescroll = colorbrightness;
}

void LEDFunctionalColor::escape(uint8_t color, uint8_t brightness) {
  color_escape = (color << 4) + brightness;
}

void LEDFunctionalColor::numbers(uint8_t color, uint8_t brightness){
  byte colorbrightness = (color << 4) + brightness;
  color_numbers = colorbrightness;
  color_number_1 = colorbrightness;
  color_number_2 = colorbrightness;
  color_number_3 = colorbrightness;
  color_number_4 = colorbrightness;
  color_number_5 = colorbrightness;
  color_number_6 = colorbrightness;
  color_number_7 = colorbrightness;
  color_number_8 = colorbrightness;
  color_number_9 = colorbrightness;
  color_number_0 = colorbrightness;
  color_number_minus = colorbrightness;
  color_number_equals = colorbrightness;
}

void LEDFunctionalColor::letters(uint8_t color, uint8_t brightness){
  byte colorbrightness = (color << 4) + brightness;
  color_letters = colorbrightness;
  color_letter_a = colorbrightness;
  color_letter_b = colorbrightness;
  color_letter_c = colorbrightness;
  color_letter_d = colorbrightness;
  color_letter_e = colorbrightness;
  color_letter_f = colorbrightness;
  color_letter_g = colorbrightness;
  color_letter_h = colorbrightness;
  color_letter_i = colorbrightness;
  color_letter_j = colorbrightness;
  color_letter_k = colorbrightness;
  color_letter_l = colorbrightness;
  color_letter_m = colorbrightness;
  color_letter_n = colorbrightness;
  color_letter_o = colorbrightness;
  color_letter_p = colorbrightness;
  color_letter_q = colorbrightness;
  color_letter_r = colorbrightness;
  color_letter_s = colorbrightness;
  color_letter_t = colorbrightness;
  color_letter_u = colorbrightness;
  color_letter_v = colorbrightness;
  color_letter_w = colorbrightness;
  color_letter_x = colorbrightness;
  color_letter_y = colorbrightness;
  color_letter_z = colorbrightness;
}

void LEDFunctionalColor::punctuation(uint8_t color, uint8_t brightness){
  byte colorbrightness = (color << 4) + brightness;
  color_punctuation = colorbrightness;
  color_punctuation_backtick = colorbrightness;
  color_punctuation_period = colorbrightness;
  color_punctuation_comma = colorbrightness;
  color_punctuation_semicolon = colorbrightness;
  color_punctuation_quote = colorbrightness;
  color_punctuation_slash = colorbrightness;
}

void LEDFunctionalColor::brackets(uint8_t color, uint8_t brightness){
  byte colorbrightness = (color << 4) + brightness;
  color_brackets = colorbrightness;
  color_bracket_leftbracket = colorbrightness;
  color_bracket_rightbracket = colorbrightness;
  color_bracket_leftcurlybracket = colorbrightness;
  color_bracket_rightcurlybracket = colorbrightness;
}

void LEDFunctionalColor::backslash(uint8_t color, uint8_t brightness){
  color_backslash = (color << 4) + brightness;
}

void LEDFunctionalColor::pipe(uint8_t color, uint8_t brightness){
  color_pipe = (color << 4) + brightness;
}

void LEDFunctionalColor::tab(uint8_t color, uint8_t brightness){
  color_tab = (color << 4) + brightness;
}

void LEDFunctionalColor::backspace(uint8_t color, uint8_t brightness){
  color_backspace = (color << 4) + brightness;
}

void LEDFunctionalColor::space(uint8_t color, uint8_t brightness){
  color_space = (color << 4) + brightness;
}

void LEDFunctionalColor::del(uint8_t color, uint8_t brightness){
  color_delete = (color << 4) + brightness;
}

void LEDFunctionalColor::enter(uint8_t color, uint8_t brightness){
  color_enter = (color << 4) + brightness;
}

void LEDFunctionalColor::arrows(uint8_t color, uint8_t brightness){
  color_arrows = (color << 4) + brightness;
  color_arrow_left = (color << 4) + brightness;
  color_arrow_up = (color << 4) + brightness;
  color_arrow_down = (color << 4) + brightness;
  color_arrow_right = (color << 4) + brightness;
}

void LEDFunctionalColor::nav(uint8_t color, uint8_t brightness){
  color_nav = (color << 4) + brightness;
  color_nav_home = (color << 4) + brightness;
  color_nav_end = (color << 4) + brightness;
  color_nav_pageup = (color << 4) + brightness;
  color_nav_pagedown = (color << 4) + brightness;
}

void LEDFunctionalColor::insert(uint8_t color, uint8_t brightness){
  color_insert = (color << 4) + brightness;
}

void LEDFunctionalColor::shift(uint8_t color, uint8_t brightness){
  color_shift = (color << 4) + brightness;
}

void LEDFunctionalColor::ctrl(uint8_t color, uint8_t brightness){
  color_ctrl = (color << 4) + brightness;
}

void LEDFunctionalColor::alt(uint8_t color, uint8_t brightness){
  color_alt = (color << 4) + brightness;
}

void LEDFunctionalColor::cmd(uint8_t color, uint8_t brightness){
  color_cmd = (color << 4) + brightness;
}

void LEDFunctionalColor::app(uint8_t color, uint8_t brightness){
  color_app = (color << 4) + brightness;
}

void LEDFunctionalColor::printscreen(uint8_t color, uint8_t brightness){
  color_printscreen = (color << 4) + brightness;
}

void LEDFunctionalColor::pause(uint8_t color, uint8_t brightness){
  color_pause = (color << 4) + brightness;
}

void LEDFunctionalColor::scrolllock(uint8_t color, uint8_t brightness){
  color_scrolllock = (color << 4) + brightness;
}

void LEDFunctionalColor::capslock(uint8_t color, uint8_t brightness){
  color_capslock = (color << 4) + brightness;
}

void LEDFunctionalColor::fkeys(uint8_t color, uint8_t brightness){
  byte colorbrightness = (color << 4) + brightness;
  color_fkeys = colorbrightness;
  color_fkey_f1 = colorbrightness;
  color_fkey_f2 = colorbrightness;
  color_fkey_f3 = colorbrightness;
  color_fkey_f4 = colorbrightness;
  color_fkey_f5 = colorbrightness;
  color_fkey_f6 = colorbrightness;
  color_fkey_f7 = colorbrightness;
  color_fkey_f8 = colorbrightness;
  color_fkey_f9 = colorbrightness;
  color_fkey_f10 = colorbrightness;
  color_fkey_f11 = colorbrightness;
  color_fkey_f12 = colorbrightness;
  color_fkey_f13 = colorbrightness;
  color_fkey_f14 = colorbrightness;
  color_fkey_f15 = colorbrightness;
  color_fkey_f16 = colorbrightness;
  color_fkey_f17 = colorbrightness;
  color_fkey_f18 = colorbrightness;
  color_fkey_f19 = colorbrightness;
}

void LEDFunctionalColor::fn(uint8_t color, uint8_t brightness){
  color_fn = (color << 4) + brightness;
}

void LEDFunctionalColor::media(uint8_t color, uint8_t brightness){
  byte colorbrightness = (color << 4) + brightness;
  color_media = colorbrightness;
  color_media_play = colorbrightness;
  color_media_prev = colorbrightness;
  color_media_next = colorbrightness;
  color_media_stop = colorbrightness;
  color_media_volup = colorbrightness;
  color_media_voldown = colorbrightness;
  color_media_mute = colorbrightness;
}

void LEDFunctionalColor::led(uint8_t color, uint8_t brightness){
  color_led = (color << 4) + brightness;
}

void LEDFunctionalColor::mousemove(uint8_t color, uint8_t brightness){
  color_mousemove = (color << 4) + brightness;
}

void LEDFunctionalColor::mousebuttons(uint8_t color, uint8_t brightness){
  color_mousebuttons = (color << 4) + brightness;
}

void LEDFunctionalColor::mousewarp(uint8_t color, uint8_t brightness){
  color_mousewarp = (color << 4) + brightness;
}

void LEDFunctionalColor::mousescroll(uint8_t color, uint8_t brightness){
  color_mousescroll = (color << 4) + brightness;
}

// All the new individual key functions with brightness
void LEDFunctionalColor::number_1(uint8_t color, uint8_t brightness){color_number_1 = (color << 4) + brightness;}
void LEDFunctionalColor::number_2(uint8_t color, uint8_t brightness){color_number_2 = (color << 4) + brightness;}
void LEDFunctionalColor::number_3(uint8_t color, uint8_t brightness){color_number_3 = (color << 4) + brightness;}
void LEDFunctionalColor::number_4(uint8_t color, uint8_t brightness){color_number_4 = (color << 4) + brightness;}
void LEDFunctionalColor::number_5(uint8_t color, uint8_t brightness){color_number_5 = (color << 4) + brightness;}
void LEDFunctionalColor::number_6(uint8_t color, uint8_t brightness){color_number_6 = (color << 4) + brightness;}
void LEDFunctionalColor::number_7(uint8_t color, uint8_t brightness){color_number_7 = (color << 4) + brightness;}
void LEDFunctionalColor::number_8(uint8_t color, uint8_t brightness){color_number_8 = (color << 4) + brightness;}
void LEDFunctionalColor::number_9(uint8_t color, uint8_t brightness){color_number_9 = (color << 4) + brightness;}
void LEDFunctionalColor::number_0(uint8_t color, uint8_t brightness){color_number_0 = (color << 4) + brightness;}
void LEDFunctionalColor::number_minus(uint8_t color, uint8_t brightness){color_number_minus = (color << 4) + brightness;}
void LEDFunctionalColor::number_equals(uint8_t color, uint8_t brightness){color_number_equals = (color << 4) + brightness;}
void LEDFunctionalColor::letter_a(uint8_t color, uint8_t brightness){color_letter_a = (color << 4) + brightness;}
void LEDFunctionalColor::letter_b(uint8_t color, uint8_t brightness){color_letter_b = (color << 4) + brightness;}
void LEDFunctionalColor::letter_c(uint8_t color, uint8_t brightness){color_letter_c = (color << 4) + brightness;}
void LEDFunctionalColor::letter_d(uint8_t color, uint8_t brightness){color_letter_d = (color << 4) + brightness;}
void LEDFunctionalColor::letter_e(uint8_t color, uint8_t brightness){color_letter_e = (color << 4) + brightness;}
void LEDFunctionalColor::letter_f(uint8_t color, uint8_t brightness){color_letter_f = (color << 4) + brightness;}
void LEDFunctionalColor::letter_g(uint8_t color, uint8_t brightness){color_letter_g = (color << 4) + brightness;}
void LEDFunctionalColor::letter_h(uint8_t color, uint8_t brightness){color_letter_h = (color << 4) + brightness;}
void LEDFunctionalColor::letter_i(uint8_t color, uint8_t brightness){color_letter_i = (color << 4) + brightness;}
void LEDFunctionalColor::letter_j(uint8_t color, uint8_t brightness){color_letter_j = (color << 4) + brightness;}
void LEDFunctionalColor::letter_k(uint8_t color, uint8_t brightness){color_letter_k = (color << 4) + brightness;}
void LEDFunctionalColor::letter_l(uint8_t color, uint8_t brightness){color_letter_l = (color << 4) + brightness;}
void LEDFunctionalColor::letter_m(uint8_t color, uint8_t brightness){color_letter_m = (color << 4) + brightness;}
void LEDFunctionalColor::letter_n(uint8_t color, uint8_t brightness){color_letter_n = (color << 4) + brightness;}
void LEDFunctionalColor::letter_o(uint8_t color, uint8_t brightness){color_letter_o = (color << 4) + brightness;}
void LEDFunctionalColor::letter_p(uint8_t color, uint8_t brightness){color_letter_p = (color << 4) + brightness;}
void LEDFunctionalColor::letter_q(uint8_t color, uint8_t brightness){color_letter_q = (color << 4) + brightness;}
void LEDFunctionalColor::letter_r(uint8_t color, uint8_t brightness){color_letter_r = (color << 4) + brightness;}
void LEDFunctionalColor::letter_s(uint8_t color, uint8_t brightness){color_letter_s = (color << 4) + brightness;}
void LEDFunctionalColor::letter_t(uint8_t color, uint8_t brightness){color_letter_t = (color << 4) + brightness;}
void LEDFunctionalColor::letter_u(uint8_t color, uint8_t brightness){color_letter_u = (color << 4) + brightness;}
void LEDFunctionalColor::letter_v(uint8_t color, uint8_t brightness){color_letter_v = (color << 4) + brightness;}
void LEDFunctionalColor::letter_w(uint8_t color, uint8_t brightness){color_letter_w = (color << 4) + brightness;}
void LEDFunctionalColor::letter_x(uint8_t color, uint8_t brightness){color_letter_x = (color << 4) + brightness;}
void LEDFunctionalColor::letter_y(uint8_t color, uint8_t brightness){color_letter_y = (color << 4) + brightness;}
void LEDFunctionalColor::letter_z(uint8_t color, uint8_t brightness){color_letter_z = (color << 4) + brightness;}
void LEDFunctionalColor::punctuation_backtick(uint8_t color, uint8_t brightness){color_punctuation_backtick = (color << 4) + brightness;}
void LEDFunctionalColor::punctuation_period(uint8_t color, uint8_t brightness){color_punctuation_period = (color << 4) + brightness;}
void LEDFunctionalColor::punctuation_comma(uint8_t color, uint8_t brightness){color_punctuation_comma = (color << 4) + brightness;}
void LEDFunctionalColor::punctuation_semicolon(uint8_t color, uint8_t brightness){color_punctuation_semicolon = (color << 4) + brightness;}
void LEDFunctionalColor::punctuation_quote(uint8_t color, uint8_t brightness){color_punctuation_quote = (color << 4) + brightness;}
void LEDFunctionalColor::punctuation_slash(uint8_t color, uint8_t brightness){color_punctuation_slash = (color << 4) + brightness;}
void LEDFunctionalColor::bracket_leftbracket(uint8_t color, uint8_t brightness){color_bracket_leftbracket = (color << 4) + brightness;}
void LEDFunctionalColor::bracket_rightbracket(uint8_t color, uint8_t brightness){color_bracket_rightbracket = (color << 4) + brightness;}
void LEDFunctionalColor::bracket_leftcurlybracket(uint8_t color, uint8_t brightness){color_bracket_leftcurlybracket = (color << 4) + brightness;}
void LEDFunctionalColor::bracket_rightcurlybracket(uint8_t color, uint8_t brightness){color_bracket_rightcurlybracket = (color << 4) + brightness;}
void LEDFunctionalColor::arrow_left(uint8_t color, uint8_t brightness){color_arrow_left = (color << 4) + brightness;}
void LEDFunctionalColor::arrow_up(uint8_t color, uint8_t brightness){color_arrow_up = (color << 4) + brightness;}
void LEDFunctionalColor::arrow_down(uint8_t color, uint8_t brightness){color_arrow_down = (color << 4) + brightness;}
void LEDFunctionalColor::arrow_right(uint8_t color, uint8_t brightness){color_arrow_right = (color << 4) + brightness;}
void LEDFunctionalColor::nav_home(uint8_t color, uint8_t brightness){color_nav_home = (color << 4) + brightness;}
void LEDFunctionalColor::nav_end(uint8_t color, uint8_t brightness){color_nav_end = (color << 4) + brightness;}
void LEDFunctionalColor::nav_pageup(uint8_t color, uint8_t brightness){color_nav_pageup = (color << 4) + brightness;}
void LEDFunctionalColor::nav_pagedown(uint8_t color, uint8_t brightness){color_nav_pagedown = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f1(uint8_t color, uint8_t brightness){color_fkey_f1 = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f2(uint8_t color, uint8_t brightness){color_fkey_f2 = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f3(uint8_t color, uint8_t brightness){color_fkey_f3 = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f4(uint8_t color, uint8_t brightness){color_fkey_f4 = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f5(uint8_t color, uint8_t brightness){color_fkey_f5 = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f6(uint8_t color, uint8_t brightness){color_fkey_f6 = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f7(uint8_t color, uint8_t brightness){color_fkey_f7 = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f8(uint8_t color, uint8_t brightness){color_fkey_f8 = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f9(uint8_t color, uint8_t brightness){color_fkey_f9 = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f10(uint8_t color, uint8_t brightness){color_fkey_f10 = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f11(uint8_t color, uint8_t brightness){color_fkey_f11 = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f12(uint8_t color, uint8_t brightness){color_fkey_f12 = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f13(uint8_t color, uint8_t brightness){color_fkey_f13 = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f14(uint8_t color, uint8_t brightness){color_fkey_f14 = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f15(uint8_t color, uint8_t brightness){color_fkey_f15 = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f16(uint8_t color, uint8_t brightness){color_fkey_f16 = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f17(uint8_t color, uint8_t brightness){color_fkey_f17 = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f18(uint8_t color, uint8_t brightness){color_fkey_f18 = (color << 4) + brightness;}
void LEDFunctionalColor::fkey_f19(uint8_t color, uint8_t brightness){color_fkey_f19 = (color << 4) + brightness;}
void LEDFunctionalColor::media_play(uint8_t color, uint8_t brightness){color_media_play = (color << 4) + brightness;}
void LEDFunctionalColor::media_prev(uint8_t color, uint8_t brightness){color_media_prev = (color << 4) + brightness;}
void LEDFunctionalColor::media_next(uint8_t color, uint8_t brightness){color_media_next = (color << 4) + brightness;}
void LEDFunctionalColor::media_stop(uint8_t color, uint8_t brightness){color_media_stop = (color << 4) + brightness;}
void LEDFunctionalColor::media_volup(uint8_t color, uint8_t brightness){color_media_volup = (color << 4) + brightness;}
void LEDFunctionalColor::media_voldown(uint8_t color, uint8_t brightness){color_media_voldown = (color << 4) + brightness;}
void LEDFunctionalColor::media_mute(uint8_t color, uint8_t brightness){color_media_mute = (color << 4) + brightness;}


/*
 * setKeyLed accepts a Key position and sets it to the appropriate color
 * from the user's definitions a using a series of if/else statements.
 * This version uses a color from a 16 color palette and applies a brightness to compute the color on demand.
 * This allows us to free up a lot of memory.
 */
void LEDFunctionalColor::setKeyLed(uint8_t r, uint8_t c) { 
  Key k = Layer.lookupOnActiveLayer(r, c);
  if (k == Key_Escape) {::LEDControl.setCrgbAt(r, c, getCRGB(color_escape)); return;}
  else if (k == Key_LEDEffectNext) {::LEDControl.setCrgbAt(r, c, getCRGB(color_led)); return;}
  
  // letters
  else if (k == Key_1) {::LEDControl.setCrgbAt(r, c, getCRGB(color_number_1)); return;}
  else if (k == Key_2) {::LEDControl.setCrgbAt(r, c, getCRGB(color_number_2)); return;}
  else if (k == Key_3) {::LEDControl.setCrgbAt(r, c, getCRGB(color_number_3)); return;}
  else if (k == Key_4) {::LEDControl.setCrgbAt(r, c, getCRGB(color_number_4)); return;}
  else if (k == Key_5) {::LEDControl.setCrgbAt(r, c, getCRGB(color_number_5)); return;}
  else if (k == Key_6) {::LEDControl.setCrgbAt(r, c, getCRGB(color_number_6)); return;}
  else if (k == Key_7) {::LEDControl.setCrgbAt(r, c, getCRGB(color_number_7)); return;}
  else if (k == Key_8) {::LEDControl.setCrgbAt(r, c, getCRGB(color_number_8)); return;}
  else if (k == Key_9) {::LEDControl.setCrgbAt(r, c, getCRGB(color_number_9)); return;}
  else if (k == Key_0) {::LEDControl.setCrgbAt(r, c, getCRGB(color_number_0)); return;}
  else if (k == Key_Minus) {::LEDControl.setCrgbAt(r, c, getCRGB(color_number_minus)); return;}
  else if (k == Key_Equals) {::LEDControl.setCrgbAt(r, c, getCRGB(color_number_equals)); return;}
 
  // letters
  else if (k == Key_A) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_a)); return;}
  else if (k == Key_B) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_b)); return;}
  else if (k == Key_C) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_c)); return;}
  else if (k == Key_D) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_d)); return;}
  else if (k == Key_E) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_e)); return;}
  else if (k == Key_F) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_f)); return;}
  else if (k == Key_G) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_g)); return;}
  else if (k == Key_H) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_h)); return;}
  else if (k == Key_I) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_i)); return;}
  else if (k == Key_J) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_j)); return;}
  else if (k == Key_K) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_k)); return;}
  else if (k == Key_L) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_l)); return;}
  else if (k == Key_M) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_m)); return;}
  else if (k == Key_N) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_n)); return;}
  else if (k == Key_O) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_o)); return;}
  else if (k == Key_P) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_p)); return;}
  else if (k == Key_Q) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_q)); return;}
  else if (k == Key_R) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_r)); return;}
  else if (k == Key_S) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_s)); return;}
  else if (k == Key_T) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_t)); return;}
  else if (k == Key_U) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_u)); return;}
  else if (k == Key_V) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_v)); return;}
  else if (k == Key_W) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_w)); return;}
  else if (k == Key_X) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_x)); return;}
  else if (k == Key_Y) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_y)); return;}
  else if (k == Key_Z) {::LEDControl.setCrgbAt(r, c, getCRGB(color_letter_z)); return;}

  // punctuation
  else if (k == Key_Backtick)  {::LEDControl.setCrgbAt(r, c, getCRGB(color_punctuation_backtick)); return;}
  else if (k == Key_Period)    {::LEDControl.setCrgbAt(r, c, getCRGB(color_punctuation_period)); return;}
  else if (k == Key_Comma)     {::LEDControl.setCrgbAt(r, c, getCRGB(color_punctuation_comma)); return;}
  else if (k == Key_Semicolon) {::LEDControl.setCrgbAt(r, c, getCRGB(color_punctuation_semicolon)); return;}
  else if (k == Key_Quote)     {::LEDControl.setCrgbAt(r, c, getCRGB(color_punctuation_quote)); return;}
  else if (k == Key_Slash)     {::LEDControl.setCrgbAt(r, c, getCRGB(color_punctuation_slash)); return;}

  else if (k == Key_LeftBracket)       {::LEDControl.setCrgbAt(r, c, getCRGB(color_bracket_leftbracket)); return;}
  else if (k == Key_RightBracket)      {::LEDControl.setCrgbAt(r, c, getCRGB(color_bracket_rightbracket)); return;}
  else if (k == Key_LeftCurlyBracket)  {::LEDControl.setCrgbAt(r, c, getCRGB(color_bracket_leftcurlybracket)); return;}
  else if (k == Key_RightCurlyBracket) {::LEDControl.setCrgbAt(r, c, getCRGB(color_bracket_rightcurlybracket)); return;}

  else if (k == Key_Backslash) {::LEDControl.setCrgbAt(r, c, getCRGB(color_backslash)); return;}
  else if (k == Key_Pipe)      {::LEDControl.setCrgbAt(r, c, getCRGB(color_pipe)); return;}
  
  else if (k == Key_Space)     {::LEDControl.setCrgbAt(r, c, getCRGB(color_space)); return;}
  else if (k == Key_Enter)     {::LEDControl.setCrgbAt(r, c, getCRGB(color_enter)); return;}
  else if (k == Key_Tab)       {::LEDControl.setCrgbAt(r, c, getCRGB(color_tab)); return;}
  else if (k == Key_Backspace) {::LEDControl.setCrgbAt(r, c, getCRGB(color_backspace)); return;}
  else if (k == Key_Delete)    {::LEDControl.setCrgbAt(r, c, getCRGB(color_delete)); return;}
  else if (k == Key_Insert)    {::LEDControl.setCrgbAt(r, c, getCRGB(color_insert)); return;}

  // nav keys
  else if (k == Key_Home) {::LEDControl.setCrgbAt(r, c, getCRGB(color_nav_home)); return;}
  else if (k == Key_End) {::LEDControl.setCrgbAt(r, c, getCRGB(color_nav_end)); return;}
  else if (k == Key_PageUp) {::LEDControl.setCrgbAt(r, c, getCRGB(color_nav_pageup)); return;}
  else if (k == Key_PageDown) {::LEDControl.setCrgbAt(r, c, getCRGB(color_nav_pagedown)); return;}

  // arrow keys
  else if (k == Key_LeftArrow) {::LEDControl.setCrgbAt(r, c, getCRGB(color_arrow_left)); return;}
  else if (k == Key_UpArrow) {::LEDControl.setCrgbAt(r, c, getCRGB(color_arrow_up)); return;}
  else if (k == Key_DownArrow) {::LEDControl.setCrgbAt(r, c, getCRGB(color_arrow_down)); return;}
  else if (k == Key_RightArrow) {::LEDControl.setCrgbAt(r, c, getCRGB(color_arrow_right)); return;}
  
  // modifiers
  else if (k == Key_LeftShift) {::LEDControl.setCrgbAt(r, c, getCRGB(color_shift)); return;}
  else if (k == Key_RightShift) {::LEDControl.setCrgbAt(r, c, getCRGB(color_shift)); return;}
  else if (k == Key_LeftControl) {::LEDControl.setCrgbAt(r, c, getCRGB(color_ctrl)); return;}
  else if (k == Key_RightControl) {::LEDControl.setCrgbAt(r, c, getCRGB(color_ctrl)); return;}
  else if (k == Key_LeftAlt) {::LEDControl.setCrgbAt(r, c, getCRGB(color_alt)); return;}
  else if (k == Key_RightAlt) {::LEDControl.setCrgbAt(r, c, getCRGB(color_alt)); return;}
  else if (k == Key_LeftGui) {::LEDControl.setCrgbAt(r, c, getCRGB(color_cmd)); return;}
  else if (k == Key_RightGui) {::LEDControl.setCrgbAt(r, c, getCRGB(color_cmd)); return;}
  // context menu key
  else if (k == Key_PcApplication) {::LEDControl.setCrgbAt(r, c, getCRGB(color_app)); return;}
  
  // function keys
  else if (k == Key_F1)  {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f1)); return;}
  else if (k == Key_F2)  {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f2)); return;}
  else if (k == Key_F3)  {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f3)); return;}
  else if (k == Key_F4)  {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f4)); return;}
  else if (k == Key_F5)  {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f5)); return;}
  else if (k == Key_F6)  {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f6)); return;}
  else if (k == Key_F7)  {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f7)); return;}
  else if (k == Key_F8)  {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f8)); return;}
  else if (k == Key_F9)  {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f9)); return;}
  else if (k == Key_F10) {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f10)); return;}
  else if (k == Key_F11) {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f11)); return;}
  else if (k == Key_F12) {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f12)); return;}
  else if (k == Key_F13) {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f13)); return;}
  else if (k == Key_F14) {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f14)); return;}
  else if (k == Key_F15) {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f15)); return;}
  else if (k == Key_F16) {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f16)); return;}
  else if (k == Key_F17) {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f17)); return;}
  else if (k == Key_F18) {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f18)); return;}
  else if (k == Key_F19) {::LEDControl.setCrgbAt(r, c, getCRGB(color_fkey_f19)); return;}

  // system keys
  else if (k == Key_PrintScreen) {::LEDControl.setCrgbAt(r, c, getCRGB(color_printscreen)); return;}
  else if (k == Key_Pause) {::LEDControl.setCrgbAt(r, c, getCRGB(color_pause)); return;}
  else if (k == Key_ScrollLock) {::LEDControl.setCrgbAt(r, c, getCRGB(color_scrolllock)); return;}
  else if (k == Key_CapsLock) {::LEDControl.setCrgbAt(r, c, getCRGB(color_capslock)); return;}
  
  // media keys
  else if (k == Consumer_PlaySlashPause) {::LEDControl.setCrgbAt(r, c, getCRGB(color_media_play)); return;}
  else if (k == Consumer_ScanPreviousTrack) {::LEDControl.setCrgbAt(r, c, getCRGB(color_media_prev)); return;}
  else if (k == Consumer_ScanNextTrack) {::LEDControl.setCrgbAt(r, c, getCRGB(color_media_next)); return;}
  else if (k == Consumer_Stop) {::LEDControl.setCrgbAt(r, c, getCRGB(color_media_stop)); return;}
  else if (k == Consumer_VolumeIncrement) {::LEDControl.setCrgbAt(r, c, getCRGB(color_media_volup)); return;}
  else if (k == Consumer_VolumeDecrement) {::LEDControl.setCrgbAt(r, c, getCRGB(color_media_voldown)); return;}
  else if (k == Consumer_Mute) {::LEDControl.setCrgbAt(r, c, getCRGB(color_media_mute)); return;}

  // mouse keys
  else if (k == Key_mouseL) {::LEDControl.setCrgbAt(r, c, getCRGB(color_mousemove)); return;}
  else if (k == Key_mouseR) {::LEDControl.setCrgbAt(r, c, getCRGB(color_mousemove)); return;}
  else if (k == Key_mouseUp) {::LEDControl.setCrgbAt(r, c, getCRGB(color_mousemove)); return;}
  else if (k == Key_mouseDn) {::LEDControl.setCrgbAt(r, c, getCRGB(color_mousemove)); return;}
  else if (k == Key_mouseBtnR) {::LEDControl.setCrgbAt(r, c, getCRGB(color_mousebuttons)); return;}
  else if (k == Key_mouseBtnL) {::LEDControl.setCrgbAt(r, c, getCRGB(color_mousebuttons)); return;}
  else if (k == Key_mouseBtnM) {::LEDControl.setCrgbAt(r, c, getCRGB(color_mousebuttons)); return;}
  else if (k == Key_mouseWarpEnd) {::LEDControl.setCrgbAt(r, c, getCRGB(color_mousewarp)); return;}
  else if (k == Key_mouseWarpNW) {::LEDControl.setCrgbAt(r, c, getCRGB(color_mousewarp)); return;}
  else if (k == Key_mouseWarpSW) {::LEDControl.setCrgbAt(r, c, getCRGB(color_mousewarp)); return;}
  else if (k == Key_mouseWarpNE) {::LEDControl.setCrgbAt(r, c, getCRGB(color_mousewarp)); return;}
  else if (k == Key_mouseWarpSW) {::LEDControl.setCrgbAt(r, c, getCRGB(color_mousewarp)); return;}
  // mouse scroll
  else if (k == Key_mouseScrollUp) {::LEDControl.setCrgbAt(r, c, getCRGB(color_mousescroll)); return;}
  else if (k == Key_mouseScrollDn) {::LEDControl.setCrgbAt(r, c, getCRGB(color_mousescroll)); return;}


}// end setKeyLed


// getCRGB() - sets a CRGB color based on a byte containing a color index (from our palette) and brightness (0-15)
cRGB LEDFunctionalColor::getCRGB(byte colorbrightness) {
  uint8_t brightness = colorbrightness & 15;
  cRGB color = palette[colorbrightness >> 4];
  return CRGB(color.r*brightness/15, color.g*brightness/15, color.b*brightness/15);
}

// dims the specified color from 0 (off) to 15 (full)
byte LEDFunctionalColor::dim(byte color, uint8_t brightness) {
  uint8_t coloridx = color >> 4;
  uint8_t oldbrightness = color & 15;
  uint8_t newbrightness = oldbrightness*brightness/15;

  return (coloridx << 4) + newbrightness;
}


void LEDFunctionalColor::onActivate(void) {
  current_key=0;
  current_col=0;
  current_row=0;
  current_color=0;
	// Loop through every row and column and set each LED based on its key's function
	for (uint8_t r = 0; r < ROWS; r++) {
	  for (uint8_t c = 0; c < COLS; c++) {
	    Key k = Layer.lookupOnActiveLayer(r, c);
	    setKeyLed(r, c);
	  }
	}
}


void LEDFunctionalColor::update(void) {
  // first check which layer is active. Here we are assuming only fn or normal, but numlock is a thing too...
  uint8_t current_layer = 0;
  if ((::Layer_::isOn(functionLayer))) { //2 is FUNCTION in the default mapping
    current_layer = 1;
  }

  // Only set the colors again if the active layer changed
  if (current_layer != last_layer) {
    // Loop through every row and column and set each LED based on its key's function
    for (uint8_t r = 0; r < ROWS; r++) {
      for (uint8_t c = 0; c < COLS; c++) {
        Key k = Layer.lookupOnActiveLayer(r, c);
        setKeyLed(r, c);
      }
    }

    // set the fn keys (this assumes they haven't moved from the default location).
    // Turn off when the function layer is active
    if (current_layer == 0) {
      // left fn
      ::LEDControl.setCrgbAt(3, 6, getCRGB(color_fn)); 
      // right fn
      ::LEDControl.setCrgbAt(3, 9, getCRGB(color_fn));
    }
    else {
      // left fn
      ::LEDControl.setCrgbAt(3, 6, CRGB(0, 0, 0)); 
      // right fn
      ::LEDControl.setCrgbAt(3, 9, CRGB(0, 0, 0));
    }

  }

  last_layer = current_layer;

}//end update()



}//namespace