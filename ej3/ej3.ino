const int readV = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(readV);
  Serial.print(value * 5/1023.0f);
  Serial.println(" V");
  delay(1000);
} 
