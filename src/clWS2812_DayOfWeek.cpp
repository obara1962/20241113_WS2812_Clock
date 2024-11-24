#include "clWS2812_DayOfWeek.h"

clWS2812_DayOfWeek::clWS2812_DayOfWeek(){
    for(int i = 0; i < 7; i++){
        dayofweek[i].setPixelNumber(i + 57);
        dayofweek[i].setHue(0);
        dayofweek[i].setSaturation(0);
        dayofweek[i].setValue(0);
    } 
    currday = 0; 
}

clWS2812_DayOfWeek::~clWS2812_DayOfWeek(){

}

void clWS2812_DayOfWeek::SetNewDayOfWeek(uint8_t newday){
    dayofweek[currday].setHue(0);
    dayofweek[currday].setSaturation(0);
    dayofweek[currday].setValue(0);
    currday = newday;
}