#include <OLED_SSD1306_I2C.h>

SSD1306_I2C oled;

const unsigned char Triangle[8] = {0x00,0x00,0xFF,0xFF,0x7E,0x3C,0x18,0x00};

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
  oled.print("DrawBitMap");
  oled.setCursor(1, 1);
  oled.drawBitmap(Triangle);
}

void loop()
{
}
