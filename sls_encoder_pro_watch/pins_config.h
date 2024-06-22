#pragma once

/***********************config*************************/
#define LCD_USB_QSPI_DREVER   1

#define SPI_FREQUENCY         40000000
#define TFT_SPI_MODE          SPI_MODE0
#define TFT_SPI_HOST          SPI2_HOST

#define EXAMPLE_LCD_H_RES     390
#define EXAMPLE_LCD_V_RES     390
#define LVGL_LCD_BUF_SIZE     (EXAMPLE_LCD_H_RES * EXAMPLE_LCD_V_RES)



/***********************config*************************/

#define TFT_WIDTH             390
#define TFT_HEIGHT            390
#define SEND_BUF_SIZE         (0x4000) //(LCD_WIDTH * LCD_HEIGHT + 8) / 10

// DXQ120MYB2416A

#define TFT_QSPI_CS           10
#define TFT_QSPI_SCK          12
#define TFT_QSPI_D0           11
#define TFT_QSPI_D1           13
#define TFT_QSPI_D2           7
#define TFT_QSPI_D3           14
#define TFT_QSPI_RST          4
#define LCD_VCI_EN            3
#define TFT_TE                -1

// BUZZER_DATA
#define BUZZER_DATA 17

// IIC
#define IIC_SDA 5
#define IIC_SCL 6

// TOUCH
#define TOUCH_INT 9
#define TOUCH_RST 8

// Rotary Encoder
#define KNOB_DATA_A 1
#define KNOB_DATA_B 2
#define KNOB_KEY 0


