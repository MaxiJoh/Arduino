#include "PWM/PWM.h"
//#include "Arduino.h"
//#include "foo.h"

// C++ code
//

int led = 11;
int32_t frequency = 1000;

void setup() {
  InitTimersSafe();

  bool success = SetPinFrequencySafe(led, frequency);

}

void loop() {

}