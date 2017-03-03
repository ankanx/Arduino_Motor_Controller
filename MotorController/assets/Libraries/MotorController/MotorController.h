/*
  CASPER.h - Library for Controlling the CASP.ER SmartCar
  Created by Andreas J Fransson, April 30, 2016.
  Released into the public domain.
*/
#ifndef MotorController_h
#define MotorController_h

#include "Arduino.h"
#include <Wire.h>
#include <Servo.h>

class MotorController
{
  public:
    MotorController(int SteeringPin, int EnginePin);
    void setSpeed(int speed);
    void setAngle(int degrees);
    void start();
  private:
    int _SteeringPin;
    int _EnginePin;
};

#endif
