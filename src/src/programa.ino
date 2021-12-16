#include <Wire.h>  //invoking I2Clibraries coming with Arduino
#include <LiquidCrystal_I2C.h>

#define pinCurrentSensor A0
#define pinVoltageSensing A1

LiquidCrystal_I2C lcd(0x27,16,2); 

float temp, voltage;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
    lcd.begin();
    delay(100);
    lcd.backlight();
    Wire.begin();  //initializing I2C
    lcd.clear(); //clear screen
    delay(200);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  float current = analogRead(pinCurrentSensor);
  float v = analogRead(pinVoltageSensing);
  
  temp=current;
  temp=temp-512;
  current=temp/13.6;
  current = current + 6;

  temp = v;
  voltage = (temp*15.2)/1024.0; // 1024 on Analog pin is 14 volts - Full charged battery  
  
  //lcd.clear(); //clear screen
  // print out the value you read:
  
  delay(100);
  Serial.print("voltage=");
  Serial.print(voltage);
  Serial.print(", "); //Comma separated values on serial port
  lcd.setCursor(2,0);
    lcd.print("V=");
    lcd.print(voltage);
    lcd.print(" V        ");
  Serial.print("current=");
  Serial.print(current);
  Serial.println("A");
  lcd.setCursor(0,1);
    lcd.print("Current=");
    lcd.setCursor(8,1);
    lcd.print(current);
    lcd.print(" A          ");
  delay(300);        // delay in between reads for stability
}
