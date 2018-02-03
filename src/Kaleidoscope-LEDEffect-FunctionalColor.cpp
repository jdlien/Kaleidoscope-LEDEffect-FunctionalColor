#include "Kaleidoscope-LEDEffect-FunctionalColor.h"

namespace kaleidoscope {

LEDFunctionalColor::LEDFunctionalColor(uint8_t fLayer) {
  functionLayer = fLayer;
}

LEDFunctionalColor::LEDFunctionalColor(void) {
}


void LEDFunctionalColor::brightness(byte brightness) {
  color_escape = dim(color_escape, brightness);
  color_numbers = dim(color_numbers, brightness);
  color_letters = dim(color_letters, brightness);
  color_punctuation = dim(color_punctuation, brightness);
  color_brackets = dim(color_brackets, brightness);
  color_backslash = dim(color_backslash, brightness);
  color_pipe = dim(color_pipe, brightness);
  color_space = dim(color_space, brightness);
  color_tab = dim(color_tab, brightness);
  color_backspace = dim(color_backspace, brightness);
  color_delete = dim(color_delete, brightness);
  color_enter = dim(color_enter, brightness);
  color_arrows = dim(color_arrows, brightness);
  color_nav = dim(color_nav, brightness);
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
  color_fn = dim(color_fn, brightness);
  color_media = dim(color_media, brightness);
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
  color_letters = color;
  color_punctuation = color;
  color_brackets = color;
  color_backslash = color;
  color_pipe = color;
  color_space = color;
  color_tab = color;
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
  color_media = color;
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
}

void LEDFunctionalColor::letters(cRGB color){
  color_letters = color;
}

void LEDFunctionalColor::punctuation(cRGB color){
  color_punctuation = color;
}

void LEDFunctionalColor::brackets(cRGB color){
  color_brackets = color;
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
}

void LEDFunctionalColor::nav(cRGB color){
  color_nav = color;
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
}

void LEDFunctionalColor::fn(cRGB color){
  color_fn = color;
}

void LEDFunctionalColor::media(cRGB color){
  color_media = color;
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


// Sets all the colors to the same thing
void LEDFunctionalColor::all(cRGB color, byte brightness){
  color_escape = dim(color, brightness);
  color_numbers = dim(color, brightness);
  color_letters = dim(color, brightness);
  color_punctuation = dim(color, brightness);
  color_brackets = dim(color, brightness);
  color_backslash = dim(color, brightness);
  color_pipe = dim(color, brightness);
  color_space = dim(color, brightness);
  color_tab = dim(color, brightness);
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
  color_media = dim(color, brightness);
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
}

void LEDFunctionalColor::letters(cRGB color, byte brightness){
  color_letters = dim(color, brightness);
}

void LEDFunctionalColor::punctuation(cRGB color, byte brightness){
  color_punctuation = dim(color, brightness);
}

void LEDFunctionalColor::brackets(cRGB color, byte brightness){
  color_brackets = dim(color, brightness);
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
}

void LEDFunctionalColor::nav(cRGB color, byte brightness){
  color_nav = dim(color, brightness);
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
}

void LEDFunctionalColor::fn(cRGB color, byte brightness){
  color_fn = dim(color, brightness);
}

void LEDFunctionalColor::media(cRGB color, byte brightness){
  color_media = dim(color, brightness);
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

/*
 * setKeyLed accepts a Key position and sets it to the appropriate color
 * from the user's definitions a using a series of if/else statements.
 */
void LEDFunctionalColor::setKeyLed(uint8_t r, uint8_t c) { 
  Key k = Layer.lookupOnActiveLayer(r, c);
  if (k == Key_Escape) {::LEDControl.setCrgbAt(r, c, color_escape); return;}
  else if (k == Key_LEDEffectNext) {::LEDControl.setCrgbAt(r, c, color_led); return;}
  
  // letters
  else if (k == Key_1) {::LEDControl.setCrgbAt(r, c, color_numbers); return;}
  else if (k == Key_2) {::LEDControl.setCrgbAt(r, c, color_numbers); return;}
  else if (k == Key_3) {::LEDControl.setCrgbAt(r, c, color_numbers); return;}
  else if (k == Key_4) {::LEDControl.setCrgbAt(r, c, color_numbers); return;}
  else if (k == Key_5) {::LEDControl.setCrgbAt(r, c, color_numbers); return;}
  else if (k == Key_6) {::LEDControl.setCrgbAt(r, c, color_numbers); return;}
  else if (k == Key_7) {::LEDControl.setCrgbAt(r, c, color_numbers); return;}
  else if (k == Key_8) {::LEDControl.setCrgbAt(r, c, color_numbers); return;}
  else if (k == Key_9) {::LEDControl.setCrgbAt(r, c, color_numbers); return;}
  else if (k == Key_0) {::LEDControl.setCrgbAt(r, c, color_numbers); return;}
  else if (k == Key_Minus) {::LEDControl.setCrgbAt(r, c, color_numbers); return;}
  else if (k == Key_Equals) {::LEDControl.setCrgbAt(r, c, color_numbers); return;}
 
  // letters
  else if (k == Key_A) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_B) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_C) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_D) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_E) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_F) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_G) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_H) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_I) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_J) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_K) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_L) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_M) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_N) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_O) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_P) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_Q) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_R) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_S) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_T) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_U) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_V) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_W) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_X) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_Y) {::LEDControl.setCrgbAt(r, c, color_letters); return;}
  else if (k == Key_Z) {::LEDControl.setCrgbAt(r, c, color_letters); return;}

  // punctuation
  else if (k == Key_Backtick) {::LEDControl.setCrgbAt(r, c, color_punctuation); return;}
  else if (k == Key_Period) {::LEDControl.setCrgbAt(r, c, color_punctuation); return;}
  else if (k == Key_Comma) {::LEDControl.setCrgbAt(r, c, color_punctuation); return;}
  else if (k == Key_Semicolon) {::LEDControl.setCrgbAt(r, c, color_punctuation); return;}
  else if (k == Key_Quote) {::LEDControl.setCrgbAt(r, c, color_punctuation); return;}
  else if (k == Key_Slash) {::LEDControl.setCrgbAt(r, c, color_punctuation); return;}

  else if (k == Key_LeftBracket) {::LEDControl.setCrgbAt(r, c, color_brackets); return;}
  else if (k == Key_RightBracket) {::LEDControl.setCrgbAt(r, c, color_brackets); return;}
  else if (k == Key_LeftCurlyBracket) {::LEDControl.setCrgbAt(r, c, color_brackets); return;}
  else if (k == Key_RightCurlyBracket) {::LEDControl.setCrgbAt(r, c, color_brackets); return;}

  else if (k == Key_Backslash) {::LEDControl.setCrgbAt(r, c, color_backslash); return;}
  else if (k == Key_Pipe) {::LEDControl.setCrgbAt(r, c, color_pipe); return;}
  
  else if (k == Key_Space) {::LEDControl.setCrgbAt(r, c, color_space); return;}
  else if (k == Key_Enter) {::LEDControl.setCrgbAt(r, c, color_enter); return;}
  else if (k == Key_Tab) {::LEDControl.setCrgbAt(r, c, color_tab); return;}
  else if (k == Key_Backspace) {::LEDControl.setCrgbAt(r, c, color_backspace); return;}
  else if (k == Key_Delete) {::LEDControl.setCrgbAt(r, c, color_delete); return;}
  else if (k == Key_Insert) {::LEDControl.setCrgbAt(r, c, color_insert); return;}

  // nav keys
  else if (k == Key_Home) {::LEDControl.setCrgbAt(r, c, color_nav); return;}
  else if (k == Key_End) {::LEDControl.setCrgbAt(r, c, color_nav); return;}
  else if (k == Key_PageUp) {::LEDControl.setCrgbAt(r, c, color_nav); return;}
  else if (k == Key_PageDown) {::LEDControl.setCrgbAt(r, c, color_nav); return;}

  // arrow keys
  else if (k == Key_LeftArrow) {::LEDControl.setCrgbAt(r, c, color_arrows); return;}
  else if (k == Key_UpArrow) {::LEDControl.setCrgbAt(r, c, color_arrows); return;}
  else if (k == Key_DownArrow) {::LEDControl.setCrgbAt(r, c, color_arrows); return;}
  else if (k == Key_RightArrow) {::LEDControl.setCrgbAt(r, c, color_arrows); return;}
  
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
  else if (k == Key_F1) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}
  else if (k == Key_F2) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}
  else if (k == Key_F3) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}
  else if (k == Key_F4) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}
  else if (k == Key_F5) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}
  else if (k == Key_F6) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}
  else if (k == Key_F7) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}
  else if (k == Key_F8) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}
  else if (k == Key_F9) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}
  else if (k == Key_F10) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}
  else if (k == Key_F11) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}
  else if (k == Key_F12) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}
  else if (k == Key_F13) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}
  else if (k == Key_F14) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}
  else if (k == Key_F15) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}
  else if (k == Key_F16) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}
  else if (k == Key_F17) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}
  else if (k == Key_F18) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}
  else if (k == Key_F19) {::LEDControl.setCrgbAt(r, c, color_fkeys); return;}

  // system keys
  else if (k == Key_PrintScreen) {::LEDControl.setCrgbAt(r, c, color_printscreen); return;}
  else if (k == Key_Pause) {::LEDControl.setCrgbAt(r, c, color_pause); return;}
  else if (k == Key_ScrollLock) {::LEDControl.setCrgbAt(r, c, color_scrolllock); return;}
  else if (k == Key_CapsLock) {::LEDControl.setCrgbAt(r, c, color_capslock); return;}
  
  // media keys
  else if (k == Consumer_PlaySlashPause) {::LEDControl.setCrgbAt(r, c, color_media); return;}
  else if (k == Consumer_ScanPreviousTrack) {::LEDControl.setCrgbAt(r, c, color_media); return;}
  else if (k == Consumer_ScanNextTrack) {::LEDControl.setCrgbAt(r, c, color_media); return;}
  else if (k == Consumer_Stop) {::LEDControl.setCrgbAt(r, c, color_media); return;}
  else if (k == Consumer_VolumeIncrement) {::LEDControl.setCrgbAt(r, c, color_media); return;}
  else if (k == Consumer_VolumeDecrement) {::LEDControl.setCrgbAt(r, c, color_media); return;}
  else if (k == Consumer_Mute) {::LEDControl.setCrgbAt(r, c, color_media); return;}

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