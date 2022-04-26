/*
keyestudio super learning kit
Project 8
Passive Buzzer
http//www.keyestudio.com
*/
int buzzer=8;// select digital IO pin for the buzzer
void setup() 
{ 
pinMode(buzzer,OUTPUT);// set digital IO pin pattern, OUTPUT to be output 
} 
void loop() 
{ unsigned char i,j;//define variable
while(1) 
{ for(i=0;i<80;i++)// output a frequency sound
{ digitalWrite(buzzer,HIGH);// sound
delay(1);//delay1ms 
digitalWrite(buzzer,LOW);//not sound
delay(1);//ms delay 
} 
for(i=0;i<100;i++)// output a frequency sound
{ digitalWrite(buzzer,HIGH);// sound
delay(2);//2ms delay 
digitalWrite(buzzer,LOW);//not sound
delay(2);//2ms delay 
}}} 
