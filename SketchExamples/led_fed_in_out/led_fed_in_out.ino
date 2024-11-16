#define LED_PIN 11
#define PWD_MIN 0
#define PWD_MAX 255

void setup() {
  pinMode(LED_PIN,OUTPUT);
  analogWrite(LED_PIN,PWD_MIN);
}
// not complite
void loop() {
  // fed in
  for(int i = PWD_MIN;i <= PWD_MAX;i++) {
    analogWrite(LED_PIN,i);
    delay(500);
  }
  delay(5000);
  analogWrite(LED_PIN,PWD_MAX);
  // fed out
  for(int i = PWD_MAX;i >= PWD_MIN;i--) {
    analogWrite(LED_PIN,i);
    delay(500);
  }
}
