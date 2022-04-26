/*
 keyestudio super learning kit
 Project 29
 clock
 http//www.keyestudio.com
*/
#include <Wire.h>
#include "DS3231.h"
DS3231 RTC; //Create the DS3231 object
char weekDay[][4] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
//year, month, date, hour, min, sec and week-day(starts from 0 and goes to 6)
//writing any non-existent time-data may interfere with normal operation of the RTC.
//Take care of week-day also.
DateTime dt(2011, 11, 10, 15, 18, 0, 5);//open the series port and you can check time here or make a change to the time as needed.
void setup () 
{   Serial.begin(57600);//set baud rate to 57600
    Wire.begin();
    RTC.begin();
    RTC.adjust(dt); //Adjust date-time as defined 'dt' above 
}
void loop () 
{  
 DateTime now = RTC.now(); //get the current date-time
    Serial.print(now.year(), DEC);
    Serial.print("/");
    Serial.print(now.month(), DEC);
    Serial.print("/");
    Serial.print(now.date(), DEC);
    Serial.print(" ");
    Serial.print(now.hour(), DEC);
    Serial.print(":");
    Serial.print(now.minute(), DEC);
    Serial.print(":");
    Serial.print(now.second(), DEC);
    Serial.println();
    Serial.print(weekDay[now.dayOfWeek()]);
    Serial.println();
    delay(1000);
}
