// Tombol pada pin 2, LED pada pin 13
void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop() {
  int state = digitalRead(2);
  digitalWrite(13, state == LOW ? HIGH : LOW);
}
