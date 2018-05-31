#include <OLED_SSD1306_I2C.h>

SSD1306_I2C oled;

#define RES 12
//DC -> GND
//CS -> GND

void setup()
{
  Wire.begin();
  pinMode(RES, OUTPUT);
  digitalWrite(RES, HIGH);
  oled.init(0x3C);//OLED I2C Address:0x3C
  oled.setCursor(1, 0);
  oled.print("OLED TEST");
}

void loop()
{
  for (uint8_t i = 0; i < 255; i++)
  {
    oled.setBrightness(i);
    delay(10);
  }
  for (uint8_t i = 255; i > 0; i--)
  {
    oled.setBrightness(i);
    delay(10);
  }
}
