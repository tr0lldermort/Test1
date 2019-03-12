//#include "application.h"

/*
 * Project Test1
 * Description: Main app fle
 * Author:
 * Date:
 */

#include <appSystem.h> // How do we get these into their own subfolders nicely?

void setup();
void loop();

void setup() {
  Serial.begin(115200);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  pressureSensor pressureSensor_c;  //_c for class recognition

  float volts = pressureSensor_c.getVoltage()*1000;
  Serial.print("ADC Voltage = ");
  Serial.print(volts, 3); // second arg for force precision
  Serial.println("mV");


  // next do alarm checking


  //then send events up to particle cloud


  delay(1000);  // slow this shit down yo
}