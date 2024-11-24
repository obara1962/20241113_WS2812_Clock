#include "clWS2812_Pixel.h"

clWS2812_Pixel::clWS2812_Pixel()
{
    segment = NULL;
    subnumber = UINT8_MAX;
    pixelnumber = UINT8_MAX;
}

clWS2812_Pixel::clWS2812_Pixel(uint8_t pixel) : pixelnumber(pixel)
{
    segment = NULL;
    subnumber = UINT8_MAX;
    // pixelnumber = pixel;
}

clWS2812_Pixel::clWS2812_Pixel(uint8_t pixel, char* seg, uint8_t sub)
{
    segment = seg;
    pixelnumber = pixel;
    subnumber = sub;
}

clWS2812_Pixel::~clWS2812_Pixel()
{
}
