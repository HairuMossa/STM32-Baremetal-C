#include <FastLED.h>

// Define the number of LEDs and the data pin
#define NUM_LEDS 4
#define DATA_PIN 27

// Create a CRGB array to store the color of each LED
CRGB leds[NUM_LEDS];

void setup() {
  // Initialize FastLED library
  FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  // Set each LED to a different color
  leds[0] = CRGB(255,0,255);
  leds[1] = CRGB(255,0,0);
  leds[2] = CRGB(0,255,255);
  leds[3] = CRGB(25,0,55);

  // Show the colors on the LEDs
  FastLED.show();

  // Pause for a short duration
  delay(1000);
}
leds[i]=CRGB(255,0,255);



/*
RGB 
*/