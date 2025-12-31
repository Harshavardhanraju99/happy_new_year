#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();

  // -------- Countdown 5 to 1 --------
  for (int i = 5; i >= 1; i--) {
    display.clearDisplay();
    display.setTextSize(3);            // Clear & readable
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(56, 18);         // Proper center
    display.print(i);
    display.display();
    delay(1000);
  }

  // -------- HAPPY NEW YEAR 2026 --------
  display.clearDisplay();

  display.setTextSize(2);
  display.setCursor(5, 5);
  display.println("HAPPY");

  display.setCursor(10, 25);
  display.println("NEW YEAR");

  display.setTextSize(1);
  display.setCursor(45, 50);
  display.println("2026");

  display.display();

  delay(10000);   // Show for 5 seconds
  display.clearDisplay();
  display.display();
}

void loop() {
  // empty
}
