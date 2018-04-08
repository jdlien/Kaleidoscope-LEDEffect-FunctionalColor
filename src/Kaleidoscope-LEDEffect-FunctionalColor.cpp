#include "Kaleidoscope-LEDEffect-FunctionalColor.h"
#include "assert.h"

namespace kaleidoscope {

kaleidoscope::LEDFunctionalColor::FCPlugin::FCPlugin(kaleidoscope::LEDFunctionalColor::FCPlugin::RGBLookupException rgbLookupExc, byte brightness, int themeID)
   : exceptionsLookup(rgbLookupExc)    
{
  assert(exceptionsLookup);
  themeSelect(themeID);
  brightnessSetting = brightness;
}

kaleidoscope::LEDFunctionalColor::FCPlugin::FCPlugin(int themeID, byte brightness, kaleidoscope::LEDFunctionalColor::FCPlugin::RGBLookupException rgbLookupExc)
   : exceptionsLookup(rgbLookupExc)     
{
   assert(exceptionsLookup);
   themeSelect(themeID);
   brightnessSetting = brightness;
}

// Another constructor that allows the user to specify which theme they want to start with.
kaleidoscope::LEDFunctionalColor::FCPlugin::FCPlugin(int themeID, byte brightness){
  // Switch block to specify themeid
  themeSelect(themeID);
  brightnessSetting = brightness;
}

void kaleidoscope::LEDFunctionalColor::FCPlugin::themeSelect(int themeID) {
    // Switch block to specify themeid
  switch(themeID) {
      case 0:
        this->setColorLookup(&LEDFunctionalColor::groupColorLookup<LEDFunctionalColor::colorMap>);
        break;

      case 1:
        this->setColorLookup(&LEDFunctionalColor::groupColorLookup<LEDFunctionalColor::colorMapMono>);
        break;

      case 2:
        this->setColorLookup(&LEDFunctionalColor::groupColorLookup<LEDFunctionalColor::colorMapDuo>);
        break;

      case 3:
        this->setColorLookup(&LEDFunctionalColor::groupColorLookup<LEDFunctionalColor::colorMapColorful>);
        break;

      default:
        this->setColorLookup(&LEDFunctionalColor::groupColorLookup<LEDFunctionalColor::colorMapDefault>);
  }
}


void kaleidoscope::LEDFunctionalColor::FCPlugin::brightness(byte b) {
  brightnessSetting = b;
}

byte kaleidoscope::LEDFunctionalColor::FCPlugin::brightness() {
  return brightnessSetting;
}

//These are special macros that allow the brightness of an FC instance to be adjusted
void kaleidoscope::LEDFunctionalColor::FCPlugin::thisBrightnessUp(uint8_t keyState) {
  if (keyToggledOn(keyState)) {
    brightnessSetting += 16;
    this->refresh();
  }
}

void kaleidoscope::LEDFunctionalColor::FCPlugin::thisBrightnessDown(uint8_t keyState) {
  if (keyToggledOn(keyState)) {
    brightnessSetting -= 16;
    this->refresh();
  }
}

void kaleidoscope::LEDFunctionalColor::FCPlugin::brightnessUp(uint8_t keyState) {
  kaleidoscope::LEDFunctionalColor::FCPlugin::lastFC->thisBrightnessUp(keyState);
}

void kaleidoscope::LEDFunctionalColor::FCPlugin::brightnessDown(uint8_t keyState) {
  kaleidoscope::LEDFunctionalColor::FCPlugin::lastFC->thisBrightnessDown(keyState);
}

//setKeyLed accepts a Key position and sets it to the appropriate color from a lookup function
void kaleidoscope::LEDFunctionalColor::FCPlugin::setKeyLed(uint8_t r, uint8_t c) { 
  Key k = Layer.lookupOnActiveLayer(r, c);
  bool skip = false, none = false;
  auto color = exceptionsLookup(k, skip, none);
  // if there was no match, we continue to mainColorLookup
  if (none) { color = mainColorLookup(k, skip); }
  if (skip) return;
  ::LEDControl.setCrgbAt(r, c, dim(color, brightnessSetting));
}// end setKeyLed()

kaleidoscope::LEDFunctionalColor::FCPlugin* kaleidoscope::LEDFunctionalColor::FCPlugin::lastFC;


//Forces an update of the LEDs
void kaleidoscope::LEDFunctionalColor::FCPlugin::refresh(void) {
  // Loop through every row and column and set each LED based on its key's function
  for (uint8_t r = 0; r < ROWS; r++) {
    for (uint8_t c = 0; c < COLS; c++) {
      Key k = Layer.lookupOnActiveLayer(r, c);
      setKeyLed(r, c);
    }
  }
  lastFC = this;
}


void kaleidoscope::LEDFunctionalColor::FCPlugin::onActivate(void) {
  this->refresh();
}


//When the active layer is changed, update the colors.
void kaleidoscope::LEDFunctionalColor::FCPlugin::update(void) {
  uint8_t current_layerState = ::Layer_::getLayerState();

  // Only set the colors again if the active layer changed
  if (current_layerState != last_layerState) { this->refresh(); }

  last_layerState = current_layerState;

}// end update()



}//namespace
