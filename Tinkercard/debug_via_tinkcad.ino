void setup() {
  Serial.begin(9600); // init serial communication
  Serial.println("Hello Arduino");
}

void loop() {
  Serial.println("In a loop");
  delay(500);
}