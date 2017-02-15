//const int led=13;

#include <Stepper.h>
const int stepsPerRevolution = 50; 
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
int stepCount=0;
int n;

void setup()
{
  //pinMode(led,OUTPUT);
  Serial.begin(9600);
 
}

void loop()
{
  if(Serial.available())
  {
    n=Serial.read()-'0';
  }
  Serial.println(n);
  //Serial.println(n);
  //delay(10);
  switch(n)
  {
   case 5:
   //digitalWrite(led,HIGH);
   myStepper.setSpeed(200);
   myStepper.step(500); 
   break;
   
   //case 0:
   //digitalWrite(led,LOW);
   //break;
   
   case 6:
   myStepper.setSpeed(200);
   myStepper.step(500);
   break;
}
  
}
