  
 /* Here's a big list of color names based on the CSS color names.
   * I can't use them all (many are indifferentiable anyways, so I comment out
   * those that are not commonly used.)
   */

  const cRGB warmwhite = CRGB(255, 250, 200);

  // Here is a massive list of CSS color names
  // Incidentally, the keyboard doesn't have enough memory for all of them, so I just have to uncomment the ones I need.
  const cRGB aliceblue = CRGB(240, 248, 255);
  const cRGB antiquewhite = CRGB(250, 235, 215);
  const cRGB aqua = CRGB(0, 255, 255);
  const cRGB aquamarine = CRGB(127, 255, 212);
  const cRGB azure = CRGB(240, 255, 255);
  const cRGB beige = CRGB(245, 245, 220);
  const cRGB bisque = CRGB(255, 228, 196);
  const cRGB black = CRGB(0, 0, 0);
  const cRGB blanchedalmond = CRGB(255, 235, 205);
  const cRGB blue = CRGB(0, 0, 255);
  const cRGB blueviolet = CRGB(138, 43, 226);
  const cRGB brown = CRGB(165, 42, 42);
  const cRGB burlywood = CRGB(222, 184, 135);
  const cRGB cadetblue = CRGB(95, 158, 160);
  const cRGB chartreuse = CRGB(127, 255, 0);
  const cRGB chocolate = CRGB(210, 105, 30);
  const cRGB coral = CRGB(255, 127, 80);
  const cRGB cornflowerblue = CRGB(100, 149, 237);
  const cRGB cornsilk = CRGB(255, 248, 220);
  const cRGB crimson = CRGB(220, 20, 60);
  const cRGB cyan = CRGB(0, 255, 255);
  const cRGB darkblue = CRGB(0, 0, 139);
  const cRGB darkcyan = CRGB(0, 139, 139);
  const cRGB darkgoldenrod = CRGB(184, 134, 11);
  const cRGB darkgray = CRGB(169, 169, 169);
  const cRGB darkgrey = CRGB(169, 169, 169);
  const cRGB darkgreen = CRGB(0, 100, 0);
  const cRGB darkkhaki = CRGB(189, 183, 107);
  const cRGB darkmagenta = CRGB(139, 0, 139);
  const cRGB darkolivegreen = CRGB(85, 107, 47);
  const cRGB darkorange = CRGB(255, 140, 0);
  const cRGB darkorchid = CRGB(153, 50, 204);
  const cRGB darkred = CRGB(139, 0, 0);
  const cRGB darksalmon = CRGB(233, 150, 122);
  const cRGB darkseagreen = CRGB(143, 188, 143);
  const cRGB darkslateblue = CRGB(72, 61, 139);
  const cRGB darkslategray = CRGB(47, 79, 79);
  const cRGB darkslategrey = CRGB(47, 79, 79);
  const cRGB darkturquoise = CRGB(0, 206, 209);
  const cRGB darkviolet = CRGB(148, 0, 211);
  const cRGB deeppink = CRGB(255, 20, 147);
  const cRGB deepskyblue = CRGB(0, 191, 255);
  const cRGB dimgray = CRGB(105, 105, 105);
  const cRGB dimgrey = CRGB(105, 105, 105);
  const cRGB dodgerblue = CRGB(30, 144, 255);
  const cRGB firebrick = CRGB(178, 34, 34);
  const cRGB floralwhite = CRGB(255, 250, 240);
  const cRGB forestgreen = CRGB(34, 139, 34);
  const cRGB fuchsia = CRGB(255, 0, 255);
  const cRGB gainsboro = CRGB(220, 220, 220);
  const cRGB ghostwhite = CRGB(248, 248, 255);
  const cRGB gold = CRGB(255, 215, 0);
  const cRGB goldenrod = CRGB(218, 165, 32);
  const cRGB gray = CRGB(128, 128, 128);
  const cRGB grey = CRGB(128, 128, 128);
  const cRGB green = CRGB(0, 128, 0);
  const cRGB greenyellow = CRGB(173, 255, 47);
  const cRGB honeydew = CRGB(240, 255, 240);
  const cRGB hotpink = CRGB(255, 105, 180);
  const cRGB indianred = CRGB(205, 92, 92);
  const cRGB indigo = CRGB(75, 0, 130);
  const cRGB ivory = CRGB(255, 255, 240);
  const cRGB khaki = CRGB(240, 230, 140);
  const cRGB lavender = CRGB(230, 230, 250);
  const cRGB lavenderblush = CRGB(255, 240, 245);
  const cRGB lawngreen = CRGB(124, 252, 0);
  const cRGB lemonchiffon = CRGB(255, 250, 205);
  const cRGB lightblue = CRGB(173, 216, 230);
  const cRGB lightcoral = CRGB(240, 128, 128);
  const cRGB lightcyan = CRGB(224, 255, 255);
  const cRGB lightgoldenrodyellow = CRGB(250, 250, 210);
  const cRGB lightgray = CRGB(211, 211, 211);
  const cRGB lightgrey = CRGB(211, 211, 211);
  const cRGB lightgreen = CRGB(144, 238, 144);
  const cRGB lightpink = CRGB(255, 182, 193);
  const cRGB lightsalmon = CRGB(255, 160, 122);
  const cRGB lightseagreen = CRGB(32, 178, 170);
  const cRGB lightskyblue = CRGB(135, 206, 250);
  const cRGB lightslategray = CRGB(119, 136, 153);
  const cRGB lightslategrey = CRGB(119, 136, 153);
  const cRGB lightsteelblue = CRGB(176, 196, 222);
  const cRGB lightyellow = CRGB(255, 255, 224);
  const cRGB lime = CRGB(0, 255, 0);
  const cRGB limegreen = CRGB(50, 205, 50);
  const cRGB linen = CRGB(250, 240, 230);
  const cRGB magenta = CRGB(255, 0, 255);
  const cRGB maroon = CRGB(128, 0, 0);
  const cRGB mediumaquamarine = CRGB(102, 205, 170);
  const cRGB mediumblue = CRGB(0, 0, 205);
  const cRGB mediumorchid = CRGB(186, 85, 211);
  const cRGB mediumpurple = CRGB(147, 112, 219);
  const cRGB mediumseagreen = CRGB(60, 179, 113);
  const cRGB mediumslateblue = CRGB(123, 104, 238);
  const cRGB mediumspringgreen = CRGB(0, 250, 154);
  const cRGB mediumturquoise = CRGB(72, 209, 204);
  const cRGB mediumvioletred = CRGB(199, 21, 133);
  const cRGB midnightblue = CRGB(25, 25, 112);
  const cRGB mintcream = CRGB(245, 255, 250);
  const cRGB mistyrose = CRGB(255, 228, 225);
  const cRGB moccasin = CRGB(255, 228, 181);
  const cRGB navajowhite = CRGB(255, 222, 173);
  const cRGB navy = CRGB(0, 0, 128);
  const cRGB oldlace = CRGB(253, 245, 230);
  const cRGB olive = CRGB(128, 128, 0);
  const cRGB olivedrab = CRGB(107, 142, 35);
  const cRGB orange = CRGB(255, 165, 0);
  // The original orangered looked exactly like red to me, so I adjusted
  //const cRGB orangered = CRGB(255, 69, 0);
  const cRGB orangered = CRGB(255, 100, 0);
  const cRGB orchid = CRGB(218, 112, 214);
  const cRGB palegoldenrod = CRGB(238, 232, 170);
  const cRGB palegreen = CRGB(152, 251, 152);
  const cRGB paleturquoise = CRGB(175, 238, 238);
  const cRGB palevioletred = CRGB(219, 112, 147);
  const cRGB papayawhip = CRGB(255, 239, 213);
  const cRGB peachpuff = CRGB(255, 218, 185);
  const cRGB peru = CRGB(205, 133, 63);
  const cRGB pink = CRGB(255, 192, 203);
  const cRGB plum = CRGB(221, 160, 221);
  const cRGB powderblue = CRGB(176, 224, 230);
  const cRGB purple = CRGB(128, 0, 128);
  const cRGB rebeccapurple = CRGB(102, 51, 153);
  const cRGB red = CRGB(255, 0, 0);
  const cRGB rosybrown = CRGB(188, 143, 143);
  const cRGB royalblue = CRGB(65, 105, 225);
  const cRGB saddlebrown = CRGB(139, 69, 19);
  const cRGB salmon = CRGB(250, 128, 114);
  const cRGB sandybrown = CRGB(244, 164, 96);
  const cRGB seagreen = CRGB(46, 139, 87);
  const cRGB seashell = CRGB(255, 245, 238);
  const cRGB sienna = CRGB(160, 82, 45);
  const cRGB silver = CRGB(192, 192, 192);
  const cRGB skyblue = CRGB(135, 206, 235);
  const cRGB slateblue = CRGB(106, 90, 205);
  const cRGB slategray = CRGB(112, 128, 144);
  const cRGB slategrey = CRGB(112, 128, 144);
  const cRGB snow = CRGB(255, 250, 250);
  const cRGB springgreen = CRGB(0, 255, 127);
  const cRGB steelblue = CRGB(70, 130, 180);
  // tan is an existing keyword, so we rename it tannum 
  const cRGB tannum = CRGB(210, 180, 140);
  const cRGB teal = CRGB(0, 128, 128);
  const cRGB thistle = CRGB(216, 191, 216);
  const cRGB tomato = CRGB(255, 99, 71);
  const cRGB turquoise = CRGB(64, 224, 208);
  const cRGB violet = CRGB(238, 130, 238);
  const cRGB wheat = CRGB(245, 222, 179);
  const cRGB white = CRGB(255, 255, 255);
  const cRGB whitesmoke = CRGB(245, 245, 245);
  const cRGB yellow = CRGB(255, 255, 0);
  const cRGB yellowgreen = CRGB(154, 205, 50);




