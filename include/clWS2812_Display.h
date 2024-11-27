#ifndef CLWS2812_DISPLAY_H
#define CLWS2812_DISPLAY_H
#include "clWS2812_Digit.h"
#include "clWS2812_DayOfWeek.h"
#include "clWS2812_DP.h"
#include "clWS2812_Separator.h"
#include "clWS2812_Alarm.h"
class clWS2812_Display
{
private:
    clWS2812_Digit digits[4];
    clWS2812_DayOfWeek dayofweek;
    clWS2812_Separator separator;
    clWS2812_DP dp;
    clWS2812_Alarm alarm;

    
public:
    clWS2812_Display();
    ~clWS2812_Display();
};



#endif