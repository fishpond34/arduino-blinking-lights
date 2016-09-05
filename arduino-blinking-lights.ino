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
  // Turn on pin 12 light.
  turnOnPin(13);
  
  // Wait for one second, and leave the pin 12 light on.
  delay(1000);

  // Turn on pin 13 light.
  turnOnPin(12);
  
  // Wait for one second and leave pin 13 on.
  delay(1000);

  // Turn on pin 8 light.
  turnOnPin(11);

  // Wait for one second and leave pin 8 on.
  delay(1000);

 //turn on pin 11 light.
 turnOnPin(10);

 ///Wait for one second and leave pin -11 on.
 delay(1000);

 //Turn on pin 10 light.
turnOnPin(9);

 //Wait one second and leave pin -10 on.
 delay(1000);

//Turn on pin 9 light.
turnOnPin(8);

//Wait for one seond and leave pin -9 on.
delay(1000);

turnOnPin(7);

delay(1000);

turnOnPin(6);

delay(1000);

turnOnPin(5);

delay(1000);
}
