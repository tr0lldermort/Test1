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

  // are we in high power config setup mode? check here

  Serial.begin(115200);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  pressureSensor pressureSensor_c;  //_c for class recognition

  float mVolts = pressureSensor_c.getVoltage()*1000;
  Serial.print("ADC Voltage = ");
  Serial.print(mVolts, 3); // second arg for force precision
  Serial.println("mV");

  String pressure_str = String(pressureSensor_c.getPressure(), 3);
  Serial.println(pressure_str);

  // now do water sense stuff


  // battery voltage...


  // next do alarm checking


  // any nonvol work?


  //then send events up to particle cloud


  /*
  If the cloud connection is turned on and trying to connect to the cloud unsuccessfully, Particle.publish may block for 20 seconds to 5 minutes. Checking Particle.connected() can prevent this.
  */


  bool success;
  success = Particle.publish("Simulated Pressure", pressure_str, PUBLIC | WITH_ACK);
  if (!success){
    // get here if event publish did not work
    Serial.println("oh noes!");
  }
  else {
    Serial.print("That should be an event right there... ");
    Serial.println(success);
  }

// do something on event? send an email?

  delay(10000);  // slow this shit down yo
}