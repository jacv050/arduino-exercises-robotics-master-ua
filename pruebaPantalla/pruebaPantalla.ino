#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,1);
  lcd.setCursor(0,1);
  lcd.write("Zuri me odia");

}

void loop() {
  // put your main code here, to run repeatedly:

}
