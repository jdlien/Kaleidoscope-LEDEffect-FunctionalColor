#include "Kaleidoscope-LEDEffect-FunctionalColor.h"
#include "assert.h"

namespace kaleidoscope {


namespace plugin {
namespace LEDFunctionalColor {
   
#ifndef FC_HAVE_COLOR_FUNCTIONS
// Redefine all colorMap members to work around "undefined reference" issue on macOS.
// This entire section (all lines beginning with constexpr cRGB) may be commented out
// to see if it compiles. If not, this workaround should make the compiler happy.
constexpr cRGB colorMap::defaultColor;
constexpr cRGB colorMap::shift;
constexpr cRGB colorMap::control;
constexpr cRGB colorMap::gui;
constexpr cRGB colorMap::alt;
constexpr cRGB colorMap::modifier;
constexpr cRGB colorMap::alpha;
constexpr cRGB colorMap::number;
constexpr cRGB colorMap::punctuation;
constexpr cRGB colorMap::function;
constexpr cRGB colorMap::navigation;
constexpr cRGB colorMap::system;
constexpr cRGB colorMap::arrow;
constexpr cRGB colorMap::keypad;
constexpr cRGB colorMap::media;
constexpr cRGB colorMap::mouseWheel;
constexpr cRGB colorMap::mouseButton;
constexpr cRGB colorMap::mouseWarp;
constexpr cRGB colorMap::mouseMove;
constexpr cRGB colorMap::mouse;
constexpr cRGB colorMap::space;
constexpr cRGB colorMap::tab;
constexpr cRGB colorMap::enter;
constexpr cRGB colorMap::backspace;
constexpr cRGB colorMap::escape;
constexpr cRGB colorMap::del;
constexpr cRGB colorMap::fn;
constexpr cRGB colorMap::lock;
constexpr cRGB colorMap::LEDEffectNext;

constexpr cRGB colorMapDefault::shift;
constexpr cRGB colorMapDefault::control;
constexpr cRGB colorMapDefault::gui;
constexpr cRGB colorMapDefault::alt;
constexpr cRGB colorMapDefault::alpha;
constexpr cRGB colorMapDefault::number;
constexpr cRGB colorMapDefault::punctuation;
constexpr cRGB colorMapDefault::function;
constexpr cRGB colorMapDefault::navigation;
constexpr cRGB colorMapDefault::system;
constexpr cRGB colorMapDefault::arrow;
constexpr cRGB colorMapDefault::keypad;
constexpr cRGB colorMapDefault::mouseWheel;
constexpr cRGB colorMapDefault::mouseButton;
constexpr cRGB colorMapDefault::mouseWarp;
constexpr cRGB colorMapDefault::mouseMove;
constexpr cRGB colorMapDefault::media;
constexpr cRGB colorMapDefault::space;
constexpr cRGB colorMapDefault::tab;
constexpr cRGB colorMapDefault::enter;
constexpr cRGB colorMapDefault::backspace;
constexpr cRGB colorMapDefault::escape;
constexpr cRGB colorMapDefault::del;
constexpr cRGB colorMapDefault::fn;
constexpr cRGB colorMapDefault::lock;
constexpr cRGB colorMapDefault::LEDEffectNext;

constexpr cRGB colorMapFruit::shift;
constexpr cRGB colorMapFruit::control;
constexpr cRGB colorMapFruit::gui;
constexpr cRGB colorMapFruit::alt;
constexpr cRGB colorMapFruit::alpha;
constexpr cRGB colorMapFruit::number;
constexpr cRGB colorMapFruit::punctuation;
constexpr cRGB colorMapFruit::function;
constexpr cRGB colorMapFruit::navigation;
constexpr cRGB colorMapFruit::system;
constexpr cRGB colorMapFruit::arrow;
constexpr cRGB colorMapFruit::keypad;
constexpr cRGB colorMapFruit::mouseWheel;
constexpr cRGB colorMapFruit::mouseButton;
constexpr cRGB colorMapFruit::mouseWarp;
constexpr cRGB colorMapFruit::mouseMove;
constexpr cRGB colorMapFruit::media;
constexpr cRGB colorMapFruit::space;
constexpr cRGB colorMapFruit::tab;
constexpr cRGB colorMapFruit::enter;
constexpr cRGB colorMapFruit::backspace;
constexpr cRGB colorMapFruit::escape;
constexpr cRGB colorMapFruit::del;
constexpr cRGB colorMapFruit::fn;
constexpr cRGB colorMapFruit::lock;
constexpr cRGB colorMapFruit::LEDEffectNext;

constexpr cRGB colorMapMono::baseColor;
constexpr cRGB colorMapMono::defaultColor;
constexpr cRGB colorMapMono::shift;
constexpr cRGB colorMapMono::control;
constexpr cRGB colorMapMono::gui;
constexpr cRGB colorMapMono::alt;
constexpr cRGB colorMapMono::modifier;
constexpr cRGB colorMapMono::alpha;
constexpr cRGB colorMapMono::number;
constexpr cRGB colorMapMono::punctuation;
constexpr cRGB colorMapMono::function;
constexpr cRGB colorMapMono::navigation;
constexpr cRGB colorMapMono::system;
constexpr cRGB colorMapMono::arrow;
constexpr cRGB colorMapMono::keypad;
constexpr cRGB colorMapMono::media;
constexpr cRGB colorMapMono::mouseWheel;
constexpr cRGB colorMapMono::mouseButton;
constexpr cRGB colorMapMono::mouseWarp;
constexpr cRGB colorMapMono::mouseMove;
constexpr cRGB colorMapMono::mouse;
constexpr cRGB colorMapMono::space;
constexpr cRGB colorMapMono::tab;
constexpr cRGB colorMapMono::enter;
constexpr cRGB colorMapMono::backspace;
constexpr cRGB colorMapMono::escape;
constexpr cRGB colorMapMono::del;
constexpr cRGB colorMapMono::fn;
constexpr cRGB colorMapMono::lock;
constexpr cRGB colorMapMono::LEDEffectNext;

constexpr cRGB colorMapDuo::baseColor1;
constexpr cRGB colorMapDuo::baseColor2;
constexpr cRGB colorMapDuo::defaultColor;
constexpr cRGB colorMapDuo::shift;
constexpr cRGB colorMapDuo::control;
constexpr cRGB colorMapDuo::gui;
constexpr cRGB colorMapDuo::alt;
constexpr cRGB colorMapDuo::modifier;
constexpr cRGB colorMapDuo::alpha;
constexpr cRGB colorMapDuo::number;
constexpr cRGB colorMapDuo::punctuation;
constexpr cRGB colorMapDuo::function;
constexpr cRGB colorMapDuo::navigation;
constexpr cRGB colorMapDuo::system;
constexpr cRGB colorMapDuo::arrow;
constexpr cRGB colorMapDuo::keypad;
constexpr cRGB colorMapDuo::media;
constexpr cRGB colorMapDuo::mouseWheel;
constexpr cRGB colorMapDuo::mouseButton;
constexpr cRGB colorMapDuo::mouseWarp;
constexpr cRGB colorMapDuo::mouseMove;
constexpr cRGB colorMapDuo::mouse;
constexpr cRGB colorMapDuo::space;
constexpr cRGB colorMapDuo::tab;
constexpr cRGB colorMapDuo::enter;
constexpr cRGB colorMapDuo::backspace;
constexpr cRGB colorMapDuo::escape;
constexpr cRGB colorMapDuo::del;
constexpr cRGB colorMapDuo::fn;
constexpr cRGB colorMapDuo::lock;
constexpr cRGB colorMapDuo::LEDEffectNext;

constexpr cRGB colorMapPrincess::baseColor1;
constexpr cRGB colorMapPrincess::baseColor2;
constexpr cRGB colorMapPrincess::defaultColor;
constexpr cRGB colorMapPrincess::shift;
constexpr cRGB colorMapPrincess::control;
constexpr cRGB colorMapPrincess::gui;
constexpr cRGB colorMapPrincess::alt;
constexpr cRGB colorMapPrincess::modifier;
constexpr cRGB colorMapPrincess::alpha;
constexpr cRGB colorMapPrincess::number;
constexpr cRGB colorMapPrincess::punctuation;
constexpr cRGB colorMapPrincess::function;
constexpr cRGB colorMapPrincess::navigation;
constexpr cRGB colorMapPrincess::system;
constexpr cRGB colorMapPrincess::arrow;
constexpr cRGB colorMapPrincess::keypad;
constexpr cRGB colorMapPrincess::media;
constexpr cRGB colorMapPrincess::mouseWheel;
constexpr cRGB colorMapPrincess::mouseButton;
constexpr cRGB colorMapPrincess::mouseWarp;
constexpr cRGB colorMapPrincess::mouseMove;
constexpr cRGB colorMapPrincess::mouse;
constexpr cRGB colorMapPrincess::space;
constexpr cRGB colorMapPrincess::tab;
constexpr cRGB colorMapPrincess::enter;
constexpr cRGB colorMapPrincess::backspace;
constexpr cRGB colorMapPrincess::escape;
constexpr cRGB colorMapPrincess::del;
constexpr cRGB colorMapPrincess::fn;
constexpr cRGB colorMapPrincess::lock;
constexpr cRGB colorMapPrincess::LEDEffectNext;

constexpr cRGB colorMapSea::baseColor1;
constexpr cRGB colorMapSea::baseColor2;
constexpr cRGB colorMapSea::defaultColor;
constexpr cRGB colorMapSea::shift;
constexpr cRGB colorMapSea::control;
constexpr cRGB colorMapSea::gui;
constexpr cRGB colorMapSea::alt;
constexpr cRGB colorMapSea::modifier;
constexpr cRGB colorMapSea::alpha;
constexpr cRGB colorMapSea::number;
constexpr cRGB colorMapSea::punctuation;
constexpr cRGB colorMapSea::function;
constexpr cRGB colorMapSea::navigation;
constexpr cRGB colorMapSea::system;
constexpr cRGB colorMapSea::arrow;
constexpr cRGB colorMapSea::keypad;
constexpr cRGB colorMapSea::media;
constexpr cRGB colorMapSea::mouseWheel;
constexpr cRGB colorMapSea::mouseButton;
constexpr cRGB colorMapSea::mouseWarp;
constexpr cRGB colorMapSea::mouseMove;
constexpr cRGB colorMapSea::mouse;
constexpr cRGB colorMapSea::space;
constexpr cRGB colorMapSea::tab;
constexpr cRGB colorMapSea::enter;
constexpr cRGB colorMapSea::backspace;
constexpr cRGB colorMapSea::escape;
constexpr cRGB colorMapSea::del;
constexpr cRGB colorMapSea::fn;
constexpr cRGB colorMapSea::lock;
constexpr cRGB colorMapSea::LEDEffectNext;

constexpr cRGB colorMapFlower::baseColor1;
constexpr cRGB colorMapFlower::baseColor2;
constexpr cRGB colorMapFlower::defaultColor;
constexpr cRGB colorMapFlower::shift;
constexpr cRGB colorMapFlower::control;
constexpr cRGB colorMapFlower::gui;
constexpr cRGB colorMapFlower::alt;
constexpr cRGB colorMapFlower::modifier;
constexpr cRGB colorMapFlower::alpha;
constexpr cRGB colorMapFlower::number;
constexpr cRGB colorMapFlower::punctuation;
constexpr cRGB colorMapFlower::function;
constexpr cRGB colorMapFlower::navigation;
constexpr cRGB colorMapFlower::system;
constexpr cRGB colorMapFlower::arrow;
constexpr cRGB colorMapFlower::keypad;
constexpr cRGB colorMapFlower::media;
constexpr cRGB colorMapFlower::mouseWheel;
constexpr cRGB colorMapFlower::mouseButton;
constexpr cRGB colorMapFlower::mouseWarp;
constexpr cRGB colorMapFlower::mouseMove;
constexpr cRGB colorMapFlower::mouse;
constexpr cRGB colorMapFlower::space;
constexpr cRGB colorMapFlower::tab;
constexpr cRGB colorMapFlower::enter;
constexpr cRGB colorMapFlower::backspace;
constexpr cRGB colorMapFlower::escape;
constexpr cRGB colorMapFlower::del;
constexpr cRGB colorMapFlower::fn;
constexpr cRGB colorMapFlower::lock;
constexpr cRGB colorMapFlower::LEDEffectNext;

constexpr cRGB colorMapKids::defaultColor;
constexpr cRGB colorMapKids::shift;
constexpr cRGB colorMapKids::control;
constexpr cRGB colorMapKids::gui;
constexpr cRGB colorMapKids::alt;
constexpr cRGB colorMapKids::alpha;
constexpr cRGB colorMapKids::number;
constexpr cRGB colorMapKids::punctuation;
constexpr cRGB colorMapKids::function;
constexpr cRGB colorMapKids::navigation;
constexpr cRGB colorMapKids::system;
constexpr cRGB colorMapKids::arrow;
constexpr cRGB colorMapKids::keypad;
constexpr cRGB colorMapKids::media;
constexpr cRGB colorMapKids::mouseWheel;
constexpr cRGB colorMapKids::mouseButton;
constexpr cRGB colorMapKids::mouseWarp;
constexpr cRGB colorMapKids::mouseMove;
constexpr cRGB colorMapKids::mouse;
constexpr cRGB colorMapKids::space;
constexpr cRGB colorMapKids::tab;
constexpr cRGB colorMapKids::enter;
constexpr cRGB colorMapKids::backspace;
constexpr cRGB colorMapKids::escape;
constexpr cRGB colorMapKids::del;
constexpr cRGB colorMapKids::fn;
constexpr cRGB colorMapKids::lock;
constexpr cRGB colorMapKids::LEDEffectNext;

constexpr cRGB colorMapRedWhiteBlue::baseColor1;
constexpr cRGB colorMapRedWhiteBlue::baseColor2;
constexpr cRGB colorMapRedWhiteBlue::defaultColor;
constexpr cRGB colorMapRedWhiteBlue::shift;
constexpr cRGB colorMapRedWhiteBlue::control;
constexpr cRGB colorMapRedWhiteBlue::gui;
constexpr cRGB colorMapRedWhiteBlue::alt;
constexpr cRGB colorMapRedWhiteBlue::modifier;
constexpr cRGB colorMapRedWhiteBlue::alpha;
constexpr cRGB colorMapRedWhiteBlue::number;
constexpr cRGB colorMapRedWhiteBlue::punctuation;
constexpr cRGB colorMapRedWhiteBlue::function;
constexpr cRGB colorMapRedWhiteBlue::navigation;
constexpr cRGB colorMapRedWhiteBlue::system;
constexpr cRGB colorMapRedWhiteBlue::arrow;
constexpr cRGB colorMapRedWhiteBlue::keypad;
constexpr cRGB colorMapRedWhiteBlue::media;
constexpr cRGB colorMapRedWhiteBlue::mouseWheel;
constexpr cRGB colorMapRedWhiteBlue::mouseButton;
constexpr cRGB colorMapRedWhiteBlue::mouseWarp;
constexpr cRGB colorMapRedWhiteBlue::mouseMove;
constexpr cRGB colorMapRedWhiteBlue::mouse;
constexpr cRGB colorMapRedWhiteBlue::space;
constexpr cRGB colorMapRedWhiteBlue::tab;
constexpr cRGB colorMapRedWhiteBlue::enter;
constexpr cRGB colorMapRedWhiteBlue::backspace;
constexpr cRGB colorMapRedWhiteBlue::escape;
constexpr cRGB colorMapRedWhiteBlue::del;
constexpr cRGB colorMapRedWhiteBlue::fn;
constexpr cRGB colorMapRedWhiteBlue::lock;
constexpr cRGB colorMapRedWhiteBlue::LEDEffectNext;

#endif

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
void FunctionalColor::refreshAt(KeyAddr key_addr) {
  Key k = Layer.lookupOnActiveLayer(key_addr);
  bool skip = false, none = false;
  auto color = exceptionsLookup(k, skip, none);
  // if there was no match, we continue to mainColorLookup
  if (none) {
    if(mainColorLookup) color = mainColorLookup(k, skip);
    // Otherwise we return the defaultColor from exceptions (nocolor if no custom function is defined)  
  }
  if (skip) return;
  ::LEDControl.setCrgbAt(key_addr, dim(color, brightnessSetting));
}// end refreshAt()

FunctionalColor* FunctionalColor::lastFC;


//Forces an update of the LEDs
void FunctionalColor::refresh(void) {
  // Loop through every row and column and set each LED based on its key's function
   for(auto key_addr: KeyAddr::all()) {
      refreshAt(key_addr);
  }
  lastFC = this;
}


void FunctionalColor::onActivate(void) {
  this->refresh();
  lastFC = this;
}


//When the active layer is changed, update the colors.
void FunctionalColor::update(void) {
  uint32_t current_layerState = Layer.getLayerState();

  // Only set the colors again if the active layer changed
  if (current_layerState != last_layerState) { this->refresh(); }

  last_layerState = current_layerState;

}// end update()

} // namespace LEDFunctionalColor
}// namespace plugin
}//namespace kaleidoscope
