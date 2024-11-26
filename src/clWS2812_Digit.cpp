
#include "clWS2812_Digit.h"

clWS2812_Digit::clWS2812_Digit(){

}

clWS2812_Digit::clWS2812_Digit(uint8_t digitnum){
    segments[7] = clWS2812_Segment('G', 43 - (digitnum * 14) + 6 * 2);
    segments[6] = clWS2812_Segment('F', 43 - (digitnum * 14) + 5 * 2);
    segments[5] = clWS2812_Segment('E', 43 - (digitnum * 14) + 4 * 2);
    segments[4] = clWS2812_Segment('D', 43 - (digitnum * 14) + 3 * 2);
    segments[3] = clWS2812_Segment('C', 43 - (digitnum * 14) + 2 * 2);
    segments[1] = clWS2812_Segment('B', 43 - (digitnum * 14) + 1 * 2);
    segments[0] = clWS2812_Segment('A', 43 - (digitnum * 14) + 0 * 2);
}

clWS2812_Digit::~clWS2812_Digit(){

}

void clWS2812_Digit::setSegmentDefault(uint8_t numsegment, uint8_t startled){
    segments[numsegment].setSegmentDefault(startled);
}
