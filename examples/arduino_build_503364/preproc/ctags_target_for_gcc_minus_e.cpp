# 1 "/Users/jdlien/kaleidoscope/Kaleidoscope-Bundle-Keyboardio/avr/libraries/Kaleidoscope-LEDEffect-FunctionalColor/examples/fc_test_minimal/fc_test_minimal.ino"
# 1 "/Users/jdlien/kaleidoscope/Kaleidoscope-Bundle-Keyboardio/avr/libraries/Kaleidoscope-LEDEffect-FunctionalColor/examples/fc_test_minimal/fc_test_minimal.ino"
// -*- mode: c++ -*-
// Minimalist Sketch for testing FunctionalColors




// The Kaleidoscope core
# 9 "/Users/jdlien/kaleidoscope/Kaleidoscope-Bundle-Keyboardio/avr/libraries/Kaleidoscope-LEDEffect-FunctionalColor/examples/fc_test_minimal/fc_test_minimal.ino" 2

// Support for keys that move the mouse
# 12 "/Users/jdlien/kaleidoscope/Kaleidoscope-Bundle-Keyboardio/avr/libraries/Kaleidoscope-LEDEffect-FunctionalColor/examples/fc_test_minimal/fc_test_minimal.ino" 2

// Support for controlling the keyboard's LEDs
# 15 "/Users/jdlien/kaleidoscope/Kaleidoscope-Bundle-Keyboardio/avr/libraries/Kaleidoscope-LEDEffect-FunctionalColor/examples/fc_test_minimal/fc_test_minimal.ino" 2

enum { PRIMARY, FUNCTION }; // layers


 const Key keymaps_linear[][(KeyboardHardware.matrix_rows)*(KeyboardHardware.matrix_columns)] 
