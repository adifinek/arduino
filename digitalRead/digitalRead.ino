const int ledpin = 13;
const int inpin = 7;
void setup ()
{
  pinMode(ledpin, OUTPUT);
  pinMode(inpin, INPUT);
  Serial.begin(9600);
}

void loop ()
{
  int val = digitalRead(inpin);
  //val to nazwa zmiennej
  digitalWrite(ledpin, val);
  Serial.println(val);
}

