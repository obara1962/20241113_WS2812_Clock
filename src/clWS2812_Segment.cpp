#include "clWS2812_Segment.h"

clWS2812_Segment::clWS2812_Segment(){
    for(int i = 0; i < 2; i++){
        pixels[i].setPixelNumber(UINT8_MAX);
        pixels[i].setHue(0);
        pixels[i].setSaturation(0);
        pixels[i].setValue(0);
    }    
}

clWS2812_Segment::clWS2812_Segment(char namesegment, uint8_t startled)
{
    segmentname = namesegment;
    setSegmentDefault(startled);
}

clWS2812_Segment::~clWS2812_Segment(){

}

void clWS2812_Segment::setSegmentDefault(uint8_t startnum){
    for(uint8_t i = 0; i < 2; i++){
        pixels[i].setPixelNumber(i + startnum);
    }
}
