/*
  MotorController.cpp - Library for Controlling the CASP.ER SmartCar
  Created by Andreas J Fransson, April 30, 2016.
  Released into the public domain.
*/
#include "Arduino.h"
#include "MotorController.h"

/*
  IDLE Value 
*/
#define IDLE 90

/*
  Emergecy Break cycle
*/
#define BREAK -10

MotorController::MotorController(int SteeringPin,int EnginePin)
{
    Servo _Streering;
    _Steering.attach(SteeringPin);
    Servo _Engine;
    _Engine.attach(EnginePin);
}
void MotorController::start()
{
   _Engine.write(IDLE);
   _Steering.write(IDLE);
}

void MotorController::setIdle()
{
  _Engine.write(IDLE);
  _Steering.write(IDLE);
}

void MotorController::emergencyBreak()
{
  _Engine.write(BREAK);
  _Steering.write(IDLE);
  delay(100);
  _Engine.write(IDLE);
}

void MotorController::setSpeed(int speed)
{
 _Engine.write(speed);
}

void MotorController::setAngle(int degrees)
{
 _Steering.write(degrees);
}
