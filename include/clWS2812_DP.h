#ifndef CLWS2812_DP_H
#define CLWS2812_DP_H
#include "clWS2812_Pixel.h"

class clWS2812_DP{
	private:
		clWS2812_Pixel dp[3];
	public:
		clWS2812_DP();
		~clWS2812_DP();
};
#endif
