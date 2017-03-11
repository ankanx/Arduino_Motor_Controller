/*
 * MotorController 
 */
#include <MotorController.h>
// Set pin 9 as our Steering
// Set pin 10 as our Engine
MotorController testMotor(9,10);
int Angle = 0;
int input = 0;

void setup() 
{
  Serial.begin(9600);   
  testMotor.start();

}

void loop() 
{

 
  
  Serial.println(Angle);
  testMotor.setAngle(Angle);

}

void serialEvent() 
{
  while (Serial.available()) 
  {
        input = Serial.parseInt();

    if(Serial.read() == '\n')
    {

      Angle = input;
  
       if(Angle > 90)
       {
        Angle = 90;
       }else if(Angle < -90)
       {
        Angle = -90;
       }
     }

  }
}

