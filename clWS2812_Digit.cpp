
#include "clWS2812_Digit.h"

clWS2812_Digit::clWS2812_Digit(){
    
}

clWS2812_Digit::~clWS2812_Digit(){

}

void clWS2812_Digit::setSegmentDefault(uint8_t numsegment, uint8_t startled){
    segments[numsegment].setSegmentDefault(startled);
}
