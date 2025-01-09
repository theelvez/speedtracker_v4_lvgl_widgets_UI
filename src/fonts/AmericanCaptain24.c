/*******************************************************************************
 * Size: 21 px
 * Bpp: 1
 * Opts: --bpp 1 --size 21 --no-compress --font AmericanCaptain-MdEY.ttf --range 32-126 --format lvgl -o AmericanCaptain24.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef AMERICANCAPTAIN24
#define AMERICANCAPTAIN24 1
#endif

#if AMERICANCAPTAIN24

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xff, 0x81, 0xf8,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xbd, 0x80,

    /* U+0023 "#" */
    0x1a, 0x12, 0x12, 0x16, 0x36, 0x34, 0xff, 0x24,
    0xff, 0x6c, 0x68, 0x68, 0x48, 0x58, 0x58,

    /* U+0024 "$" */
    0x10, 0x4f, 0xff, 0xe3, 0x8f, 0x1e, 0x3c, 0x71,
    0xff, 0x7c, 0x41, 0x0,

    /* U+0025 "%" */
    0x70, 0xc7, 0xc6, 0x36, 0x71, 0xb3, 0xd, 0x98,
    0x7d, 0x81, 0xcc, 0x0, 0xee, 0x6, 0xf8, 0x36,
    0xc3, 0x36, 0x19, 0xb1, 0xcd, 0x8c, 0x7c, 0x61,
    0xc0,

    /* U+0026 "&" */
    0x1f, 0x7, 0xf1, 0xce, 0x39, 0xc3, 0x38, 0x77,
    0x1f, 0xc7, 0xe0, 0xec, 0xfd, 0xdf, 0x9f, 0x73,
    0xee, 0x7d, 0xff, 0xdf, 0x78,

    /* U+0027 "'" */
    0xff, 0xc0,

    /* U+0028 "(" */
    0x39, 0x9c, 0xee, 0x73, 0x9c, 0xe7, 0x39, 0xc7,
    0x38, 0xc7,

    /* U+0029 ")" */
    0xe3, 0x1c, 0xe3, 0x9c, 0xe7, 0x39, 0xce, 0x77,
    0x39, 0x9c,

    /* U+002A "*" */
    0x33, 0xff, 0xff, 0xfc, 0xc0,

    /* U+002B "+" */
    0xc, 0x6, 0x3, 0x1, 0x8f, 0xff, 0xfc, 0x30,
    0x18, 0xc, 0x0,

    /* U+002C "," */
    0xfd, 0xa0,

    /* U+002D "-" */
    0xff,

    /* U+002E "." */
    0xfc,

    /* U+002F "/" */
    0x6, 0xc, 0x30, 0x60, 0xc3, 0x86, 0xc, 0x38,
    0x60, 0xc3, 0x86, 0xc, 0x18, 0x0,

    /* U+0030 "0" */
    0x7e, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0x7e,

    /* U+0031 "1" */
    0x77, 0x9c, 0xe7, 0x39, 0xce, 0x73, 0x9c, 0xe7,
    0x7f, 0xe0,

    /* U+0032 "2" */
    0xfd, 0xfc, 0x38, 0x70, 0xe3, 0xcf, 0xfe, 0xf9,
    0xe3, 0x87, 0xe, 0x1f, 0xff, 0x0,

    /* U+0033 "3" */
    0xff, 0xf1, 0xc7, 0x1c, 0x71, 0xff, 0xfc, 0x71,
    0xc7, 0x1f, 0xff, 0x80,

    /* U+0034 "4" */
    0xf, 0xf, 0x87, 0xc7, 0xe3, 0xf3, 0xb9, 0xdc,
    0xee, 0xe7, 0x73, 0xbf, 0xff, 0xf0, 0x70, 0x38,
    0x1c,

    /* U+0035 "5" */
    0xfd, 0xff, 0x87, 0xe, 0x1c, 0x3f, 0xff, 0xe,
    0x1c, 0x38, 0x70, 0xff, 0xdf, 0x0,

    /* U+0036 "6" */
    0x7e, 0xfe, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0x7e,

    /* U+0037 "7" */
    0x7f, 0xfe, 0xe, 0xe, 0x1e, 0x1c, 0x1c, 0x1c,
    0x38, 0x38, 0x38, 0x78, 0x70, 0x70, 0x70,

    /* U+0038 "8" */
    0x7e, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0xff,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0x7e,

    /* U+0039 "9" */
    0x7e, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xff, 0xff, 0x7, 0x7, 0x7, 0x7f, 0x7e,

    /* U+003A ":" */
    0xfc, 0x0, 0x0, 0xfc,

    /* U+003B ";" */
    0xe, 0xe6, 0x0, 0x0, 0xe, 0xe6, 0x40,

    /* U+003C "<" */
    0x3, 0xf, 0x3e, 0xf0, 0xc0, 0xf8, 0x3e, 0xf,
    0x3,

    /* U+003D "=" */
    0xff, 0xff, 0x0, 0xff, 0xff,

    /* U+003E ">" */
    0xc0, 0xf0, 0x7c, 0x1e, 0x7, 0x1e, 0x78, 0xf0,
    0xc0,

    /* U+003F "?" */
    0x7f, 0xfc, 0x38, 0x70, 0xe1, 0xdf, 0xbf, 0x7c,
    0xe1, 0xc0, 0x0, 0xe, 0x1c, 0x0,

    /* U+0040 "@" */
    0xff, 0xff, 0xff, 0x83, 0xf7, 0xfe, 0xff, 0xdd,
    0xfb, 0xbf, 0x77, 0xee, 0xfd, 0xff, 0xbf, 0xf0,
    0xe, 0x1, 0xff, 0xbf, 0xe0,

    /* U+0041 "A" */
    0x1c, 0xe, 0xf, 0x87, 0xc3, 0xe1, 0xf0, 0xd8,
    0x6e, 0x77, 0x3b, 0x9d, 0xcf, 0xe7, 0xff, 0x1f,
    0x8e,

    /* U+0042 "B" */
    0xff, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xfe,
    0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0xfe,

    /* U+0043 "C" */
    0xff, 0xfe, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0xf7, 0xc0,

    /* U+0044 "D" */
    0xff, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0xfe,

    /* U+0045 "E" */
    0xff, 0xfe, 0x38, 0xe3, 0x8e, 0x3f, 0xff, 0x8e,
    0x38, 0xe3, 0xff, 0xc0,

    /* U+0046 "F" */
    0xff, 0xfe, 0x38, 0xe3, 0x8e, 0x3f, 0xff, 0x8e,
    0x38, 0xe3, 0x8e, 0x0,

    /* U+0047 "G" */
    0xfe, 0xfe, 0xe0, 0xe0, 0xe0, 0xe0, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0x7f,

    /* U+0048 "H" */
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff,
    0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,

    /* U+004A "J" */
    0x3f, 0x7f, 0x7, 0x7, 0x7, 0x7, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0x7e,

    /* U+004B "K" */
    0xe7, 0xe7, 0xef, 0xee, 0xee, 0xee, 0xee, 0xfc,
    0xfe, 0xee, 0xee, 0xee, 0xef, 0xe7, 0xe7,

    /* U+004C "L" */
    0xe3, 0x8e, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0xff, 0xc0,

    /* U+004D "M" */
    0xe1, 0xfc, 0xff, 0x3f, 0xcf, 0xf7, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfb, 0x7e, 0xdf, 0xb7, 0xe9,
    0xf8, 0x7e, 0x1c,

    /* U+004E "N" */
    0xe7, 0xf7, 0xf7, 0xf7, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xef, 0xef, 0xef, 0xe7, 0xe7,

    /* U+004F "O" */
    0xfe, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0x7e,

    /* U+0050 "P" */
    0xff, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xff, 0xfe, 0xe0, 0xe0, 0xe0, 0xe0,

    /* U+0051 "Q" */
    0xfe, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0xff, 0xfe, 0x38,

    /* U+0052 "R" */
    0xfe, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xff, 0xff, 0xee, 0xee, 0xee, 0xe7, 0xe7,

    /* U+0053 "S" */
    0xff, 0xff, 0x87, 0xe, 0x1c, 0x3f, 0xff, 0xe,
    0x1c, 0x38, 0x70, 0xff, 0xdf, 0x0,

    /* U+0054 "T" */
    0x7d, 0xfc, 0xe1, 0xc3, 0x87, 0xe, 0x1c, 0x38,
    0x70, 0xe1, 0xc3, 0x87, 0xe, 0x0,

    /* U+0055 "U" */
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0x7e,

    /* U+0056 "V" */
    0xe3, 0xf1, 0xdc, 0xee, 0xe7, 0x73, 0xb9, 0xdc,
    0x6e, 0x36, 0x1f, 0xf, 0x87, 0xc1, 0xe0, 0xe0,
    0x70,

    /* U+0057 "W" */
    0xe7, 0x3f, 0x39, 0xdd, 0xce, 0xee, 0x77, 0x77,
    0x3b, 0xb9, 0xdf, 0xcf, 0xfe, 0x3d, 0xf1, 0xef,
    0x8f, 0x78, 0x7b, 0xc3, 0xde, 0x1e, 0x70, 0x63,
    0x80,

    /* U+0058 "X" */
    0xe7, 0x3b, 0x9d, 0xce, 0xe3, 0x61, 0xf0, 0xf8,
    0x7c, 0x3e, 0x1f, 0x1d, 0x8e, 0xe7, 0x73, 0xbb,
    0x8e,

    /* U+0059 "Y" */
    0xe3, 0xf3, 0xdd, 0xce, 0xe7, 0x71, 0xb8, 0xd8,
    0x7c, 0x3e, 0xe, 0x7, 0x3, 0x81, 0xc0, 0xe0,
    0x70,

    /* U+005A "Z" */
    0x7e, 0x7e, 0x1e, 0x1e, 0x1c, 0x1c, 0x3c, 0x3c,
    0x38, 0x38, 0x78, 0x78, 0x70, 0x7e, 0xfe,

    /* U+005B "[" */
    0xfe, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee,
    0xef,

    /* U+005C "\\" */
    0x60, 0xc1, 0x83, 0x83, 0x6, 0xe, 0xc, 0x18,
    0x38, 0x30, 0x60, 0xc0, 0xc1, 0x80,

    /* U+005D "]" */
    0xf7, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77,
    0x7f,

    /* U+005E "^" */
    0x7, 0x0, 0x78, 0x3, 0xe0, 0x3b, 0x83, 0x8c,
    0x1c, 0x71, 0xc1, 0x8e, 0xe, 0xe0, 0x38,

    /* U+005F "_" */
    0xff, 0xfc,

    /* U+0060 "`" */
    0xe0, 0xc1, 0xc0,

    /* U+0061 "a" */
    0x1c, 0xe, 0xf, 0x87, 0xc3, 0xe1, 0xf0, 0xd8,
    0x6e, 0x77, 0x3b, 0x9d, 0xcf, 0xe7, 0xff, 0x1f,
    0x8e,

    /* U+0062 "b" */
    0xff, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xfe,
    0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0xfe,

    /* U+0063 "c" */
    0xff, 0xfe, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0xf7, 0xc0,

    /* U+0064 "d" */
    0xff, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0xfe,

    /* U+0065 "e" */
    0xff, 0xfe, 0x38, 0xe3, 0x8e, 0x3f, 0xff, 0x8e,
    0x38, 0xe3, 0xff, 0xc0,

    /* U+0066 "f" */
    0xff, 0xfe, 0x38, 0xe3, 0x8e, 0x3f, 0xff, 0x8e,
    0x38, 0xe3, 0x8e, 0x0,

    /* U+0067 "g" */
    0xfe, 0xfe, 0xe0, 0xe0, 0xe0, 0xe0, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0x7f,

    /* U+0068 "h" */
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff,
    0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,

    /* U+0069 "i" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,

    /* U+006A "j" */
    0x3f, 0x7f, 0x7, 0x7, 0x7, 0x7, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0x7e,

    /* U+006B "k" */
    0xe7, 0xe7, 0xef, 0xee, 0xee, 0xee, 0xee, 0xfc,
    0xfe, 0xee, 0xee, 0xee, 0xef, 0xe7, 0xe7,

    /* U+006C "l" */
    0xe3, 0x8e, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0xff, 0xc0,

    /* U+006D "m" */
    0xe1, 0xfc, 0xff, 0x3f, 0xcf, 0xf7, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfb, 0x7e, 0xdf, 0xb7, 0xe9,
    0xf8, 0x7e, 0x1c,

    /* U+006E "n" */
    0xe7, 0xf7, 0xf7, 0xf7, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xef, 0xef, 0xef, 0xe7, 0xe7,

    /* U+006F "o" */
    0xfe, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0x7e,

    /* U+0070 "p" */
    0xff, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xff, 0xfe, 0xe0, 0xe0, 0xe0, 0xe0,

    /* U+0071 "q" */
    0xfe, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0xff, 0xfe, 0x38,

    /* U+0072 "r" */
    0xfe, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xff, 0xff, 0xee, 0xee, 0xee, 0xe7, 0xe7,

    /* U+0073 "s" */
    0xff, 0xff, 0x87, 0xe, 0x1c, 0x3f, 0xff, 0xe,
    0x1c, 0x38, 0x70, 0xff, 0xdf, 0x0,

    /* U+0074 "t" */
    0x7d, 0xfc, 0xe1, 0xc3, 0x87, 0xe, 0x1c, 0x38,
    0x70, 0xe1, 0xc3, 0x87, 0xe, 0x0,

    /* U+0075 "u" */
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0x7e,

    /* U+0076 "v" */
    0xe3, 0xf1, 0xdc, 0xee, 0xe7, 0x73, 0xb9, 0xdc,
    0x6e, 0x36, 0x1f, 0xf, 0x87, 0xc1, 0xe0, 0xe0,
    0x70,

    /* U+0077 "w" */
    0xe7, 0x3f, 0x39, 0xdd, 0xce, 0xee, 0x77, 0x77,
    0x3b, 0xb9, 0xdf, 0xcf, 0xfe, 0x3d, 0xf1, 0xef,
    0x8f, 0x78, 0x7b, 0xc3, 0xde, 0x1e, 0x70, 0x63,
    0x80,

    /* U+0078 "x" */
    0xe7, 0x3b, 0x9d, 0xce, 0xe3, 0x61, 0xf0, 0xf8,
    0x7c, 0x3e, 0x1f, 0x1d, 0x8e, 0xe7, 0x73, 0xbb,
    0x8e,

    /* U+0079 "y" */
    0xe3, 0xf3, 0xdd, 0xce, 0xe7, 0x71, 0xb8, 0xd8,
    0x7c, 0x3e, 0xe, 0x7, 0x3, 0x81, 0xc0, 0xe0,
    0x70,

    /* U+007A "z" */
    0x7e, 0x7e, 0x1e, 0x1e, 0x1c, 0x1c, 0x3c, 0x3c,
    0x38, 0x38, 0x78, 0x78, 0x70, 0x7e, 0xfe,

    /* U+007B "{" */
    0x1c, 0xe3, 0x8e, 0x38, 0xe3, 0x8e, 0xe0, 0xe3,
    0x8e, 0x38, 0xe3, 0x8e, 0x38, 0x70,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xe1, 0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x1d, 0xc7,
    0x1c, 0x71, 0xc7, 0x1c, 0x73, 0x80,

    /* U+007E "~" */
    0x7f, 0x8e
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 42, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 68, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 107, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 11, .adv_w = 155, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 118, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 38, .adv_w = 235, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 185, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 57, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 86, .adv_w = 93, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 96, .adv_w = 93, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 106, .adv_w = 130, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 111, .adv_w = 166, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 122, .adv_w = 73, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 124, .adv_w = 95, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 125, .adv_w = 73, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 122, .box_w = 7, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 146, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 98, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 132, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 122, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 153, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 130, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 143, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 128, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 152, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 73, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 73, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 293, .adv_w = 141, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 302, .adv_w = 143, .box_w = 8, .box_h = 5, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 307, .adv_w = 141, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 316, .adv_w = 122, .box_w = 7, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 187, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 147, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 146, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 118, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 120, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 422, .adv_w = 118, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 142, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 146, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 69, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 470, .adv_w = 142, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 146, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 114, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 176, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 141, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 146, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 561, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 576, .adv_w = 148, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 592, .adv_w = 146, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 607, .adv_w = 130, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 122, .box_w = 7, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 146, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 650, .adv_w = 148, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 667, .adv_w = 212, .box_w = 13, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 692, .adv_w = 143, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 709, .adv_w = 152, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 726, .adv_w = 125, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 741, .adv_w = 67, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 750, .adv_w = 122, .box_w = 7, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 764, .adv_w = 67, .box_w = 4, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 773, .adv_w = 235, .box_w = 13, .box_h = 9, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 788, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 790, .adv_w = 129, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 16},
    {.bitmap_index = 793, .adv_w = 147, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 810, .adv_w = 146, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 825, .adv_w = 118, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 837, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 852, .adv_w = 120, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 864, .adv_w = 118, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 876, .adv_w = 142, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 891, .adv_w = 146, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 906, .adv_w = 69, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 912, .adv_w = 142, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 927, .adv_w = 146, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 942, .adv_w = 114, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 954, .adv_w = 176, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 973, .adv_w = 141, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 988, .adv_w = 146, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1003, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1018, .adv_w = 148, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1034, .adv_w = 146, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1049, .adv_w = 130, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1063, .adv_w = 122, .box_w = 7, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1077, .adv_w = 146, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1092, .adv_w = 148, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1109, .adv_w = 212, .box_w = 13, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1134, .adv_w = 143, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1151, .adv_w = 152, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1168, .adv_w = 125, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1183, .adv_w = 88, .box_w = 6, .box_h = 18, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1197, .adv_w = 69, .box_w = 3, .box_h = 20, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1205, .adv_w = 88, .box_w = 6, .box_h = 18, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1219, .adv_w = 143, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = 6}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 2, 0, 3,
    1, 0, 0, 0, 0, 4, 5, 4,
    0, 6, 7, 8, 9, 10, 11, 12,
    13, 14, 15, 0, 0, 0, 0, 0,
    0, 16, 17, 18, 19, 20, 21, 22,
    23, 0, 24, 25, 26, 27, 0, 0,
    28, 29, 28, 30, 31, 32, 33, 34,
    35, 36, 37, 38, 0, 0, 0, 0,
    39, 0, 40, 18, 41, 20, 21, 22,
    23, 0, 42, 25, 26, 27, 0, 0,
    28, 29, 28, 30, 43, 44, 33, 45,
    46, 47, 48, 49, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 0, 0, 0, 3,
    2, 0, 0, 0, 0, 4, 5, 6,
    0, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 16, 0, 0, 0, 0, 0,
    17, 18, 19, 0, 20, 0, 0, 0,
    21, 0, 22, 23, 0, 0, 0, 0,
    21, 0, 21, 0, 24, 25, 26, 27,
    28, 29, 30, 31, 0, 0, 0, 0,
    32, 0, 33, 0, 34, 0, 0, 0,
    21, 0, 35, 23, 0, 0, 0, 0,
    21, 0, 21, 0, 36, 37, 26, 38,
    39, 40, 41, 42, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, -1, -3,
    -3, 0, -20, 0, -1, 1, -4, -1,
    0, 0, -20, -1, -1, 0, -15, -1,
    0, 0, 1, 1, -1, 0, -2, 0,
    -20, -1, 0, -1, 0, 1, 1, -1,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, -1, 0, -1, 0, -1, 0, -3,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -2, 0,
    0, -1, 0, 0, 0, 0, 1, 0,
    0, 0, 0, -2, -13, 0, -9, -6,
    0, -15, 0, 0, 1, 0, 0, -2,
    -13, -9, -6, 0, -15, 0, 0, -33,
    0, 0, 0, 0, -1, 0, 0, -1,
    -6, -4, -1, -3, -1, -8, 0, 0,
    0, -1, -1, 0, 0, -6, -18, 0,
    -20, -18, 1, -20, 1, 0, 0, -1,
    0, -6, -18, -20, -18, 1, -20, 1,
    0, 0, 0, 0, 0, 0, 0, -9,
    -3, -7, -2, -1, 0, -15, -1, 0,
    0, 0, -8, 0, 0, 0, 1, 0,
    -15, 0, -10, -8, -15, -14, -13, 0,
    -8, 0, 0, 0, -15, -10, -8, -15,
    -14, -13, 0, -1, 0, -1, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, -1, -2, -1,
    -1, 0, -2, 0, 0, 0, 0, 0,
    -1, -2, -1, -1, 0, -8, 0, 3,
    -7, 3, 0, 0, 1, 1, -3, -3,
    0, -3, 0, -6, -3, 1, 1, 0,
    0, 0, 1, -3, -5, 0, -6, -6,
    2, -5, 1, 0, 1, 0, 0, -3,
    -5, -6, -6, 2, -5, 1, 0, -1,
    -7, -7, -5, -7, 0, -1, -4, -1,
    -10, 0, 0, -1, -2, 0, 0, 0,
    -6, 0, 0, 0, -3, 0, 0, 0,
    -1, 0, -3, -1, -3, 0, -6, 0,
    0, 0, 0, -1, 0, -3, -1, -3,
    0, -1, 0, -1, 0, -1, 0, 0,
    0, -1, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, -1, -1, -1, 0,
    0, 0, 0, 0, 0, -1, 0, -1,
    -1, -1, -3, -6, 0, -3, -4, -3,
    0, -3, 0, -2, 0, -3, 0, -4,
    0, -4, -3, -1, -3, 0, 0, 0,
    0, -5, -5, 0, -6, -4, -3, -8,
    -3, 0, -3, 0, 0, -5, -5, -6,
    -4, -3, -8, -3, -2, -7, 0, -1,
    0, -1, 0, -1, 0, 0, 0, -3,
    0, -3, 0, -2, -3, 0, -2, 0,
    0, 0, 0, -1, -4, 0, -6, -4,
    -1, -6, -1, 0, -2, 0, 0, -1,
    -4, -6, -4, -1, -6, -1, -1, -9,
    0, -1, 0, -1, 0, -1, 0, -1,
    0, -1, 0, -5, 0, 0, -3, 0,
    -2, 0, 0, 0, 0, 0, -8, 0,
    -8, -6, -1, -11, -1, 0, -2, 0,
    0, 0, -8, -8, -6, -1, -11, -1,
    0, 0, -10, -32, -15, -32, -3, -3,
    -4, -1, -20, 0, -3, 0, -5, -3,
    0, -3, -18, -3, -3, 0, -13, -3,
    0, 0, 3, 5, 0, 2, -2, -41,
    -18, -3, 0, -3, 0, 3, 5, 0,
    2, -2, -1, -3, -1, -1, -2, -1,
    0, -1, 0, -1, 0, -1, 0, -1,
    0, 0, -1, 0, -2, 0, 0, 0,
    0, -1, -2, 0, -3, -2, -3, -4,
    -1, 0, -2, 0, 0, -1, -2, -3,
    -2, -3, -4, -1, 0, -1, 0, -1,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    -1, 0, -1, 0, -2, 0, 0, 0,
    0, -1, 0, -1, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    -1, -1, -3, -2, -2, 0, -4, 0,
    0, 0, 0, -1, -1, -3, -2, -2,
    0, -20, -1, 1, -8, 1, -2, 1,
    0, -1, -3, -5, -2, -2, -2, -8,
    -3, -2, 4, -2, -2, 0, -1, -6,
    -15, -2, -17, -14, -9, -18, -9, 1,
    4, -2, 0, -6, -15, -17, -14, -9,
    -18, -9, 0, -2, 0, -1, -2, -1,
    0, -1, -1, -1, -1, -1, 0, -2,
    0, -1, -1, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -10, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, -1, -1,
    -18, -1, -1, 0, 0, 0, -4, -1,
    -1, 0, -1, -2, 1, -1, 0, -1,
    -1, 0, 0, -1, 0, 0, 0, 1,
    -1, -1, -1, -4, 0, -1, 0, -1,
    0, 0, 1, -1, -1, -1, 0, -1,
    0, -1, 0, -1, 0, -1, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, -1, -1, -1, -8, -2, 0,
    0, 0, 0, -1, 0, -1, -1, -1,
    0, -1, -1, -2, -6, -2, -1, 0,
    -1, 0, -5, 0, 0, 1, -1, 0,
    0, 0, -2, 0, 0, 0, -1, 0,
    0, 0, 1, 1, -1, 0, -1, -4,
    -2, 0, 0, 0, 0, 1, 1, -1,
    0, -1, 1, 0, -5, -26, -5, -26,
    0, 0, -2, 0, -8, 0, 0, 1,
    -3, 0, 1, -1, -12, -1, -1, 0,
    -5, 0, 1, 0, 2, 2, 0, 2,
    0, -31, -12, -1, 0, 0, 1, 2,
    2, 0, 2, 0, 0, -10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, -3, 0, 0, -3, 0, 1, 0,
    0, 0, 0, -1, -10, 0, -8, -7,
    -1, -12, -1, 0, 1, 0, 0, -1,
    -10, -8, -7, -1, -12, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -10,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 1, -1, 1, -13, 1,
    -1, 0, 0, -1, -4, 0, -1, 2,
    -1, -1, 1, -1, -8, -1, -1, 0,
    -1, -2, -1, 0, 2, 2, 1, -4,
    0, 1, -8, -1, 0, -2, -1, 2,
    2, 1, -4, 0, -1, -20, 0, 0,
    -20, 0, 0, 0, 0, 0, -3, -4,
    0, -4, 0, -7, -4, 0, 1, 0,
    0, 0, 0, -5, -17, 0, -18, -15,
    0, -22, -1, -2, 1, 0, 0, -5,
    -17, -18, -15, 0, -22, -1, 0, -1,
    0, -1, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, -1, -1, -1, -10, -2, 0,
    0, 0, 0, -1, 0, -1, -1, -1,
    1, 0, 0, -20, 1, -20, 0, 0,
    -1, 0, -1, 0, 0, 0, 0, 0,
    0, 0, -7, 0, 0, 0, -1, 0,
    1, 0, 0, 0, -2, -1, -2, -38,
    -7, 0, 0, 0, 1, 0, 0, -2,
    -1, -2, 0, -1, -2, -3, 0, -3,
    0, -1, -2, -1, -2, 0, 0, 0,
    -1, 0, 0, 0, -2, 0, 0, 0,
    0, -1, -1, 0, -1, 0, -1, -1,
    -1, -3, -2, 0, 0, -1, -1, -1,
    0, -1, -1, -1, -1, -3, 0, -1,
    0, -1, 0, -1, 0, -1, 0, -1,
    0, -1, 0, -1, -1, 0, -2, 0,
    0, 0, 0, -2, -3, 0, -3, -1,
    -1, -3, -1, -10, -2, 0, 0, -2,
    -3, -3, -1, -1, -3, -1, 0, 0,
    -8, -18, -18, -18, 0, 0, -1, 0,
    -15, 0, 0, 1, -2, 0, 2, 0,
    -15, 0, 0, 0, -9, -1, 2, 0,
    2, 3, -2, 1, -1, -18, -15, 0,
    0, -1, 2, 2, 3, -2, 1, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, -13,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 1, 1, -10, -20, -10, -20,
    -1, -1, -3, 0, -13, 0, -1, 2,
    -3, -1, 1, -1, -17, -1, -1, 0,
    -8, -1, 2, 0, 3, 3, 2, 3,
    -1, -28, -17, -1, 0, -1, 2, 3,
    3, 2, 3, -1, 1, 1, -8, -18,
    -8, -18, -1, -1, -3, 0, -10, 0,
    0, 3, -2, 0, 1, -1, -14, 0,
    0, 0, -5, 0, 3, 0, 3, 3,
    3, 3, 0, -20, -14, 0, 0, 0,
    3, 3, 3, 3, 3, 0, 0, -1,
    -3, 1, -15, 1, -2, -1, -1, -1,
    -6, -1, -1, -1, -3, -3, -1, -1,
    -9, -1, -1, 0, -1, -3, -2, 0,
    2, 3, 2, 2, 1, 2, -9, -1,
    0, -3, -2, 2, 3, 2, 2, 1,
    1, 0, -10, -20, -15, -20, -1, -3,
    -4, -1, -18, -1, -2, 0, -4, -1,
    0, -1, -18, -1, -1, 0, -11, -1,
    1, 0, 3, 3, 2, 3, -1, -26,
    -18, -1, 0, -1, 1, 3, 3, 2,
    3, -1, 1, 1, -5, -3, -15, -3,
    -1, -2, -2, -1, -9, 0, -1, 1,
    -2, 0, 0, -1, -3, -1, -1, 0,
    -3, -2, 0, 0, 3, 3, 1, 3,
    -1, -6, -3, -1, 0, -2, 0, 3,
    3, 1, 3, -1, 0, 0, 0, 0,
    0, 0, -10, 0, 0, -3, -28, -8,
    -10, -1, -10, -12, 0, 0, 1, -10,
    -10, 0, -9, -9, -18, -10, -26, -20,
    2, -26, 1, 0, 1, -10, 0, -9,
    -18, -26, -20, 2, -27, 1, 0, -20,
    -1, 1, -8, 1, -2, 1, 0, -1,
    -3, -5, -2, -2, -2, -8, -3, -2,
    0, -2, -2, 0, -1, -6, -15, -2,
    -17, -14, -9, -18, -9, 1, 4, -2,
    0, -6, -15, -17, -14, -9, -18, -9,
    0, -1, -1, -1, -18, -1, -1, 0,
    0, 0, -4, -1, -1, 0, -1, -2,
    1, -1, 0, 0, -1, 0, 0, -1,
    0, 0, 0, 1, -1, -1, -1, -4,
    0, -1, 0, -1, 0, 0, 1, -1,
    -1, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0, -1, -3, 0, -1,
    0, -1, 0, -1, 0, -1, 0, -1,
    0, -1, 0, -1, -1, 0, -2, 0,
    0, 0, 0, 0, -3, 0, -3, -1,
    -1, -3, -1, -10, -2, 0, 0, -2,
    -3, -3, -1, -1, -3, -1, 0, 0,
    -8, -18, -18, -18, 0, 0, -1, 0,
    -15, 0, 0, 1, -2, 0, 2, 0,
    -15, 0, 0, 0, -9, -1, 0, 0,
    2, 3, -2, 1, -1, -18, -15, 0,
    0, -1, 2, 2, 3, -2, 1, -1,
    1, 1, -10, -20, -10, -20, -1, -1,
    -3, 0, -13, 0, -1, 2, -3, -1,
    1, -1, -17, -1, -1, 0, -8, -1,
    2, 0, 0, 3, 2, 3, -1, -28,
    -17, 116, 0, -1, 2, 3, 3, 2,
    3, -1, 1, 1, -8, -18, -8, -18,
    -1, -1, -3, 0, -10, 0, 0, 3,
    -2, 0, 1, -1, -14, 0, 0, 0,
    -5, 0, 3, 0, 3, 0, 3, 3,
    0, -20, -14, 0, 0, 0, 3, 3,
    3, 3, 3, 0, 0, -1, -3, 1,
    -15, 1, -2, -1, -1, -1, -6, -1,
    -1, -1, -3, -3, -1, -1, -9, -1,
    -1, 0, -1, -3, -2, 0, 2, 3,
    0, 2, 1, 2, -9, -1, 0, -3,
    -2, 2, 3, 2, 2, 1, 1, 0,
    -10, -20, -15, -20, -1, -3, -4, -1,
    -18, -1, -2, 0, -4, -1, 0, -1,
    -18, -1, -1, 0, -11, -1, 1, 0,
    3, 3, 2, 0, -1, -27, -18, -1,
    0, -1, 1, 3, 3, 2, 3, -1,
    1, 1, -5, -3, -15, -3, -1, -2,
    -2, -1, -9, 0, -1, 1, -2, 0,
    0, -1, -3, -1, -1, 0, -3, -2,
    0, 0, 3, 3, 1, 3, 0, -6,
    -3, -1, 0, -2, 0, 3, 3, 1,
    3, -1
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 49,
    .right_class_cnt     = 42,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 21,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t AmericanCaptain24 = {
#else
lv_font_t AmericanCaptain24 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 24,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if AMERICANCAPTAIN24*/

