#include <Wire.h>
#include <Adafruit_BMP085.h>

Adafruit_BMP085 bmp;
  
void setup() {
  Serial.begin(9600);
  }

  
void loop() {
   float atm ;
    Serial.print("Temperature = ");
    Serial.print(bmp.readTemperature()+273);
    Serial.println(" K");
    
    Serial.print("Pressure = ");
    atm = bmp.readPressure() ; 
    Serial.print (atm/101325);
    Serial.println(" atm");
    delay (2000);
    Serial.println ();

}
