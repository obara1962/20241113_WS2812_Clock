#ifndef CLWS2812_ALARM_H
#define CLWS2812_ALARM_H
#include "clWS2812_Pixel.h"

class clWS2812_Alarm{
	private:
		clWS2812_Pixel alarm[2];
	public:
		clWS2812_Alarm();
		~clWS2812_Alarm();
};
#endif