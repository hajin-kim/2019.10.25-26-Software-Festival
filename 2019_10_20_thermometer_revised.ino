#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 2      // DATA pin: 2
#define DHTTYPE DHT11 // DHT11

LiquidCrystal_I2C lcd(0x27, 16, 2); // 0x3F or 0x27
DHT dht(DHTPIN, DHTTYPE);

void setup()
{
//  Serial.begin(9600);
  dht.begin();
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("TEMPERATURE");
}

void loop()
{
//  Serial.println(dht.readTemperature());
  lcd.setCursor(12, 0);
  lcd.print(dht.readTemperature());
  delay(1000); // Wait for 1000 millisecond(s)
}
