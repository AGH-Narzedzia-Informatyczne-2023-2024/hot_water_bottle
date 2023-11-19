/*
#define STRIP_PIN 2
#define NUMLEDS 100
#include <microLED.h> //dont know how to import lib :(
microLED < NUMLEDS, STRIP_PIN, -1, LED_WS2812, ORDER_GRB > strip;

void setup() {
  strip.setBrightness(60);
}

void loop() {
  static byte counter = 0;
  for (int i = 0; i < NUMLEDS; i++) {
    strip.set(i, mWheel8(counter + i * 255 / NUMLEDS));   // color offset
  }
  counter += 3;
  delay(30);      // 30 fps
}
*/