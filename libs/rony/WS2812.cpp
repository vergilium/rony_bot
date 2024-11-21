#include "WS2812.h"

WS2812::WS2812() {
    _strip.begin();
    _strip.show();
}

void WS2812::setColor(uint8_t r, uint8_t g, uint8_t b, uint8_t index) {
    if (index <= RGB_CNT) {
        _strip.setPixelColor(index, _strip.Color(r, g, b));
    }
    _strip.show();
}