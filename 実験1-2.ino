void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  analogWrite(3, 227);
  analogWrite(5, 116);
  analogWrite(6, 195);
  delay(1000);
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
  delay(1000);
}
