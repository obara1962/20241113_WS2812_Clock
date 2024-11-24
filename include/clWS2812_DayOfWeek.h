#ifndef CLWS2812_DAYOFWEEK_H
#define CLWS2812_DAYOFWEEK_H
#include "clWS2812_Pixel.h"

class clWS2812_DayOfWeek{
	private:
		clWS2812_Pixel dayofweek[7];
		uint8_t currday;
	public:
		clWS2812_DayOfWeek();
		~clWS2812_DayOfWeek();
		void SetNewDayOfWeek(uint8_t newday);
};
#endif
