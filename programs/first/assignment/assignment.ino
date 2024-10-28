void setup() {
  pinMode(13, OUTPUT);
}

void loop() {

  // I can perceive that the LED is blinking.
  digitalWrite(13, HIGH);
  delay(12);
  digitalWrite(13, LOW);
  delay(12);
}
