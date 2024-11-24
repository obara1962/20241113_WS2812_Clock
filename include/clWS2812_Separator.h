#ifndef CLWS2812_SEPARATOR_H
#define CLWS2812_SEPARATOR_H
#include "clWS2812_Pixel.h"

class clWS2812_Separator{
	private:
		clWS2812_Pixel separator[2];
	public:
		clWS2812_Separator();
		~clWS2812_Separator();
};
#endif