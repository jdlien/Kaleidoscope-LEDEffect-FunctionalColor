#include "Kaleidoscope-MouseKeys.h"
/*
 * keygroups.h provides functions that can be used at compile-time to evaluate whether a
 * Key constant is in a certain major grouping. This is used by FunctionalColor to color
 * keys by the group that they are in.
 */ 

//Alphabetical keys A-Z
inline constexpr bool isAlpha(const Key& k) {
  return ( k.getFlags() == KEY_FLAGS && (k.getKeyCode() >= (Key_A).getKeyCode()) && (k.getKeyCode() <= (Key_Z).getKeyCode()) )?true:false;
}

//Number keys 1-9, 0
inline constexpr bool isNumber(const Key& k) {
  return ( k.getFlags() == KEY_FLAGS && (k.getKeyCode() >= (Key_1).getKeyCode()) && (k.getKeyCode() <= (Key_0).getKeyCode()) )?true:false;
}

// enter, escape, delete, tab, spacebar, all have no group

//minus, equals, brackets, backslash, pound, semicolon, quote, grave accent, comma, period, slash
inline constexpr bool isPunctuation(const Key& k) {
  return ( (k.getKeyCode() == (Key_LeftCurlyBracket).getKeyCode() && k.getFlags() == (Key_LeftCurlyBracket).getFlags()) ||
  	(k.getKeyCode() == (Key_RightCurlyBracket).getKeyCode() && k.getFlags() == (Key_RightCurlyBracket).getFlags()) ||
  	(k.getKeyCode() == (Key_LeftParen).getKeyCode() && k.getFlags() == (Key_LeftParen).getFlags()) ||
  	(k.getKeyCode() == (Key_RightParen).getKeyCode() && k.getFlags() == (Key_RightParen).getFlags()) ||
  	(k.getKeyCode() == (Key_Pipe).getKeyCode() && k.getFlags() == (Key_Pipe).getFlags()) ||
  	(k.getFlags() == KEY_FLAGS &&
  	(k.getKeyCode() == (Key_International1).getKeyCode() || //Brazilian forward-slash (/) and question-mark (?) key
  	k.getKeyCode() == (Key_NonUsBackslashAndPipe).getKeyCode() ||
  	((k.getKeyCode() >= (Key_Minus).getKeyCode()) && (k.getKeyCode() <= (Key_Slash).getKeyCode()))) )
  	)?true:false;
}

// capslock has no group
//F1 through F24, which are split into two groups
inline constexpr bool isFunction(const Key& k) {
	return ( k.getFlags() == KEY_FLAGS &&
	  (((k.getKeyCode() >= (Key_F1).getKeyCode()) && (k.getKeyCode() <= (Key_F12).getKeyCode())) ||
	  ((k.getKeyCode() >= (Key_F13).getKeyCode()) && (k.getKeyCode() <= (Key_F24).getKeyCode())))
	  )?true:false;
}

// printscreen, scrolllock, pause, insert

//nav cluster: insert, home, end, delete_forward, pageup, pagedown
// I don't know if insert and delete "fit" here, but they do get clustered together on traditional keyboards
inline constexpr bool isNavigation(const Key& k) {
	return (k.getFlags() == KEY_FLAGS && (k.getKeyCode() >= (Key_Insert).getKeyCode()) && (k.getKeyCode() <= (Key_PageDown).getKeyCode()))?true:false;
}

//right, left, down, up
inline constexpr bool isArrow(const Key& k) {
  return (k.getFlags() == KEY_FLAGS && (k.getKeyCode() >= (Key_RightArrow).getKeyCode()) && (k.getKeyCode() <= (Key_UpArrow).getKeyCode()))?true:false;
}

//All keypad keys including numbers, and mathemetical operators.
//There's another group of more obscure keypad keys that are unused so they don't interfere with consumer keys
// ((k.getKeyCode() >= (Key_Keypad00).getKeyCode()) && (k.getKeyCode() <= (Key_KeypadHexadecimal).getKeyCode()))
inline constexpr bool isKeypad(const Key& k) {
  return ( k.getFlags() == KEY_FLAGS && (
  	k.getKeyCode() == (Key_KeypadEquals).getKeyCode() ||
  	k.getKeyCode() == (Key_KeypadComma).getKeyCode() ||
  	k.getKeyCode() == (Key_KeypadEqualSign).getKeyCode() ||
  	((k.getKeyCode() >= (Key_KeypadNumLock).getKeyCode()) && (k.getKeyCode() <= (Key_KeypadDot).getKeyCode())) ||
  	((k.getKeyCode() >= (Key_Keypad00).getKeyCode()) && (k.getKeyCode() <= (Key_KeypadHexadecimal).getKeyCode()))
  	)
  	)?true:false;
}

