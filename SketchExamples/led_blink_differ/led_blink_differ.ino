void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  Serial.println("LED ON/OFF");
}

void loop() {
  Serial.println("LED is ON");
  digitalWrite(13, HIGH);
  delay(2000);
  Serial.println("LED is OFF");
  digitalWrite(13, LOW);
  delay(1000);
}
