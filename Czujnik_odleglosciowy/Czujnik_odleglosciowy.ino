#define trigPin 12
#define echoPin 11
#define piszczek 2
long czas, dystans;


void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(piszczek, OUTPUT);
}

void loop() {
  odczytajOdleglosc();
  piszczWzakresie(10, 20);
  delay(500);
}

void odczytajOdleglosc() {
  // Uruchomienie odczytu
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  //Odczyt długości impulsu
  czas = pulseIn(echoPin, HIGH);
  //przeliczenie długości impulsu na centymetry(zgodnie z wzorem z dokumentacji czujnika
  dystans = czas / 58;
  Serial.print(dystans);
  Serial.println("cm");

}

void piszczWzakresie(int odleglosc, int odleglosc2) {
  if (dystans >= odleglosc && dystans <= odleglosc2) {
  digitalWrite(piszczek, HIGH);
  } else {
   digitalWrite(piszczek, LOW);
  }
}

