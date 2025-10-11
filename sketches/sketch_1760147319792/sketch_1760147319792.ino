// Pin LED di D13
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT); // Set pin D13 sebagai output
}

void loop() {
  digitalWrite(ledPin, HIGH); // Nyalakan LED
  delay(1000);                // Tunggu 1 detik
  digitalWrite(ledPin, LOW);  // Matikan LED
  delay(1000);                // Tunggu 1 detik
}
