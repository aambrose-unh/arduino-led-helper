
#include <Adafruit_NeoPixel.h>

#define PIN 2

#define NUMPIXELS 100

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 100;
void setup() {
  pixels.begin();
  drawThing();
}

void loop() {
  
}

void drawPixels(int min, int max, uint32_t color) {
    for(int i=min; i<=max;i++)
        pixels.setPixelColor(i, color);
}

void drawThing(){
  pixels.setPixelColor(0, pixels.Color(0, 0, 0));
  pixels.setPixelColor(1, pixels.Color(0, 0, 0));
  pixels.setPixelColor(2, pixels.Color(0, 0, 0));
  pixels.setPixelColor(3, pixels.Color(0, 255, 0));
  pixels.setPixelColor(4, pixels.Color(0, 0, 0));
  pixels.setPixelColor(5, pixels.Color(0, 0, 0));
  pixels.setPixelColor(6, pixels.Color(0, 0, 0));
  pixels.setPixelColor(7, pixels.Color(0, 0, 0));
  pixels.setPixelColor(8, pixels.Color(0, 0, 0));
  pixels.setPixelColor(9, pixels.Color(0, 0, 0));
  pixels.setPixelColor(10, pixels.Color(0, 0, 0));
  pixels.setPixelColor(11, pixels.Color(0, 0, 0));
  pixels.setPixelColor(12, pixels.Color(0, 0, 0));
  pixels.setPixelColor(13, pixels.Color(0, 0, 0));
  pixels.setPixelColor(14, pixels.Color(0, 0, 0));
  pixels.setPixelColor(15, pixels.Color(0, 0, 0));
  pixels.setPixelColor(16, pixels.Color(0, 0, 0));
  pixels.setPixelColor(17, pixels.Color(0, 0, 0));
  pixels.setPixelColor(18, pixels.Color(0, 0, 0));
  pixels.setPixelColor(19, pixels.Color(0, 0, 0));
  pixels.setPixelColor(39, pixels.Color(0, 0, 0));
  pixels.setPixelColor(38, pixels.Color(0, 0, 0));
  pixels.setPixelColor(37, pixels.Color(255, 0, 0));
  pixels.setPixelColor(36, pixels.Color(0, 255, 0));
  pixels.setPixelColor(35, pixels.Color(0, 0, 255));
  pixels.setPixelColor(34, pixels.Color(0, 0, 0));
  pixels.setPixelColor(33, pixels.Color(0, 0, 0));
  pixels.setPixelColor(32, pixels.Color(0, 0, 0));
  pixels.setPixelColor(31, pixels.Color(0, 0, 0));
  pixels.setPixelColor(30, pixels.Color(0, 0, 0));
  pixels.setPixelColor(29, pixels.Color(0, 0, 0));
  pixels.setPixelColor(28, pixels.Color(0, 0, 0));
  pixels.setPixelColor(27, pixels.Color(0, 0, 0));
  pixels.setPixelColor(26, pixels.Color(0, 0, 0));
  pixels.setPixelColor(25, pixels.Color(0, 0, 0));
  pixels.setPixelColor(24, pixels.Color(0, 0, 0));
  pixels.setPixelColor(23, pixels.Color(0, 0, 0));
  pixels.setPixelColor(22, pixels.Color(0, 0, 0));
  pixels.setPixelColor(21, pixels.Color(0, 0, 0));
  pixels.setPixelColor(20, pixels.Color(0, 0, 0));
  pixels.setPixelColor(40, pixels.Color(0, 0, 0));
  pixels.setPixelColor(41, pixels.Color(0, 0, 255));
  pixels.setPixelColor(42, pixels.Color(0, 255, 0));
  pixels.setPixelColor(43, pixels.Color(255, 0, 0));
  pixels.setPixelColor(44, pixels.Color(0, 255, 0));
  pixels.setPixelColor(45, pixels.Color(0, 255, 0));
  pixels.setPixelColor(46, pixels.Color(0, 0, 0));
  pixels.setPixelColor(47, pixels.Color(0, 0, 0));
  pixels.setPixelColor(48, pixels.Color(0, 0, 0));
  pixels.setPixelColor(49, pixels.Color(0, 0, 0));
  pixels.setPixelColor(50, pixels.Color(0, 0, 0));
  pixels.setPixelColor(51, pixels.Color(0, 0, 0));
  pixels.setPixelColor(52, pixels.Color(0, 0, 0));
  pixels.setPixelColor(53, pixels.Color(0, 0, 0));
  pixels.setPixelColor(54, pixels.Color(0, 0, 0));
  pixels.setPixelColor(55, pixels.Color(0, 0, 0));
  pixels.setPixelColor(56, pixels.Color(0, 0, 0));
  pixels.setPixelColor(57, pixels.Color(0, 0, 0));
  pixels.setPixelColor(58, pixels.Color(0, 0, 0));
  pixels.setPixelColor(59, pixels.Color(0, 0, 0));
  pixels.setPixelColor(79, pixels.Color(0, 255, 0));
  pixels.setPixelColor(78, pixels.Color(0, 255, 0));
  pixels.setPixelColor(77, pixels.Color(255, 255, 0));
  pixels.setPixelColor(76, pixels.Color(0, 255, 0));
  pixels.setPixelColor(75, pixels.Color(0, 0, 255));
  pixels.setPixelColor(74, pixels.Color(0, 255, 0));
  pixels.setPixelColor(73, pixels.Color(255, 0, 0));
  pixels.setPixelColor(72, pixels.Color(0, 0, 0));
  pixels.setPixelColor(71, pixels.Color(0, 0, 0));
  pixels.setPixelColor(70, pixels.Color(0, 0, 0));
  pixels.setPixelColor(69, pixels.Color(0, 0, 0));
  pixels.setPixelColor(68, pixels.Color(0, 0, 0));
  pixels.setPixelColor(67, pixels.Color(0, 0, 0));
  pixels.setPixelColor(66, pixels.Color(0, 0, 0));
  pixels.setPixelColor(65, pixels.Color(0, 0, 0));
  pixels.setPixelColor(64, pixels.Color(0, 0, 0));
  pixels.setPixelColor(63, pixels.Color(0, 0, 0));
  pixels.setPixelColor(62, pixels.Color(0, 0, 0));
  pixels.setPixelColor(61, pixels.Color(0, 0, 0));
  pixels.setPixelColor(60, pixels.Color(0, 0, 0));
  pixels.setPixelColor(80, pixels.Color(0, 0, 0));
  pixels.setPixelColor(81, pixels.Color(0, 0, 0));
  pixels.setPixelColor(82, pixels.Color(0, 0, 0));
  pixels.setPixelColor(83, pixels.Color(150, 75, 0));
  pixels.setPixelColor(84, pixels.Color(0, 0, 0));
  pixels.setPixelColor(85, pixels.Color(0, 0, 0));
  pixels.setPixelColor(86, pixels.Color(0, 0, 0));
  pixels.setPixelColor(87, pixels.Color(0, 0, 0));
  pixels.setPixelColor(88, pixels.Color(0, 0, 0));
  pixels.setPixelColor(89, pixels.Color(0, 0, 0));
  pixels.setPixelColor(90, pixels.Color(0, 0, 0));
  pixels.setPixelColor(91, pixels.Color(0, 0, 0));
  pixels.setPixelColor(92, pixels.Color(0, 0, 0));
  pixels.setPixelColor(93, pixels.Color(0, 0, 0));
  pixels.setPixelColor(94, pixels.Color(0, 0, 0));
  pixels.setPixelColor(95, pixels.Color(0, 0, 0));
  pixels.setPixelColor(96, pixels.Color(0, 0, 0));
  pixels.setPixelColor(97, pixels.Color(0, 0, 0));
  pixels.setPixelColor(98, pixels.Color(0, 0, 0));
  pixels.setPixelColor(99, pixels.Color(0, 0, 0));
  
  pixels.show();
}
        