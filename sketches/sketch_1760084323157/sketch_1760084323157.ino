// Uji LED di pin D0
int ledPin = 0; // Gunakan pin D0

void setup() {
  pinMode(ledPin, OUTPUT); // Atur pin D0 sebagai output
}

void loop() {
  digitalWrite(ledPin, HIGH); // Nyalakan LED
  delay(1000);                // Tunggu 1 detik
  digitalWrite(ledPin, LOW);  // Matikan LED
  delay(1000);                // Tunggu 1 detik
}
