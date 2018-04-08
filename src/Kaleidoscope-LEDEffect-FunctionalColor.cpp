#include "Kaleidoscope-LEDEffect-FunctionalColor.h"
#include "assert.h"

using namespace kaleidoscope::LEDFunctionalColor;
namespace kaleidoscope {

FCPlugin::FCPlugin(FCPlugin::RGBLookupException rgbLookupExc, byte brightness, int themeID)
   : exceptionsLookup(rgbLookupExc)    
{
  assert(exceptionsLookup);
  themeSelect(themeID);
  brightnessSetting = brightness;
}

FCPlugin::FCPlugin(int themeID, byte brightness, FCPlugin::RGBLookupException rgbLookupExc)
   : exceptionsLookup(rgbLookupExc)     
{
   assert(exceptionsLookup);
   themeSelect(themeID);
   brightnessSetting = brightness;
}

// Another constructor that allows the user to specify which theme they want to start with.
FCPlugin::FCPlugin(int themeID, byte brightness){
  // Switch block to specify themeid
  themeSelect(themeID);
  brightnessSetting = brightness;
}

void FCPlugin::themeSelect(int themeID) {
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


void FCPlugin::brightness(byte b) {
  brightnessSetting = b;
}

byte FCPlugin::brightness() {
  return brightnessSetting;
}

//These are special macros that allow the brightness of an FC instance to be adjusted
void FCPlugin::brightnessUp(uint8_t keyState) {
  if (keyToggledOn(keyState)) {
    brightnessSetting += 16;
    this->refresh();
  }
}

void FCPlugin::brightnessDown(uint8_t keyState) {
  if (keyToggledOn(keyState)) {
    brightnessSetting -= 16;
    this->refresh();
  }
}


//setKeyLed accepts a Key position and sets it to the appropriate color from a lookup function
void FCPlugin::setKeyLed(uint8_t r, uint8_t c) { 
  Key k = Layer.lookupOnActiveLayer(r, c);
  bool skip = false, none = false;
  auto color = exceptionsLookup(k, skip, none);
  // if there was no match, we continue to mainColorLookup
  if (none) { color = mainColorLookup(k, skip); }
  if (skip) return;
  ::LEDControl.setCrgbAt(r, c, dim(color, brightnessSetting));
}// end setKeyLed()


//Forces an update of the LEDs
void FCPlugin::refresh(void) {
  // Loop through every row and column and set each LED based on its key's function
  for (uint8_t r = 0; r < ROWS; r++) {
    for (uint8_t c = 0; c < COLS; c++) {
      Key k = Layer.lookupOnActiveLayer(r, c);
      setKeyLed(r, c);
    }
  }
}


void FCPlugin::onActivate(void) {
  this->refresh();
}


//When the active layer is changed, update the colors.
void FCPlugin::update(void) {
  uint8_t current_layerState = ::Layer_::getLayerState();

  // Only set the colors again if the active layer changed
  if (current_layerState != last_layerState) { this->refresh(); }

  last_layerState = current_layerState;

}// end update()



}//namespace
