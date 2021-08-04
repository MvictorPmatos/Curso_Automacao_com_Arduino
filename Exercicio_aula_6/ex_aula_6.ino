void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);

  pinMode(4, INPUT_PULLUP);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(13, 1-digitalRead(2));
digitalWrite(5, digitalRead(4));
}
