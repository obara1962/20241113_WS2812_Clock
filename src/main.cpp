#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_NeoPixel.h>

#include "clWS2812_Display.h"

#define led LED_BUILTIN
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


#define WS2812_PIN 26
#define WS2812_NUM_LED 71

Adafruit_NeoPixel WS2812_Strip(WS2812_NUM_LED, WS2812_PIN, NEO_RGB + NEO_KHZ800);

clWS2812_Display clws2812_display;

void ssd1306_text(const char* outtxt, bool needclear){
  if(needclear) display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 10);
  display.println(outtxt);
  display.display();  
}

void setup() {
  Serial.begin(115200);
  if (setCpuFrequencyMhz(240)) {
    Serial.println("Success set 240Mhz");
  }
    else{
Serial.println("Success set 240Mhz");
    }

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }
  display.display();
  delay(2000); // Pause for 2 seconds

  display.clearDisplay();
  // display.setFont(ArialMT_Plain_10);
  ssd1306_text("Hello!", false);
  
  WS2812_Strip.begin();
  WS2812_Strip.clear();
  WS2812_Strip.show();
  delay(2000);
  for( int i = 0; i < WS2812_NUM_LED; i++){
    switch (i % 3){
      case 0: {WS2812_Strip.setPixelColor(i, WS2812_Strip.Color(0xFF, 0x00, 0x00)); break;}
      case 1: {WS2812_Strip.setPixelColor(i, WS2812_Strip.Color(0x00, 0xFF, 0xff)); break;}
      default:  {WS2812_Strip.setPixelColor(i, WS2812_Strip.Color(0x00, 0xFF, 0x00));}
    }
  }
  
  WS2812_Strip.show();


}

void loop() {

}
