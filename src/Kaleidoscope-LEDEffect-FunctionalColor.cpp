#include "Kaleidoscope-LEDEffect-FunctionalColor.h"
#include "assert.h"

// Is it a bad idea to do this?
using namespace kaleidoscope::LEDEffect_FunctionalColor;

namespace kaleidoscope {

LEDFunctionalColorCB::LEDFunctionalColorCB(LEDFunctionalColorCB::CBLookup cbLookup, 
                     cRGB *palette, 
                     uint8_t nPaletteEntries,
                     uint8_t fLayer)
  :  cbLookup_(cbLookup),
     palette_(palette),
     nPaletteEntries_(nPaletteEntries),
     functionLayer(fLayer)
{
   assert(palette_);
   assert(cbLookup_);
}

LEDFunctionalColorCB::LEDFunctionalColorCB(void){}



void LEDFunctionalColorCB::dimPalette(byte brightness)
{
   for(uint8_t i = 0; i < nPaletteEntries_; ++i) {
      palette_[i] = dim(palette_[i], brightness);
   }
}

void LEDFunctionalColorCB::setAllPalette(const cRGB &color, byte brightness)
{
   for(uint8_t i = 0; i < nPaletteEntries_; ++i) {
      palette_[i] = dim(color, brightness);
   }
}
  
void LEDFunctionalColorCB::setPaletteEntryColor(byte paletteId, const cRGB &color, byte brightness)
{
   assert(paletteId < nPaletteEntries_);
   palette_[paletteId] = dim(color, brightness);
}

void LEDFunctionalColorCB::setKeyColor(const Key &k, byte paletteId, byte brightness)
{
   byte &colorBrightness = (*cbLookup_)(k);
   
   colorBrightness = (paletteId << 4) | brightness;
}



/*
 * setKeyLed accepts a Key position and sets it to the appropriate color
 * from the user's definitions a using a series of if/else statements.
 */
void LEDFunctionalColorCB::setKeyLed(uint8_t r, uint8_t c) { 
  Key k = Layer.lookupOnActiveLayer(r, c);
  
  byte colorBrightness = (*cbLookup_)(k);
  byte paletteId = colorBrightness >> 4;
  byte brightness = colorBrightness & 0xF; // keys have individual brightness
  
  assert(paletteId < nPaletteEntries_);
  const auto &color = palette_[paletteId];
  
  ::LEDControl.setCrgbAt(r, c, dim(color, brightness));
}// end setKeyLed



void LEDFunctionalColorCB::onActivate(void) {
	// Loop through every row and column and set each LED based on its key's function
	for (uint8_t r = 0; r < ROWS; r++) {
	  for (uint8_t c = 0; c < COLS; c++) {
	    Key k = Layer.lookupOnActiveLayer(r, c);
	    setKeyLed(r, c);
	  }
	}
}


void LEDFunctionalColorCB::update(void) {
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
      ::LEDControl.setCrgbAt(3, 6, palette_[0]); 
      // right fn
      ::LEDControl.setCrgbAt(3, 9, palette_[0]);
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


LEDFunctionalColorRGB::LEDFunctionalColorRGB(LEDFunctionalColorRGB::RGBLookup rgbLookup, uint8_t fLayer)
   : rgbLookup_(rgbLookup), functionLayer(fLayer)     
{
   assert(rgbLookup_);
}

LEDFunctionalColorRGB::LEDFunctionalColorRGB(void){}

/*
void LEDFunctionalColorRGB::setKeyColor(const Key &k, const cRGB &color)
{
   (*rgbLookup_)(k) = color;
}
void setColorLookup(RGBLookup rgbLookup) {
   rgbLookup_ = rgbLookup;
}
*/


/*
 * setKeyLed accepts a Key position and sets it to the appropriate color
 * from the user's definitions a using a series of if/else statements.
 */
void LEDFunctionalColorRGB::setKeyLed(uint8_t r, uint8_t c) { 
  Key k = Layer.lookupOnActiveLayer(r, c);
  ::LEDControl.setCrgbAt(r, c, (*rgbLookup_)(k));
}// end setKeyLed

void LEDFunctionalColorRGB::onActivate(void) {
	// Loop through every row and column and set each LED based on its key's function
	for (uint8_t r = 0; r < ROWS; r++) {
	  for (uint8_t c = 0; c < COLS; c++) {
	    Key k = Layer.lookupOnActiveLayer(r, c);
	    setKeyLed(r, c);
	  }
	}
}

void LEDFunctionalColorRGB::update(void) {
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
      ::LEDControl.setCrgbAt(3, 6, (*rgbLookup_)((Key){0})); // The default color
      // right fn
      ::LEDControl.setCrgbAt(3, 9, (*rgbLookup_)((Key){0}));
    }
    else {
      // left fn
      ::LEDControl.setCrgbAt(3, 6, black); 
      // right fn
      ::LEDControl.setCrgbAt(3, 9, black);
    }

  }

  last_layer = current_layer;

}//end update()



}//namespace
