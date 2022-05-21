#include <Adafruit_NeoPixel.h>

#define NUMPIXELS 10
Adafruit_NeoPixel strip1 (NUMPIXELS, 4, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip2 (NUMPIXELS, 3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip3 (NUMPIXELS, 10, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip4 (NUMPIXELS, 12, NEO_GRB + NEO_KHZ800);
void setup() {
 strip1.begin();
 strip1.setBrightness(50);
 strip2.begin();
 strip2.setBrightness(50);
 strip3.begin();
 strip3.setBrightness(50);
 strip4.begin();
 strip4.setBrightness(50);
 }
 void loop() {
  strip1.setBrightness(50);
   strip2.setBrightness(50);
   strip3.setBrightness(50);
   strip4.setBrightness(50);
  
 for (int i = -1; i < 5; i++) {
      strip1.setPixelColor(i, strip1.Color(255, 0, 0));
      strip1.show();
      strip2.setPixelColor(i, strip2.Color(255, 0, 0));
      strip2.show();
      strip3.setPixelColor(i, strip3.Color(255, 0, 0));
      strip3.show();
      strip4.setPixelColor(i, strip4.Color(255, 0, 0));
      strip4.show();
      delay(100);
   }
    for (int i = 5; i < NUMPIXELS; i++) {
      strip1.setPixelColor(i, strip1.Color(0, 0, 255));
      strip1.show();
      strip2.setPixelColor(i, strip2.Color(0, 0, 255));
      strip2.show();
      strip3.setPixelColor(i, strip3.Color(0, 0, 255));
      strip3.show();
      strip4.setPixelColor(i, strip4.Color(0, 0, 255));
      strip4.show();
      delay(100);
   }
   delay(1000);
   strip1.setBrightness(0);
   strip2.setBrightness(0);
   strip3.setBrightness(0);
   strip4.setBrightness(0);
   delay(1000);
 }
