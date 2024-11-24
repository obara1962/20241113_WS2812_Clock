#include "clWS2812_Separator.h"

clWS2812_Separator::clWS2812_Separator(){
    for(int i = 0; i < 2; i++){
        separator[i].setPixelNumber(i + 64);
        separator[i].setHue(0);
        separator[i].setSaturation(0);
        separator[i].setValue(0);
    } 
    
}

clWS2812_Separator::~clWS2812_Separator(){

}
