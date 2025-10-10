void setup() {
  pinMode(0, OUTPUT);
}

void loop() {
  digitalWrite(0, HIGH); // LED ON
  delay(500);            // Tunggu 0.5 detik
  digitalWrite(0, LOW);  // LED OFF
  delay(500);
}
