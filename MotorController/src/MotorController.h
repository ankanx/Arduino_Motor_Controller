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
    void start();
    void setIdle();
    void emergencyBreak();
    void setSpeed(int speed);
    void setAngle(int degrees);
  private:
    Servo _Engine;
    Servo _Steering;
    int _EnginePin;
    int _SteeringPin;
};

#endif
