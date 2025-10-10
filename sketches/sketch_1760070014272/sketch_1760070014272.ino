// Nyalakan LED di pin D0 dan GND
void setup() {
  pinMode(0, OUTPUT);  // Set pin D0 sebagai output
}

void loop() {
  digitalWrite(0, HIGH); // LED ON
  delay(1000);           // tunggu 1 detik
  digitalWrite(0, LOW);  // LED OFF
  delay(1000);           // tunggu 1 detik
}
