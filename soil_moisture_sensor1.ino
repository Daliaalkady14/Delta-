const int moistureSensorPin = A0;

void setup() {
  Serial.begin(9600);
 
}

void loop() {
  int moistureValue = analogRead(moistureSensorPin);
  float moisturePercentage = map(moistureValue, 539,0, 100, 0);

  Serial.print("Moisture: ");
  Serial.print(moisturePercentage);
  Serial.println("%");

  delay(1000);
}
