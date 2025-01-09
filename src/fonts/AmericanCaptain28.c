/*******************************************************************************
 * Size: 28 px
 * Bpp: 1
 * Opts: --bpp 1 --size 28 --no-compress --font AmericanCaptain-MdEY.ttf --range 32-126 --format lvgl -o AmericanCaptain28.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef AMERICANCAPTAIN28
#define AMERICANCAPTAIN28 1
#endif

#if AMERICANCAPTAIN28

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0,
    0x6, 0xf6,

    /* U+0022 "\"" */
    0xef, 0xdf, 0xbf, 0x7e, 0xfd, 0xf1, 0x80,

    /* U+0023 "#" */
    0x4, 0xc1, 0x98, 0x33, 0x6, 0x60, 0xd8, 0x1b,
    0x2, 0x60, 0xcc, 0x7f, 0xe3, 0x20, 0x6c, 0x7f,
    0xf3, 0x30, 0x66, 0xc, 0x81, 0xb0, 0x36, 0xc,
    0xc1, 0x98, 0x33, 0x0,

    /* U+0024 "$" */
    0x18, 0x18, 0x18, 0x7e, 0xff, 0xff, 0xf0, 0xf0,
    0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0xf, 0xf, 0xff,
    0x7f, 0x7e, 0x18, 0x18,

    /* U+0025 "%" */
    0x78, 0xc, 0x1f, 0x7, 0xf, 0xe1, 0xc3, 0xb8,
    0xe0, 0xee, 0x38, 0x3b, 0x9c, 0xe, 0xe7, 0x3,
    0xf9, 0x80, 0x7c, 0xe0, 0x1e, 0x38, 0x0, 0x1c,
    0x70, 0x7, 0x3e, 0x1, 0x9f, 0xc0, 0xe7, 0x70,
    0x39, 0xdc, 0x1c, 0x77, 0x7, 0x1d, 0xc3, 0x87,
    0xf0, 0xe0, 0xf8, 0x30, 0x1c,

    /* U+0026 "&" */
    0xf, 0xc0, 0xff, 0xc3, 0xff, 0xe, 0x3c, 0x38,
    0xf0, 0xf3, 0xc1, 0xcf, 0xf, 0xf8, 0xff, 0xc3,
    0xfc, 0xf, 0x71, 0xfd, 0xe7, 0xf7, 0xbf, 0xcf,
    0xef, 0x3f, 0xbc, 0x7e, 0xf1, 0xf3, 0xff, 0xff,
    0xff, 0xdf, 0xdf,

    /* U+0027 "'" */
    0xff, 0xff, 0xf0,

    /* U+0028 "(" */
    0x1c, 0x73, 0x8e, 0x79, 0xef, 0x3c, 0xf3, 0xcf,
    0x3c, 0xf3, 0xcf, 0x3c, 0x79, 0xe7, 0x8e, 0x1c,
    0x70,

    /* U+0029 ")" */
    0xe3, 0x87, 0x1c, 0x79, 0xe3, 0x8f, 0x3c, 0xf3,
    0xcf, 0x3c, 0xf3, 0xce, 0x79, 0xe7, 0x9c, 0xe3,
    0x80,

    /* U+002A "*" */
    0x1c, 0x2e, 0xbe, 0xef, 0xe7, 0xf7, 0xd9, 0x74,
    0x38,

    /* U+002B "+" */
    0x7, 0x0, 0x70, 0x7, 0x0, 0x70, 0x7, 0xf,
    0xff, 0xff, 0xff, 0xff, 0x7, 0x0, 0x70, 0x7,
    0x0, 0x70,

    /* U+002C "," */
    0x6f, 0xff, 0x66,

    /* U+002D "-" */
    0xff, 0xff, 0xc0,

    /* U+002E "." */
    0x6f, 0x60,

    /* U+002F "/" */
    0x7, 0x3, 0x81, 0xc0, 0xe0, 0xe0, 0x70, 0x38,
    0x38, 0x1c, 0xe, 0xe, 0x7, 0x3, 0x81, 0x81,
    0xc0, 0xe0, 0x70, 0x70, 0x38, 0x1c, 0x0,

    /* U+0030 "0" */
    0x7f, 0xbf, 0xff, 0xff, 0xcf, 0xf3, 0xfc, 0xff,
    0x3f, 0xcf, 0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0xf3,
    0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xfd,
    0xfe,

    /* U+0031 "1" */
    0x79, 0xf3, 0xe3, 0xc7, 0x8f, 0x1e, 0x3c, 0x78,
    0xf1, 0xe3, 0xc7, 0x8f, 0x1e, 0x3c, 0x79, 0xff,
    0xff, 0xf0,

    /* U+0032 "2" */
    0x7f, 0x7f, 0xff, 0xe0, 0xf0, 0x78, 0x3c, 0x1e,
    0x1f, 0x3f, 0xbf, 0xbf, 0x9f, 0x8f, 0x87, 0x83,
    0xc1, 0xe0, 0xf0, 0x7f, 0xff, 0xdf, 0xe0,

    /* U+0033 "3" */
    0x7f, 0x3f, 0xdf, 0xe0, 0xf0, 0x78, 0x3c, 0x1e,
    0xf, 0x7, 0xbf, 0xdf, 0xcf, 0xf0, 0x78, 0x3c,
    0x1e, 0xf, 0x7, 0xbf, 0xdf, 0xef, 0xe0,

    /* U+0034 "4" */
    0x7, 0xc0, 0xfc, 0xf, 0xc1, 0xfc, 0x1f, 0xc1,
    0xfc, 0x3f, 0xc3, 0xbc, 0x7b, 0xc7, 0xbc, 0xf3,
    0xcf, 0x3c, 0xf3, 0xcf, 0xff, 0xff, 0xff, 0xff,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,

    /* U+0035 "5" */
    0xff, 0x7f, 0xbf, 0xde, 0xf, 0x7, 0x83, 0xc1,
    0xe0, 0xff, 0x7f, 0xdf, 0xe0, 0xf0, 0x78, 0x3c,
    0x1e, 0xf, 0x7, 0xff, 0xdf, 0xef, 0xe0,

    /* U+0036 "6" */
    0x7f, 0xbf, 0xef, 0xfb, 0xc0, 0xf0, 0x3c, 0xf,
    0x3, 0xfe, 0xff, 0xff, 0xff, 0x3f, 0xcf, 0xf3,
    0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xfd,
    0xfe,

    /* U+0037 "7" */
    0x7f, 0xdf, 0xff, 0xfc, 0x1e, 0x7, 0x81, 0xe0,
    0xf8, 0x3c, 0xf, 0x3, 0xc1, 0xf0, 0x78, 0x1e,
    0x7, 0x83, 0xc0, 0xf0, 0x3c, 0x1f, 0x7, 0x81,
    0xe0,

    /* U+0038 "8" */
    0x7f, 0xdf, 0xff, 0xff, 0xf8, 0xff, 0x1f, 0xe3,
    0xfc, 0x7f, 0x8f, 0xff, 0xef, 0xfb, 0xff, 0xf8,
    0xff, 0x1f, 0xe3, 0xfc, 0x7f, 0x8f, 0xf1, 0xff,
    0xff, 0xff, 0xbf, 0xe0,

    /* U+0039 "9" */
    0x7f, 0xbf, 0xff, 0xff, 0xcf, 0xf3, 0xfc, 0xff,
    0x3f, 0xcf, 0xf3, 0xfc, 0xff, 0xff, 0xff, 0x7f,
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xdf, 0xf7, 0xfd,
    0xfe,

    /* U+003A ":" */
    0x6f, 0x60, 0x0, 0x0, 0x0, 0x6f, 0x60,

    /* U+003B ";" */
    0x7, 0xbd, 0xe7, 0x0, 0x0, 0x0, 0x0, 0xcf,
    0x7b, 0xcc, 0x40,

    /* U+003C "<" */
    0x0, 0x0, 0x30, 0x3c, 0x3f, 0x3f, 0x3f, 0xf,
    0x3, 0xc0, 0x7c, 0xf, 0xe0, 0xfc, 0xf, 0x0,
    0xc0, 0x0,

    /* U+003D "=" */
    0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xfc,

    /* U+003E ">" */
    0x0, 0x30, 0xf, 0x3, 0xf0, 0x3f, 0x3, 0xf0,
    0x3c, 0xf, 0xf, 0x8f, 0xcf, 0xc3, 0xc0, 0xc0,
    0x0, 0x0,

    /* U+003F "?" */
    0x7f, 0x7f, 0xff, 0xe0, 0xf0, 0x78, 0x3c, 0x1e,
    0xf, 0x7f, 0xbf, 0xdf, 0xef, 0x7, 0x83, 0xc0,
    0x0, 0x0, 0x0, 0x18, 0x1e, 0x6, 0x0,

    /* U+0040 "@" */
    0x7f, 0xfb, 0xff, 0xff, 0xff, 0xfc, 0xf, 0xf0,
    0x3f, 0xdf, 0xff, 0x7f, 0xfd, 0xef, 0xf7, 0xbf,
    0xde, 0xff, 0x7b, 0xfd, 0xef, 0xf7, 0xbf, 0xdf,
    0xff, 0x3f, 0xfc, 0x0, 0xf0, 0x3, 0xff, 0xcf,
    0xff, 0x1f, 0xfc,

    /* U+0041 "A" */
    0xf, 0x0, 0xf8, 0x1f, 0x81, 0xf8, 0x1f, 0x81,
    0xf8, 0x1f, 0x81, 0xfc, 0x3f, 0xc3, 0xfc, 0x3d,
    0xc3, 0xdc, 0x39, 0xe7, 0x9e, 0x7f, 0xe7, 0xfe,
    0x7f, 0xe7, 0x8e, 0x78, 0xff, 0xf,

    /* U+0042 "B" */
    0xff, 0xbf, 0xff, 0xff, 0xcf, 0xf3, 0xfc, 0xff,
    0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xfb, 0xff, 0xf3,
    0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xff,
    0xfe,

    /* U+0043 "C" */
    0x7f, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
    0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
    0xf0, 0xff, 0xff, 0x7f,

    /* U+0044 "D" */
    0xff, 0xbf, 0xff, 0xff, 0xcf, 0xf3, 0xfc, 0xff,
    0x3f, 0xcf, 0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0xf3,
    0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xff,
    0xfe,

    /* U+0045 "E" */
    0xff, 0x7f, 0xbf, 0xde, 0xf, 0x7, 0x83, 0xc1,
    0xe0, 0xf0, 0x7f, 0xbf, 0xdf, 0xef, 0x7, 0x83,
    0xc1, 0xe0, 0xf0, 0x7f, 0xbf, 0xdf, 0xe0,

    /* U+0046 "F" */
    0xff, 0x7f, 0xbf, 0xde, 0xf, 0x7, 0x83, 0xc1,
    0xe0, 0xf0, 0x7f, 0xbf, 0xdf, 0xef, 0x7, 0x83,
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0x0,

    /* U+0047 "G" */
    0x7f, 0x3f, 0xcf, 0xfb, 0xc0, 0xf0, 0x3c, 0xf,
    0x3, 0xc0, 0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0xf3,
    0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xfd,
    0xff,

    /* U+0048 "H" */
    0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xfc, 0xff,
    0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xfc, 0xff, 0x3f,
    0xcf,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff,

    /* U+004A "J" */
    0x3f, 0xcf, 0xf3, 0xfc, 0xf, 0x3, 0xc0, 0xf0,
    0x3c, 0xf, 0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0xf3,
    0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xfd,
    0xfe,

    /* U+004B "K" */
    0xf1, 0xfe, 0x7f, 0xcf, 0x79, 0xef, 0x3d, 0xef,
    0xbd, 0xe7, 0xbc, 0xf7, 0x9f, 0xe3, 0xfe, 0x7f,
    0xcf, 0x79, 0xef, 0x3d, 0xf7, 0x9e, 0xf3, 0xde,
    0x7b, 0xcf, 0xf9, 0xf0,

    /* U+004C "L" */
    0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
    0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
    0xf0, 0xff, 0xff, 0xff,

    /* U+004D "M" */
    0xf0, 0xff, 0xc7, 0xfe, 0x3f, 0xf1, 0xff, 0x9f,
    0xfe, 0xff, 0xf7, 0xff, 0xbf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x77, 0xfb, 0xbf, 0xdd,
    0xfe, 0x4f, 0xf2, 0x7f, 0x93, 0xfc, 0x9f, 0xe0,
    0xf0,

    /* U+004E "N" */
    0xf3, 0xfc, 0xff, 0xbf, 0xef, 0xfb, 0xfe, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x7f, 0xdf, 0xf7, 0xfd, 0xff, 0x3f,
    0xcf,

    /* U+004F "O" */
    0x7f, 0xbf, 0xff, 0xff, 0xcf, 0xf3, 0xfc, 0xff,
    0x3f, 0xcf, 0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0xf3,
    0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xfd,
    0xfe,

    /* U+0050 "P" */
    0xff, 0xbf, 0xff, 0xff, 0xcf, 0xf3, 0xfc, 0xff,
    0x3f, 0xcf, 0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0xff,
    0xff, 0xff, 0xfb, 0xc0, 0xf0, 0x3c, 0xf, 0x3,
    0xc0,

    /* U+0051 "Q" */
    0x7f, 0xdf, 0xff, 0xff, 0xf8, 0xff, 0x1f, 0xe3,
    0xfc, 0x7f, 0x8f, 0xf1, 0xfe, 0x3f, 0xc7, 0xf8,
    0xff, 0x1f, 0xe3, 0xfc, 0x7f, 0x8f, 0xf1, 0xff,
    0xff, 0xff, 0xbf, 0xe0, 0xe0, 0x1c, 0x0,

    /* U+0052 "R" */
    0xff, 0xbf, 0xff, 0xff, 0xcf, 0xf3, 0xfc, 0xff,
    0x3f, 0xcf, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff,
    0xff, 0xef, 0x73, 0xde, 0xf7, 0xbd, 0xef, 0x3f,
    0xcf,

    /* U+0053 "S" */
    0x7f, 0x7f, 0xff, 0xfe, 0xf, 0x7, 0x83, 0xc1,
    0xe0, 0xff, 0x7f, 0xff, 0xe0, 0xf0, 0x78, 0x3c,
    0x1e, 0xf, 0x7, 0xff, 0xdf, 0xef, 0xe0,

    /* U+0054 "T" */
    0x7f, 0x9f, 0xef, 0xfc, 0x78, 0x1e, 0x7, 0x81,
    0xe0, 0x78, 0x1e, 0x7, 0x81, 0xe0, 0x78, 0x1e,
    0x7, 0x81, 0xe0, 0x78, 0x1e, 0x7, 0x81, 0xe0,
    0x78,

    /* U+0055 "U" */
    0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xfc, 0xff,
    0x3f, 0xcf, 0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0xf3,
    0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xfd,
    0xfe,

    /* U+0056 "V" */
    0xf0, 0xf7, 0x8f, 0x78, 0xf7, 0x9e, 0x79, 0xe7,
    0x9e, 0x79, 0xe3, 0x9e, 0x3d, 0xc3, 0xdc, 0x3f,
    0xc3, 0xfc, 0x1f, 0xc1, 0xf8, 0x1f, 0x81, 0xf8,
    0x1f, 0x80, 0xf8, 0xf, 0x80, 0xf0,

    /* U+0057 "W" */
    0xf1, 0xc7, 0xbc, 0xe3, 0xde, 0x79, 0xef, 0x3c,
    0xf7, 0x9e, 0x7b, 0xcf, 0x3d, 0xef, 0xbc, 0xf7,
    0xde, 0x3b, 0xef, 0x1d, 0xff, 0x8f, 0xff, 0xc7,
    0xff, 0xe3, 0xf7, 0xe1, 0xfb, 0xf0, 0x7c, 0xf8,
    0x3e, 0x7c, 0x1f, 0x3e, 0xf, 0x9f, 0x7, 0x8f,
    0x3, 0xc7, 0x80,

    /* U+0058 "X" */
    0x79, 0xe7, 0x9e, 0x79, 0xe7, 0x9e, 0x3b, 0xc3,
    0xfc, 0x3f, 0xc1, 0xf8, 0x1f, 0x81, 0xf8, 0x1f,
    0x81, 0xf8, 0x3f, 0xc3, 0xfc, 0x3f, 0xc3, 0xbc,
    0x79, 0xe7, 0x9e, 0x79, 0xef, 0x9e,

    /* U+0059 "Y" */
    0xf0, 0xff, 0x9f, 0x79, 0xe7, 0x9e, 0x79, 0xe3,
    0x9c, 0x39, 0xc3, 0xfc, 0x3f, 0xc1, 0xf8, 0x1f,
    0x81, 0xf8, 0x1f, 0x80, 0xf0, 0xf, 0x0, 0xf0,
    0xf, 0x0, 0xf0, 0xf, 0x0, 0xf0,

    /* U+005A "Z" */
    0x7f, 0xdf, 0xf7, 0xf8, 0x1e, 0xf, 0x83, 0xe0,
    0xf0, 0x3c, 0x1f, 0x7, 0xc1, 0xe0, 0x78, 0x3e,
    0xf, 0x83, 0xc1, 0xf0, 0x7c, 0x1f, 0xe7, 0xfb,
    0xfe,

    /* U+005B "[" */
    0xff, 0xbd, 0xef, 0x7b, 0xde, 0xf7, 0xbd, 0xef,
    0x7b, 0xde, 0xf7, 0xbd, 0xef, 0x7b, 0xdf,

    /* U+005C "\\" */
    0xe0, 0x70, 0x38, 0xe, 0x7, 0x3, 0x80, 0xc0,
    0x70, 0x38, 0x1c, 0x7, 0x3, 0x81, 0xc0, 0x70,
    0x38, 0x1c, 0x7, 0x3, 0x81, 0xc0, 0x60,

    /* U+005D "]" */
    0xfb, 0xde, 0xf7, 0xbd, 0xef, 0x7b, 0xde, 0xf7,
    0xbd, 0xef, 0x7b, 0xde, 0xf7, 0xbd, 0xff,

    /* U+005E "^" */
    0x1, 0xe0, 0x1, 0xf0, 0x0, 0xfc, 0x0, 0xff,
    0x0, 0xf3, 0x80, 0x71, 0xe0, 0x78, 0x70, 0x38,
    0x3c, 0x3c, 0xe, 0x1c, 0x7, 0x9e, 0x1, 0xfe,
    0x0, 0xf0,

    /* U+005F "_" */
    0xff, 0xff, 0xff, 0xe0,

    /* U+0060 "`" */
    0xf8, 0x3c, 0x1e, 0x7,

    /* U+0061 "a" */
    0xf, 0x0, 0xf8, 0x1f, 0x81, 0xf8, 0x1f, 0x81,
    0xf8, 0x1f, 0x81, 0xfc, 0x3f, 0xc3, 0xfc, 0x3d,
    0xc3, 0xdc, 0x39, 0xe7, 0x9e, 0x7f, 0xe7, 0xfe,
    0x7f, 0xe7, 0x8e, 0x78, 0xff, 0xf,

    /* U+0062 "b" */
    0xff, 0xbf, 0xff, 0xff, 0xcf, 0xf3, 0xfc, 0xff,
    0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xfb, 0xff, 0xf3,
    0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xff,
    0xfe,

    /* U+0063 "c" */
    0x7f, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
    0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
    0xf0, 0xff, 0xff, 0x7f,

    /* U+0064 "d" */
    0xff, 0xbf, 0xff, 0xff, 0xcf, 0xf3, 0xfc, 0xff,
    0x3f, 0xcf, 0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0xf3,
    0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xff,
    0xfe,

    /* U+0065 "e" */
    0xff, 0x7f, 0xbf, 0xde, 0xf, 0x7, 0x83, 0xc1,
    0xe0, 0xf0, 0x7f, 0xbf, 0xdf, 0xef, 0x7, 0x83,
    0xc1, 0xe0, 0xf0, 0x7f, 0xbf, 0xdf, 0xe0,

    /* U+0066 "f" */
    0xff, 0x7f, 0xbf, 0xde, 0xf, 0x7, 0x83, 0xc1,
    0xe0, 0xf0, 0x7f, 0xbf, 0xdf, 0xef, 0x7, 0x83,
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0x0,

    /* U+0067 "g" */
    0x7f, 0x3f, 0xcf, 0xfb, 0xc0, 0xf0, 0x3c, 0xf,
    0x3, 0xc0, 0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0xf3,
    0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xfd,
    0xff,

    /* U+0068 "h" */
    0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xfc, 0xff,
    0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xfc, 0xff, 0x3f,
    0xcf,

    /* U+0069 "i" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff,

    /* U+006A "j" */
    0x3f, 0xcf, 0xf3, 0xfc, 0xf, 0x3, 0xc0, 0xf0,
    0x3c, 0xf, 0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0xf3,
    0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xfd,
    0xfe,

    /* U+006B "k" */
    0xf1, 0xfe, 0x7f, 0xcf, 0x79, 0xef, 0x3d, 0xef,
    0xbd, 0xe7, 0xbc, 0xf7, 0x9f, 0xe3, 0xfe, 0x7f,
    0xcf, 0x79, 0xef, 0x3d, 0xf7, 0x9e, 0xf3, 0xde,
    0x7b, 0xcf, 0xf9, 0xf0,

    /* U+006C "l" */
    0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
    0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
    0xf0, 0xff, 0xff, 0xff,

    /* U+006D "m" */
    0xf0, 0xff, 0xc7, 0xfe, 0x3f, 0xf1, 0xff, 0x9f,
    0xfe, 0xff, 0xf7, 0xff, 0xbf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x77, 0xfb, 0xbf, 0xdd,
    0xfe, 0x4f, 0xf2, 0x7f, 0x93, 0xfc, 0x9f, 0xe0,
    0xf0,

    /* U+006E "n" */
    0xf3, 0xfc, 0xff, 0xbf, 0xef, 0xfb, 0xfe, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x7f, 0xdf, 0xf7, 0xfd, 0xff, 0x3f,
    0xcf,

    /* U+006F "o" */
    0x7f, 0xbf, 0xff, 0xff, 0xcf, 0xf3, 0xfc, 0xff,
    0x3f, 0xcf, 0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0xf3,
    0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xfd,
    0xfe,

    /* U+0070 "p" */
    0xff, 0xbf, 0xff, 0xff, 0xcf, 0xf3, 0xfc, 0xff,
    0x3f, 0xcf, 0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0xff,
    0xff, 0xff, 0xfb, 0xc0, 0xf0, 0x3c, 0xf, 0x3,
    0xc0,

    /* U+0071 "q" */
    0x7f, 0xdf, 0xff, 0xff, 0xf8, 0xff, 0x1f, 0xe3,
    0xfc, 0x7f, 0x8f, 0xf1, 0xfe, 0x3f, 0xc7, 0xf8,
    0xff, 0x1f, 0xe3, 0xfc, 0x7f, 0x8f, 0xf1, 0xff,
    0xff, 0xff, 0xbf, 0xe0, 0xe0, 0x1c, 0x0,

    /* U+0072 "r" */
    0xff, 0xbf, 0xff, 0xff, 0xcf, 0xf3, 0xfc, 0xff,
    0x3f, 0xcf, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff,
    0xff, 0xef, 0x73, 0xde, 0xf7, 0xbd, 0xef, 0x3f,
    0xcf,

    /* U+0073 "s" */
    0x7f, 0x7f, 0xff, 0xfe, 0xf, 0x7, 0x83, 0xc1,
    0xe0, 0xff, 0x7f, 0xff, 0xe0, 0xf0, 0x78, 0x3c,
    0x1e, 0xf, 0x7, 0xff, 0xdf, 0xef, 0xe0,

    /* U+0074 "t" */
    0x7f, 0x9f, 0xef, 0xfc, 0x78, 0x1e, 0x7, 0x81,
    0xe0, 0x78, 0x1e, 0x7, 0x81, 0xe0, 0x78, 0x1e,
    0x7, 0x81, 0xe0, 0x78, 0x1e, 0x7, 0x81, 0xe0,
    0x78,

    /* U+0075 "u" */
    0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xfc, 0xff,
    0x3f, 0xcf, 0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0xf3,
    0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xfd,
    0xfe,

    /* U+0076 "v" */
    0xf0, 0xf7, 0x8f, 0x78, 0xf7, 0x9e, 0x79, 0xe7,
    0x9e, 0x79, 0xe3, 0x9e, 0x3d, 0xc3, 0xdc, 0x3f,
    0xc3, 0xfc, 0x1f, 0xc1, 0xf8, 0x1f, 0x81, 0xf8,
    0x1f, 0x80, 0xf8, 0xf, 0x80, 0xf0,

    /* U+0077 "w" */
    0xf1, 0xc7, 0xbc, 0xe3, 0xde, 0x79, 0xef, 0x3c,
    0xf7, 0x9e, 0x7b, 0xcf, 0x3d, 0xef, 0xbc, 0xf7,
    0xde, 0x3b, 0xef, 0x1d, 0xff, 0x8f, 0xff, 0xc7,
    0xff, 0xe3, 0xf7, 0xe1, 0xfb, 0xf0, 0x7c, 0xf8,
    0x3e, 0x7c, 0x1f, 0x3e, 0xf, 0x9f, 0x7, 0x8f,
    0x3, 0xc7, 0x80,

    /* U+0078 "x" */
    0x79, 0xe7, 0x9e, 0x79, 0xe7, 0x9e, 0x3b, 0xc3,
    0xfc, 0x3f, 0xc1, 0xf8, 0x1f, 0x81, 0xf8, 0x1f,
    0x81, 0xf8, 0x3f, 0xc3, 0xfc, 0x3f, 0xc3, 0xbc,
    0x79, 0xe7, 0x9e, 0x79, 0xef, 0x9e,

    /* U+0079 "y" */
    0xf0, 0xff, 0x9f, 0x79, 0xe7, 0x9e, 0x79, 0xe3,
    0x9c, 0x39, 0xc3, 0xfc, 0x3f, 0xc1, 0xf8, 0x1f,
    0x81, 0xf8, 0x1f, 0x80, 0xf0, 0xf, 0x0, 0xf0,
    0xf, 0x0, 0xf0, 0xf, 0x0, 0xf0,

    /* U+007A "z" */
    0x7f, 0xdf, 0xf7, 0xf8, 0x1e, 0xf, 0x83, 0xe0,
    0xf0, 0x3c, 0x1f, 0x7, 0xc1, 0xe0, 0x78, 0x3e,
    0xf, 0x83, 0xc1, 0xf0, 0x7c, 0x1f, 0xe7, 0xfb,
    0xfe,

    /* U+007B "{" */
    0xf, 0x3e, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c,
    0x3c, 0x3c, 0x78, 0xf0, 0x78, 0x3c, 0x3c, 0x3c,
    0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x1e, 0xf,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xf0, 0x7c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c,
    0x3c, 0x3c, 0x1e, 0xf, 0x1e, 0x3c, 0x3c, 0x3c,
    0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x78, 0xf0,

    /* U+007E "~" */
    0x7f, 0xdf, 0xfb, 0x1e, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 56, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 90, .box_w = 4, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 143, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 13},
    {.bitmap_index = 18, .adv_w = 206, .box_w = 11, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 157, .box_w = 8, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 313, .box_w = 18, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 247, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 76, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 13},
    {.bitmap_index = 149, .adv_w = 124, .box_w = 6, .box_h = 22, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 166, .adv_w = 124, .box_w = 6, .box_h = 22, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 183, .adv_w = 173, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 192, .adv_w = 221, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 210, .adv_w = 97, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 213, .adv_w = 127, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 216, .adv_w = 97, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 218, .adv_w = 163, .box_w = 9, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 194, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 266, .adv_w = 131, .box_w = 7, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 284, .adv_w = 176, .box_w = 9, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 307, .adv_w = 162, .box_w = 9, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 203, .box_w = 12, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 173, .box_w = 9, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 191, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 408, .adv_w = 170, .box_w = 10, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 202, .box_w = 11, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 192, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 486, .adv_w = 97, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 97, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 504, .adv_w = 189, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 522, .adv_w = 191, .box_w = 10, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 531, .adv_w = 189, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 549, .adv_w = 163, .box_w = 9, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 572, .adv_w = 249, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 607, .adv_w = 196, .box_w = 12, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 637, .adv_w = 195, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 157, .box_w = 8, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 682, .adv_w = 193, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 707, .adv_w = 160, .box_w = 9, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 158, .box_w = 9, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 753, .adv_w = 190, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 778, .adv_w = 195, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 803, .adv_w = 92, .box_w = 4, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 813, .adv_w = 190, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 838, .adv_w = 194, .box_w = 11, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 866, .adv_w = 152, .box_w = 8, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 886, .adv_w = 235, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 919, .adv_w = 189, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 944, .adv_w = 195, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 969, .adv_w = 192, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 994, .adv_w = 197, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1025, .adv_w = 195, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1050, .adv_w = 173, .box_w = 9, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1073, .adv_w = 162, .box_w = 10, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1098, .adv_w = 195, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1123, .adv_w = 197, .box_w = 12, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1153, .adv_w = 283, .box_w = 17, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1196, .adv_w = 190, .box_w = 12, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1226, .adv_w = 202, .box_w = 12, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1256, .adv_w = 166, .box_w = 10, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1281, .adv_w = 89, .box_w = 5, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1296, .adv_w = 163, .box_w = 9, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1319, .adv_w = 89, .box_w = 5, .box_h = 24, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1334, .adv_w = 314, .box_w = 17, .box_h = 12, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 1360, .adv_w = 171, .box_w = 9, .box_h = 3, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1364, .adv_w = 172, .box_w = 8, .box_h = 4, .ofs_x = 1, .ofs_y = 22},
    {.bitmap_index = 1368, .adv_w = 196, .box_w = 12, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1398, .adv_w = 195, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1423, .adv_w = 157, .box_w = 8, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1443, .adv_w = 193, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1468, .adv_w = 160, .box_w = 9, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1491, .adv_w = 158, .box_w = 9, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1514, .adv_w = 190, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1539, .adv_w = 195, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1564, .adv_w = 92, .box_w = 4, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1574, .adv_w = 190, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1599, .adv_w = 194, .box_w = 11, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1627, .adv_w = 152, .box_w = 8, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1647, .adv_w = 235, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1680, .adv_w = 189, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1705, .adv_w = 195, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1730, .adv_w = 192, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1755, .adv_w = 197, .box_w = 11, .box_h = 22, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1786, .adv_w = 195, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1811, .adv_w = 173, .box_w = 9, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1834, .adv_w = 162, .box_w = 10, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1859, .adv_w = 195, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1884, .adv_w = 197, .box_w = 12, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1914, .adv_w = 283, .box_w = 17, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1957, .adv_w = 190, .box_w = 12, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1987, .adv_w = 202, .box_w = 12, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2017, .adv_w = 166, .box_w = 10, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2042, .adv_w = 117, .box_w = 8, .box_h = 24, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2066, .adv_w = 92, .box_w = 4, .box_h = 27, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 2080, .adv_w = 117, .box_w = 8, .box_h = 24, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2104, .adv_w = 191, .box_w = 11, .box_h = 3, .ofs_x = 1, .ofs_y = 8}
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
    .kern_scale = 28,
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
const lv_font_t AmericanCaptain28 = {
#else
lv_font_t AmericanCaptain28 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 32,          /*The maximum line height required by the font*/
    .base_line = 6,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if AMERICANCAPTAIN28*/

