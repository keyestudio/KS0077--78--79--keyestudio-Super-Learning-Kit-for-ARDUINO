/*
 keyestudio super learning kit
 Project 21.2
 servo
 http//www.keyestudio.com
*/
#include <Servo.h>
Servo myservo;// define servo variable name
void setup()
{
myservo.attach(9);// select servo pin(9 or 10)
}
void loop()
{
myservo.write(90);// set rotate angle of the motor
}
