void setup() {
  // set LED pin to output
  pinMode(13,OUTPUT);
}

void loop() {
 digitalWrite(13,HIGH); //LED on
 delay(1000);
 digitalWrite(13,LOW); //LED off
 delay(1000); // before next iteration
}
