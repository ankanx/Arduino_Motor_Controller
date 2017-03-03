/*
  MotorController.cpp - Library for Controlling the CASP.ER SmartCar
  Created by Andreas J Fransson, April 30, 2016.
  Released into the public domain.
*/

#include "MotorController.h"

const int IDLE = 90;


MotorController::MotorController(int SteeringPin,int EnginePin)
{
    Servo Steering;
    Servo Engine;
    Streering.attach(SteeringPin);
    Engine.attach(EnginePin);

}
void MotorController::start()
{
   Engine.write(IDLE);
   Steering.write(IDLE);
}

void MotorController::setIdle()
{
  Engine.write(IDLE);
  Steering.write(IDLE);
}

void MotorController::setSpeed(int speed)
{
 Engine.write(speed);
}

void MotorController::setAngle(int degrees)
{
 Steering.write(degrees);
}
