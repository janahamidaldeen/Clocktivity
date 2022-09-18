#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
    lcd.begin(16,2);
    lcd.clear();
    lcd.print("Pick up cake");
    lcd.setCursor(0,1);
    lcd.print("12:00pm");
}

void loop() {
    
}