/*


//define colors for certain groups of keys
cRGB color_escape = dim(red, 140);
cRGB color_numbers = dim(antiquewhite, 220);
cRGB color_letters = dim(antiquewhite, 100);
cRGB color_punctuation = dim(antiquewhite, 150);
cRGB color_brackets = dim(antiquewhite, 200);
cRGB color_backslash = dim(antiquewhite, 200);
cRGB color_pipe = dim(antiquewhite, 200);
cRGB color_space = dim(white, 180);
cRGB color_tab = dim(white, 180);
cRGB color_backspace = dim(red, 120);
cRGB color_delete = dim(orangered, 250);
cRGB color_enter = dim(white, 250);
cRGB color_arrows = dim(white, 240);
cRGB color_nav = dim(yellow, 220);
cRGB color_insert = dim(yellowgreen, 200);
cRGB color_shift = dim(palegreen, 220);
cRGB color_ctrl = dim(skyblue, 170);
cRGB color_alt = dim(forestgreen, 240);
//Mac command or Windows logo key
cRGB color_cmd = dim(pink, 170);
//application context menu key
cRGB color_app = dim(antiquewhite, 150);

cRGB color_printscreen = dim(orange, 200);
cRGB color_pause = dim(orangered, 150);
cRGB color_scrolllock = dim(orange, 150);
cRGB color_capslock = dim(orange, 150);

cRGB color_fkeys = dim(red, 180);
cRGB color_fn = dim(white, 140);
cRGB color_media = dim(violet, 250);
cRGB color_led = dim(blue, 250);
cRGB color_mouse = dim(cyan, 250);

*/