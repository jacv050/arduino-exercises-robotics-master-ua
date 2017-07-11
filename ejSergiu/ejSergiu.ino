int i;
bool go;

void setup() {
  // put your setup code here, to run once:
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  i = 6;
  go = true;
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(i, HIGH);
  delay(100);
  digitalWrite(i, LOW);
  delay(100);
  if(go){//go
    i--;
    if(i == 2)
      go = false;
  }else{//return
    i++;
    if(i == 6)
      go = true;
  }
}
