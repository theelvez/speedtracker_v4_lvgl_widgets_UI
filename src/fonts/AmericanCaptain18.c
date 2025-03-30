/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --no-compress --font AmericanCaptain-MdEY.ttf --range 32-126 --format lvgl -o AmericanCaptain18.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef AMERICANCAPTAIN18
#define AMERICANCAPTAIN18 1
#endif

#if AMERICANCAPTAIN18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xe3, 0xfe,

    /* U+0022 "\"" */
    0x7a, 0xd6, 0x90,

    /* U+0023 "#" */
    0x14, 0x68, 0xb1, 0x62, 0x9f, 0xda, 0x7e, 0x58,
    0xa1, 0x42, 0x8d, 0x0,

    /* U+0024 "$" */
    0x20, 0x8f, 0xbf, 0xc3, 0x87, 0x8f, 0x1f, 0xf7,
    0xc8, 0x20,

    /* U+0025 "%" */
    0x71, 0x8f, 0x98, 0xd9, 0x8d, 0xb0, 0xfb, 0x7,
    0x60, 0x6, 0xe0, 0x7f, 0xd, 0xb0, 0xdb, 0x19,
    0xb1, 0x9f, 0x18, 0xe0,

    /* U+0026 "&" */
    0x3e, 0x3f, 0x9c, 0xc6, 0x67, 0xf7, 0xf3, 0xf1,
    0xdb, 0xed, 0xf3, 0xb9, 0xdf, 0xf7, 0xf8,

    /* U+0027 "'" */
    0x69, 0x20,

    /* U+0028 "(" */
    0x31, 0x9c, 0xce, 0x73, 0x9c, 0xe7, 0x18, 0xe3,
    0x18,

    /* U+0029 ")" */
    0x63, 0x1c, 0x63, 0x9c, 0xe7, 0x39, 0xcc, 0xe6,
    0x30,

    /* U+002A "*" */
    0x27, 0xc9, 0xf2, 0x0,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0xfd, 0xa0,

    /* U+002D "-" */
    0xfe,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0xc, 0x30, 0x86, 0x18, 0x63, 0xc, 0x31, 0x86,
    0x18, 0x40,

    /* U+0030 "0" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xf7, 0xef,
    0xdf, 0xbf, 0xff, 0xe0,

    /* U+0031 "1" */
    0x7f, 0x77, 0x77, 0x77, 0x77, 0x7f, 0xf0,

    /* U+0032 "2" */
    0xff, 0xf1, 0xc7, 0x1c, 0xff, 0xbc, 0xe3, 0x8e,
    0x3f, 0xf8,

    /* U+0033 "3" */
    0xff, 0xf1, 0xc7, 0x1c, 0x7f, 0xff, 0x1c, 0x71,
    0xff, 0xfc,

    /* U+0034 "4" */
    0x1e, 0x1e, 0x3e, 0x3e, 0x7e, 0x7e, 0x6e, 0xee,
    0xee, 0xff, 0xff, 0xe, 0xe,

    /* U+0035 "5" */
    0xfb, 0xfe, 0x38, 0xe3, 0xff, 0xc7, 0x1c, 0x71,
    0xff, 0x7c,

    /* U+0036 "6" */
    0xfd, 0xfb, 0x87, 0xe, 0x1f, 0xff, 0xf7, 0xef,
    0xdf, 0xbf, 0xff, 0xe0,

    /* U+0037 "7" */
    0x7f, 0xf8, 0x70, 0xe1, 0x87, 0xe, 0x1c, 0x30,
    0xe1, 0xc3, 0x86, 0x0,

    /* U+0038 "8" */
    0xff, 0xff, 0xbf, 0x7e, 0xff, 0xff, 0xf7, 0xef,
    0xdf, 0xbf, 0xff, 0xe0,

    /* U+0039 "9" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xff, 0xff, 0xe,
    0x1c, 0x3b, 0xf7, 0xe0,

    /* U+003A ":" */
    0xff, 0x80, 0x7, 0xfc,

    /* U+003B ";" */
    0x5f, 0x80, 0x7, 0xfd, 0x0,

    /* U+003C "<" */
    0x2, 0x1c, 0xf7, 0x8c, 0x1e, 0xf, 0x7, 0x2,

    /* U+003D "=" */
    0xff, 0xf0, 0x3f, 0xfc,

    /* U+003E ">" */
    0x81, 0x83, 0xc1, 0xe0, 0xe7, 0xbc, 0x60, 0x0,

    /* U+003F "?" */
    0x7d, 0xf1, 0xc7, 0x1d, 0xf7, 0xd8, 0x60, 0x7,
    0x1c, 0x70,

    /* U+0040 "@" */
    0xff, 0xff, 0xe3, 0xff, 0xff, 0xfb, 0xfb, 0xfb,
    0xff, 0xff, 0xe0, 0xfe, 0xfe,

    /* U+0041 "A" */
    0x38, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x7e, 0x7e,
    0x6e, 0x7e, 0x7e, 0xe6, 0xe7,

    /* U+0042 "B" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xff, 0x7f, 0xef,
    0xdf, 0xbf, 0xff, 0xe0,

    /* U+0043 "C" */
    0xfb, 0xfe, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x3f, 0xf8,

    /* U+0044 "D" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xf7, 0xef,
    0xdf, 0xbf, 0xff, 0xe0,

    /* U+0045 "E" */
    0xfb, 0xfe, 0x38, 0xe3, 0x8f, 0xbe, 0xe3, 0x8e,
    0x3e, 0xf8,

    /* U+0046 "F" */
    0xfb, 0xfe, 0x38, 0xe3, 0x8f, 0xbe, 0xe3, 0x8e,
    0x38, 0xe0,

    /* U+0047 "G" */
    0xfd, 0xfb, 0x87, 0xe, 0x1d, 0xfb, 0xf7, 0xef,
    0xdf, 0xbf, 0xff, 0xe0,

    /* U+0048 "H" */
    0xef, 0xdf, 0xbf, 0x7e, 0xfd, 0xff, 0xff, 0xef,
    0xdf, 0xbf, 0x7e, 0xe0,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xfe,

    /* U+004A "J" */
    0x3e, 0xfc, 0x38, 0x70, 0xfd, 0xfb, 0xf7, 0xef,
    0xdf, 0xbf, 0xff, 0xc0,

    /* U+004B "K" */
    0xe7, 0xdf, 0xbf, 0x7e, 0xdf, 0xbf, 0x7e, 0xed,
    0xdf, 0xbf, 0x7e, 0xe0,

    /* U+004C "L" */
    0xe3, 0x8e, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x3f, 0xf8,

    /* U+004D "M" */
    0xe3, 0xfb, 0xfd, 0xfe, 0xff, 0x7f, 0xff, 0xff,
    0xff, 0xff, 0xf5, 0xfa, 0xfd, 0x7e, 0x38,

    /* U+004E "N" */
    0xef, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xbf, 0x7e, 0xe0,

    /* U+004F "O" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xf7, 0xef,
    0xdf, 0xbf, 0xff, 0xe0,

    /* U+0050 "P" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xff, 0xff,
    0xc3, 0x87, 0xe, 0x0,

    /* U+0051 "Q" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xf7, 0xef,
    0xdf, 0xbf, 0xff, 0xc6, 0x0,

    /* U+0052 "R" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xff, 0xff,
    0xfb, 0xb7, 0x7e, 0xe0,

    /* U+0053 "S" */
    0xff, 0xfe, 0x38, 0xe3, 0xff, 0xc7, 0x1c, 0x71,
    0xff, 0x7c,

    /* U+0054 "T" */
    0x7d, 0xfc, 0xe1, 0xc3, 0x87, 0xe, 0x1c, 0x38,
    0x70, 0xe1, 0xc3, 0x80,

    /* U+0055 "U" */
    0xef, 0xdf, 0xbf, 0x7e, 0xfd, 0xfb, 0xf7, 0xef,
    0xdf, 0xbf, 0xff, 0xe0,

    /* U+0056 "V" */
    0xe7, 0xe6, 0x66, 0x66, 0x6e, 0x7e, 0x7e, 0x3c,
    0x3c, 0x3c, 0x3c, 0x3c, 0x38,

    /* U+0057 "W" */
    0xe6, 0xfc, 0xdd, 0xbb, 0xb7, 0x76, 0xec, 0xdd,
    0x9f, 0xf3, 0xde, 0x3b, 0xc7, 0x78, 0xef, 0x1c,
    0xc3, 0x98,

    /* U+0058 "X" */
    0xe6, 0xdd, 0xbb, 0xe3, 0xc7, 0x8f, 0x1e, 0x7c,
    0xfd, 0xbb, 0x7e, 0x60,

    /* U+0059 "Y" */
    0x63, 0x3b, 0x9d, 0xce, 0xe3, 0x61, 0xb0, 0xf8,
    0x7c, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0,

    /* U+005A "Z" */
    0x7d, 0xf8, 0x70, 0xe3, 0x87, 0xe, 0x1c, 0x70,
    0xe1, 0xc3, 0xef, 0xc0,

    /* U+005B "[" */
    0xfe, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xef,

    /* U+005C "\\" */
    0x41, 0x86, 0x18, 0x30, 0xc3, 0x6, 0x18, 0x60,
    0x83, 0xc,

    /* U+005D "]" */
    0xf7, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x7f,

    /* U+005E "^" */
    0xe, 0x3, 0xc0, 0x6c, 0x1d, 0x83, 0x18, 0xe3,
    0x18, 0x36, 0x7,

    /* U+005F "_" */
    0xff, 0xf0,

    /* U+0060 "`" */
    0x61, 0x80,

    /* U+0061 "a" */
    0x38, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x7e, 0x7e,
    0x6e, 0x7e, 0x7e, 0xe6, 0xe7,

    /* U+0062 "b" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xff, 0x7f, 0xef,
    0xdf, 0xbf, 0xff, 0xe0,

    /* U+0063 "c" */
    0xfb, 0xfe, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x3f, 0xf8,

    /* U+0064 "d" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xf7, 0xef,
    0xdf, 0xbf, 0xff, 0xe0,

    /* U+0065 "e" */
    0xfb, 0xfe, 0x38, 0xe3, 0x8f, 0xbe, 0xe3, 0x8e,
    0x3e, 0xf8,

    /* U+0066 "f" */
    0xfb, 0xfe, 0x38, 0xe3, 0x8f, 0xbe, 0xe3, 0x8e,
    0x38, 0xe0,

    /* U+0067 "g" */
    0xfd, 0xfb, 0x87, 0xe, 0x1d, 0xfb, 0xf7, 0xef,
    0xdf, 0xbf, 0xff, 0xe0,

    /* U+0068 "h" */
    0xef, 0xdf, 0xbf, 0x7e, 0xfd, 0xff, 0xff, 0xef,
    0xdf, 0xbf, 0x7e, 0xe0,

    /* U+0069 "i" */
    0xff, 0xff, 0xff, 0xff, 0xfe,

    /* U+006A "j" */
    0x3e, 0xfc, 0x38, 0x70, 0xfd, 0xfb, 0xf7, 0xef,
    0xdf, 0xbf, 0xff, 0xc0,

    /* U+006B "k" */
    0xe7, 0xdf, 0xbf, 0x7e, 0xdf, 0xbf, 0x7e, 0xed,
    0xdf, 0xbf, 0x7e, 0xe0,

    /* U+006C "l" */
    0xe3, 0x8e, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x3f, 0xf8,

    /* U+006D "m" */
    0xe3, 0xfb, 0xfd, 0xfe, 0xff, 0x7f, 0xff, 0xff,
    0xff, 0xff, 0xf5, 0xfa, 0xfd, 0x7e, 0x38,

    /* U+006E "n" */
    0xef, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xbf, 0x7e, 0xe0,

    /* U+006F "o" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xf7, 0xef,
    0xdf, 0xbf, 0xff, 0xe0,

    /* U+0070 "p" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xff, 0xff,
    0xc3, 0x87, 0xe, 0x0,

    /* U+0071 "q" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xf7, 0xef,
    0xdf, 0xbf, 0xff, 0xc6, 0x0,

    /* U+0072 "r" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xff, 0xff,
    0xfb, 0xb7, 0x7e, 0xe0,

    /* U+0073 "s" */
    0xff, 0xfe, 0x38, 0xe3, 0xff, 0xc7, 0x1c, 0x71,
    0xff, 0x7c,

    /* U+0074 "t" */
    0x7d, 0xfc, 0xe1, 0xc3, 0x87, 0xe, 0x1c, 0x38,
    0x70, 0xe1, 0xc3, 0x80,

    /* U+0075 "u" */
    0xef, 0xdf, 0xbf, 0x7e, 0xfd, 0xfb, 0xf7, 0xef,
    0xdf, 0xbf, 0xff, 0xe0,

    /* U+0076 "v" */
    0xe7, 0xe6, 0x66, 0x66, 0x6e, 0x7e, 0x7e, 0x3c,
    0x3c, 0x3c, 0x3c, 0x3c, 0x38,

    /* U+0077 "w" */
    0xe6, 0xfc, 0xdd, 0xbb, 0xb7, 0x76, 0xec, 0xdd,
    0x9f, 0xf3, 0xde, 0x3b, 0xc7, 0x78, 0xef, 0x1c,
    0xc3, 0x98,

    /* U+0078 "x" */
    0xe6, 0xdd, 0xbb, 0xe3, 0xc7, 0x8f, 0x1e, 0x7c,
    0xfd, 0xbb, 0x7e, 0x60,

    /* U+0079 "y" */
    0x63, 0x3b, 0x9d, 0xce, 0xe3, 0x61, 0xb0, 0xf8,
    0x7c, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0,

    /* U+007A "z" */
    0x7d, 0xf8, 0x70, 0xe3, 0x87, 0xe, 0x1c, 0x70,
    0xe1, 0xc3, 0xef, 0xc0,

    /* U+007B "{" */
    0x3b, 0x9c, 0xe7, 0x39, 0xce, 0xc3, 0x9c, 0xe7,
    0x39, 0xc7,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xc0,

    /* U+007D "}" */
    0xe3, 0x9c, 0xe7, 0x39, 0xce, 0x1b, 0x9c, 0xe7,
    0x39, 0xdc,

    /* U+007E "~" */
    0x67, 0xfa, 0x70
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 36, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 58, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 92, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 9, .adv_w = 132, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 101, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 201, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 159, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 49, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 68, .adv_w = 80, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 77, .adv_w = 80, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 86, .adv_w = 111, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 90, .adv_w = 142, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 98, .adv_w = 62, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 100, .adv_w = 82, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 101, .adv_w = 62, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 105, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 84, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 113, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 104, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 131, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 111, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 123, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 109, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 130, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 123, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 62, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 62, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 232, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 240, .adv_w = 123, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 244, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 252, .adv_w = 105, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 275, .adv_w = 126, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 126, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 101, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 124, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 103, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 101, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 122, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 59, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 371, .adv_w = 122, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 98, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 151, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 121, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 126, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 123, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 126, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 469, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 481, .adv_w = 111, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 491, .adv_w = 104, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 515, .adv_w = 126, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 528, .adv_w = 182, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 122, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 130, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 573, .adv_w = 107, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 57, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 593, .adv_w = 105, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 603, .adv_w = 57, .box_w = 4, .box_h = 16, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 611, .adv_w = 202, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 622, .adv_w = 110, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 624, .adv_w = 111, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 14},
    {.bitmap_index = 626, .adv_w = 126, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 639, .adv_w = 126, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 101, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 661, .adv_w = 124, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 673, .adv_w = 103, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 683, .adv_w = 101, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 693, .adv_w = 122, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 705, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 59, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 722, .adv_w = 122, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 734, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 746, .adv_w = 98, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 756, .adv_w = 151, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 771, .adv_w = 121, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 783, .adv_w = 126, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 123, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 807, .adv_w = 126, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 820, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 832, .adv_w = 111, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 842, .adv_w = 104, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 854, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 866, .adv_w = 126, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 879, .adv_w = 182, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 897, .adv_w = 122, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 909, .adv_w = 130, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 924, .adv_w = 107, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 936, .adv_w = 75, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 946, .adv_w = 59, .box_w = 2, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 951, .adv_w = 75, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 961, .adv_w = 123, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 5}
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
    .kern_scale = 18,
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
const lv_font_t AmericanCaptain18 = {
#else
lv_font_t AmericanCaptain18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 20,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if AMERICANCAPTAIN18*/

