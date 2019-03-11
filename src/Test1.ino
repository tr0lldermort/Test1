/*
 * Project Test1
 * Description:
 * Author:
 * Date:
 */


#include "./h/myTemplate.h" // this has to be absolute for some reason, <> doesn't work

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  Serial.begin(115200);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  Serial.println("fackorf 8===D--....__***");
  delay(1000);
}