#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D2, D3, D4, D5, D6, D7); // RS, E, DB4-DB7

int main()
{
      lcd.printf("HELLO\n");
      /*
      for (char x = 0x00; x <= 0x09; x++)
      { // display numbers 0-9
            lcd.printf("%u", x);
      }*/
      lcd.printf("%u", 0x01);
      lcd.printf("%u", 0x00);
      lcd.printf("%u", 0x08);
      lcd.printf("%u", 0x00);
      lcd.printf("%u", 0x06);
      lcd.printf("%u", 0x01);
      lcd.printf("%u", 0x02);
      lcd.printf("%u", 0x03);
      lcd.printf("%u", 0x00);
}