int odczyt = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  odczyt = analogRead(A1);
  Serial.println(odczyt);

}
