/* FOR CYD Resistive touch 2.4"*/
#define ILI9341_DRIVER    

#define TFT_WIDTH  240
#define TFT_HEIGHT 320  

#define TFT_RGB_ORDER TFT_RGB //red green blue

// TFT display pins
#define TFT_BL   27            // LED back-light control pin
#define TFT_BACKLIGHT_ON HIGH  // Level to turn ON back-light (HIGH or LOW)
//screen
#define TFT_MOSI 13 // In some display driver board, it might be written as "SDA" and so on.
#define TFT_MISO 12
#define TFT_SCLK 14
#define TFT_CS   15  // Chip select control pin
#define TFT_DC   2  // Data Command control pin
#define TFT_RST  -1  // Reset pin (could connect to Arduino RESET pin)

// Touch 2.4"
#define TOUCH_CS 33
#define TOUCH_IRQ 36
#define TOUCH_MOSI 13
#define TOUCH_MISO 12
#define TOUCH_CLK 14

//#define SPI_TOUCH_XPT2046

#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:-.
#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.

#define SPI_FREQUENCY  27000000
// Optional reduced SPI frequency for reading TFT
#define SPI_READ_FREQUENCY  16000000  // 16 MHz is stable for most setups
// The XPT2046 requires a lower SPI clock rate of 2.5MHz so we define that here:
 #define SPI_TOUCH_FREQUENCY  2500000  //2500000