#ifndef CLWS2812_DIGIT_H
#define CLWS2812_DIGIT_H
#include "clWS2812_Segment.h"

class clWS2812_Digit{
	private:
		clWS2812_Segment segments[7];
	public:
		clWS2812_Digit();
		~clWS2812_Digit();
		void setSegmentDefault(uint8_t numsegment, uint8_t startled);
};
#endif
