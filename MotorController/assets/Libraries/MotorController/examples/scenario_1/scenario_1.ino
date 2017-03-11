/*
 * MotorController 
 */
#include <MotorController.h>
// Set pin 9 as our Steering
// Set pin 10 as our Engine
MotorController testMotor(5,3);

void setup() {
  Serial.begin(9600);   
  testMotor.start();

}

void loop() {

 
  testMotor.setAngle(10);
  delay(1000);
  //testMotor.emergencyBreak();

}



