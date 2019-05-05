//include the servo library

#include <Servo.h>

//create a servo object called servo1 Servo servo1;

Servo servo1; //There will be 2 Servos at this Point, but lets start with 1 only.
//Servo servo2;

void setup() {

  servo1.attach(9);
  //servo2.attach(8) 2nd Servo attached
}

void loop() { 

  int lightValue = analogRead(A0);

  lightValue = map (lightValue, 0, 1023, 0, 180);

  servo1.write(lightValue);

 
 
 }
