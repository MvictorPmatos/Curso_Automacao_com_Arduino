unsigned long tempo;
int variacao = 0;
int analog = 6;
int second = 1500;
int saida = 50;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  tempo = millis();
  //Serial.println(tempo);
  //delay(1000);

  if (tempo == second) {
    analogWrite(analog, saida);
    Serial.println("Tempo: ");
    Serial.println(tempo);
  } else if (tempo == (2 * second)) {
    analogWrite(analog, (saida * 2));
    Serial.println("Tempo: ");
    Serial.println(tempo);
  } else if (tempo == (3 * second)) {
    analogWrite(analog, (saida * 3));
    Serial.println("Tempo: ");
    Serial.println(tempo);
  } else if (tempo == (4 * second)) {
    analogWrite(analog, (saida * 4));
    Serial.println("Tempo: ");
    Serial.println(tempo);
  } else if (tempo == (5 * second)) {
    analogWrite(analog, (saida * 5));
    Serial.println("Tempo: ");
    Serial.println(tempo);
  }
}
