int brightness = 0;
int value = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  value = analogRead(A0);
  Serial.println(value);
  brightness = constrain(map(value, 770, 950, 255, 0), 0, 255);
  analogWrite(3, brightness);
  analogWrite(5, brightness);
  analogWrite(6, brightness);
  delay(10);
}
