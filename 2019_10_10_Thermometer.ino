// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  pinMode(A0, INPUT);
//  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("TEMPERATURE: ");
}

void loop()
{
//  Serial.println(-40 + 0.488155 * (analogRead(A0) - 20));
  lcd.setCursor(13, 0);
  lcd.print((int)(-40 + 0.488155 * (analogRead(A0) - 20)));
  delay(1000); // Wait for 1000 millisecond(s)
}