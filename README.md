# Kaleidoscope-LEDEffect-FunctionalColor

This plugin automatically colors groups of keys per the user's preference
based on the current function of the key on the active layer. 

Version 2.0 allows almost every key to be individually set to a desired color.
To allow for this, FunctionalColor uses a 16 color palette with a rainbow of vivid colors, and each color can be set to any of 16 brightness levels, from 0 (off or black) to 15 (full brightness). 

0  - WHITE
1  - WARMWHITE
2  - RED
3  - REDORANGE
4  - ORANGE
5  - YELLOW
6  - GREENYELLOW
7  - GREEN
8  - TURQUOISE
9  - CYAN
10 - ROYALBLUE
11 - BLUE
12 - PURPLE
13 - FUCHSIA
14 - MAGENTA
15 - NEONRED

The colors can be referenced by name by including this enum:
enum{WHITE, WARMWHITE, RED, REDORANGE, ORANGE, YELLOW, GREENYELLOW, GREEN, TURQUOISE, CYAN, ROYALBLUE, BLUE, PURPLE, FUCHSIA, MAGENTA, NEONRED}; 








## Using the extension

To use the plugin, include the header, declare an effect using the
`LEDFunctionalColor` class, and tell the firmware to use the new effect.
Configure your own colors for groups of keys inside setup():

```c++
// Automatically sets key's LED on active layer based on the function of the key
#include <Kaleidoscope-LEDEffect-FunctionalColor.h>

// You can make multiple variations of the theme.
// Warning: having several versions consumes a lot of memory! You may have to remove other features or plugins you don't use.
kaleidoscope::LEDFunctionalColor FunColor;
//kaleidoscope::LEDFunctionalColor FunColorMedium;

void setup() {
  Kaleidoscope.use(&FunColor
    //, &FunColorMedium
    );

  Kaleidoscope.setup(

    // If your FUNCTION layer is not the default, you must set it here
    FunColor.functionLayer = FUNCTION;

    // Give the colors in the FunctionalColor palette human-friendly names
    enum{WHITE, WARMWHITE, RED, REDORANGE, ORANGE, YELLOW, GREENYELLOW, GREEN, TURQUOISE, CYAN, ROYALBLUE, BLUE, PURPLE, FUCHSIA, MAGENTA, NEONRED};

    //If you want to adjust these colors, a new method, changePalette allows you to do this:
    // Change WARMWHITE to a pale orange color
    FunColor.changePalette(WARMWHITE, CRGB(255, 210, 140));

    // Here we can set custom colors for your FunctionalColor instance.
    // You can optionally specify a brightness value, 0-15 to dim your lights.

    // Customize key colors by specifying one of the palette colors optionally along with a brightness

    // Set this first to provide a "default" color for all keys, then override with the other settings.
    FunColor.all(WARMWHITE, 7);

    // Set this second to change all modifiers (non-alphabet/numeric/punctuation keys)
    FunColor.allModifiers(WARMWHITE);

    // Set this before individual mouse settings to change all mouse-related keys
    FunColor.allMouse(CYAN); 

    //Set individual groups of colors. You may delete any lines you don't need.
    FunColor.escape(RED, 13);
    FunColor.numbers(WHITE, 160);
    FunColor.letters(WARMWHITE, 7);
    FunColor.punctuation(WARMWHITE, 14);
    FunColor.brackets(WARMWHITE, 14);
    FunColor.backslash(WARMWHITE, 14);
    FunColor.pipe(WARMWHITE, 14);
    FunColor.tab(WHITE, 8);
    FunColor.backspace(RED, 10);
    FunColor.del(RED, 170);
    FunColor.enter(WHITE, 15);
    FunColor.arrows(WHITE, 15);
    FunColor.nav(YELLOW, 11);
    FunColor.insert(YELLOW, 11);
    FunColor.shift(TURQUOISE, 8);
    FunColor.ctrl(ROYALBLUE, 8);
    FunColor.alt(GREEN, 8);
    FunColor.cmd(FUCHSIA, 8);
    FunColor.app(FUCHSIA, 8);
    FunColor.printscreen(ORANGE, 14);
    FunColor.pause(REDORANGE, 9);
    FunColor.scrolllock(GREENYELLOW, 10);
    FunColor.capslock(BLUE, 11);
    FunColor.fkeys(NEONRED, 13);
    FunColor.fn(WHITE, 7);
    FunColor.media(MAGENTA, 12);
    FunColor.led(BLUE, 14);
    FunColor.mousemove(CYAN, 12);
    FunColor.mousebuttons(ROYALBLUE, 15);
    FunColor.mousewarp(CYAN, 15);
    FunColor.mousescroll(ROYALBLUE, 5);

    //If you want to change individual keys, their methods look like this:
    /*
    FunColor.number_1(BLUE); //through 9 and 0
    FunColor.letter_a(BLUE); //through z
    FunColor.number_minus(BLUE);
    FunColor.number_equals(BLUE);
    punctuation_backtick(BLUE);
    punctuation_period(BLUE);
    punctuation_comma(BLUE);
    punctuation_semicolon(BLUE);
    punctuation_quote(BLUE);
    punctuation_slash(BLUE);
    bracket_leftbracket(BLUE);
    bracket_rightbracket(BLUE);
    bracket_leftcurlybracket(BLUE);
    bracket_rightcurlybracket(BLUE);
    arrow_left(BLUE);
    arrow_up(BLUE);
    arrow_down(BLUE);
    arrow_right(BLUE);
    nav_home(BLUE);
    nav_end(BLUE);
    nav_pageup(BLUE);
    nav_pagedown(BLUE);
    fkey_f1(BLUE); //through f19
    media_play(BLUE);
    media_prev(BLUE);
    media_next(BLUE);
    media_stop(BLUE);
    media_volup(BLUE);
    media_voldown(BLUE);
    media_mute(BLUE);
    */


    //Copy new settings to the dimmed versions
    //FunColorMedium = FunColor;

    // You could make adjustments to your other versions' groups here, if desired.

    // Adjust the brightness of dimmed versions here from 0-15
    //FunColorMedium.brightness(12);


  );
}
```

## Dependencies

* [Kaleidoscope-LEDControl](https://github.com/keyboardio/Kaleidoscope-LEDControl)
