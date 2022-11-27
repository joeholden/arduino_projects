int Signal = 8;

void setup() {
  pinMode(Signal, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  while (true){
    digitalWrite(Signal, HIGH);
    delay(100);
    digitalWrite(Signal, LOW);
    delay(100);
  }


}
