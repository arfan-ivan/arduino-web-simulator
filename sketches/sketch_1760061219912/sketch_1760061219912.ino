void setup() {
  pinMode(0, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); // LED ON
  delay(500);            // Tunggu 0.5 detik
  digitalWrite(13, LOW);  // LED OFF
  delay(500);
}
