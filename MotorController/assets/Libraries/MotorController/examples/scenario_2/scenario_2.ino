/*
 * MotorController 
 */
#include <MotorController.h>
// Set pin 9 as our Steering
// Set pin 10 as our Engine
MotorController testMotor(9,10);
int Speed = 0;
int input = 0;
void setup() {
  Serial.begin(9600);   
  testMotor.start();

}

void loop() {

 
  
  Serial.println(Speed);
  testMotor.setSpeed(Speed);

}

void serialEvent() {
  while (Serial.available()) {
        input = Serial.parseInt();

    if(Serial.read() == '\n'){

    Speed = input;

     if(Speed > 90){
      Speed = 90;
     }else if(Speed < -90){
      Speed = -90;
     }
     }

  }
}

