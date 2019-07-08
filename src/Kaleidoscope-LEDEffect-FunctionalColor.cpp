#include "Kaleidoscope-LEDEffect-FunctionalColor.h"
#include "assert.h"

namespace kaleidoscope {


namespace plugin {
namespace FunctionalColorStuff {

// themeDefault just sets the default theme.
void FunctionalColor::themeDefault() {
  this->setColorLookup(&groupColorLookup<colorMapDefault>);
}

void FunctionalColor::brightness(byte b) {
  brightnessSetting = b;
}

byte FunctionalColor::brightness() {
  return brightnessSetting;
}

//These are special macros that allow the brightness of an FC instance to be adjusted
void FunctionalColor::thisBrightnessUp(uint8_t keyState) {
  if (keyToggledOn(keyState)) {
    brightnessSetting += 16;
    this->refresh();
  }
}

void FunctionalColor::thisBrightnessDown(uint8_t keyState) {
  if (keyToggledOn(keyState)) {
    brightnessSetting -= 16;
    this->refresh();
  }
}

void FunctionalColor::brightnessUp(uint8_t keyState) {
  if(!FunctionalColor::lastFC) return;
  FunctionalColor::lastFC->thisBrightnessUp(keyState);
}

void FunctionalColor::brightnessDown(uint8_t keyState) {
  if(!FunctionalColor::lastFC) return;
  FunctionalColor::lastFC->thisBrightnessDown(keyState);
}

//refreshAt accepts a Key position and sets it to the appropriate color from a lookup function
void FunctionalColor::refreshAt(byte r, byte c) {
  Key k = Layer.lookupOnActiveLayer(r, c);
  bool skip = false, none = false;
  auto color = exceptionsLookup(k, skip, none);
  // if there was no match, we continue to mainColorLookup
  if (none) {
    if(mainColorLookup) color = mainColorLookup(k, skip);
    // Otherwise we return the defaultColor from exceptions (nocolor if no custom function is defined)  
  }
  if (skip) return;
  ::LEDControl.setCrgbAt(r, c, dim(color, brightnessSetting));
}// end refreshAt()

FunctionalColor* FunctionalColor::lastFC;


//Forces an update of the LEDs
void FunctionalColor::refresh(void) {
  // Loop through every row and column and set each LED based on its key's function
  for (uint8_t r = 0; r < ROWS; r++) {
    for (uint8_t c = 0; c < COLS; c++) {
      refreshAt(r, c);
    }
  }
  lastFC = this;
}


void FunctionalColor::onActivate(void) {
  this->refresh();
  lastFC = this;
}


//When the active layer is changed, update the colors.
void FunctionalColor::update(void) {
  uint8_t current_layerState = Layer.getLayerState();

  // Only set the colors again if the active layer changed
  if (current_layerState != last_layerState) { this->refresh(); }

  last_layerState = current_layerState;

}// end update()

} // namespace FunctionalColorStuff
}// namespace plugin
}//namespace kaleidoscope
