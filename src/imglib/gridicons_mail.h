#if defined(ESP8266) || defined(ESP32)
#include <pgmspace.h>
#else
#include <avr/pgmspace.h>
#endif
// 24 x 24 gridicons_mail
const unsigned char gridicons_mail[] PROGMEM = { /* 0X01,0X01,0XB4,0X00,0X40,0X00, */
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 255, 248,
63, 255, 252, 48, 0, 12, 48, 0, 12, 48, 0, 12, 60,
0, 60, 63, 0, 252, 63, 129, 252, 63, 231, 252, 63,
255, 252, 63, 255, 252, 63, 255, 252, 63, 255, 252,
63, 255, 252, 63, 255, 252, 31, 255, 248, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0
};
