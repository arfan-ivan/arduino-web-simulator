// Kode untuk menghidupkan LED di pin D53 (Arduino Mega)
void setup() {
  pinMode(53, OUTPUT);  // Set pin 53 sebagai output
}

void loop() {
  digitalWrite(53, HIGH); // Nyalakan LED
  delay(1000);            // Tunggu 1 detik
  digitalWrite(53, LOW);  // Matikan LED
  delay(1000);            // Tunggu 1 detik
}
