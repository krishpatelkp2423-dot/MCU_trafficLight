/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  
*/
int x = 1000;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(3, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(3000);            // wait for a second
  digitalWrite(3, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(1, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(3000);            // wait for a second
  digitalWrite(1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(2, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1500);            // wait for a second
  digitalWrite(2, LOW);   // turn the LED off by making the voltage LOW          // wait for a second
}
