void setup() {
  pinMode(13, OUTPUT);  // ✅ Harus ada ini
}

void loop() {
  digitalWrite(13, HIGH);  // ✅ Nyalakan LED
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}