// System keys like Pause/Break, Print Screen, and scroll lock
inline constexpr bool isSystem(const Key& k) {
  return ( k.getFlags() == KEY_FLAGS && (
  	k.getKeyCode() == (Key_PrintScreen).getKeyCode() ||
  	k.getKeyCode() == (Key_ScrollLock).getKeyCode() ||
  	k.getKeyCode() == (Key_Pause).getKeyCode()
  	)
  	)?true:false;
}

//Media keys used on some keyboards with extra buttons, as well as all the consumer control keys
//includes, execute, help, menu, select, stop, again, undo, cut, copy, paste, find, mute, volup, voldn
// #define HID_CONSUMER_PLAY	0xB0	// HID type OOC
// #define HID_CONSUMER_PAUSE	0xB1	// HID type OOC
// #define HID_CONSUMER_RECORD	0xB2	// HID type OOC
// #define HID_CONSUMER_FAST_FORWARD	0xB3	// HID type OOC
// #define HID_CONSUMER_REWIND	0xB4	// HID type OOC
// #define HID_CONSUMER_SCAN_NEXT_TRACK	0xB5	// HID type OSC
// #define HID_CONSUMER_SCAN_PREVIOUS_TRACK	0xB6	// HID type OSC
// #define HID_CONSUMER_STOP	0xB7	// HID type OSC
// #define HID_CONSUMER_EJECT	0xB8	// HID type OSC
// #define HID_CONSUMER_RANDOM_PLAY	0xB9	// HID type OOC

// #define HID_CONSUMER_PLAY_SLASH_PAUSE	0xCD	// HID type OSC

// //Mute happens to be the same code as left alt. Hmm.
// #define HID_CONSUMER_MUTE	0xE2	// HID type OOC

// #define HID_CONSUMER_VOLUME_INCREMENT	0xE9	// HID type RTC
// #define HID_CONSUMER_VOLUME_DECREMENT	0xEA	// HID type RTC
inline constexpr bool isMedia(const Key& k) {
  return (
      (k.getFlags() == KEY_FLAGS && (k.getKeyCode() >= (Key_Execute).getKeyCode()) && (k.getKeyCode() <= (Key_VolumeDown).getKeyCode())) ||
	(k.getKeyCode() == (Consumer_ScanPreviousTrack).getKeyCode() && k.getFlags() == (Consumer_ScanPreviousTrack).getFlags())||
	(k.getKeyCode() == (Consumer_ScanNextTrack).getKeyCode() && k.getFlags() == (Consumer_ScanNextTrack).getFlags())||
	(k.getKeyCode() == (Consumer_PlaySlashPause).getKeyCode() && k.getFlags() == (Consumer_PlaySlashPause).getFlags())||
	(k.getKeyCode() == (Consumer_Play).getKeyCode() && k.getFlags() == (Consumer_Play).getFlags())||
	(k.getKeyCode() == (Consumer_Pause).getKeyCode() && k.getFlags() == (Consumer_Pause).getFlags())||
	(k.getKeyCode() == (Consumer_Stop).getKeyCode() && k.getFlags() == (Consumer_Stop).getFlags())||
	(k.getFlags() == (Consumer_VolumeIncrement).getFlags() && k.getKeyCode() == (Consumer_VolumeIncrement).getKeyCode()) ||
	(k.getFlags() == (Consumer_VolumeDecrement).getFlags() && k.getKeyCode() == (Consumer_VolumeDecrement).getKeyCode()) ||
	(k.getKeyCode() == (Consumer_Mute).getKeyCode() && k.getFlags() == (Consumer_Mute).getFlags())
  	)?true:false;
}

// Lang keys used primarily for Asian language character set switching
inline constexpr bool isLang(const Key& k) {
	return (k.getFlags() == KEY_FLAGS &&
		(k.getKeyCode() >= (Key_Lang1).getKeyCode()) && (k.getKeyCode() <= (Key_Lang9).getKeyCode()) )?true:false;
}

//Here I will have some groups that have subgroups...
//Control, shift, alt, gui (windows/command), and application (menu) key
inline constexpr bool isModifier(const Key& k) {
	return ( k.getFlags() == KEY_FLAGS &&
		(k.getKeyCode() == (Key_PcApplication).getKeyCode() ||
		((k.getKeyCode() >= (Key_LeftControl).getKeyCode()) && (k.getKeyCode() <= (Key_RightGui).getKeyCode()))) )?true:false;
}

