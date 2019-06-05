//SERVO LIBRARY FOR ARDUINO

#include <Servo.h>
Servo servo1;
//Servo servo2; ADD SERVO2 IF NECESSARY

void setup() 
{

  servo1.attach(8); //PIN OUT no. 8 FOR SERVO SG90
  Serial.begin(9600); //SERIAL START BIT
  //servo1.write(180);
}

void loop() 
{ 

  int val = analogRead(A0); // READ VALUE OF THE ANALOG SIGNAL INPUT FROM THE LDR
  int lightValue;
  unsigned int AnalogValue;
  AnalogValue = analogRead(A0); // TRANSFER VARIABLE A0 TO AnalogValue

  lightValue = map(val, 0, 762, 0, 180); //MAPPING THE VALUE OF THE ANALOG SIGNAL TO 0 to 180 DEGREES

  delay(15); // DELAY 15ms FOR SERIAL OUT PRINT & SERVOWRITE
  servo1.write(lightValue); // WRITE OUTPUT/DISPLAY
  Serial.println(AnalogValue); //WRITE THE ANALOG VALUE to OUTPUT/DISPLAY TO SERIAL VIEW
  Serial.println(lightValue); //WRITE THE LIGHT VALUE to OUTPUT/DISPLAY TO SERIAL VIEW
  
}
