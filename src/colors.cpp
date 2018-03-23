#include "assert.h"

namespace kaleidoscope {
//I'm not too sure how to do this properly

/*cRGB LEDFunctionalColor::dim(const cRGB &color, byte brightness, byte range=255) {
  float brightnessScale = brightness/range;
   
   return CRGB(uint8_t(brightnessScale*color.r), 
              uint8_t(brightnessScale*color.g), 
              uint8_t(brightnessScale*color.b));
}*/


// Here are a bunch of generalized functions for setting key groups all at once
bool LEDEffect_FunctionalColor::isNumber(const Key& k) {
  if((k.keyCode >= (Key_1).keyCode) && (k.keyCode <= (Key_0).keyCode)) {
    return true;
  } else return false;
  // Uncomment this if you want to lump  - and = into numbers
  /*
  switch(k.raw) {
    case (Key_Minus).flags << 8 | (Key_Minus).keyCode:
    case (Key_Equals).flags << 8 | (Key_Equals).keyCode:
    {
      return true;
    }
    break;
    default: return false;
    break;
  }
  */
}//end isNumber()


}