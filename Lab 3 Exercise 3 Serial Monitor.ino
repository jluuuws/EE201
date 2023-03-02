void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.begin(9600);
  
  if (digitalRead(7) == HIGH){
    Serial.println("Hello World!");
    delay(500);
  }

  if (digitalRead(7) == LOW){
    Serial.println("It's 2023");
    delay(500);
  }
}
