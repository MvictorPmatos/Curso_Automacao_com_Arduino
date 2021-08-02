void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(9, analogRead(A1)/4);
Serial.println(analogRead(A1));
}
