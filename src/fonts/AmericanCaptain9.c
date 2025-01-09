/*******************************************************************************
 * Size: 9 px
 * Bpp: 1
 * Opts: --bpp 1 --size 9 --no-compress --font AmericanCaptain-MdEY.ttf --range 32-126 --format lvgl -o AmericanCaptain9.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef AMERICANCAPTAIN9
#define AMERICANCAPTAIN9 1
#endif

#if AMERICANCAPTAIN9

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfa,

    /* U+0022 "\"" */
    0xb8,

    /* U+0023 "#" */
    0x66, 0x76, 0xf6, 0xa0,

    /* U+0024 "$" */
    0x5e, 0x63, 0xd0,

    /* U+0025 "%" */
    0xd3, 0x4f, 0xf, 0x35, 0x55, 0xc0,

    /* U+0026 "&" */
    0xf6, 0xbd, 0xff, 0x5b, 0xe0,

    /* U+0027 "'" */
    0xc0,

    /* U+0028 "(" */
    0x6a, 0xa9,

    /* U+0029 ")" */
    0x95, 0x56,

    /* U+002A "*" */
    0x4d, 0x80,

    /* U+002B "+" */
    0x27, 0xc8, 0x40,

    /* U+002C "," */
    0xc0,

    /* U+002D "-" */
    0xc0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x25, 0x24, 0xa0,

    /* U+0030 "0" */
    0xf6, 0xdb, 0x78,

    /* U+0031 "1" */
    0xd5, 0x5c,

    /* U+0032 "2" */
    0xe4, 0xf9, 0x38,

    /* U+0033 "3" */
    0xd7, 0x5c,

    /* U+0034 "4" */
    0x6d, 0xdb, 0xc8,

    /* U+0035 "5" */
    0xf2, 0x72, 0x78,

    /* U+0036 "6" */
    0xf2, 0x7b, 0x78,

    /* U+0037 "7" */
    0xe5, 0xa4, 0xb0,

    /* U+0038 "8" */
    0xf6, 0xfb, 0x78,

    /* U+0039 "9" */
    0xf6, 0xde, 0x78,

    /* U+003A ":" */
    0x88,

    /* U+003B ";" */
    0x20, 0xa0,

    /* U+003C "<" */
    0xe, 0x30,

    /* U+003D "=" */
    0xf0, 0xf0,

    /* U+003E ">" */
    0x18, 0xe0,

    /* U+003F "?" */
    0xd7, 0x88,

    /* U+0040 "@" */
    0xfc, 0x6f, 0x5b, 0xc3, 0xc0,

    /* U+0041 "A" */
    0x66, 0x66, 0xef, 0xb0,

    /* U+0042 "B" */
    0xf6, 0xfb, 0x78,

    /* U+0043 "C" */
    0xea, 0xac,

    /* U+0044 "D" */
    0xf6, 0xdb, 0x78,

    /* U+0045 "E" */
    0xeb, 0xac,

    /* U+0046 "F" */
    0xeb, 0xa8,

    /* U+0047 "G" */
    0xf2, 0x5b, 0x78,

    /* U+0048 "H" */
    0xb6, 0xfb, 0x68,

    /* U+0049 "I" */
    0xfe,

    /* U+004A "J" */
    0x64, 0xdb, 0x78,

    /* U+004B "K" */
    0xb7, 0xef, 0xe8,

    /* U+004C "L" */
    0xaa, 0xac,

    /* U+004D "M" */
    0x9f, 0xff, 0xfd, 0x90,

    /* U+004E "N" */
    0xbf, 0xff, 0xe8,

    /* U+004F "O" */
    0xf6, 0xdb, 0x78,

    /* U+0050 "P" */
    0xf6, 0xdf, 0x20,

    /* U+0051 "Q" */
    0xf6, 0xdb, 0x7a,

    /* U+0052 "R" */
    0xf6, 0xdf, 0xe8,

    /* U+0053 "S" */
    0xf2, 0x72, 0x78,

    /* U+0054 "T" */
    0xe9, 0x24, 0x90,

    /* U+0055 "U" */
    0xb6, 0xdb, 0x78,

    /* U+0056 "V" */
    0xbf, 0x66, 0x66, 0x60,

    /* U+0057 "W" */
    0xaf, 0xef, 0x9e, 0x79, 0xe5, 0x80,

    /* U+0058 "X" */
    0xf6, 0x66, 0x6e, 0xf0,

    /* U+0059 "Y" */
    0xb6, 0xa4, 0x90,

    /* U+005A "Z" */
    0xed, 0xa5, 0xb8,

    /* U+005B "[" */
    0xff, 0x80,

    /* U+005C "\\" */
    0x89, 0x24, 0x48,

    /* U+005D "]" */
    0xff, 0x80,

    /* U+005E "^" */
    0x30, 0xe4, 0x93,

    /* U+005F "_" */
    0xe0,

    /* U+0060 "`" */
    0x40,

    /* U+0061 "a" */
    0x66, 0x66, 0xef, 0xb0,

    /* U+0062 "b" */
    0xf6, 0xfb, 0x78,

    /* U+0063 "c" */
    0xea, 0xac,

    /* U+0064 "d" */
    0xf6, 0xdb, 0x78,

    /* U+0065 "e" */
    0xeb, 0xac,

    /* U+0066 "f" */
    0xeb, 0xa8,

    /* U+0067 "g" */
    0xf2, 0x5b, 0x78,

    /* U+0068 "h" */
    0xb6, 0xfb, 0x68,

    /* U+0069 "i" */
    0xfe,

    /* U+006A "j" */
    0x64, 0xdb, 0x78,

    /* U+006B "k" */
    0xb7, 0xef, 0xe8,

    /* U+006C "l" */
    0xaa, 0xac,

    /* U+006D "m" */
    0x9f, 0xff, 0xfd, 0x90,

    /* U+006E "n" */
    0xbf, 0xff, 0xe8,

    /* U+006F "o" */
    0xf6, 0xdb, 0x78,

    /* U+0070 "p" */
    0xf6, 0xdf, 0x20,

    /* U+0071 "q" */
    0xf6, 0xdb, 0x7a,

    /* U+0072 "r" */
    0xf6, 0xdf, 0xe8,

    /* U+0073 "s" */
    0xf2, 0x72, 0x78,

    /* U+0074 "t" */
    0xe9, 0x24, 0x90,

    /* U+0075 "u" */
    0xb6, 0xdb, 0x78,

    /* U+0076 "v" */
    0xbf, 0x66, 0x66, 0x60,

    /* U+0077 "w" */
    0xaf, 0xef, 0x9e, 0x79, 0xe5, 0x80,

    /* U+0078 "x" */
    0xf6, 0x66, 0x6e, 0xf0,

    /* U+0079 "y" */
    0xb6, 0xa4, 0x90,

    /* U+007A "z" */
    0xed, 0xa5, 0xb8,

    /* U+007B "{" */
    0x69, 0x28, 0x92, 0x60,

    /* U+007C "|" */
    0xff, 0x80,

    /* U+007D "}" */
    0xc9, 0x22, 0x92, 0xc0,

    /* U+007E "~" */
    0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 18, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 29, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 46, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 3, .adv_w = 66, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 101, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 79, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 24, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 22, .adv_w = 40, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 24, .adv_w = 40, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 56, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 28, .adv_w = 71, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 31, .adv_w = 31, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 32, .adv_w = 41, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 33, .adv_w = 31, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 52, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 62, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 42, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 42, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 52, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 65, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 56, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 61, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 55, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 65, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 62, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 31, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 31, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 68, .adv_w = 61, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 70, .adv_w = 61, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 72, .adv_w = 61, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 74, .adv_w = 52, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 80, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 63, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 63, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 51, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 62, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 51, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 51, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 61, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 63, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 30, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 61, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 62, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 49, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 76, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 61, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 63, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 62, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 63, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 128, .adv_w = 63, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 56, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 52, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 63, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 63, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 91, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 61, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 65, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 53, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 29, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 162, .adv_w = 52, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 29, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 167, .adv_w = 101, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 170, .adv_w = 55, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 171, .adv_w = 55, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 172, .adv_w = 63, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 63, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 51, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 62, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 184, .adv_w = 51, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 51, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 61, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 63, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 30, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 61, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 198, .adv_w = 62, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 49, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 76, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 61, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 63, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 62, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 63, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 219, .adv_w = 63, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 56, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 52, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 63, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 231, .adv_w = 63, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 235, .adv_w = 91, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 61, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 65, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 248, .adv_w = 53, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 38, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 255, .adv_w = 30, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 257, .adv_w = 38, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 261, .adv_w = 61, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 3}
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
    0, 0, 0, 0, 0, 0, -1, -1,
    -1, 0, -12, 0, -1, 0, -2, -1,
    0, 0, -12, -1, -1, 0, -9, -1,
    0, 0, 0, 0, 0, 0, -1, 0,
    -12, -1, 0, -1, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, -1, 0, -1, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, -1, 0,
    0, -1, 0, 0, 0, 0, 1, 0,
    0, 0, 0, -1, -7, 0, -5, -3,
    0, -8, 0, 0, 1, 0, 0, -1,
    -7, -5, -3, 0, -8, 0, 0, -19,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, -2, 0, -1, 0, -5, 0, 0,
    0, 0, 0, 0, 0, -3, -10, 0,
    -12, -10, 0, -12, 0, 0, 0, 0,
    0, -3, -10, -12, -10, 0, -12, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    -1, -4, -1, 0, 0, -8, -1, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    -9, 0, -6, -4, -8, -8, -7, 0,
    -4, 0, 0, 0, -9, -6, -4, -8,
    -8, -7, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, -1,
    0, 0, -1, 0, 0, 0, 0, 0,
    0, -1, -1, 0, 0, -4, 0, 1,
    -4, 2, 0, 0, 0, 0, -2, -2,
    0, -1, 0, -3, -1, 0, 0, 0,
    0, 0, 1, -1, -3, 0, -4, -3,
    1, -3, 1, 0, 0, 0, 0, -1,
    -3, -4, -3, 1, -3, 1, 0, 0,
    -4, -4, -3, -4, 0, 0, -2, 0,
    -6, 0, 0, 0, -1, 0, 0, 0,
    -4, 0, 0, 0, -2, 0, 0, 0,
    0, 0, -1, -1, -1, 0, -4, 0,
    0, 0, 0, 0, 0, -1, -1, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -1, -1, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    -1, -1, -1, -4, 0, -1, -2, -1,
    0, -1, 0, -1, 0, -1, 0, -2,
    0, -2, -1, 0, -1, 0, 0, 0,
    0, -3, -3, 0, -3, -2, -1, -5,
    -1, 0, -1, 0, 0, -3, -3, -3,
    -2, -1, -5, -1, -1, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, -2, 0, -1, -1, 0, -1, 0,
    0, 0, 0, -1, -2, 0, -3, -2,
    -1, -3, -1, 0, -1, 0, 0, -1,
    -2, -3, -2, -1, -3, -1, -1, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, -1, 0,
    -1, 0, 0, 0, 0, 0, -4, 0,
    -4, -3, -1, -6, -1, 0, -1, 0,
    0, 0, -4, -4, -3, -1, -6, -1,
    0, 0, -6, -18, -9, -18, -1, -1,
    -2, -1, -11, 0, -1, 0, -3, -1,
    0, -1, -10, -1, -1, 0, -7, -1,
    0, 0, 2, 3, 0, 1, -1, -23,
    -10, -1, 0, -1, 0, 2, 3, 0,
    1, -1, -1, -2, 0, 0, -1, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, -1, 0, -1, 0, 0, 0,
    0, 0, -1, 0, -1, -1, -1, -2,
    -1, 0, -1, 0, 0, 0, -1, -1,
    -1, -1, -2, -1, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, -1, 0, -1, 0, 0, 0,
    0, 0, 0, -1, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -1, -1, 0, -2, 0,
    0, 0, 0, 0, 0, -1, -1, -1,
    0, -12, 0, 0, -4, 0, -1, 0,
    0, 0, -1, -3, -1, -1, -1, -4,
    -1, -1, 2, -1, -1, 0, -1, -4,
    -9, -1, -10, -8, -5, -10, -5, 1,
    2, -1, 0, -4, -9, -10, -8, -5,
    -10, -5, 0, -1, 0, 0, -1, 0,
    0, 0, 0, -1, 0, -1, 0, -1,
    0, -1, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -10, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 1,
    -1, 0, 0, -2, 0, 0, 0, -1,
    0, 0, 1, -1, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -1, -1, -4, -1, 0,
    0, 0, 0, 0, 0, -1, -1, -1,
    0, 0, 0, -1, -4, -1, 0, 0,
    0, 0, -3, 0, 0, 0, -1, 0,
    0, 0, -1, 0, 0, 0, -1, 0,
    0, 0, 0, 1, 0, 0, 0, -2,
    -1, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, -3, -14, -3, -14,
    0, 0, -1, 0, -5, 0, 0, 1,
    -1, 0, 0, 0, -7, 0, 0, 0,
    -3, 0, 1, 0, 1, 1, 0, 1,
    0, -17, -7, 0, 0, 0, 1, 1,
    1, 0, 1, 0, 0, -6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, -1, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, -6, 0, -5, -4,
    0, -7, 0, 0, 0, 0, 0, 0,
    -6, -5, -4, 0, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 1, -1, 0, -7, 0,
    -1, 0, 0, 0, -2, 0, -1, 1,
    -1, -1, 0, 0, -4, -1, -1, 0,
    -1, -1, 0, 0, 1, 1, 0, -2,
    0, 1, -4, -1, 0, -1, 0, 1,
    1, 0, -2, 0, 0, -12, 0, 0,
    -12, 0, 0, 0, 0, 0, -2, -2,
    0, -2, 0, -4, -2, 0, 1, 0,
    0, 0, 0, -3, -9, 0, -10, -9,
    0, -13, 0, -1, 1, 0, 0, -3,
    -9, -10, -9, 0, -13, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -1, -1, -6, -1, 0,
    0, 0, 0, 0, 0, -1, -1, -1,
    0, 0, 0, -12, 0, -12, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, -1, -22,
    -4, 0, 0, 0, 0, 0, 0, -1,
    0, -1, 0, -1, -1, -1, 0, -1,
    0, 0, -1, 0, -1, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, -1, -1, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, -1, 0, -1, 0,
    0, 0, 0, -1, -1, 0, -1, -1,
    -1, -2, -1, -6, -1, 0, 0, -1,
    -1, -1, -1, -1, -2, -1, 0, 0,
    -4, -10, -10, -10, 0, 0, 0, 0,
    -9, 0, 0, 1, -1, 0, 1, 0,
    -9, 0, 0, 0, -5, 0, 1, 0,
    1, 1, -1, 0, 0, -10, -9, 0,
    0, 0, 1, 1, 1, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, -6, -12, -6, -12,
    0, -1, -1, 0, -7, 0, 0, 1,
    -1, 0, 0, 0, -10, 0, 0, 0,
    -4, 0, 1, 0, 1, 2, 1, 1,
    -1, -16, -10, 0, 0, 0, 1, 1,
    2, 1, 1, -1, 1, 0, -4, -10,
    -4, -10, 0, -1, -1, 0, -6, 0,
    0, 1, -1, 0, 0, 0, -8, 0,
    0, 0, -3, 0, 1, 0, 2, 2,
    1, 1, 0, -12, -8, 0, 0, 0,
    1, 2, 2, 1, 1, 0, 0, 0,
    -2, 0, -8, 0, -1, 0, 0, -1,
    -3, 0, -1, 0, -1, -1, 0, -1,
    -5, -1, -1, 0, -1, -2, -1, 0,
    1, 1, 1, 1, 0, 1, -5, -1,
    0, -2, -1, 1, 1, 1, 1, 0,
    0, 0, -6, -12, -8, -12, -1, -1,
    -2, -1, -10, 0, -1, 0, -2, -1,
    0, -1, -10, -1, -1, 0, -6, -1,
    0, 0, 1, 1, 1, 1, -1, -14,
    -10, -1, 0, -1, 0, 1, 1, 1,
    1, -1, 0, 0, -3, -1, -9, -1,
    -1, -1, -1, 0, -5, 0, -1, 0,
    -1, 0, 0, -1, -1, -1, -1, 0,
    -1, -1, 0, 0, 2, 2, 1, 2,
    -1, -3, -1, -1, 0, -1, 0, 2,
    2, 1, 2, -1, 0, 0, 0, 0,
    0, 0, -6, 0, 0, -1, -16, -4,
    -6, -1, -6, -7, 0, 0, 1, -6,
    -6, 0, -5, -5, -10, -6, -14, -12,
    1, -14, 1, 0, 1, -6, 0, -5,
    -10, -14, -12, 1, -15, 1, 0, -12,
    0, 0, -4, 0, -1, 0, 0, 0,
    -1, -3, -1, -1, -1, -4, -1, -1,
    0, -1, -1, 0, -1, -4, -9, -1,
    -10, -8, -5, -10, -5, 1, 2, -1,
    0, -4, -9, -10, -8, -5, -10, -5,
    0, 0, 0, 0, -10, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 1, -1, 0, 0, -2,
    0, 0, 0, -1, 0, 0, 1, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, -1, 0, -1, 0,
    0, 0, 0, 0, -1, 0, -1, -1,
    -1, -2, -1, -6, -1, 0, 0, -1,
    -1, -1, -1, -1, -2, -1, 0, 0,
    -4, -10, -10, -10, 0, 0, 0, 0,
    -9, 0, 0, 1, -1, 0, 1, 0,
    -9, 0, 0, 0, -5, 0, 0, 0,
    1, 1, -1, 0, 0, -10, -9, 0,
    0, 0, 1, 1, 1, -1, 0, 0,
    1, 0, -6, -12, -6, -12, 0, -1,
    -1, 0, -7, 0, 0, 1, -1, 0,
    0, 0, -10, 0, 0, 0, -4, 0,
    1, 0, 0, 2, 1, 1, -1, -16,
    -10, 65, 0, 0, 1, 1, 2, 1,
    1, -1, 1, 0, -4, -10, -4, -10,
    0, -1, -1, 0, -6, 0, 0, 1,
    -1, 0, 0, 0, -8, 0, 0, 0,
    -3, 0, 1, 0, 2, 0, 1, 1,
    0, -12, -8, 0, 0, 0, 1, 2,
    2, 1, 1, 0, 0, 0, -2, 0,
    -8, 0, -1, 0, 0, -1, -3, 0,
    -1, 0, -1, -1, 0, -1, -5, -1,
    -1, 0, -1, -2, -1, 0, 1, 1,
    0, 1, 0, 1, -5, -1, 0, -2,
    -1, 1, 1, 1, 1, 0, 0, 0,
    -6, -12, -8, -12, -1, -1, -2, -1,
    -10, 0, -1, 0, -2, -1, 0, -1,
    -10, -1, -1, 0, -6, -1, 0, 0,
    1, 1, 1, 0, -1, -15, -10, -1,
    0, -1, 0, 1, 1, 1, 1, -1,
    0, 0, -3, -1, -9, -1, -1, -1,
    -1, 0, -5, 0, -1, 0, -1, 0,
    0, -1, -1, -1, -1, 0, -1, -1,
    0, 0, 2, 2, 1, 2, 0, -3,
    -1, -1, 0, -1, 0, 2, 2, 1,
    2, -1
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
    .kern_scale = 16,
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
const lv_font_t AmericanCaptain9 = {
#else
lv_font_t AmericanCaptain9 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 11,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if AMERICANCAPTAIN9*/

