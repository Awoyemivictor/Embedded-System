// Pin where the Led is connected
const int ledPinRed = 8;
const int ledPinYellow = 10;
const int ledPinGreen = 12;

// Timing definitions for Morse code
const int dotDuration = 350; // Duration of a dot (in milliseconds)
const int dashDuration = 350; // Duration of a dash (in milliseconds)
const int symbolPause = 350; // Pause between symbols in a letter
const int letterPause = 800; // Pause between letters

void setup() {
  // Set the LED pin as output
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinYellow, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);
}

void loop() {
  // S: dot, dot, dot
  for (int i = 0; i < 3; i++) {
    blinkDotRed();
  }
  // delay(letterPause);

  // O: dash, dash, dash
  for (int i = 0; i < 3; i++) {
    blinkDashYellow();
  }
  // delay(letterPause);

  // S: dot, dot, dot
  for (int i = 0; i < 3; i++) {
    blinkDotGreen();
  }
  // delay(letterPause);
}

void blinkDotRed() {
  digitalWrite(ledPinRed, HIGH); // Turn on Red LED
  delay(dotDuration); // Wait for dot duration
  digitalWrite(ledPinRed, LOW); // Turn off Red LED
  delay(symbolPause); // Wait between symbols
}

void blinkDashYellow() {
  digitalWrite(ledPinYellow, HIGH); // Turn on Yellow LED
  delay(dashDuration); // Wait for dash duration
  digitalWrite(ledPinYellow, LOW); // Turn off Yellow LED
  delay(symbolPause); // Wait between symbols
}

void blinkDotGreen() {
  digitalWrite(ledPinGreen, HIGH); // Turn on Green LED
  delay(dotDuration); // Wait for dot duration
  digitalWrite(ledPinGreen, LOW); // Turn off Green LED
  delay(symbolPause); // Wait between symbols
}



