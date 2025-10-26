// Arduino Test Code - Blink + Analog Sensor
// ------------------------------------------
// Cocok untuk simulasi dasar atau uji koneksi di Colab

int ledPin = 13;      // LED internal bawaan Arduino
int sensorPin = A0;   // Input sensor analog (misal potensiometer)
int sensorValue = 0;  // Variabel untuk menyimpan pembacaan sensor

void setup() {
  Serial.begin(9600);    // Mulai komunikasi serial
  pinMode(ledPin, OUTPUT);
  Serial.println("Arduino Test Started");
}

void loop() {
  // Baca nilai sensor analog
  sensorValue = analogRead(sensorPin);

  // Tampilkan ke serial
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);

  // Kedipkan LED
  digitalWrite(ledPin, HIGH);
  delay(250);
  digitalWrite(ledPin, LOW);
  delay(250);
}
