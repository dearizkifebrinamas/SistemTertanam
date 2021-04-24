int button = 0;

void setup()
{
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  button = digitalRead(7);
  if(button == HIGH) {
    digitalWrite(8, HIGH);
  	delay(1000);
    digitalWrite(9, HIGH);
  	delay(1000);
    digitalWrite(10, HIGH);
  	delay(1000);
  } 
  else {
  	digitalWrite(8, LOW);
  	delay(400);
    digitalWrite(9, LOW);
  	delay(400);
    digitalWrite(10, LOW);
  	delay(400);
  }
  
}