//Keys that are subgroups of Modifier keys
inline constexpr bool isShift(const Key& k) {
	return ( k.getFlags() == KEY_FLAGS &&
		(k.getKeyCode() == (Key_LeftShift).getKeyCode() || (k.getKeyCode() == (Key_RightShift).getKeyCode()) ) )?true:false;
}

inline constexpr bool isControl(const Key& k) {
	return ( k.getFlags() == KEY_FLAGS &&
		(k.getKeyCode() == (Key_LeftControl).getKeyCode() || (k.getKeyCode() == (Key_RightControl).getKeyCode()) ) )?true:false;
}

inline constexpr bool isGui(const Key& k) {
	return ( k.getFlags() == KEY_FLAGS &&
		(k.getKeyCode() == (Key_LeftGui).getKeyCode() || (k.getKeyCode() == (Key_RightGui).getKeyCode()) ) )?true:false;
}

inline constexpr bool isAlt(const Key& k) {
	return ( k.getFlags() == KEY_FLAGS &&
		(k.getKeyCode() == (Key_LeftAlt).getKeyCode() || (k.getKeyCode() == (Key_RightAlt).getKeyCode()) ) )?true:false;
}


// All mouse keys. This technique seems to get some false positives (prog & led keys)
inline constexpr bool isMouseMove(const Key& k) {
	return ( ((Key_mouseUpL).getFlags() == k.getFlags() && (Key_mouseUpL).getKeyCode() == k.getKeyCode()) ||
		 ((Key_mouseUp).getFlags() == k.getFlags() && (Key_mouseUp).getKeyCode() == k.getKeyCode()) ||
		 ((Key_mouseUpR).getFlags() == k.getFlags() && (Key_mouseUpR).getKeyCode() == k.getKeyCode()) ||
		 ((Key_mouseL).getFlags() == k.getFlags() && (Key_mouseL).getKeyCode() == k.getKeyCode()) ||
		 ((Key_mouseR).getFlags() == k.getFlags() && (Key_mouseR).getKeyCode() == k.getKeyCode()) ||
		 ((Key_mouseDnL).getFlags() == k.getFlags() && (Key_mouseDnL).getKeyCode() == k.getKeyCode()) ||
		 ((Key_mouseDn).getFlags() == k.getFlags() && (Key_mouseDn).getKeyCode() == k.getKeyCode()) ||
		 ((Key_mouseDnR).getFlags() == k.getFlags() && (Key_mouseDnR).getKeyCode() == k.getKeyCode())
		)?true:false;
}

// Mouse keys that are for the mouse wheel. L & R scroll wheel don't seem to work.
inline constexpr bool isMouseWheel(const Key& k) {
	return ( ((Key_mouseScrollUp).getFlags() == k.getFlags() && (Key_mouseScrollUp).getKeyCode() == k.getKeyCode()) ||
		 ((Key_mouseScrollDn).getFlags() == k.getFlags() && (Key_mouseScrollDn).getKeyCode() == k.getKeyCode())
		)?true:false;
}

// Mouse keys that are for the mouse buttons
inline constexpr bool isMouseButton(const Key& k) {
	return ( ((Key_mouseBtnL).getFlags() == k.getFlags() && (Key_mouseBtnL).getKeyCode() == k.getKeyCode()) ||
		 ((Key_mouseBtnM).getFlags() == k.getFlags() && (Key_mouseBtnM).getKeyCode() == k.getKeyCode()) ||
		 ((Key_mouseBtnR).getFlags() == k.getFlags() && (Key_mouseBtnR).getKeyCode() == k.getKeyCode())
		)?true:false;
}

// Mouse keys that warp the mouse pointer
inline constexpr bool isMouseWarp(const Key& k) {
	return ( ((Key_mouseWarpNW).getFlags() == k.getFlags() && (Key_mouseWarpNW).getKeyCode() == k.getKeyCode()) ||
		 ((Key_mouseWarpNE).getFlags() == k.getFlags() && (Key_mouseWarpNE).getKeyCode() == k.getKeyCode()) ||
		 ((Key_mouseWarpSW).getFlags() == k.getFlags() && (Key_mouseWarpSW).getKeyCode() == k.getKeyCode()) ||
		 ((Key_mouseWarpSE).getFlags() == k.getFlags() && (Key_mouseWarpSE).getKeyCode() == k.getKeyCode()) ||
		 ((Key_mouseWarpEnd).getFlags() == k.getFlags() && (Key_mouseWarpEnd).getKeyCode() == k.getKeyCode())
		)?true:false;
}

inline constexpr bool isMouse(const Key& k) {
	return (isMouseMove(k) || isMouseWheel(k) || isMouseButton(k) || isMouseWarp(k));
}
