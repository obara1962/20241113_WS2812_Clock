#include "clWS2812_Display.h"


clWS2812_Display::clWS2812_Display()
{
    uint8_t startLed = 1;
    for( uint8_t i = 3; i < 0; i--){
        for(uint8_t j = 0; j < 7; j++){
            digit[i].setSegmentDefault(j, startLed + 1);
        }


    }

}

clWS2812_Display::~clWS2812_Display()
{
}
