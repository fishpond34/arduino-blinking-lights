/**
 * @file blinking_lights.c
 * Contains a program that sets up three blinking lights.
 */

/**
 * Sets up this program.
 */
void setup() {
  // Initializes pins as outputs.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}
/**
 * Turns a single light on at a specific pin and all other lights off.
 * @param {int} pinNumber Number of pin to be turned on.
 */
void turnOnPin(int pinNumber) {
  int pinNumbers[] = {13, 12, 11, 10, 9, 8, 7, 6, 5};
  for (int i = 0; i < 9; i = i + 1) {
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
  // Turn on pin 13.
  turnOnPin(13);
  
  // Wait for one second.
  delay(1000);

  // Turn on pin 12.
  turnOnPin(12);
  
  // Wait for one second and leave pin 13 on.
  delay(1000);

  // Turn on pin 11.
  turnOnPin(11);

  // Wait for one second.
  delay(1000);

  // Turn on pin 10.
  turnOnPin(10);

  // Wait for one second.
  delay(1000);

  // Turn on pin 9.
  turnOnPin(9);

  // Wait for one second.
  delay(1000);
  
  // Turn on pin 8.
  turnOnPin(8);
  
  // Wait for one second.
  delay(1000);

  // Turn on pin 7.
  turnOnPin(7);

  // Wait for one second.
  delay(1000);

  // Turn on pin 6.
  turnOnPin(6);

  // Wait for one second.
  delay(1000);

  // Turn on pin 5.
  turnOnPin(5);

  // Wait for one second.
  delay(1000);
}
