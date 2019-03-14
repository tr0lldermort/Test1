/*
 * Define & control hardware
 * Author:  dTb
 * Date:    13/03/19
 */

#ifndef APPSYSTEM_H
#define APPSYSTEM_H

#include "application.h"
#include <Particle.h>
#include <string>

//Define micro pins
#define PIN_PRESSURESENSOR A5

//Define system variables
#define ADC_MAX 4095
#define ADC_REF 3.3
#define ADC_AVERAGE 20 // n value, mean average

class pressureSensor
{
  public:             //funcs and vars that can be accessed from outside the instance of class
    pressureSensor(); // constructor, used to create an instance of this class. no return type.
    float getPressure();
    float getVoltage();

  private:
    float _voltage; // underscores are used to differentiate between priv and pub variables
    float _pressure;
};

#endif