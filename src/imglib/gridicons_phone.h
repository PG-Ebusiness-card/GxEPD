#if defined(ESP8266) || defined(ESP32)
#include <pgmspace.h>
#else
#include <avr/pgmspace.h>
#endif
// 24 x 24 gridicons_phone
const unsigned char gridicons_phone[] PROGMEM = { /* 0X01,0X01,0XB4,0X00,0X40,0X00, */
0, 0, 0, 0, 0, 0, 1, 255, 128, 3, 255, 192, 3, 255,
192, 3, 0, 192, 3, 0, 192, 3, 0, 192, 3, 0, 192, 3, 0,
192, 3, 0, 192, 3, 0, 192, 3, 0, 192, 3, 0, 192, 3, 0,
192, 3, 0, 192, 3, 0, 192, 3, 0, 192, 3, 0, 192, 3,
255, 192, 3, 231, 192, 1, 255, 128, 0, 0, 0, 0, 0, 0
};
