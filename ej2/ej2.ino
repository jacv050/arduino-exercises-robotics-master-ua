const int sensorTemp = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(sensorTemp);
  float millivolts = (value / 1023.0) * 5000;
  float celsius = millivolts / 10; 
  float farenheit = (celsius * 9.0 / 5.0) + 32.0;
  Serial.print(celsius);
  Serial.println(" C");
  Serial.print(farenheit);
  Serial.println(" F");
  delay(1000);
} 
