int odczyt = 0;
const int dioda = 8;
const int czujnik = 6;


void setup() {
  Serial.begin(9600);
  pinMode(dioda, HIGH);
}

void loop() {
  //odczyt
  odczyt = digitalRead(czujnik);
  sterowanieLampa(odczyt);
  delay(100);
}


void sterowanieLampa(int odczyt) {
  /* jeśli odczyt jest mniejszy od 300 dioda się zaświeca (jeśli fotorezystor się zakryje) */                                                    
  if (odczyt == HIGH) {
    digitalWrite(dioda, HIGH);
    wyswietl("ruszam się");
  } else {
    digitalWrite(dioda, LOW);
    wyswietl("nie ruszam się");
  }
}


void wyswietl(String tekst) {
  Serial.println(tekst);
}

