#ifndef CLWS2812_SEGMENT_H
#define CLWS2812_SEGMENT_H
#include "clWS2812_Pixel.h"

class clWS2812_Segment{
	private:
		clWS2812_Pixel pixels[2];
		char segmentname;
	public:
		void setSegmentName(char value) { segmentname = value;}
		char getSegmentName() { return segmentname;}

		clWS2812_Segment();
		clWS2812_Segment(char namesegment, uint8_t startled);
		~clWS2812_Segment();

		void setSegmentDefault(uint8_t startnum);
};
#endif