const int czerwonaDioda = 13;
const int niebieskaDioda = 7;


void setup() {
  // tutaj bedzie konfiguracja
  pinMode(czerwonaDioda, OUTPUT);
  pinMode(niebieskaDioda, OUTPUT);
}

void loop() {
  // tu bedzie logika programu

  digitalWrite(czerwonaDioda, HIGH);
  digitalWrite(niebieskaDioda, LOW);
  delay(30);
  digitalWrite(niebieskaDioda, HIGH);
  digitalWrite(czerwonaDioda, LOW);
  delay(30);

}
