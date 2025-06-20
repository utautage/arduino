int isPressed = 0;

void setup()
{
  pinMode(0, INPUT);
  pinMode(4, OUTPUT);
  pinMode(1, INPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
  pinMode(6, OUTPUT);
  pinMode(3, INPUT);
  isPressed = 0;
}

void loop()
{
  if (digitalRead(0) == LOW && isPressed == 0) {
    digitalWrite(4, HIGH);
    isPressed = 1;
  }
  if (digitalRead(1) == LOW && isPressed == 0) {
    digitalWrite(5, HIGH);
    isPressed = 1;
  }
  if (digitalRead(2) == LOW && isPressed == 0) {
    digitalWrite(6, HIGH);
    isPressed = 1;
  }
  if (digitalRead(3) == LOW) {
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    isPressed = 0;
  }
  delay(10);
}
