/*
nikthefix 18.06.2024

This is the Squareline Studio 1.4.1 Smart Watch Demo implemented for the Lilygo T-Encoder-Pro
At present the encoder dial and buzzer have not been assigned a function.
Tested with Arduino IDE V2.3.2


Dependencies:

ESP32_Arduino boards package version 3.0.1
LVGL 8.3.11

Notes:

This build uses a lean SH8601 display driver rather than the Arduino_GFX framework used in the Lilygo supplied examples.
The driver files are supplied in the sketch directory so no installation is required.
The touch driver is also included in the sketch directory so no installation is required.
I recommend a clean LVGL install via the Arduino library manager.


Please set in lv_conf.h:  --->   #if 1                                  (line 15)
                          --->   #define LV_COLOR_16_SWAP 1             (line 30)
                          --->   #define LV_MEM_CUSTOM 1                (line 49)
                          --->   #define LV_TICK_CUSTOM 1               (line 88)
                          --->   #define LV_FONT_MONTSERRAT_14 1        (line 367)

Set display brightness @ line 123


Build options:

Select board ESP32S3 Dev Module
Select USB CDC On Boot "Enabled"
Select Flash Size 16M
Select Partition Scheme "Huge App"
Select PSRAM "OPI PSRAM"

Todo:

Refactor to make compatible with LVGL 9.1 (proving problematic at last attempt)

*/



#include <Arduino.h>
#include "sh8601.h"
#include "TouchDrvCHSC5816.hpp"
#include "lvgl.h"
#include "SPI.h"
#include "ui.h"
#include "pins_config.h"


TouchDrvCHSC5816 touch;
TouchDrvInterface *pTouch;

void CHSC5816_Initialization(void)
{
    TouchDrvCHSC5816 *pd1 = static_cast<TouchDrvCHSC5816 *>(pTouch);

    touch.setPins(TOUCH_RST, TOUCH_INT);
    if (!touch.begin(Wire, CHSC5816_SLAVE_ADDRESS, IIC_SDA, IIC_SCL))
    {
        Serial.println("Failed to find CHSC5816 - check your wiring!");
        while (1)
        {
            delay(1000);
        }
    }
}



void lv_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);
    lcd_PushColors(area->x1, area->y1, w, h, (uint16_t *)&color_p->full); 
    lv_disp_flush_ready(disp);
}


void my_rounder(lv_disp_drv_t * disp_drv, lv_area_t * area)
{

   area->x1 = area->x1 & 0xFFFE;     // round down the refresh area x-axis start point to next even number - required for this display
   area->x2 = (area->x2 & 0xFFFE)+1; // round down the refresh area x-axis end point to next even number - required for this display

   area->y1 = area->y1 & 0xFFFE;     // round down the refresh area y-axis start point to next even number - required for this display
   area->y2 = (area->y2 & 0xFFFE)+1; // round down the refresh area y-axis end point to next even number - required for this display
}

static void lv_indev_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{
    int16_t Touch_x[2], Touch_y[2];
    uint8_t touchpad = touch.getPoint(Touch_x, Touch_y);

    if (touchpad > 0)
    {
        data->state = LV_INDEV_STATE_PR;

        data->point.x = Touch_x[0];
        data->point.y = Touch_y[0];

        //Serial.printf("X: %d   Y: %d\n", Touch_x[0], Touch_y[0]);
    }
    else
    {
        data->state = LV_INDEV_STATE_REL;
    }
}

void setup()
{

    pinMode(LCD_VCI_EN, OUTPUT);
    digitalWrite(LCD_VCI_EN, HIGH);//enable display hardware

    static lv_disp_draw_buf_t draw_buf;
    static lv_color_t *buf;

    Serial.begin(115200);
    CHSC5816_Initialization();
    sh8601_init();
    //lcd_setRotation(2); // 0-3
    lcd_brightness(200); // 0-255
    lv_init();
    buf = (lv_color_t *)heap_caps_malloc(sizeof(lv_color_t) * LVGL_LCD_BUF_SIZE, MALLOC_CAP_INTERNAL);
    lv_disp_draw_buf_init(&draw_buf, buf, NULL, LVGL_LCD_BUF_SIZE);
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.hor_res = EXAMPLE_LCD_H_RES;
    disp_drv.ver_res = EXAMPLE_LCD_V_RES;
  
    //The rounder callback function is supposed to be required for partial update with this display according to the datasheet but I've found it unecessary so far...
    //Perhaps the datasheet is out of date. Anyway, for the time being I've commented out the function.
    //disp_drv.rounder_cb = my_rounder; 
  
    disp_drv.flush_cb = lv_disp_flush;
    disp_drv.draw_buf = &draw_buf;
  
    //The full_refresh setting is useful for testing if you run into problems with display artifacts caused by partial region updates.
    //It forces LVGL to render a whole screen at a time but is therefore (possibly) much slower than only updating the 'dirty areas' which need redrawing.
    //disp_drv.full_refresh = 1; 
  
    lv_disp_drv_register(&disp_drv);
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = lv_indev_read;
    lv_indev_drv_register(&indev_drv);
        
    ui_init();
    
}

void loop()
{
    lv_timer_handler();
    delay(1);  
}
