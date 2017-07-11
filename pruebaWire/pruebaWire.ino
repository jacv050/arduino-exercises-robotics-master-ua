#include <Wire.h>

void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  Serial.begin(9600);
  Serial.println(Wire.requestFrom(0x68, 3));
  Wire.endTransmission();
}

void loop() {
  // put your main code here, to run repeatedly:

}
