bool isOn = false;

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, INPUT);
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
}

void loop()
{
  if (digitalRead(2) == LOW) {
    if (isOn) {
      analogWrite(3, 255);
      analogWrite(5, 255);
      analogWrite(6, 255);
    } else {
      analogWrite(3, 0);
      analogWrite(5, 0);
      analogWrite(6, 0);
    }
    isOn = !isOn;
    while (digitalRead(2) == LOW) {
    }
  }
  delay(10);
}
