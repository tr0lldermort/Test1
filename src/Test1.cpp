#include "application.h"
#line 1 "/home/danbot/Documents/ParticleCode/Test1/src/Test1.ino"
/*
 * Project Test1
 * Description:
 * Author:
 * Date:
 */

//it appewars that this cpp file is the one that gets compiled properly each run.

#include <myTemplate.h> // How do we get these into their own subfolders nicely?

// setup() runs once, when the device is first turned on.
void setup();
void loop();
#line 12 "/home/danbot/Documents/ParticleCode/Test1/src/Test1.ino"
void setup() {
  // Put initialization like pinMode and begin functions here.
  Serial.begin(115200);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  Serial.println("fackorf 8===D--....__abc");
  delay(1000);
}