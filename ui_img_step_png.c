// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: Smartwatch

#include "ui.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

// IMAGE DATA: assets/step.png
const LV_ATTRIBUTE_MEM_ALIGN uint8_t ui_img_step_png_data[] = {
    0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x12,0xE8,0xE3,0x0E,0xE8,0xE3,0x0A,0xE8,0xE3,0x49,0xE8,0xE3,0x88,0xE8,0xE3,0xBF,0xE8,0xE3,0xE4,0xE8,0xE3,0xF2,0xE8,0xE3,0xE6,0xE8,0xE3,0xC0,0xE8,0xE3,0x84,0xE8,0xE3,0x36,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x7F,0xE8,0xE3,0xF5,0xE8,0xE3,0x7F,0xE8,0xE3,0x3E,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xA2,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x28,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0x85,0xE8,0xE3,0x3F,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0x9C,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x18,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0x93,
    0xE8,0xE3,0x46,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x33,0xE8,0xE3,0xA3,0xE8,0xE3,0x58,0xE8,0xE3,0x27,0xE8,0xE3,0xB4,0xE8,0xE3,0xE5,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xDB,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x07,0xE8,0xE3,0x75,0xE8,0xE3,0xEA,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xC6,0xE8,0xE3,0x27,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x0C,0xE8,0xE3,0x53,0xE8,0xE3,0x7F,
    0xE8,0xE3,0x83,0xE8,0xE3,0x6A,0xE8,0xE3,0x33,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x05,0xE8,0xE3,0x58,0xE8,0xE3,0x8A,0xE8,0xE3,0x91,0xE8,0xE3,0x7B,0xE8,0xE3,0x4D,0xE8,0xE3,0x01,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x61,0xE8,0xE3,0xE2,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xDD,0xE8,0xE3,0x4C,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x18,0xE8,0xE3,0x94,
    0xE8,0xE3,0x75,0xE8,0xE3,0x19,0xE8,0xE3,0xB0,0xE8,0xE3,0xD7,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0x1D,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0xCF,0xE8,0xE3,0xFF,0xE8,0xE3,0xCF,0xE8,0xE3,0x2B,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0x3F,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0xFD,0xE8,0xE3,0xFF,0xE8,0xE3,0xB7,0xE8,0xE3,0x27,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xD7,0xE8,0xE3,0x06,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x53,0xE8,0xE3,0xF0,0xE8,0xE3,0xB8,0xE8,0xE3,0x25,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,
    0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xFF,0xE8,0xE3,0xC6,0xE8,0xE3,0x19,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x0F,0xE8,0xE3,0x1A,0xE8,0xE3,0x05,0xE8,0xE3,0x42,0xE8,0xE3,0x80,0xE8,0xE3,0xB9,0xE8,0xE3,0xDC,0xE8,0xE3,0xEC,0xE8,0xE3,0xE7,0xE8,0xE3,0xCC,0xE8,0xE3,0x99,0xE8,0xE3,0x50,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,0xE8,0xE3,0x00,
};
const lv_img_dsc_t ui_img_step_png = {
    .header.always_zero = 0,
    .header.w = 19,
    .header.h = 15,
    .data_size = sizeof(ui_img_step_png_data),
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = ui_img_step_png_data
};

