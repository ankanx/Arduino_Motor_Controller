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
#define BREAK 10

MotorController::MotorController(int SteeringPin,int EnginePin)
{
    _SteeringPin = SteeringPin;
    _EnginePin = EnginePin;

    Servo _Streering;
    Servo _Engine;
}
void MotorController::start()
{
   _Steering.attach(_SteeringPin);
   _Engine.attach(_EnginePin);
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
  if(_Engine.read() > 90){
    _Engine.write(-BREAK);
  }else if(_Engine.read() < 90){
    _Engine.write(BREAK);
  }else{
    // Safety Mesure
    _Engine.write(IDLE);
  }
  
  _Steering.write(IDLE);
  delay(100);
  _Engine.write(IDLE);
}

void MotorController::setSpeed(int speed)
{
 _Engine.write(90+(speed));
}

void MotorController::setAngle(int degrees)
{
 _Steering.write(90+(degrees));
}
