#include "clWS2812_Display.h"


clWS2812_Display::clWS2812_Display()
{
    for(uint8_t i = 0; i < 4; i++){
        digits[i] = clWS2812_Digit(i);
    }
}

clWS2812_Display::~clWS2812_Display()
{
}
