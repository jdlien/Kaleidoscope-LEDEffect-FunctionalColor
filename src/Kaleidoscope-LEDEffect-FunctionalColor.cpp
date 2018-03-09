#include "Kaleidoscope-LEDEffect-FunctionalColor.h"

namespace kaleidoscope {

LEDFunctionalColor::LEDFunctionalColor(uint8_t fLayer) {
  functionLayer = fLayer;
}

LEDFunctionalColor::LEDFunctionalColor(void) {
}

// Just reduce brighness of everything without changing color
void LEDFunctionalColor::brightness(byte brightness) {
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

// Sets all the colors to the same thing
void LEDFunctionalColor::all(cRGB color){
  color_escape = color;
  color_numbers = color;
  color_number_1 = color;
  color_number_2 = color;
  color_number_3 = color;
  color_number_4 = color;
  color_number_5 = color;
  color_number_6 = color;
  color_number_7 = color;
  color_number_8 = color;
  color_number_9 = color;
  color_number_0 = color;
  color_number_minus = color;
  color_number_equals = color;
  color_letters = color;
  color_letter_a = color;
  color_letter_b = color;
  color_letter_c = color;
  color_letter_d = color;
  color_letter_e = color;
  color_letter_f = color;
  color_letter_g = color;
  color_letter_h = color;
  color_letter_i = color;
  color_letter_j = color;
  color_letter_k = color;
  color_letter_l = color;
  color_letter_m = color;
  color_letter_n = color;
  color_letter_o = color;
  color_letter_p = color;
  color_letter_q = color;
  color_letter_r = color;
  color_letter_s = color;
  color_letter_t = color;
  color_letter_u = color;
  color_letter_v = color;
  color_letter_w = color;
  color_letter_x = color;
  color_letter_y = color;
  color_letter_z = color;
  color_punctuation = color;
  color_punctuation_backtick = color;
  color_punctuation_period = color;
  color_punctuation_comma = color;
  color_punctuation_semicolon = color;
  color_punctuation_quote = color;
  color_punctuation_slash = color;
  color_brackets = color;
  color_bracket_leftbracket = color;
  color_bracket_rightbracket = color;
  color_bracket_leftcurlybracket = color;
  color_bracket_rightcurlybracket = color;
  color_backslash = color;
  color_pipe = color;
  color_tab = color;
  color_backspace = color;
  color_delete = color;
  color_enter = color;
  color_arrows = color;
  color_arrow_left = color;
  color_arrow_up = color;
  color_arrow_down = color;
  color_arrow_right = color;
  color_nav = color;
  color_nav_home = color;
  color_nav_end = color;
  color_nav_pageup = color;
  color_nav_pagedown = color;
  color_insert = color;
  color_shift = color;
  color_ctrl = color;
  color_alt = color;
  color_cmd = color;
  color_app = color;
  color_printscreen = color;
  color_pause = color;
  color_scrolllock = color;
  color_capslock = color;
  color_fkeys = color;
  color_fkey_f1 = color;
  color_fkey_f2 = color;
  color_fkey_f3 = color;
  color_fkey_f4 = color;
  color_fkey_f5 = color;
  color_fkey_f6 = color;
  color_fkey_f7 = color;
  color_fkey_f8 = color;
  color_fkey_f9 = color;
  color_fkey_f10 = color;
  color_fkey_f11 = color;
  color_fkey_f12 = color;
  color_fkey_f13 = color;
  color_fkey_f14 = color;
  color_fkey_f15 = color;
  color_fkey_f16 = color;
  color_fkey_f17 = color;
  color_fkey_f18 = color;
  color_fkey_f19 = color;
  color_fn = color;
  color_media = color;
  color_media_play = color;
  color_media_prev = color;
  color_media_next = color;
  color_media_stop = color;
  color_media_volup = color;
  color_media_voldown = color;
  color_media_mute = color;
  color_led = color;
  color_mousemove = color;
  color_mousebuttons = color;
  color_mousewarp = color;
  color_mousescroll = color;
}

// Color keys that aren't letters, numbers, or punctuation
void LEDFunctionalColor::allModifiers(cRGB color) {
  color_escape = color;
  color_backspace = color;
  color_delete = color;
  color_enter = color;
  color_arrows = color;
  color_nav = color;
  color_insert = color;
  color_shift = color;
  color_ctrl = color;
  color_alt = color;
  color_cmd = color;
  color_app = color;
  color_printscreen = color;
  color_pause = color;
  color_scrolllock = color;
  color_capslock = color;
  color_fkeys = color;
  color_fn = color;
}

void LEDFunctionalColor::allMouse(cRGB color){
  color_mousemove = color;
  color_mousebuttons = color;
  color_mousewarp = color;
  color_mousescroll = color;
}

void LEDFunctionalColor::escape(cRGB color) {
  color_escape = color;
}

void LEDFunctionalColor::numbers(cRGB color){
  color_numbers = color;
  color_number_1 = color;
  color_number_2 = color;
  color_number_3 = color;
  color_number_4 = color;
  color_number_5 = color;
  color_number_6 = color;
  color_number_7 = color;
  color_number_8 = color;
  color_number_9 = color;
  color_number_0 = color;
  color_number_minus = color;
  color_number_equals = color;
}

void LEDFunctionalColor::letters(cRGB color){
  color_letters = color;
  color_letter_a = color;
  color_letter_b = color;
  color_letter_c = color;
  color_letter_d = color;
  color_letter_e = color;
  color_letter_f = color;
  color_letter_g = color;
  color_letter_h = color;
  color_letter_i = color;
  color_letter_j = color;
  color_letter_k = color;
  color_letter_l = color;
  color_letter_m = color;
  color_letter_n = color;
  color_letter_o = color;
  color_letter_p = color;
  color_letter_q = color;
  color_letter_r = color;
  color_letter_s = color;
  color_letter_t = color;
  color_letter_u = color;
  color_letter_v = color;
  color_letter_w = color;
  color_letter_x = color;
  color_letter_y = color;
  color_letter_z = color;
}

void LEDFunctionalColor::punctuation(cRGB color){
  color_punctuation = color;
  color_punctuation_backtick = color;
  color_punctuation_period = color;
  color_punctuation_comma = color;
  color_punctuation_semicolon = color;
  color_punctuation_quote = color;
  color_punctuation_slash = color;
}

void LEDFunctionalColor::brackets(cRGB color){
  color_brackets = color;
  color_bracket_leftbracket = color;
  color_bracket_rightbracket = color;
  color_bracket_leftcurlybracket = color;
  color_bracket_rightcurlybracket = color;
}

void LEDFunctionalColor::backslash(cRGB color){
  color_backslash = color;
}

void LEDFunctionalColor::pipe(cRGB color){
  color_pipe = color;
}

void LEDFunctionalColor::tab(cRGB color){
  color_tab = color;
}

void LEDFunctionalColor::backspace(cRGB color){
  color_backspace = color;
}

void LEDFunctionalColor::del(cRGB color){
  color_delete = color;
}

void LEDFunctionalColor::enter(cRGB color){
  color_enter = color;
}

void LEDFunctionalColor::arrows(cRGB color){
  color_arrows = color;
  color_arrow_left = color;
  color_arrow_up = color;
  color_arrow_down = color;
  color_arrow_right = color;
}

void LEDFunctionalColor::nav(cRGB color){
  color_nav = color;
  color_nav_home = color;
  color_nav_end = color;
  color_nav_pageup = color;
  color_nav_pagedown = color;

}

void LEDFunctionalColor::insert(cRGB color){
  color_insert = color;
}

void LEDFunctionalColor::shift(cRGB color){
  color_shift = color;
}

void LEDFunctionalColor::ctrl(cRGB color){
  color_ctrl = color;
}

void LEDFunctionalColor::alt(cRGB color){
  color_alt = color;
}

void LEDFunctionalColor::cmd(cRGB color){
  color_cmd = color;
}

void LEDFunctionalColor::app(cRGB color){
  color_app = color;
}

void LEDFunctionalColor::printscreen(cRGB color){
  color_printscreen = color;
}

void LEDFunctionalColor::pause(cRGB color){
  color_pause = color;
}

void LEDFunctionalColor::scrolllock(cRGB color){
  color_scrolllock = color;
}

void LEDFunctionalColor::capslock(cRGB color){
  color_capslock = color;
}

void LEDFunctionalColor::fkeys(cRGB color){
  color_fkeys = color;
  color_fkey_f1 = color;
  color_fkey_f2 = color;
  color_fkey_f3 = color;
  color_fkey_f4 = color;
  color_fkey_f5 = color;
  color_fkey_f6 = color;
  color_fkey_f7 = color;
  color_fkey_f8 = color;
  color_fkey_f9 = color;
  color_fkey_f10 = color;
  color_fkey_f11 = color;
  color_fkey_f12 = color;
  color_fkey_f13 = color;
  color_fkey_f14 = color;
  color_fkey_f15 = color;
  color_fkey_f16 = color;
  color_fkey_f17 = color;
  color_fkey_f18 = color;
  color_fkey_f19 = color;
}

void LEDFunctionalColor::fn(cRGB color){
  color_fn = color;
}

void LEDFunctionalColor::media(cRGB color){
  color_media = color;
  color_media_play = color;
  color_media_prev = color;
  color_media_next = color;
  color_media_stop = color;
  color_media_volup = color;
  color_media_voldown = color;
  color_media_mute = color;
}

void LEDFunctionalColor::led(cRGB color){
  color_led = color;
}

void LEDFunctionalColor::mousemove(cRGB color){
  color_mousemove = color;
}

void LEDFunctionalColor::mousebuttons(cRGB color){
  color_mousebuttons = color;
}

void LEDFunctionalColor::mousewarp(cRGB color){
  color_mousewarp = color;
}

void LEDFunctionalColor::mousescroll(cRGB color){
  color_mousescroll = color;
}

// All the new individual key functions
void LEDFunctionalColor::number_1(cRGB color){color_number_1 = color;}
void LEDFunctionalColor::number_2(cRGB color){color_number_2 = color;}
void LEDFunctionalColor::number_3(cRGB color){color_number_3 = color;}
void LEDFunctionalColor::number_4(cRGB color){color_number_4 = color;}
void LEDFunctionalColor::number_5(cRGB color){color_number_5 = color;}
void LEDFunctionalColor::number_6(cRGB color){color_number_6 = color;}
void LEDFunctionalColor::number_7(cRGB color){color_number_7 = color;}
void LEDFunctionalColor::number_8(cRGB color){color_number_8 = color;}
void LEDFunctionalColor::number_9(cRGB color){color_number_9 = color;}
void LEDFunctionalColor::number_0(cRGB color){color_number_0 = color;}
void LEDFunctionalColor::number_minus(cRGB color){color_number_minus = color;}
void LEDFunctionalColor::number_equals(cRGB color){color_number_equals = color;}
void LEDFunctionalColor::letter_a(cRGB color){color_letter_a = color;}
void LEDFunctionalColor::letter_b(cRGB color){color_letter_b = color;}
void LEDFunctionalColor::letter_c(cRGB color){color_letter_c = color;}
void LEDFunctionalColor::letter_d(cRGB color){color_letter_d = color;}
void LEDFunctionalColor::letter_e(cRGB color){color_letter_e = color;}
void LEDFunctionalColor::letter_f(cRGB color){color_letter_f = color;}
void LEDFunctionalColor::letter_g(cRGB color){color_letter_g = color;}
void LEDFunctionalColor::letter_h(cRGB color){color_letter_h = color;}
void LEDFunctionalColor::letter_i(cRGB color){color_letter_i = color;}
void LEDFunctionalColor::letter_j(cRGB color){color_letter_j = color;}
void LEDFunctionalColor::letter_k(cRGB color){color_letter_k = color;}
void LEDFunctionalColor::letter_l(cRGB color){color_letter_l = color;}
void LEDFunctionalColor::letter_m(cRGB color){color_letter_m = color;}
void LEDFunctionalColor::letter_n(cRGB color){color_letter_n = color;}
void LEDFunctionalColor::letter_o(cRGB color){color_letter_o = color;}
void LEDFunctionalColor::letter_p(cRGB color){color_letter_p = color;}
void LEDFunctionalColor::letter_q(cRGB color){color_letter_q = color;}
void LEDFunctionalColor::letter_r(cRGB color){color_letter_r = color;}
void LEDFunctionalColor::letter_s(cRGB color){color_letter_s = color;}
void LEDFunctionalColor::letter_t(cRGB color){color_letter_t = color;}
void LEDFunctionalColor::letter_u(cRGB color){color_letter_u = color;}
void LEDFunctionalColor::letter_v(cRGB color){color_letter_v = color;}
void LEDFunctionalColor::letter_w(cRGB color){color_letter_w = color;}
void LEDFunctionalColor::letter_x(cRGB color){color_letter_x = color;}
void LEDFunctionalColor::letter_y(cRGB color){color_letter_y = color;}
void LEDFunctionalColor::letter_z(cRGB color){color_letter_z = color;}
void LEDFunctionalColor::punctuation_backtick(cRGB color){color_punctuation_backtick = color;}
void LEDFunctionalColor::punctuation_period(cRGB color){color_punctuation_period = color;}
void LEDFunctionalColor::punctuation_comma(cRGB color){color_punctuation_comma = color;}
void LEDFunctionalColor::punctuation_semicolon(cRGB color){color_punctuation_semicolon = color;}
void LEDFunctionalColor::punctuation_quote(cRGB color){color_punctuation_quote = color;}
void LEDFunctionalColor::punctuation_slash(cRGB color){color_punctuation_slash = color;}
void LEDFunctionalColor::bracket_leftbracket(cRGB color){color_bracket_leftbracket = color;}
void LEDFunctionalColor::bracket_rightbracket(cRGB color){color_bracket_rightbracket = color;}
void LEDFunctionalColor::bracket_leftcurlybracket(cRGB color){color_bracket_leftcurlybracket = color;}
void LEDFunctionalColor::bracket_rightcurlybracket(cRGB color){color_bracket_rightcurlybracket = color;}
void LEDFunctionalColor::arrow_left(cRGB color){color_arrow_left = color;}
void LEDFunctionalColor::arrow_up(cRGB color){color_arrow_up = color;}
void LEDFunctionalColor::arrow_down(cRGB color){color_arrow_down = color;}
void LEDFunctionalColor::arrow_right(cRGB color){color_arrow_right = color;}
void LEDFunctionalColor::nav_home(cRGB color){color_nav_home = color;}
void LEDFunctionalColor::nav_end(cRGB color){color_nav_end = color;}
void LEDFunctionalColor::nav_pageup(cRGB color){color_nav_pageup = color;}
void LEDFunctionalColor::nav_pagedown(cRGB color){color_nav_pagedown = color;}
void LEDFunctionalColor::fkey_f1(cRGB color){color_fkey_f1 = color;}
void LEDFunctionalColor::fkey_f2(cRGB color){color_fkey_f2 = color;}
void LEDFunctionalColor::fkey_f3(cRGB color){color_fkey_f3 = color;}
void LEDFunctionalColor::fkey_f4(cRGB color){color_fkey_f4 = color;}
void LEDFunctionalColor::fkey_f5(cRGB color){color_fkey_f5 = color;}
void LEDFunctionalColor::fkey_f6(cRGB color){color_fkey_f6 = color;}
void LEDFunctionalColor::fkey_f7(cRGB color){color_fkey_f7 = color;}
void LEDFunctionalColor::fkey_f8(cRGB color){color_fkey_f8 = color;}
void LEDFunctionalColor::fkey_f9(cRGB color){color_fkey_f9 = color;}
void LEDFunctionalColor::fkey_f10(cRGB color){color_fkey_f10 = color;}
void LEDFunctionalColor::fkey_f11(cRGB color){color_fkey_f11 = color;}
void LEDFunctionalColor::fkey_f12(cRGB color){color_fkey_f12 = color;}
void LEDFunctionalColor::fkey_f13(cRGB color){color_fkey_f13 = color;}
void LEDFunctionalColor::fkey_f14(cRGB color){color_fkey_f14 = color;}
void LEDFunctionalColor::fkey_f15(cRGB color){color_fkey_f15 = color;}
void LEDFunctionalColor::fkey_f16(cRGB color){color_fkey_f16 = color;}
void LEDFunctionalColor::fkey_f17(cRGB color){color_fkey_f17 = color;}
void LEDFunctionalColor::fkey_f18(cRGB color){color_fkey_f18 = color;}
void LEDFunctionalColor::fkey_f19(cRGB color){color_fkey_f19 = color;}
void LEDFunctionalColor::media_play(cRGB color){color_media_play = color;}
void LEDFunctionalColor::media_prev(cRGB color){color_media_prev = color;}
void LEDFunctionalColor::media_next(cRGB color){color_media_next = color;}
void LEDFunctionalColor::media_stop(cRGB color){color_media_stop = color;}
void LEDFunctionalColor::media_volup(cRGB color){color_media_volup = color;}
void LEDFunctionalColor::media_voldown(cRGB color){color_media_voldown = color;}
void LEDFunctionalColor::media_mute(cRGB color){color_media_mute = color;}





// Now all the versions that set brightness

// Sets all the colors to the same thing
void LEDFunctionalColor::all(cRGB color, byte brightness){
  color_escape = dim(color, brightness);
  color_numbers = dim(color, brightness);
  color_number_1 = dim(color, brightness);
  color_number_2 = dim(color, brightness);
  color_number_3 = dim(color, brightness);
  color_number_4 = dim(color, brightness);
  color_number_5 = dim(color, brightness);
  color_number_6 = dim(color, brightness);
  color_number_7 = dim(color, brightness);
  color_number_8 = dim(color, brightness);
  color_number_9 = dim(color, brightness);
  color_number_0 = dim(color, brightness);
  color_number_minus = dim(color, brightness);
  color_number_equals = dim(color, brightness);
  color_letters = dim(color, brightness);
  color_letter_a = dim(color, brightness);
  color_letter_b = dim(color, brightness);
  color_letter_c = dim(color, brightness);
  color_letter_d = dim(color, brightness);
  color_letter_e = dim(color, brightness);
  color_letter_f = dim(color, brightness);
  color_letter_g = dim(color, brightness);
  color_letter_h = dim(color, brightness);
  color_letter_i = dim(color, brightness);
  color_letter_j = dim(color, brightness);
  color_letter_k = dim(color, brightness);
  color_letter_l = dim(color, brightness);
  color_letter_m = dim(color, brightness);
  color_letter_n = dim(color, brightness);
  color_letter_o = dim(color, brightness);
  color_letter_p = dim(color, brightness);
  color_letter_q = dim(color, brightness);
  color_letter_r = dim(color, brightness);
  color_letter_s = dim(color, brightness);
  color_letter_t = dim(color, brightness);
  color_letter_u = dim(color, brightness);
  color_letter_v = dim(color, brightness);
  color_letter_w = dim(color, brightness);
  color_letter_x = dim(color, brightness);
  color_letter_y = dim(color, brightness);
  color_letter_z = dim(color, brightness);
  color_punctuation = dim(color, brightness);
  color_punctuation_backtick = dim(color, brightness);
  color_punctuation_period = dim(color, brightness);
  color_punctuation_comma = dim(color, brightness);
  color_punctuation_semicolon = dim(color, brightness);
  color_punctuation_quote = dim(color, brightness);
  color_punctuation_slash = dim(color, brightness);
  color_brackets = dim(color, brightness);
  color_bracket_leftbracket = dim(color, brightness);
  color_bracket_rightbracket = dim(color, brightness);
  color_bracket_leftcurlybracket = dim(color, brightness);
  color_bracket_rightcurlybracket = dim(color, brightness);
  color_backslash = dim(color, brightness);
  color_pipe = dim(color, brightness);
  color_tab = dim(color, brightness);
  color_backspace = dim(color, brightness);
  color_delete = dim(color, brightness);
  color_enter = dim(color, brightness);
  color_arrows = dim(color, brightness);
  color_arrow_left = dim(color, brightness);
  color_arrow_up = dim(color, brightness);
  color_arrow_down = dim(color, brightness);
  color_arrow_right = dim(color, brightness);
  color_nav = dim(color, brightness);
  color_nav_home = dim(color, brightness);
  color_nav_end = dim(color, brightness);
  color_nav_pageup = dim(color, brightness);
  color_nav_pagedown = dim(color, brightness);
  color_insert = dim(color, brightness);
  color_shift = dim(color, brightness);
  color_ctrl = dim(color, brightness);
  color_alt = dim(color, brightness);
  color_cmd = dim(color, brightness);
  color_app = dim(color, brightness);
  color_printscreen = dim(color, brightness);
  color_pause = dim(color, brightness);
  color_scrolllock = dim(color, brightness);
  color_capslock = dim(color, brightness);
  color_fkeys = dim(color, brightness);
  color_fkey_f1 = dim(color, brightness);
  color_fkey_f2 = dim(color, brightness);
  color_fkey_f3 = dim(color, brightness);
  color_fkey_f4 = dim(color, brightness);
  color_fkey_f5 = dim(color, brightness);
  color_fkey_f6 = dim(color, brightness);
  color_fkey_f7 = dim(color, brightness);
  color_fkey_f8 = dim(color, brightness);
  color_fkey_f9 = dim(color, brightness);
  color_fkey_f10 = dim(color, brightness);
  color_fkey_f11 = dim(color, brightness);
  color_fkey_f12 = dim(color, brightness);
  color_fkey_f13 = dim(color, brightness);
  color_fkey_f14 = dim(color, brightness);
  color_fkey_f15 = dim(color, brightness);
  color_fkey_f16 = dim(color, brightness);
  color_fkey_f17 = dim(color, brightness);
  color_fkey_f18 = dim(color, brightness);
  color_fkey_f19 = dim(color, brightness);
  color_fn = dim(color, brightness);
  color_media = dim(color, brightness);
  color_media_play = dim(color, brightness);
  color_media_prev = dim(color, brightness);
  color_media_next = dim(color, brightness);
  color_media_stop = dim(color, brightness);
  color_media_volup = dim(color, brightness);
  color_media_voldown = dim(color, brightness);
  color_media_mute = dim(color, brightness);
  color_led = dim(color, brightness);
  color_mousemove = dim(color, brightness);
  color_mousebuttons = dim(color, brightness);
  color_mousewarp = dim(color, brightness);
  color_mousescroll = dim(color, brightness);
}

// Color keys that aren't letters, numbers, or punctuation
void LEDFunctionalColor::allModifiers(cRGB color, byte brightness) {
  color_escape = dim(color, brightness);
  color_backspace = dim(color, brightness);
  color_delete = dim(color, brightness);
  color_enter = dim(color, brightness);
  color_arrows = dim(color, brightness);
  color_nav = dim(color, brightness);
  color_insert = dim(color, brightness);
  color_shift = dim(color, brightness);
  color_ctrl = dim(color, brightness);
  color_alt = dim(color, brightness);
  color_cmd = dim(color, brightness);
  color_app = dim(color, brightness);
  color_printscreen = dim(color, brightness);
  color_pause = dim(color, brightness);
  color_scrolllock = dim(color, brightness);
  color_capslock = dim(color, brightness);
  color_fkeys = dim(color, brightness);
  color_fn = dim(color, brightness);
}

void LEDFunctionalColor::allMouse(cRGB color, byte brightness){
  color_mousemove = dim(color, brightness);
  color_mousebuttons = dim(color, brightness);
  color_mousewarp = dim(color, brightness);
  color_mousescroll = dim(color, brightness);
}

void LEDFunctionalColor::escape(cRGB color, byte brightness) {
  color_escape = dim(color, brightness);
}

void LEDFunctionalColor::numbers(cRGB color, byte brightness){
  color_numbers = dim(color, brightness);
  color_number_1 = dim(color, brightness);
  color_number_2 = dim(color, brightness);
  color_number_3 = dim(color, brightness);
  color_number_4 = dim(color, brightness);
  color_number_5 = dim(color, brightness);
  color_number_6 = dim(color, brightness);
  color_number_7 = dim(color, brightness);
  color_number_8 = dim(color, brightness);
  color_number_9 = dim(color, brightness);
  color_number_0 = dim(color, brightness);
  color_number_minus = dim(color, brightness);
  color_number_equals = dim(color, brightness);
}

void LEDFunctionalColor::letters(cRGB color, byte brightness){
  color_letters = dim(color, brightness);
  color_letter_a = dim(color, brightness);
  color_letter_b = dim(color, brightness);
  color_letter_c = dim(color, brightness);
  color_letter_d = dim(color, brightness);
  color_letter_e = dim(color, brightness);
  color_letter_f = dim(color, brightness);
  color_letter_g = dim(color, brightness);
  color_letter_h = dim(color, brightness);
  color_letter_i = dim(color, brightness);
  color_letter_j = dim(color, brightness);
  color_letter_k = dim(color, brightness);
  color_letter_l = dim(color, brightness);
  color_letter_m = dim(color, brightness);
  color_letter_n = dim(color, brightness);
  color_letter_o = dim(color, brightness);
  color_letter_p = dim(color, brightness);
  color_letter_q = dim(color, brightness);
  color_letter_r = dim(color, brightness);
  color_letter_s = dim(color, brightness);
  color_letter_t = dim(color, brightness);
  color_letter_u = dim(color, brightness);
  color_letter_v = dim(color, brightness);
  color_letter_w = dim(color, brightness);
  color_letter_x = dim(color, brightness);
  color_letter_y = dim(color, brightness);
  color_letter_z = dim(color, brightness);
}

void LEDFunctionalColor::punctuation(cRGB color, byte brightness){
  color_punctuation = dim(color, brightness);
  color_punctuation_backtick = dim(color, brightness);
  color_punctuation_period = dim(color, brightness);
  color_punctuation_comma = dim(color, brightness);
  color_punctuation_semicolon = dim(color, brightness);
  color_punctuation_quote = dim(color, brightness);
  color_punctuation_slash = dim(color, brightness);
}

void LEDFunctionalColor::brackets(cRGB color, byte brightness){
  color_brackets = dim(color, brightness);
  color_bracket_leftbracket = dim(color, brightness);
  color_bracket_rightbracket = dim(color, brightness);
  color_bracket_leftcurlybracket = dim(color, brightness);
  color_bracket_rightcurlybracket = dim(color, brightness);
}

void LEDFunctionalColor::backslash(cRGB color, byte brightness){
  color_backslash = dim(color, brightness);
}

void LEDFunctionalColor::pipe(cRGB color, byte brightness){
  color_pipe = dim(color, brightness);
}

void LEDFunctionalColor::tab(cRGB color, byte brightness){
  color_tab = dim(color, brightness);
}

void LEDFunctionalColor::backspace(cRGB color, byte brightness){
  color_backspace = dim(color, brightness);
}

void LEDFunctionalColor::del(cRGB color, byte brightness){
  color_delete = dim(color, brightness);
}

void LEDFunctionalColor::enter(cRGB color, byte brightness){
  color_enter = dim(color, brightness);
}

void LEDFunctionalColor::arrows(cRGB color, byte brightness){
  color_arrows = dim(color, brightness);
  color_arrow_left = dim(color, brightness);
  color_arrow_up = dim(color, brightness);
  color_arrow_down = dim(color, brightness);
  color_arrow_right = dim(color, brightness);
}

void LEDFunctionalColor::nav(cRGB color, byte brightness){
  color_nav = dim(color, brightness);
  color_nav_home = dim(color, brightness);
  color_nav_end = dim(color, brightness);
  color_nav_pageup = dim(color, brightness);
  color_nav_pagedown = dim(color, brightness);
}

void LEDFunctionalColor::insert(cRGB color, byte brightness){
  color_insert = dim(color, brightness);
}

void LEDFunctionalColor::shift(cRGB color, byte brightness){
  color_shift = dim(color, brightness);
}

void LEDFunctionalColor::ctrl(cRGB color, byte brightness){
  color_ctrl = dim(color, brightness);
}

void LEDFunctionalColor::alt(cRGB color, byte brightness){
  color_alt = dim(color, brightness);
}

void LEDFunctionalColor::cmd(cRGB color, byte brightness){
  color_cmd = dim(color, brightness);
}

void LEDFunctionalColor::app(cRGB color, byte brightness){
  color_app = dim(color, brightness);
}

void LEDFunctionalColor::printscreen(cRGB color, byte brightness){
  color_printscreen = dim(color, brightness);
}

void LEDFunctionalColor::pause(cRGB color, byte brightness){
  color_pause = dim(color, brightness);
}

void LEDFunctionalColor::scrolllock(cRGB color, byte brightness){
  color_scrolllock = dim(color, brightness);
}

void LEDFunctionalColor::capslock(cRGB color, byte brightness){
  color_capslock = dim(color, brightness);
}

void LEDFunctionalColor::fkeys(cRGB color, byte brightness){
  color_fkeys = dim(color, brightness);
  color_fkey_f1 = dim(color, brightness);
  color_fkey_f2 = dim(color, brightness);
  color_fkey_f3 = dim(color, brightness);
  color_fkey_f4 = dim(color, brightness);
  color_fkey_f5 = dim(color, brightness);
  color_fkey_f6 = dim(color, brightness);
  color_fkey_f7 = dim(color, brightness);
  color_fkey_f8 = dim(color, brightness);
  color_fkey_f9 = dim(color, brightness);
  color_fkey_f10 = dim(color, brightness);
  color_fkey_f11 = dim(color, brightness);
  color_fkey_f12 = dim(color, brightness);
  color_fkey_f13 = dim(color, brightness);
  color_fkey_f14 = dim(color, brightness);
  color_fkey_f15 = dim(color, brightness);
  color_fkey_f16 = dim(color, brightness);
  color_fkey_f17 = dim(color, brightness);
  color_fkey_f18 = dim(color, brightness);
  color_fkey_f19 = dim(color, brightness);
}

void LEDFunctionalColor::fn(cRGB color, byte brightness){
  color_fn = dim(color, brightness);
}

void LEDFunctionalColor::media(cRGB color, byte brightness){
  color_media = dim(color, brightness);
  color_media_play = dim(color, brightness);
  color_media_prev = dim(color, brightness);
  color_media_next = dim(color, brightness);
  color_media_stop = dim(color, brightness);
  color_media_volup = dim(color, brightness);
  color_media_voldown = dim(color, brightness);
  color_media_mute = dim(color, brightness);
}

void LEDFunctionalColor::led(cRGB color, byte brightness){
  color_led = dim(color, brightness);
}

void LEDFunctionalColor::mousemove(cRGB color, byte brightness){
  color_mousemove = dim(color, brightness);
}

void LEDFunctionalColor::mousebuttons(cRGB color, byte brightness){
  color_mousebuttons = dim(color, brightness);
}

void LEDFunctionalColor::mousewarp(cRGB color, byte brightness){
  color_mousewarp = dim(color, brightness);
}

void LEDFunctionalColor::mousescroll(cRGB color, byte brightness){
  color_mousescroll = dim(color, brightness);
}

// All the new individual key functions with brightness
void LEDFunctionalColor::number_1(cRGB color, byte brightness){color_number_1 = dim(color, brightness);}
void LEDFunctionalColor::number_2(cRGB color, byte brightness){color_number_2 = dim(color, brightness);}
void LEDFunctionalColor::number_3(cRGB color, byte brightness){color_number_3 = dim(color, brightness);}
void LEDFunctionalColor::number_4(cRGB color, byte brightness){color_number_4 = dim(color, brightness);}
void LEDFunctionalColor::number_5(cRGB color, byte brightness){color_number_5 = dim(color, brightness);}
void LEDFunctionalColor::number_6(cRGB color, byte brightness){color_number_6 = dim(color, brightness);}
void LEDFunctionalColor::number_7(cRGB color, byte brightness){color_number_7 = dim(color, brightness);}
void LEDFunctionalColor::number_8(cRGB color, byte brightness){color_number_8 = dim(color, brightness);}
void LEDFunctionalColor::number_9(cRGB color, byte brightness){color_number_9 = dim(color, brightness);}
void LEDFunctionalColor::number_0(cRGB color, byte brightness){color_number_0 = dim(color, brightness);}
void LEDFunctionalColor::number_minus(cRGB color, byte brightness){color_number_minus = dim(color, brightness);}
void LEDFunctionalColor::number_equals(cRGB color, byte brightness){color_number_equals = dim(color, brightness);}
void LEDFunctionalColor::letter_a(cRGB color, byte brightness){color_letter_a = dim(color, brightness);}
void LEDFunctionalColor::letter_b(cRGB color, byte brightness){color_letter_b = dim(color, brightness);}
void LEDFunctionalColor::letter_c(cRGB color, byte brightness){color_letter_c = dim(color, brightness);}
void LEDFunctionalColor::letter_d(cRGB color, byte brightness){color_letter_d = dim(color, brightness);}
void LEDFunctionalColor::letter_e(cRGB color, byte brightness){color_letter_e = dim(color, brightness);}
void LEDFunctionalColor::letter_f(cRGB color, byte brightness){color_letter_f = dim(color, brightness);}
void LEDFunctionalColor::letter_g(cRGB color, byte brightness){color_letter_g = dim(color, brightness);}
void LEDFunctionalColor::letter_h(cRGB color, byte brightness){color_letter_h = dim(color, brightness);}
void LEDFunctionalColor::letter_i(cRGB color, byte brightness){color_letter_i = dim(color, brightness);}
void LEDFunctionalColor::letter_j(cRGB color, byte brightness){color_letter_j = dim(color, brightness);}
void LEDFunctionalColor::letter_k(cRGB color, byte brightness){color_letter_k = dim(color, brightness);}
void LEDFunctionalColor::letter_l(cRGB color, byte brightness){color_letter_l = dim(color, brightness);}
void LEDFunctionalColor::letter_m(cRGB color, byte brightness){color_letter_m = dim(color, brightness);}
void LEDFunctionalColor::letter_n(cRGB color, byte brightness){color_letter_n = dim(color, brightness);}
void LEDFunctionalColor::letter_o(cRGB color, byte brightness){color_letter_o = dim(color, brightness);}
void LEDFunctionalColor::letter_p(cRGB color, byte brightness){color_letter_p = dim(color, brightness);}
void LEDFunctionalColor::letter_q(cRGB color, byte brightness){color_letter_q = dim(color, brightness);}
void LEDFunctionalColor::letter_r(cRGB color, byte brightness){color_letter_r = dim(color, brightness);}
void LEDFunctionalColor::letter_s(cRGB color, byte brightness){color_letter_s = dim(color, brightness);}
void LEDFunctionalColor::letter_t(cRGB color, byte brightness){color_letter_t = dim(color, brightness);}
void LEDFunctionalColor::letter_u(cRGB color, byte brightness){color_letter_u = dim(color, brightness);}
void LEDFunctionalColor::letter_v(cRGB color, byte brightness){color_letter_v = dim(color, brightness);}
void LEDFunctionalColor::letter_w(cRGB color, byte brightness){color_letter_w = dim(color, brightness);}
void LEDFunctionalColor::letter_x(cRGB color, byte brightness){color_letter_x = dim(color, brightness);}
void LEDFunctionalColor::letter_y(cRGB color, byte brightness){color_letter_y = dim(color, brightness);}
void LEDFunctionalColor::letter_z(cRGB color, byte brightness){color_letter_z = dim(color, brightness);}
void LEDFunctionalColor::punctuation_backtick(cRGB color, byte brightness){color_punctuation_backtick = dim(color, brightness);}
void LEDFunctionalColor::punctuation_period(cRGB color, byte brightness){color_punctuation_period = dim(color, brightness);}
void LEDFunctionalColor::punctuation_comma(cRGB color, byte brightness){color_punctuation_comma = dim(color, brightness);}
void LEDFunctionalColor::punctuation_semicolon(cRGB color, byte brightness){color_punctuation_semicolon = dim(color, brightness);}
void LEDFunctionalColor::punctuation_quote(cRGB color, byte brightness){color_punctuation_quote = dim(color, brightness);}
void LEDFunctionalColor::punctuation_slash(cRGB color, byte brightness){color_punctuation_slash = dim(color, brightness);}
void LEDFunctionalColor::bracket_leftbracket(cRGB color, byte brightness){color_bracket_leftbracket = dim(color, brightness);}
void LEDFunctionalColor::bracket_rightbracket(cRGB color, byte brightness){color_bracket_rightbracket = dim(color, brightness);}
void LEDFunctionalColor::bracket_leftcurlybracket(cRGB color, byte brightness){color_bracket_leftcurlybracket = dim(color, brightness);}
void LEDFunctionalColor::bracket_rightcurlybracket(cRGB color, byte brightness){color_bracket_rightcurlybracket = dim(color, brightness);}
void LEDFunctionalColor::arrow_left(cRGB color, byte brightness){color_arrow_left = dim(color, brightness);}
void LEDFunctionalColor::arrow_up(cRGB color, byte brightness){color_arrow_up = dim(color, brightness);}
void LEDFunctionalColor::arrow_down(cRGB color, byte brightness){color_arrow_down = dim(color, brightness);}
void LEDFunctionalColor::arrow_right(cRGB color, byte brightness){color_arrow_right = dim(color, brightness);}
void LEDFunctionalColor::nav_home(cRGB color, byte brightness){color_nav_home = dim(color, brightness);}
void LEDFunctionalColor::nav_end(cRGB color, byte brightness){color_nav_end = dim(color, brightness);}
void LEDFunctionalColor::nav_pageup(cRGB color, byte brightness){color_nav_pageup = dim(color, brightness);}
void LEDFunctionalColor::nav_pagedown(cRGB color, byte brightness){color_nav_pagedown = dim(color, brightness);}
void LEDFunctionalColor::fkey_f1(cRGB color, byte brightness){color_fkey_f1 = dim(color, brightness);}
void LEDFunctionalColor::fkey_f2(cRGB color, byte brightness){color_fkey_f2 = dim(color, brightness);}
void LEDFunctionalColor::fkey_f3(cRGB color, byte brightness){color_fkey_f3 = dim(color, brightness);}
void LEDFunctionalColor::fkey_f4(cRGB color, byte brightness){color_fkey_f4 = dim(color, brightness);}
void LEDFunctionalColor::fkey_f5(cRGB color, byte brightness){color_fkey_f5 = dim(color, brightness);}
void LEDFunctionalColor::fkey_f6(cRGB color, byte brightness){color_fkey_f6 = dim(color, brightness);}
void LEDFunctionalColor::fkey_f7(cRGB color, byte brightness){color_fkey_f7 = dim(color, brightness);}
void LEDFunctionalColor::fkey_f8(cRGB color, byte brightness){color_fkey_f8 = dim(color, brightness);}
void LEDFunctionalColor::fkey_f9(cRGB color, byte brightness){color_fkey_f9 = dim(color, brightness);}
void LEDFunctionalColor::fkey_f10(cRGB color, byte brightness){color_fkey_f10 = dim(color, brightness);}
void LEDFunctionalColor::fkey_f11(cRGB color, byte brightness){color_fkey_f11 = dim(color, brightness);}
void LEDFunctionalColor::fkey_f12(cRGB color, byte brightness){color_fkey_f12 = dim(color, brightness);}
void LEDFunctionalColor::fkey_f13(cRGB color, byte brightness){color_fkey_f13 = dim(color, brightness);}
void LEDFunctionalColor::fkey_f14(cRGB color, byte brightness){color_fkey_f14 = dim(color, brightness);}
void LEDFunctionalColor::fkey_f15(cRGB color, byte brightness){color_fkey_f15 = dim(color, brightness);}
void LEDFunctionalColor::fkey_f16(cRGB color, byte brightness){color_fkey_f16 = dim(color, brightness);}
void LEDFunctionalColor::fkey_f17(cRGB color, byte brightness){color_fkey_f17 = dim(color, brightness);}
void LEDFunctionalColor::fkey_f18(cRGB color, byte brightness){color_fkey_f18 = dim(color, brightness);}
void LEDFunctionalColor::fkey_f19(cRGB color, byte brightness){color_fkey_f19 = dim(color, brightness);}
void LEDFunctionalColor::media_play(cRGB color, byte brightness){color_media_play = dim(color, brightness);}
void LEDFunctionalColor::media_prev(cRGB color, byte brightness){color_media_prev = dim(color, brightness);}
void LEDFunctionalColor::media_next(cRGB color, byte brightness){color_media_next = dim(color, brightness);}
void LEDFunctionalColor::media_stop(cRGB color, byte brightness){color_media_stop = dim(color, brightness);}
void LEDFunctionalColor::media_volup(cRGB color, byte brightness){color_media_volup = dim(color, brightness);}
void LEDFunctionalColor::media_voldown(cRGB color, byte brightness){color_media_voldown = dim(color, brightness);}
void LEDFunctionalColor::media_mute(cRGB color, byte brightness){color_media_mute = dim(color, brightness);}

/*
 * setKeyLed accepts a Key position and sets it to the appropriate color
 * from the user's definitions a using a series of if/else statements.
 */
void LEDFunctionalColor::setKeyLed(uint8_t r, uint8_t c) { 
  Key k = Layer.lookupOnActiveLayer(r, c);
  if (k == Key_Escape) {::LEDControl.setCrgbAt(r, c, color_escape); return;}
  else if (k == Key_LEDEffectNext) {::LEDControl.setCrgbAt(r, c, color_led); return;}
  
  // letters
  else if (k == Key_1) {::LEDControl.setCrgbAt(r, c, color_number_1); return;}
  else if (k == Key_2) {::LEDControl.setCrgbAt(r, c, color_number_2); return;}
  else if (k == Key_3) {::LEDControl.setCrgbAt(r, c, color_number_3); return;}
  else if (k == Key_4) {::LEDControl.setCrgbAt(r, c, color_number_4); return;}
  else if (k == Key_5) {::LEDControl.setCrgbAt(r, c, color_number_5); return;}
  else if (k == Key_6) {::LEDControl.setCrgbAt(r, c, color_number_6); return;}
  else if (k == Key_7) {::LEDControl.setCrgbAt(r, c, color_number_7); return;}
  else if (k == Key_8) {::LEDControl.setCrgbAt(r, c, color_number_8); return;}
  else if (k == Key_9) {::LEDControl.setCrgbAt(r, c, color_number_9); return;}
  else if (k == Key_0) {::LEDControl.setCrgbAt(r, c, color_number_0); return;}
  else if (k == Key_Minus) {::LEDControl.setCrgbAt(r, c, color_number_minus); return;}
  else if (k == Key_Equals) {::LEDControl.setCrgbAt(r, c, color_number_equals); return;}
 
  // letters
  else if (k == Key_A) {::LEDControl.setCrgbAt(r, c, color_letter_a); return;}
  else if (k == Key_B) {::LEDControl.setCrgbAt(r, c, color_letter_b); return;}
  else if (k == Key_C) {::LEDControl.setCrgbAt(r, c, color_letter_c); return;}
  else if (k == Key_D) {::LEDControl.setCrgbAt(r, c, color_letter_d); return;}
  else if (k == Key_E) {::LEDControl.setCrgbAt(r, c, color_letter_e); return;}
  else if (k == Key_F) {::LEDControl.setCrgbAt(r, c, color_letter_f); return;}
  else if (k == Key_G) {::LEDControl.setCrgbAt(r, c, color_letter_g); return;}
  else if (k == Key_H) {::LEDControl.setCrgbAt(r, c, color_letter_h); return;}
  else if (k == Key_I) {::LEDControl.setCrgbAt(r, c, color_letter_i); return;}
  else if (k == Key_J) {::LEDControl.setCrgbAt(r, c, color_letter_j); return;}
  else if (k == Key_K) {::LEDControl.setCrgbAt(r, c, color_letter_k); return;}
  else if (k == Key_L) {::LEDControl.setCrgbAt(r, c, color_letter_l); return;}
  else if (k == Key_M) {::LEDControl.setCrgbAt(r, c, color_letter_m); return;}
  else if (k == Key_N) {::LEDControl.setCrgbAt(r, c, color_letter_n); return;}
  else if (k == Key_O) {::LEDControl.setCrgbAt(r, c, color_letter_o); return;}
  else if (k == Key_P) {::LEDControl.setCrgbAt(r, c, color_letter_p); return;}
  else if (k == Key_Q) {::LEDControl.setCrgbAt(r, c, color_letter_q); return;}
  else if (k == Key_R) {::LEDControl.setCrgbAt(r, c, color_letter_r); return;}
  else if (k == Key_S) {::LEDControl.setCrgbAt(r, c, color_letter_s); return;}
  else if (k == Key_T) {::LEDControl.setCrgbAt(r, c, color_letter_t); return;}
  else if (k == Key_U) {::LEDControl.setCrgbAt(r, c, color_letter_u); return;}
  else if (k == Key_V) {::LEDControl.setCrgbAt(r, c, color_letter_v); return;}
  else if (k == Key_W) {::LEDControl.setCrgbAt(r, c, color_letter_w); return;}
  else if (k == Key_X) {::LEDControl.setCrgbAt(r, c, color_letter_x); return;}
  else if (k == Key_Y) {::LEDControl.setCrgbAt(r, c, color_letter_y); return;}
  else if (k == Key_Z) {::LEDControl.setCrgbAt(r, c, color_letter_z); return;}

  // punctuation
  else if (k == Key_Backtick)  {::LEDControl.setCrgbAt(r, c, color_punctuation_backtick); return;}
  else if (k == Key_Period)    {::LEDControl.setCrgbAt(r, c, color_punctuation_period); return;}
  else if (k == Key_Comma)     {::LEDControl.setCrgbAt(r, c, color_punctuation_comma); return;}
  else if (k == Key_Semicolon) {::LEDControl.setCrgbAt(r, c, color_punctuation_semicolon); return;}
  else if (k == Key_Quote)     {::LEDControl.setCrgbAt(r, c, color_punctuation_quote); return;}
  else if (k == Key_Slash)     {::LEDControl.setCrgbAt(r, c, color_punctuation_slash); return;}

  else if (k == Key_LeftBracket)       {::LEDControl.setCrgbAt(r, c, color_bracket_leftbracket); return;}
  else if (k == Key_RightBracket)      {::LEDControl.setCrgbAt(r, c, color_bracket_rightbracket); return;}
  else if (k == Key_LeftCurlyBracket)  {::LEDControl.setCrgbAt(r, c, color_bracket_leftcurlybracket); return;}
  else if (k == Key_RightCurlyBracket) {::LEDControl.setCrgbAt(r, c, color_bracket_rightcurlybracket); return;}

  else if (k == Key_Backslash) {::LEDControl.setCrgbAt(r, c, color_backslash); return;}
  else if (k == Key_Pipe)      {::LEDControl.setCrgbAt(r, c, color_pipe); return;}
  
  else if (k == Key_Space)     {::LEDControl.setCrgbAt(r, c, color_space); return;}
  else if (k == Key_Enter)     {::LEDControl.setCrgbAt(r, c, color_enter); return;}
  else if (k == Key_Tab)       {::LEDControl.setCrgbAt(r, c, color_tab); return;}
  else if (k == Key_Backspace) {::LEDControl.setCrgbAt(r, c, color_backspace); return;}
  else if (k == Key_Delete)    {::LEDControl.setCrgbAt(r, c, color_delete); return;}
  else if (k == Key_Insert)    {::LEDControl.setCrgbAt(r, c, color_insert); return;}

  // nav keys
  else if (k == Key_Home) {::LEDControl.setCrgbAt(r, c, color_nav_home); return;}
  else if (k == Key_End) {::LEDControl.setCrgbAt(r, c, color_nav_end); return;}
  else if (k == Key_PageUp) {::LEDControl.setCrgbAt(r, c, color_nav_pageup); return;}
  else if (k == Key_PageDown) {::LEDControl.setCrgbAt(r, c, color_nav_pagedown); return;}

  // arrow keys
  else if (k == Key_LeftArrow) {::LEDControl.setCrgbAt(r, c, color_arrow_left); return;}
  else if (k == Key_UpArrow) {::LEDControl.setCrgbAt(r, c, color_arrow_up); return;}
  else if (k == Key_DownArrow) {::LEDControl.setCrgbAt(r, c, color_arrow_down); return;}
  else if (k == Key_RightArrow) {::LEDControl.setCrgbAt(r, c, color_arrow_right); return;}
  
  // modifiers
  else if (k == Key_LeftShift) {::LEDControl.setCrgbAt(r, c, color_shift); return;}
  else if (k == Key_RightShift) {::LEDControl.setCrgbAt(r, c, color_shift); return;}
  else if (k == Key_LeftControl) {::LEDControl.setCrgbAt(r, c, color_ctrl); return;}
  else if (k == Key_RightControl) {::LEDControl.setCrgbAt(r, c, color_ctrl); return;}
  else if (k == Key_LeftAlt) {::LEDControl.setCrgbAt(r, c, color_alt); return;}
  else if (k == Key_RightAlt) {::LEDControl.setCrgbAt(r, c, color_alt); return;}
  else if (k == Key_LeftGui) {::LEDControl.setCrgbAt(r, c, color_cmd); return;}
  else if (k == Key_RightGui) {::LEDControl.setCrgbAt(r, c, color_cmd); return;}
  // context menu key
  else if (k == Key_PcApplication) {::LEDControl.setCrgbAt(r, c, color_app); return;}
  
  // function keys
  else if (k == Key_F1)  {::LEDControl.setCrgbAt(r, c, color_fkey_f1); return;}
  else if (k == Key_F2)  {::LEDControl.setCrgbAt(r, c, color_fkey_f2); return;}
  else if (k == Key_F3)  {::LEDControl.setCrgbAt(r, c, color_fkey_f3); return;}
  else if (k == Key_F4)  {::LEDControl.setCrgbAt(r, c, color_fkey_f4); return;}
  else if (k == Key_F5)  {::LEDControl.setCrgbAt(r, c, color_fkey_f5); return;}
  else if (k == Key_F6)  {::LEDControl.setCrgbAt(r, c, color_fkey_f6); return;}
  else if (k == Key_F7)  {::LEDControl.setCrgbAt(r, c, color_fkey_f7); return;}
  else if (k == Key_F8)  {::LEDControl.setCrgbAt(r, c, color_fkey_f8); return;}
  else if (k == Key_F9)  {::LEDControl.setCrgbAt(r, c, color_fkey_f9); return;}
  else if (k == Key_F10) {::LEDControl.setCrgbAt(r, c, color_fkey_f10); return;}
  else if (k == Key_F11) {::LEDControl.setCrgbAt(r, c, color_fkey_f11); return;}
  else if (k == Key_F12) {::LEDControl.setCrgbAt(r, c, color_fkey_f12); return;}
  else if (k == Key_F13) {::LEDControl.setCrgbAt(r, c, color_fkey_f13); return;}
  else if (k == Key_F14) {::LEDControl.setCrgbAt(r, c, color_fkey_f14); return;}
  else if (k == Key_F15) {::LEDControl.setCrgbAt(r, c, color_fkey_f15); return;}
  else if (k == Key_F16) {::LEDControl.setCrgbAt(r, c, color_fkey_f16); return;}
  else if (k == Key_F17) {::LEDControl.setCrgbAt(r, c, color_fkey_f17); return;}
  else if (k == Key_F18) {::LEDControl.setCrgbAt(r, c, color_fkey_f18); return;}
  else if (k == Key_F19) {::LEDControl.setCrgbAt(r, c, color_fkey_f19); return;}

  // system keys
  else if (k == Key_PrintScreen) {::LEDControl.setCrgbAt(r, c, color_printscreen); return;}
  else if (k == Key_Pause) {::LEDControl.setCrgbAt(r, c, color_pause); return;}
  else if (k == Key_ScrollLock) {::LEDControl.setCrgbAt(r, c, color_scrolllock); return;}
  else if (k == Key_CapsLock) {::LEDControl.setCrgbAt(r, c, color_capslock); return;}
  
  // media keys
  else if (k == Consumer_PlaySlashPause) {::LEDControl.setCrgbAt(r, c, color_media_play); return;}
  else if (k == Consumer_ScanPreviousTrack) {::LEDControl.setCrgbAt(r, c, color_media_prev); return;}
  else if (k == Consumer_ScanNextTrack) {::LEDControl.setCrgbAt(r, c, color_media_next); return;}
  else if (k == Consumer_Stop) {::LEDControl.setCrgbAt(r, c, color_media_stop); return;}
  else if (k == Consumer_VolumeIncrement) {::LEDControl.setCrgbAt(r, c, color_media_volup); return;}
  else if (k == Consumer_VolumeDecrement) {::LEDControl.setCrgbAt(r, c, color_media_voldown); return;}
  else if (k == Consumer_Mute) {::LEDControl.setCrgbAt(r, c, color_media_mute); return;}

  // mouse keys
  else if (k == Key_mouseL) {::LEDControl.setCrgbAt(r, c, color_mousemove); return;}
  else if (k == Key_mouseR) {::LEDControl.setCrgbAt(r, c, color_mousemove); return;}
  else if (k == Key_mouseUp) {::LEDControl.setCrgbAt(r, c, color_mousemove); return;}
  else if (k == Key_mouseDn) {::LEDControl.setCrgbAt(r, c, color_mousemove); return;}
  else if (k == Key_mouseBtnR) {::LEDControl.setCrgbAt(r, c, color_mousebuttons); return;}
  else if (k == Key_mouseBtnL) {::LEDControl.setCrgbAt(r, c, color_mousebuttons); return;}
  else if (k == Key_mouseBtnM) {::LEDControl.setCrgbAt(r, c, color_mousebuttons); return;}
  else if (k == Key_mouseWarpEnd) {::LEDControl.setCrgbAt(r, c, color_mousewarp); return;}
  else if (k == Key_mouseWarpNW) {::LEDControl.setCrgbAt(r, c, color_mousewarp); return;}
  else if (k == Key_mouseWarpSW) {::LEDControl.setCrgbAt(r, c, color_mousewarp); return;}
  else if (k == Key_mouseWarpNE) {::LEDControl.setCrgbAt(r, c, color_mousewarp); return;}
  else if (k == Key_mouseWarpSW) {::LEDControl.setCrgbAt(r, c, color_mousewarp); return;}
  // mouse scroll
  else if (k == Key_mouseScrollUp) {::LEDControl.setCrgbAt(r, c, color_mousescroll); return;}
  else if (k == Key_mouseScrollDn) {::LEDControl.setCrgbAt(r, c, color_mousescroll); return;}


}// end setKeyLed


// dims the specified color from 0 (off) to 255 (full)
cRGB LEDFunctionalColor::dim(cRGB color, byte brightness) {
  return CRGB(color.r*brightness/255, color.g*brightness/255, color.b*brightness/255);
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
      ::LEDControl.setCrgbAt(3, 6, color_fn); 
      // right fn
      ::LEDControl.setCrgbAt(3, 9, color_fn);
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