void setup() {
pinMode(7, OUTPUT);
pinMode(8, INPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(7, HIGH);
int adas = digitalRead(8);
digitalWrite(8, adas);
Serial.println(adas);
}
