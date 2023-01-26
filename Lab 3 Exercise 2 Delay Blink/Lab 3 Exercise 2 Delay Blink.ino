void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);
  digitalWrite(5, LOW);

  delay(1000);

  digitalWrite(2, LOW);
  digitalWrite(5, HIGH);

  delay(5000);
}
