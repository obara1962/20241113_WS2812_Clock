#include "clWS2812_DP.h"

clWS2812_DP::clWS2812_DP(){
    for(int i = 0; i < 4; i++){
        dp[i].setPixelNumber(i + 66);
        dp[i].setHue(0);
        dp[i].setSaturation(0);
        dp[i].setValue(0);
    } 
}

clWS2812_DP::~clWS2812_DP(){

}