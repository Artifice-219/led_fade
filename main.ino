// Pin connected to the LED
const int ledPin = 9;

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Variable to store the brightness value
  int brightness;

  // Increase brightness 
  for (brightness = 0; brightness <= 255; brightness++) {
    analogWrite(ledPin, brightness); // Write the PWM value to the LED
    delay(10); // Wait for 10 milliseconds
  }

  // Decrease brightness
  for (brightness = 255; brightness >= 0; brightness--) {
    analogWrite(ledPin, brightness); // Write the PWM value to the LED
    delay(10); // Wait for 10 milliseconds
  }
}
