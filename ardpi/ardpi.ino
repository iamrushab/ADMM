 int r1= 4;
 int rr;
 int rt=0;
 int rf;
 int ry;
 int r;
 int t=2500;

#include <Stepper.h>
const int stepsPerRevolution = 50; 
Stepper step1(stepsPerRevolution, 8, 9, 10, 11);
//Stepper step2(stepsPerRevolution, 2, 3, 4, 5);
int stepCount=0;
int n;

void setup()
{
  pinMode(r1, INPUT);
  Serial.begin(9600);
  attachInterrupt(rf, stopm, 1);
  
}
again1:
void loop()
{
  
  delay(700);
  if(Serial.available())
  {
    n=Serial.read()-'0';
  }
  delay(70);
  rr=digitalRead(r1);
  if(rr==1)
  {
    rt = millis();
  }
  else if(rr==0){
    ry = millis();}
  //Serial.println(rr);
  //Serial.println(rt);
  if(rt-t>6000 && rt-ry>3000){
    rf=1;
   // if(rf=1){
     // t=millis();
    //}
    }
  else{
    rf=0;
  }
  
  Serial.println(rf);
  //Serial.println("1: ");
  //Serial.println(rt);
  //Serial.println("0: ");
  //Serial.println(ry);
  
  //Serial.println(n);
  //delay(10);

  switch(n)
  {
   case 5:
   //digitalWrite(led,HIGH);
   step1.setSpeed(80);
   step1.step(-600); 
   //step2.setSpeed(80);
   //step2.step(-200);
   // if(rr==0)
  //{
    //step1.setSpeed(0);
    //step1.step(0);
  //} 
   break;
   
   //case 0:
   //digitalWrite(led,LOW);
   //break;
   
   case 6:
   step1.setSpeed(80);
   //step2.setSpeed(80);
   step1.step(600);
    // if(rr==0)
  //{
    //step1.setSpeed(0);
    //step1.step(0);
  //} 
   //step2.step(200);
   //step2.step(200);
   break;
}
  
}

void stopm(){
  step1.setSpeed(0);
  step1.step(0);
  delay(500);
  step1.setSpeed(20);
  step1.step(50);
  goto again1;
  
}
