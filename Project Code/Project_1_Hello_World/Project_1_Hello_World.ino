/*
keyestudio super learning kit
Project 1
Hello World
http//www.keyestudio.com
*/
int val;//define variable val
void setup()
{
Serial.begin(9600);// set the baud rate at 9600 .   
}
void loop()
{
  val=Serial.read();// read the instruction or character from PC to Arduino, and assign them to Val.
  if(val=='R')// determine if the instruction or character received is “R”.
  {  // if it’s “R”,    
     Serial.println("Hello World!");// display“Hello World！”string.
  }}//
