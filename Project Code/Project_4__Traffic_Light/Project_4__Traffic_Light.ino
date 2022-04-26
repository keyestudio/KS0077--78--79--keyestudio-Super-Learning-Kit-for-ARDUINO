/*
 keyestudio super learning kit
 Project 4
 traffic light
 http//www.keyestudio.com
*/
int redled =10; // initialize digital pin 10.
int yellowled =7; // initialize digital pin 7.
int blueled =4; // initialize digital pin 4.
void setup()
{
pinMode(redled, OUTPUT);// set the pin with red LED as “output”
pinMode(yellowled, OUTPUT); // set the pin with yellow LED as “output”
pinMode(blueled, OUTPUT); // set the pin with blue LED as “output”
}
void loop()
{
digitalWrite(blueled, HIGH);//// turn on blue LED
delay(5000);// wait 5 seconds
digitalWrite(blueled, LOW); // turn off blue LED
for(int i=0;i<3;i++)// blinks for 3 times
{
delay(500);// wait 0.5 second
digitalWrite(yellowled, HIGH);// turn on yellow LED
delay(500);// wait 0.5 second
digitalWrite(yellowled, LOW);// turn off yellow LED
} 
delay(500);// wait 0.5 second
digitalWrite(redled, HIGH);// turn on red LED
delay(5000);// wait 5 second
digitalWrite(redled, LOW);// turn off red LED
}
