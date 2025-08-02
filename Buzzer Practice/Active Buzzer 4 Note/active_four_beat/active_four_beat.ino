// A basic arduino script to send a 4 quick tones to a dc buzzer.

// Name variable: 
int tonePin = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(tonePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // 1
  digitalWrite(tonePin, HIGH);
  delay(250);
  digitalWrite(tonePin, LOW);
  delay(250);
  // 2
  digitalWrite(tonePin, HIGH);
  delay(250);
  digitalWrite(tonePin, LOW);
  delay(250);
  // 3
  digitalWrite(tonePin, HIGH);
  delay(250);
  digitalWrite(tonePin, LOW);
  delay(250);
  // 4
  digitalWrite(tonePin, HIGH);
  delay(250);
  digitalWrite(tonePin, LOW);
  delay(250);
  // Pause
  delay(750);
}
