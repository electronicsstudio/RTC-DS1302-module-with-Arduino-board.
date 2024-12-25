/*
Electronics Studio
@file RTC_DS1302.ino
@date  16-12-2024
@url https:https://github.com/electronicsstudio
@url YouTube: https://www.youtube.com/@ElectronicsStudio-v7o/featured
*/
#include <virtuabotixRTC.h>
// Creation of the Real Time Clock Object
virtuabotixRTC myRTC(4, 3, 2);    //CLK, DAT, RST pin's   RTC pin's
             
void setup()  {
  Serial.begin(9600);
  myRTC.setDS1302Time(18, 30, 14, 7, 18, 9, 2024);  // Here you can adjust the 'Time' according to your choice (Sunday is 1)
             //(sec, min, hours, day, date, month, year)
}

void loop()  {
  // This allows for the update of variables for time or accessing the individual elements.
  myRTC.updateTime();

  // Start printing elements as individuals
  Serial.print("Time:");
  Serial.print(myRTC.hours);
  Serial.print(":");
  Serial.print(myRTC.minutes);
  Serial.print(":");
  Serial.println(myRTC.seconds);

  // Delay so the program doesn't print non-stop
  delay(1000);
}