# 19 "/Users/jdlien/kaleidoscope/Kaleidoscope-Bundle-Keyboardio/avr/libraries/Kaleidoscope-LEDEffect-FunctionalColor/examples/fc_test_minimal/fc_test_minimal.ino" 3
__attribute__((__progmem__)) 
# 19 "/Users/jdlien/kaleidoscope/Kaleidoscope-Bundle-Keyboardio/avr/libraries/Kaleidoscope-LEDEffect-FunctionalColor/examples/fc_test_minimal/fc_test_minimal.ino"
= { [PRIMARY] = { Key(0xffff), Key(0x1E, 0), Key(0x1F, 0), Key(0x20, 0), Key(0x21, 0), Key(0x22, 0), Key(0, 0 | 64 | 2 | 1 /* Synthetic, internal*/), Key(0xE0, 0), Key(0xE4, 0), Key(0xffff), Key(0x23, 0), Key(0x24, 0), Key(0x25, 0), Key(0x26, 0), Key(0x27, 0), Key(0xffff), Key(0x35, 0), Key(0x14, 0), Key(0x1A, 0), Key(0x08, 0), Key(0x15, 0), Key(0x17, 0), Key(0x2B, 0), Key(0x2A /* (BACKSPACE)*/, 0) /* (BACKSPACE)*/, Key(0x2C, 0), Key(0x28 /* (MARKED AS ENTER_SLASH_RETURN)*/, 0) /* (MARKED AS ENTER_SLASH_RETURN)*/, Key(0x1C, 0), Key(0x18, 0), Key(0x0C, 0), Key(0x12, 0), Key(0x13, 0), Key(0x2E, 0), Key(0x4B, 0), Key(0x04, 0), Key(0x16, 0), Key(0x07, 0), Key(0x09, 0), Key(0x0A, 0), Key(0x29, 0), Key(0xE3, 0), Key(0xE2, 0), Key(0xE6, 0), Key(0x0B, 0), Key(0x0D, 0), Key(0x0E, 0), Key(0x0F, 0), Key(0x33, 0), Key(0x34, 0), Key(0x4E, 0), Key(0x1D, 0), Key(0x1B, 0), Key(0x06, 0), Key(0x19, 0), Key(0x05, 0), Key(FUNCTION + LAYER_SHIFT_OFFSET, 0 | 64 | 4), Key(0xE1, 0), Key(0xE5, 0), Key(FUNCTION + LAYER_SHIFT_OFFSET, 0 | 64 | 4), Key(0x11, 0), Key(0x10, 0), Key(0x36, 0), Key(0x37, 0), Key(0x38, 0), ((struct { /* Here we are in the body of a dummy lambda function.            */ /* []{} is, BTW, the shortest way to write a lambda.              */ /* It is only used to hold the static_assert that cannot be       */ /* defined directly in the keymap initializer list. By using the  */ /* comma operator ((A, B) always evaluates to b), we ensure       */ /* that not the lambda but B is what ASSERT_ARGS_COUNT            */ /* finally evaluates to.                                          */ /* Please not that passing B through this macro is a must         */ /* as we need it for the comma operator to work.                  */ static_assert(sizeof(const char) == sizeof("" ), /* sizeof(const char) == sizeof(#__VA_ARGS__ ) checks the quoted */ /* list of additional arguments. If there are none, then the     */ /* length of #__VA_ARGS__ is a single char as it contains '\0'.  */ /* This check is not able to find the corner case of a single    */ /* superfluous comma at the end of the macro arguments as this   */ /* causes #__VA_ARGS__ being empty (only '\0').                  */ "\n" "\n***************************************************************" "\n******************** READ THIS CAREFULLY! *********************" "\n***************************************************************" "\n" "\nFile: " "/Users/jdlien/kaleidoscope/Kaleidoscope-Bundle-Keyboardio/avr/libraries/Kaleidoscope-LEDEffect-FunctionalColor/examples/fc_test_minimal/fc_test_minimal.ino" "\nLine: " "57" "\n" "\nStrange arguments found in invocation of " "KEYMAP_STACKED" "." "\n" "\nPlease make sure to pass exactly " "64" " macro arguments to" "\n" "KEYMAP_STACKED" ". Also make sure that there are no dangling" "\ncommas at the end of the argument list." "\n" "\nThis is the superfluous part at the end of the macro" "\narguments list: \'" "" "\'" "\n" "\n***************************************************************" "\n***************************************************************" "\n***************************************************************" "\n" ); }){}, /* End of dummy lambda, the comma operator's A operand. */ (Key(0x2D /* (UNDERSCORE)*/, 0) /* (UNDERSCORE)*/) /* The overall ASSERT_ARGS_COUNT evaluates to B. */ ) }, [FUNCTION] = { Key(0xffff), Key(0x3A, 0), Key(0x3B, 0), Key(0x3C, 0), Key(0x3D, 0), Key(0x3E, 0), Key(0x39, 0), Key(0xffff), Key(0xffff), Key((0xB6 /* HID type OSC*/) | ((0 | 16 | 64|8) << 8)), Key(0x3F, 0), Key(0x40, 0), Key(0x41, 0), Key(0x42, 0), Key(0x43, 0), Key(0x44, 0), Key(0x2B, 0), Key(0xffff), Key(1, 0|64|16), Key(0xffff), Key(64 | (1 << 1) /* Synthetic key*/, 0 | 64 | 16), Key(32| 64, 0|64|16), Key(32| 1 | 8, 0|64|16), Key(0x4C, 0), Key(0x28 /* (MARKED AS ENTER_SLASH_RETURN)*/, 0) /* (MARKED AS ENTER_SLASH_RETURN)*/, Key((0xCD /* HID type OSC*/) | ((0 | 16 | 64|8) << 8)), Key((0xB5 /* HID type OSC*/) | ((0 | 16 | 64|8) << 8)), Key(Key(0x2F, 0).keyCode, Key(0x2F, 0).flags | 8), Key(Key(0x30, 0).keyCode, Key(0x30, 0).flags | 8), Key(0x2F, 0), Key(0x30, 0), Key(0x45, 0), Key(0x4A, 0), Key(4, 0|64|16), Key(2, 0|64|16), Key(8, 0|64|16), Key(64 | (1 << 0) /* Synthetic key*/, 0 | 64 | 16), Key(32| 1 | 4, 0|64|16), Key(32| 2 | 8, 0|64|16), Key(0xffff), Key(0xffff), Key(0x65, 0), Key(0x50, 0), Key(0x51, 0), Key(0x52, 0), Key(0x4F, 0), Key(0xffff), Key(0xffff), Key(0x4D, 0), Key(0x46, 0), Key(0x49, 0), Key(0xffff), Key(64 | (1 << 2) /* Synthetic key*/, 0 | 64 | 16), Key(32| 2 | 4, 0|64|16), Key(0xffff), Key(0xffff), Key(0xffff), Key(0xffff), Key((0xE2 /* HID type OOC*/) | ((0 | 12 | 64|8) << 8)), Key((0xEA /* HID type RTC*/) | ((0 | 20 | 64|8) << 8)), Key((0xE9 /* HID type RTC*/) | ((0 | 20 | 64|8) << 8)), Key(0xffff), Key(0x31, 0), ((struct { /* Here we are in the body of a dummy lambda function.            */ /* []{} is, BTW, the shortest way to write a lambda.              */ /* It is only used to hold the static_assert that cannot be       */ /* defined directly in the keymap initializer list. By using the  */ /* comma operator ((A, B) always evaluates to b), we ensure       */ /* that not the lambda but B is what ASSERT_ARGS_COUNT            */ /* finally evaluates to.                                          */ /* Please not that passing B through this macro is a must         */ /* as we need it for the comma operator to work.                  */ static_assert(sizeof(const char) == sizeof("" ), /* sizeof(const char) == sizeof(#__VA_ARGS__ ) checks the quoted */ /* list of additional arguments. If there are none, then the     */ /* length of #__VA_ARGS__ is a single char as it contains '\0'.  */ /* This check is not able to find the corner case of a single    */ /* superfluous comma at the end of the macro arguments as this   */ /* causes #__VA_ARGS__ being empty (only '\0').                  */ "\n" "\n***************************************************************" "\n******************** READ THIS CAREFULLY! *********************" "\n***************************************************************" "\n" "\nFile: " "/Users/jdlien/kaleidoscope/Kaleidoscope-Bundle-Keyboardio/avr/libraries/Kaleidoscope-LEDEffect-FunctionalColor/examples/fc_test_minimal/fc_test_minimal.ino" "\nLine: " "57" "\n" "\nStrange arguments found in invocation of " "KEYMAP_STACKED" "." "\n" "\nPlease make sure to pass exactly " "64" " macro arguments to" "\n" "KEYMAP_STACKED" ". Also make sure that there are no dangling" "\ncommas at the end of the argument list." "\n" "\nThis is the superfluous part at the end of the macro" "\narguments list: \'" "" "\'" "\n" "\n***************************************************************" "\n***************************************************************" "\n***************************************************************" "\n" ); }){}, /* End of dummy lambda, the comma operator's A operand. */ (Key(Key(0x31, 0).keyCode, Key(0x31, 0).flags | 8)) /* The overall ASSERT_ARGS_COUNT evaluates to B. */ ) } }; uint8_t layer_count = sizeof(keymaps_linear) / sizeof(*keymaps_linear); /* This deprecated compatibility wrapper is removed by the linker if  __NL__      it is not accessed nowhere.                                        __NL__   */ kaleidoscope::internal::Keymaps2DInterface keymaps;
# 57 "/Users/jdlien/kaleidoscope/Kaleidoscope-Bundle-Keyboardio/avr/libraries/Kaleidoscope-LEDEffect-FunctionalColor/examples/fc_test_minimal/fc_test_minimal.ino"
  // KEYMAPS(

/* Re-enable astyle's indent enforcement */
// *INDENT-ON*


# 64 "/Users/jdlien/kaleidoscope/Kaleidoscope-Bundle-Keyboardio/avr/libraries/Kaleidoscope-LEDEffect-FunctionalColor/examples/fc_test_minimal/fc_test_minimal.ino" 2
static kaleidoscope::plugin::FunctionalColor funColor;

// First, tell Kaleidoscope which plugins you want to use.