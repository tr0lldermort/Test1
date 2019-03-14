/*
 * Define & control hardware
 * Author:  dTb
 * Date:    11/03/19
 */

#include <appSystem.h>


pressureSensor::pressureSensor()
{
    pinMode(PIN_PRESSURESENSOR, INPUT); // dont need to do this but it does make it clear that we are going to use this pin as AN in
}

float pressureSensor::getPressure() // this is currently only a test function. will be srs when hardware is ready
{
    _pressure = (pressureSensor::getVoltage()*10)/3.3;  // pretend 10 bar from 3.3V
    return _pressure;   //code to test whether I can call class funcs within eachother. edit - you can.
}

float pressureSensor::getVoltage()
{
    for (int count = 0; count < ADC_AVERAGE ; count++)
        _voltage += analogRead(PIN_PRESSURESENSOR); //TODO: software check to ensure we dont go over the type max here.

    _voltage /= ADC_AVERAGE;
    _voltage /= ADC_MAX;
    _voltage *= ADC_REF;    // TODO: make the maths neat here.

    return _voltage;
}

