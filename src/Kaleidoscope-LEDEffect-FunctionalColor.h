#pragma once

#include "Kaleidoscope-LEDControl.h"
#include "Kaleidoscope-MouseKeys.h"

#include "colors.h"

namespace kaleidoscope {
   
// This is the color-brightness-version of the plugin
//
class LEDFunctionalColorCB : public LEDMode {
 public:
     
  typedef byte & (*CBLookup)(const Key &);
  
  LEDFunctionalColorCB(uint8_t fLayer, 
                     CBLookup cbLookup, 
                     cRGB *palette, 
                     uint8_t nPaletteEntries);
  
  LEDFunctionalColorCB(void);
  
  uint8_t functionLayer = 2;
  
  // Note: Only use the methods below if you need runtime configuration
  //       of key paletteId/brightness and palette colors. Else
  //       assign appropriate initial values when defining the palette 
  //       in the sketch. This allows Arduino to omit the setter methods
  //       from the firmware binary and thus safes some flash memory.

  // Dims a palette color
  //
  void dimPalette(byte brightness);

  // Sets color and overlay brightness for all palette entries
  //
  void setAllPalette(const cRGB &color, byte brightness = 15);
  
  // Set color and overlay brightness for an individual palette entry
  //
  void setPaletteEntryColor(byte paletteId, const cRGB &color, byte brightness = 15);

  // Set the palette entry id and the overlay brightness for an individual 
  // key (or key group)
  //
  void setKeyColor(const Key &k, byte paletteId, byte brightness = 15);

  private:
  uint16_t current_key = 0;
  uint16_t current_row = 0;
  uint16_t current_col = 0;
  uint16_t current_color = 0;
  uint8_t last_layer = 0;

  cRGB *palette_ = nullptr;
  uint8_t nPaletteEntries_ = 0;
  CBLookup cbLookup_ = nullptr;

  protected:
  void onActivate(void) final;
  void update(void) final;
  cRGB dim(const cRGB &color, byte brightness);
  void setKeyLed(uint8_t r, uint8_t c);
};

#define FC_CB_COLOR_LIST(ID) \
   colorBrightness_##ID

#define FC_CB_START_COLOR_LIST(NAME, DEFAULT_PALETTE_ID) \
   byte &FC_CB_COLOR_LIST(NAME)(const Key &k) { \
      constexpr byte defaultPaletteId = DEFAULT_PALETTE_ID; \
      switch(k.raw) {

#define FC_CB_END_COLOR_LIST \
   } \
   static byte default_cb = (defaultPaletteId << 4) | 0xF; \
   return default_cb; \
}
//    case (Key_##KEY).raw:  

#define FC_CB_COLOR(KEY, PALETTE_ID) \
    case (Key_##KEY).flags << 8 | (Key_##KEY).keyCode: \
       { \
         static byte cb = (PALETTE_ID << 4) | 0xF /* start with full brightness  as default*/; \
         return cb; \
       } \
       break;

#define FC_CB_SHARE_COLOR(KEY) \
   case (Key_##KEY).flags << 8 | (Key_##KEY).keyCode:
      
#define FC_CB_PALETTE_SIZE(PALETTE) \
   sizeof(PALETTE)/sizeof(cRGB)
   
#define FC_CB_PALETTE(palette) palette, FC_CB_PALETTE_SIZE(palette)
   
     
// This is the color-brightness-version of the plugin
//
class LEDFunctionalColorRGB : public LEDMode {
 public:
     
  typedef cRGB & (*RGBLookup)(const Key &);
  
  LEDFunctionalColorRGB(uint8_t fLayer, 
                     RGBLookup rgbLookup);
  
  LEDFunctionalColorRGB(void);
  
  uint8_t functionLayer = 2;
  
  // Note: Only use the methods below if you need runtime configuration
  //       of key paletteId/brightness and palette colors. Else
  //       assign appropriate initial values when defining the palette 
  //       in the sketch. This allows Arduino to omit the setter methods
  //       from the firmware binary and thus safes some flash memory.


  // Set the palette entry id and the overlay brightness for an individual 
  // key (or key group)
  //
  void setKeyColor(const Key &k, const cRGB &color);

  private:
  uint16_t current_key = 0;
  uint16_t current_row = 0;
  uint16_t current_col = 0;
  uint16_t current_color = 0;
  uint8_t last_layer = 0;

  RGBLookup rgbLookup_ = nullptr;

  protected:
  void onActivate(void) final;
  void update(void) final;
  void setKeyLed(uint8_t r, uint8_t c);
};

#define FC_RGB_COLOR_LIST(ID) \
   cRGBLookup_##ID

#define FC_RGB_START_COLOR_LIST(NAME, DEFAULT_COLOR) \
   cRGB &FC_RGB_COLOR_LIST(NAME)(const Key &k) { \
      constexpr cRGB initialDefaultColor = DEFAULT_COLOR; \
      switch(k.raw) {

#define FC_RGB_END_COLOR_LIST \
   } \
   static cRGB defaultColor = initialDefaultColor; \
   return defaultColor; \
}
//    case (Key_##KEY).raw:  

#define FC_RGB_COLOR(KEY, COLOR) \
    case (Key_##KEY).flags << 8 | (Key_##KEY).keyCode: \
       { \
         static cRGB color = COLOR; \
         return color; \
       } \
       break;

#define FC_RGB_SHARE_COLOR(KEY) \
   case (Key_##KEY).flags << 8 | (Key_##KEY).keyCode:
}
