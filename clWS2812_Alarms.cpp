#include "clWS2812_Alarm.h"

clWS2812_Alarm::clWS2812_Alarm(){
    for(int i = 0; i < 2; i++){
        alarm[i].setPixelNumber(i + 70);
        alarm[i].setHue(0);
        alarm[i].setSaturation(0);
        alarm[i].setValue(0);
    } 
    
}

clWS2812_Alarm::~clWS2812_Alarm(){

}
