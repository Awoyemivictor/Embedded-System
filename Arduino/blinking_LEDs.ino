int pinRed = 8;
int pinGreen = 10;
int pinYellow = 12;
int blinkTime = 100;
int ledDelayTime = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinRed, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  pinMode(pinYellow, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 0; i < 6; i++) {
    digitalWrite(pinRed, HIGH);
    delay(blinkTime);
    digitalWrite(pinRed, LOW);
    delay(blinkTime);
  }

  delay(ledDelayTime);

  for (int i = 0; i < 11; i++) {
    digitalWrite(pinGreen, HIGH);
    delay(blinkTime);
    digitalWrite(pinGreen, LOW);
    delay(blinkTime);
  }

  delay(ledDelayTime);

  for (int i = 0; i < 16; i++) {
    digitalWrite(pinYellow, HIGH);
    delay(blinkTime);
    digitalWrite(pinYellow, LOW);
    delay(blinkTime);
  }

  delay(ledDelayTime);
 
}
