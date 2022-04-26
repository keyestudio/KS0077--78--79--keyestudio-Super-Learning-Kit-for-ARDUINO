/*
 keyestudio super learning kit
 Project 24
 Gas
 http//www.keyestudio.com
*/
void setup()
{
  Serial.begin(9600); //Set serial baud rate to 9600 bps
}
void loop()
{int val;
val=analogRead(0);//Read Gas value from analog 0
Serial.println(val,DEC);//Print the value to serial port
delay(100);
}
