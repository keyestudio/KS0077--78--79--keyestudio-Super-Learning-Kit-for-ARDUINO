/*
keyestudio super learning kit
Project 31
soil humidity sensor
http//www.keyestudio.com
*/
 void setup(){
 Serial.begin(57600);
 }
 void loop(){
  Serial.print("Moisture Sensor Value");
  Serial.println(analogRead(0)); 
  delay(100);
}
