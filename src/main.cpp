#include <Arduino.h>
#include <M5Stack.h>

void setup() {
  M5.begin();
  M5.Lcd.setTextSize(2);
  M5.Lcd.setTextColor(WHITE);
  M5.Lcd.setCursor(10, 10);
  M5.Lcd.println("Hello, M5Stack!");

  Serial.begin(115200);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  Serial.println("Hello, M5Stack via Serial!");
}

void loop() {
  // put your main code here, to run repeatedly:
}

