int button = 0;
void setup()
{
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  button = digitalRead(7);
  if (button == 1) {
  	digitalWrite(8, HIGH);
  }
  else {
    digitalWrite(8, LOW);
  }
  delay(100);
}
