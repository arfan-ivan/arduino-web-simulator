// Menyalakan LED di pin 13 (biasanya sudah ada LED bawaan di Arduino UNO)

int ledPin = 13; // pin tempat LED terhubung

void setup() {
  pinMode(ledPin, OUTPUT); // atur pin sebagai output
}

void loop() {
  digitalWrite(ledPin, HIGH); // nyalakan LED
  delay(1000);                // tunggu 1 detik
  digitalWrite(ledPin, LOW);  // matikan LED
  delay(1000);                // tunggu 1 detik lagi
}
