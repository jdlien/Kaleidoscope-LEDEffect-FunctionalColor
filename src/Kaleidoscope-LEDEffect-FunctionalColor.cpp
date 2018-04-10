#include "Kaleidoscope-LEDEffect-FunctionalColor.h"
#include "assert.h"

namespace kaleidoscope {

// themeDefault just sets the default theme.
void LEDFunctionalColor::FCPlugin::themeDefault() {
  this->setColorLookup(&LEDFunctionalColor::groupColorLookup<LEDFunctionalColor::colorMapDefault>);
}

void LEDFunctionalColor::FCPlugin::brightness(byte b) {
  brightnessSetting = b;
}

byte LEDFunctionalColor::FCPlugin::brightness() {
  return brightnessSetting;
}

//These are special macros that allow the brightness of an FC instance to be adjusted
void LEDFunctionalColor::FCPlugin::thisBrightnessUp(uint8_t keyState) {
  if (keyToggledOn(keyState)) {
    brightnessSetting += 16;
    this->refresh();
  }
}

void LEDFunctionalColor::FCPlugin::thisBrightnessDown(uint8_t keyState) {
  if (keyToggledOn(keyState)) {
    brightnessSetting -= 16;
    this->refresh();
  }
}

void LEDFunctionalColor::FCPlugin::brightnessUp(uint8_t keyState) {
  if(!LEDFunctionalColor::FCPlugin::lastFC) return;
  LEDFunctionalColor::FCPlugin::lastFC->thisBrightnessUp(keyState);
}

void LEDFunctionalColor::FCPlugin::brightnessDown(uint8_t keyState) {
  if(!LEDFunctionalColor::FCPlugin::lastFC) return;
  LEDFunctionalColor::FCPlugin::lastFC->thisBrightnessDown(keyState);
}

//setKeyLed accepts a Key position and sets it to the appropriate color from a lookup function
void LEDFunctionalColor::FCPlugin::setKeyLed(uint8_t r, uint8_t c) {
  Key k = Layer.lookupOnActiveLayer(r, c);
  bool skip = false, none = false;
  auto color = exceptionsLookup(k, skip, none);
  // if there was no match, we continue to mainColorLookup
  if (none) {
    if(!mainColorLookup) return;
    color = mainColorLookup(k, skip);
  }
  if (skip) return;
  ::LEDControl.setCrgbAt(r, c, dim(color, brightnessSetting));
}// end setKeyLed()

LEDFunctionalColor::FCPlugin* LEDFunctionalColor::FCPlugin::lastFC;


//Forces an update of the LEDs
void LEDFunctionalColor::FCPlugin::refresh(void) {
  // Loop through every row and column and set each LED based on its key's function
  for (uint8_t r = 0; r < ROWS; r++) {
    for (uint8_t c = 0; c < COLS; c++) {
      Key k = Layer.lookupOnActiveLayer(r, c);
      setKeyLed(r, c);
    }
  }
  lastFC = this;
}


void LEDFunctionalColor::FCPlugin::onActivate(void) {
  this->refresh();
  lastFC = this;
}


//When the active layer is changed, update the colors.
void LEDFunctionalColor::FCPlugin::update(void) {
  uint8_t current_layerState = ::Layer_::getLayerState();

  // Only set the colors again if the active layer changed
  if (current_layerState != last_layerState) { this->refresh(); }

  last_layerState = current_layerState;

}// end update()



}//namespace
