/*
 keyestudio super learning kit
 Project 13
 Tilt Switch
 http//www.keyestudio.com
*/
void setup() 
{ 
  pinMode(8,OUTPUT);// set digital pin 8 as “output” 
} 
void loop() 
{ 
int i;// define variable i 
while(1) 
{ 
  i=analogRead(5);// read the voltage value of analog pin 5 
  if(i>512)// if larger that 512（2.5V） 
  { 
    digitalWrite(8,LOW);// turn on LED 
  } 
  else// otherwise 
  { 
    digitalWrite(8,HIGH);// turn off LED 
  } } }
