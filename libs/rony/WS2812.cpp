#include "WS2812.h"

void WS2812::setColor(uint8_t r, uint8_t g, uint8_t b, uint8_t index) {
    setPixelColor(index, Color(r, g, b));
    show();
}