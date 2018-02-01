#include "Kaleidoscope-LEDEffect-FunctionalColor.h"

namespace kaleidoscope {

LEDFunctionalColor::LEDFunctionalColor(uint8_t fLayer) {
  functionLayer = fLayer;
}

LEDFunctionalColor::LEDFunctionalColor(void) {
}

// Sets all the colors to the same thing
void LEDFunctionalColor::setAll(cRGB color){
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
  color_mouse = color;
}

// Color keys that aren't letters, numbers, or punctuation
void LEDFunctionalColor::setModifiers(cRGB color) {
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

void LEDFunctionalColor::setEscape(cRGB color) {
  color_escape = color;
}

void LEDFunctionalColor::setNumbers(cRGB color){
  color_numbers = color;
}

void LEDFunctionalColor::setLetters(cRGB color){
  color_letters = color;
}

void LEDFunctionalColor::setPunctuation(cRGB color){
  color_punctuation = color;
}

void LEDFunctionalColor::setBrackets(cRGB color){
  color_brackets = color;
}

void LEDFunctionalColor::setBackslash(cRGB color){
  color_backslash = color;
}

void LEDFunctionalColor::setPipe(cRGB color){
  color_pipe = color;
}

void LEDFunctionalColor::setTab(cRGB color){
  color_tab = color;
}

void LEDFunctionalColor::setBackspace(cRGB color){
  color_backspace = color;
}

void LEDFunctionalColor::setDelete(cRGB color){
  color_delete = color;
}

void LEDFunctionalColor::setEnter(cRGB color){
  color_enter = color;
}

void LEDFunctionalColor::setArrows(cRGB color){
  color_arrows = color;
}

void LEDFunctionalColor::setNav(cRGB color){
  color_nav = color;
}

void LEDFunctionalColor::setInsert(cRGB color){
  color_insert = color;
}

void LEDFunctionalColor::setShift(cRGB color){
  color_shift = color;
}

void LEDFunctionalColor::setCtrl(cRGB color){
  color_ctrl = color;
}

void LEDFunctionalColor::setAlt(cRGB color){
  color_alt = color;
}

void LEDFunctionalColor::setCmd(cRGB color){
  color_cmd = color;
}

void LEDFunctionalColor::setApp(cRGB color){
  color_app = color;
}

void LEDFunctionalColor::setPrintscreen(cRGB color){
  color_printscreen = color;
}

void LEDFunctionalColor::setPause(cRGB color){
  color_pause = color;
}

void LEDFunctionalColor::setScrolllock(cRGB color){
  color_scrolllock = color;
}

void LEDFunctionalColor::setCapslock(cRGB color){
  color_capslock = color;
}

void LEDFunctionalColor::setFkeys(cRGB color){
  color_fkeys = color;
}

void LEDFunctionalColor::setFn(cRGB color){
  color_fn = color;
}

void LEDFunctionalColor::setMedia(cRGB color){
  color_media = color;
}

void LEDFunctionalColor::setLed(cRGB color){
  color_led = color;
}

void LEDFunctionalColor::setMouse(cRGB color){
  color_mouse = color;
}


// Sets all the colors to the same thing
void LEDFunctionalColor::setAll(cRGB color, byte brightness){
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
  color_mouse = dim(color, brightness);
}

// Color keys that aren't letters, numbers, or punctuation
void LEDFunctionalColor::setModifiers(cRGB color, byte brightness) {
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

void LEDFunctionalColor::setEscape(cRGB color, byte brightness) {
  color_escape = dim(color, brightness);
}

void LEDFunctionalColor::setNumbers(cRGB color, byte brightness){
  color_numbers = dim(color, brightness);
}

void LEDFunctionalColor::setLetters(cRGB color, byte brightness){
  color_letters = dim(color, brightness);
}

void LEDFunctionalColor::setPunctuation(cRGB color, byte brightness){
  color_punctuation = dim(color, brightness);
}

void LEDFunctionalColor::setBrackets(cRGB color, byte brightness){
  color_brackets = dim(color, brightness);
}

void LEDFunctionalColor::setBackslash(cRGB color, byte brightness){
  color_backslash = dim(color, brightness);
}

void LEDFunctionalColor::setPipe(cRGB color, byte brightness){
  color_pipe = dim(color, brightness);
}

void LEDFunctionalColor::setTab(cRGB color, byte brightness){
  color_tab = dim(color, brightness);
}

void LEDFunctionalColor::setBackspace(cRGB color, byte brightness){
  color_backspace = dim(color, brightness);
}

void LEDFunctionalColor::setDelete(cRGB color, byte brightness){
  color_delete = dim(color, brightness);
}

void LEDFunctionalColor::setEnter(cRGB color, byte brightness){
  color_enter = dim(color, brightness);
}

void LEDFunctionalColor::setArrows(cRGB color, byte brightness){
  color_arrows = dim(color, brightness);
}

void LEDFunctionalColor::setNav(cRGB color, byte brightness){
  color_nav = dim(color, brightness);
}

void LEDFunctionalColor::setInsert(cRGB color, byte brightness){
  color_insert = dim(color, brightness);
}

void LEDFunctionalColor::setShift(cRGB color, byte brightness){
  color_shift = dim(color, brightness);
}

void LEDFunctionalColor::setCtrl(cRGB color, byte brightness){
  color_ctrl = dim(color, brightness);
}

void LEDFunctionalColor::setAlt(cRGB color, byte brightness){
  color_alt = dim(color, brightness);
}

void LEDFunctionalColor::setCmd(cRGB color, byte brightness){
  color_cmd = dim(color, brightness);
}

void LEDFunctionalColor::setApp(cRGB color, byte brightness){
  color_app = dim(color, brightness);
}

void LEDFunctionalColor::setPrintscreen(cRGB color, byte brightness){
  color_printscreen = dim(color, brightness);
}

void LEDFunctionalColor::setPause(cRGB color, byte brightness){
  color_pause = dim(color, brightness);
}

void LEDFunctionalColor::setScrolllock(cRGB color, byte brightness){
  color_scrolllock = dim(color, brightness);
}

void LEDFunctionalColor::setCapslock(cRGB color, byte brightness){
  color_capslock = dim(color, brightness);
}

void LEDFunctionalColor::setFkeys(cRGB color, byte brightness){
  color_fkeys = dim(color, brightness);
}

void LEDFunctionalColor::setFn(cRGB color, byte brightness){
  color_fn = dim(color, brightness);
}

void LEDFunctionalColor::setMedia(cRGB color, byte brightness){
  color_media = dim(color, brightness);
}

void LEDFunctionalColor::setLed(cRGB color, byte brightness){
  color_led = dim(color, brightness);
}

void LEDFunctionalColor::setMouse(cRGB color, byte brightness){
  color_mouse = dim(color, brightness);
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
  else if (k == Key_mouseL) {::LEDControl.setCrgbAt(r, c, color_mouse); return;}
  else if (k == Key_mouseR) {::LEDControl.setCrgbAt(r, c, color_mouse); return;}
  else if (k == Key_mouseUp) {::LEDControl.setCrgbAt(r, c, color_mouse); return;}
  else if (k == Key_mouseDn) {::LEDControl.setCrgbAt(r, c, color_mouse); return;}
  else if (k == Key_mouseBtnR) {::LEDControl.setCrgbAt(r, c, color_mouse); return;}
  else if (k == Key_mouseBtnL) {::LEDControl.setCrgbAt(r, c, color_mouse); return;}
  else if (k == Key_mouseBtnM) {::LEDControl.setCrgbAt(r, c, color_mouse); return;}
  else if (k == Key_mouseWarpEnd) {::LEDControl.setCrgbAt(r, c, color_mouse); return;}
  else if (k == Key_mouseWarpNW) {::LEDControl.setCrgbAt(r, c, color_mouse); return;}
  else if (k == Key_mouseWarpSW) {::LEDControl.setCrgbAt(r, c, color_mouse); return;}
  else if (k == Key_mouseWarpNE) {::LEDControl.setCrgbAt(r, c, color_mouse); return;}
  else if (k == Key_mouseWarpSW) {::LEDControl.setCrgbAt(r, c, color_mouse); return;}

}// end setKeyLed


// dims the specified color from 0 (off) to 255 (full)
cRGB LEDFunctionalColor::dim(cRGB color, byte brightness) {
  return CRGB(color.r*brightness/255, color.g*brightness/255, color.b*brightness/255);;
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