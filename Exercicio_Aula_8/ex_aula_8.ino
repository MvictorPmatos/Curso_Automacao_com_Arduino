int memoria = 0;

void setup() {
  // put your setup code here, to run once:
  // Botão Liga
  pinMode(2, INPUT_PULLUP);

  // Botão Desliga
  pinMode(4, INPUT_PULLUP);

  // Led de alarme de baixa
  pinMode(13, OUTPUT);

  // Led de alarme de alta
  pinMode(5, OUTPUT);
  
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  // Monitor da saída analógica
  Serial.println(analogRead(A1));

  //Definição de Memória
  if (digitalRead(2) == 0) {
    memoria = 1;
  }

  if (digitalRead(4) == 0) {
    memoria = 0;
  }
  // Inicia o processo
  if (memoria == 1) {
    int entradaA1 = analogRead(A1);
    if (entradaA1 <= 204) {
      digitalWrite(5, 1);
      digitalWrite(13, 1);
      analogWrite(3, 0);
    } else if (entradaA1 >= 812) {
      digitalWrite(5, 0);
      digitalWrite(13, 0);
      analogWrite(3, 0);
    }
    else {
      digitalWrite(5, 1);
      digitalWrite(13, 0);
      analogWrite(3, entradaA1 / 4);
    }
  }
  // Desliga o processo
  else {
    digitalWrite(5, 1);
    digitalWrite(13, 0);
    analogWrite(3, 0);
  }
}
