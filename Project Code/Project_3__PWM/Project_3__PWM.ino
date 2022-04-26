/*
keyestudio super learning kit
Project 3
pwm
http//www.keyestudio.com
*/
int ledPin = 10;
 void setup() {
     pinMode(ledPin,OUTPUT);
}
void loop(){
  for (int value = 0 ; value < 255; value=value+1){
    analogWrite(ledPin, value);
    delay(5);
  }
  for (int value = 255; value >0; value=value-1){
    analogWrite(ledPin, value);
    delay(5);
  }  
}   
