#include <OLED_SSD1306_I2C.h>

SSD1306_I2C oled;

#define RES 12
//DC -> GND
//CS -> GND

void setup()
{
  Wire.begin();
  pinMode(RES,OUTPUT);
  digitalWrite(RES,HIGH);
  oled.init(0x3C);
  oled.setCursor(0, 0);
  oled.print("Normal Display");
}

void loop()
{
  oled.setCursor(0, 2),oled.print("A0:"),oled.print(analogRead(A0)),oled.print("   ");
  oled.setCursor(0, 3),oled.print("A1:"),oled.print(analogRead(A1)),oled.print("   ");
  oled.setCursor(0, 4),oled.print("A2:"),oled.print(analogRead(A2)),oled.print("   ");
  oled.setCursor(0, 5),oled.print("A3:"),oled.print(analogRead(A3)),oled.print("   ");
  oled.setCursor(0, 6),oled.print("A6:"),oled.print(analogRead(A6)),oled.print("   ");
  oled.setCursor(0, 7),oled.print("A7:"),oled.print(analogRead(A7)),oled.print("   ");
}

