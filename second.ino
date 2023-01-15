int myLedPin=13;
int myDelayValue =700;
// the setup function runs once when you press reset or power
//setup function runs once when you press reset or power the board
void setup() {
  // initilaize digital pin LED_BUILTIN as an output ,
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(myDelayValue);
  digitalWrite(ledPin, LOW);
  delay(myDelayValue);
}
