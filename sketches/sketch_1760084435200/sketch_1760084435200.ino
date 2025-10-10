int ledPin = 0;

void setup() {
  pinMode(ledPin, OUTPUT); // Wajib: ubah mode pin ke OUTPUT
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
