//include the servo library

#include <Servo.h>
Servo servo1;
//Servo servo2;

void setup() 
{

  servo1.attach(8);
  Serial.begin(9600);
  //servo1.write(180);
}

void loop() 
{ 

  int val = analogRead(A0);
  int lightValue;
  unsigned int AnalogValue;
  AnalogValue = analogRead(A0);

  lightValue = map(val, 0, 762, 0, 180);

  delay(15);
  servo1.write(lightValue);
  Serial.println(AnalogValue);
  Serial.println(lightValue);
  
}
