 int lr= 0;
 int rr=1;
 int cr=2;
 int tr=3;
 int fr=4;
 int sr=5;
 
 int l;
 int r;
 int c;
 int t;
 int f;
 int s;
 #include <Stepper.h>
const int stepsPerRevolution = 50; 
Stepper step1(stepsPerRevolution, 8, 9, 10, 11);
//Stepper step2(stepsPerRevolution, 2, 3, 4, 5);
int stepCount=0;
int n;


void setup(){
  Serial.begin(9600);
  pinMode(lr, INPUT);
}
void loop(){
   if(l!=0){
    step1.setSpeed(80);
    step1.step(-10);
  }
  
  if(Serial.available())
  {
    n=Serial.read()-'0';
  }
  delay(70);
  l=pulseIn(lr, HIGH);
  switch(n)
  {
     case 1:
     step1.setSpeed(80);
     step1.step(1000);
     break;
   
    case 2:
    step1.setSpeed(80);
    step1.step(1500);
    break;  
   
    case 3:
     step1.setSpeed(80);
     step1.step(1000);
    break;
   
   case 4:
    step1.setSpeed(80);
    step1.step(1500);
   break;    
  }

}
