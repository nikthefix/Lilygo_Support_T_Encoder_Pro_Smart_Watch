nikthefix 18.06.2024

This is the Squareline Studio Smart Watch Demo implemented for the Lilygo T-Encoder-Pro.
At present the encoder dial and buzzer have not been assigned a function.


Dependencies:

ESP32_Arduino boards package version 3.0.1
LVGL 8.3.11

Notes:

This build uses a lean SH8601 display driver rather than the Arduino_GFX framework used in the Lilygo supplied examples.
The driver files are supplied in the sketch directory so no installation is required.
The touch driver is also included in the sketch directory so no installation is required.

Please set in lv_conf.h:  --->   #define LV_COLOR_16_SWAP 1

Set display brightness @ line 127

Build options:

Select board ESP32S3 Dev Module
Select USB CDC On Boot "Enabled"
Select Flash Size 16M
Select Partition Scheme "Huge App"
Select PSRAM "OPI PSRAM"

Todo:

Refactor to make compatible with LVGL 9.1 (proving problematic at last attempt)
