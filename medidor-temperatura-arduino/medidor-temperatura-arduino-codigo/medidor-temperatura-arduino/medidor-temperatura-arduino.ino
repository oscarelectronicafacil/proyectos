#include <thermistor.h>             
thermistor therm1(A0,0);
//LCD config
#include <Wire.h>                   //Included by Arduino IDE
#include <LiquidCrystal_I2C.h>      //
LiquidCrystal_I2C lcd(0x27,16,2);   //Define LCD address as 0x27. Also try 0x3f if it doesn't work. 

int Thermistor_PIN = A0;
float temperature = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(Thermistor_PIN, INPUT);
  lcd.init();                     //Init the LCD
  lcd.noBacklight();              //Activate backlight   
}

void loop() {
  //Leemos la temperatura del termistor
  temperature = therm1.analog2temp();
  lcd.clear();
  lcd.setCursor(0,0);     
  lcd.print("T: ");
  lcd.print(temperature,1);  
  lcd.setCursor(9,0);
  lcd.print("C");
  delay(3000);
}
