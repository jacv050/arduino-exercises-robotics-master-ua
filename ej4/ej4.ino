const int readV = A0;
const int base = 818;
const int LED = 13;
const int u = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(readV);
  if(value < base-u)
    digitalWrite(LED, HIGH);
  else if(value > base+u)
    digitalWrite(LED, LOW);
    
  Serial.print(value);
  Serial.println(" V");
  delay(1000);
} 
