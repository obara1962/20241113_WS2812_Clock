
#include "clWS2812_Digit.h"

clWS2812_Digit::clWS2812_Digit(){

}

clWS2812_Digit::clWS2812_Digit(uint8_t digitnum){
    for(uint8_t i = 6; i >= 0; i--){
        segments[i] = clWS2812_Segment(i , 43 - (digitnum * 14) + i * 2);
    }
}

clWS2812_Digit::~clWS2812_Digit(){

}

void clWS2812_Digit::setSegmentDefault(uint8_t numsegment, uint8_t startled){
    segments[numsegment].setSegmentDefault(startled);
}
