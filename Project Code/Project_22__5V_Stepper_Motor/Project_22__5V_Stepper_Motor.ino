/*
 keyestudio super learning kit
 Project 22
 Stepper Motor
 http//www.keyestudio.com
*/
#include <Stepper.h>   
#define STEPS 100  
Stepper stepper(STEPS, 8, 9, 10, 11);  
int previous = 0;  
void setup()
{
  stepper.setSpeed(90);
 }   
 void loop()
 {    
   int val = analogRead(0);      
   stepper.step(val - previous);     
   previous = val;
 }
