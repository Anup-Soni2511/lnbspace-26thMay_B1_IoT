void setup() {
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2,HIGH);
delay(100);
digitalWrite(2,LOW);
delay(100);
}
