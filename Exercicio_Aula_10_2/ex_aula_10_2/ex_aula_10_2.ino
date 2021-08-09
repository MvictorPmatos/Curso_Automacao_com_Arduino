float analog, volt, celsius, fahrenheit, kelvin;
int entradaA = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analog = analogRead(entradaA);
  volt = (5 * analog) / 1023;
  celsius = volt * 10;
  fahrenheit = ((celsius * 9) / 5) + 32;
  kelvin = celsius + 273;

  Serial.print("Temperatura: ");
  Serial.print(celsius);
  Serial.print(" C / ");
  Serial.print(fahrenheit);
  Serial.print(" F / ");
  Serial.print(kelvin);
  Serial.println(" K");


}
