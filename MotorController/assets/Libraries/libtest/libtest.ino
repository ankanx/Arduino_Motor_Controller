/*
 * MotorController 
 * 
 * 
 * 
 */
#include <MotorController.h>

MotorController test(9,11);

void setup() {
  Serial.begin(9600);   
  test.emergencyBreak();

}

void loop() {

}



