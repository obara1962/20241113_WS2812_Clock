#ifndef CLWS2812_PIXEL_H
#define CLWS2812_PIXEL_H
#include "stdlib.h"
class clWS2812_Pixel
{
private:
    uint16_t hue;
    uint16_t saturation;
    uint16_t value;
    char* segment;
    uint8_t subnumber;
    uint8_t pixelnumber;
public:
    clWS2812_Pixel();
    clWS2812_Pixel(uint8_t pixel);
    clWS2812_Pixel(uint8_t pixel, char* seg, uint8_t sub);
    ~clWS2812_Pixel();

    void setHue(uint16_t val) {hue = val;}
    void setSaturation(uint16_t val) {saturation = val;}
    void setValue(uint16_t val) {value = val;}
    void setPixelNumber(uint8_t val) {pixelnumber = val;}

    char* getSegment() { return(segment);}
    uint8_t getSubnumber() { return(subnumber);}
    uint8_t getPixelNumber() { return(pixelnumber);}
};

#endif