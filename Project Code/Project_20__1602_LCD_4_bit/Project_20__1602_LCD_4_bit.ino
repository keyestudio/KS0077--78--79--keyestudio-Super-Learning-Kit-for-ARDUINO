/*
 keyestudio super learning kit
 Project 20.2
 LCD1602
 http//www.keyestudio.com
*/
/* LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 9
 * LCD D5 pin to digital pin 8
 * LCD D6 pin to digital pin 7
 * LCD D7 pin to digital pin 6
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 This example code is in the public domain.
 http//www.arduino.cc/en/Tutorial/LiquidCrystal
 */
// include the library code
#include <LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 9, 8, 7, 6);
void setup() {
  // set up the LCD's number of columns and rows
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}
void loop() {
  // set the cursor to column 0, line 1
  // (note line 1 is the second row, since counting begins with 0)
  lcd.setCursor(0, 1);
  // print the number of seconds since reset
  lcd.print(millis() / 1000);
}
