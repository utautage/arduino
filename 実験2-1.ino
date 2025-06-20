void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  if (digitalRead(2) == LOW) {
    analogWrite(3, 255);
    analogWrite(5, 255);
    analogWrite(6, 255);
  } else {
    analogWrite(3, 0);
    analogWrite(5, 0);
    analogWrite(6, 0);
  }
  delay(10);
}
