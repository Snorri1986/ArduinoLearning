#define LED_PIN 11
#define PWD_MIN 0
#define PWD_MAX 255

void setup() {
  pinMode(LED_PIN,OUTPUT);
  analogWrite(LED_PIN,PWD_MIN);
}

void loop() {
  for(int i=PWD_MIN,j=PWD_MAX;i<=PWD_MAX,j>=PWD_MIN;i++,j--) 
  {
    analogWrite(LED_PIN,i);
    delay(2000);
    analogWrite(LED_PIN,j);
    delay(2000);
  }
}




