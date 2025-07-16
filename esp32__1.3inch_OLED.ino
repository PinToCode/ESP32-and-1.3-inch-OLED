// ESP32 1.3 inch OLED Display Code
// Uses SH1106 controller with SH110x library
// Install: Adafruit SH110x library

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

Adafruit_SH1106G display = Adafruit_SH1106G(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(115200);
  
  // Initialize display
  if(!display.begin(0x3C)) {
    Serial.println("SH1106 allocation failed");
    for(;;);
  }
  
  // Clear display
  display.clearDisplay();
  
  // Display text
  display.setTextSize(1);
  display.setTextColor(SH110X_WHITE);
  display.setCursor(0,0);
  display.println("Hello ESP32!");
  display.println("1.3 inch OLED");
  display.println("Working!");
  
  // Show on screen
  display.display();
  
  Serial.println("OLED initialized!");
}

void loop() {
  // Update display every 2 seconds
  display.clearDisplay();
  display.setCursor(0,0);
  display.println("Time: " + String(millis()/1000) + "s");
  display.println("ESP32 OLED Test");
  display.display();
  delay(2000);
}