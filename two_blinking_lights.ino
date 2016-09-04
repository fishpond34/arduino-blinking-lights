/**
 * @file blinking_lights.c
 * Contains a program that sets up three blinking lights.
 */

/**
 * Sets up this program.
 */
void setup() {
  // Intialize pins 13, and 12 so that we can use them as outputs.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
}

/**
 * Turns a single light on at a specific pin and all other lights off.
 * @param {int} pinNumber Number of pin to be turned on.
 */
void turnOnPin(int pinNumber) {
  int pinNumbers[] = {8, 12, 13};
  for (int i = 0; i < 3; i = i + 1) {
    int status = LOW;
    if (pinNumbers[i] == pinNumber) {
      status = HIGH;
    }
    digitalWrite(pinNumbers[i], status);
  }
}

/**
 * Main program loop.
 */
void loop() {
  // Turn on pin 12 light.
  turnOnPin(12);
  
  // Wait for one second, and leave the pin 12 light on.
  delay(1000);

  // Turn on pin 13 light.
  turnOnPin(13);
  
  // Wait for one second and leave pin 13 on.
  delay(1000);

  // Turn on pin 8 light.
  turnOnPin(8);

  // Wait for one second and leave pin 8 on.
  delay(1000);
}
