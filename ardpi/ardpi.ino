 int lr= 7;
 int rr=5;
 int cr=6;
 int tr=2;
 int fr=3;
 int sr=4;
 
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
  pinMode(rr, INPUT);
  pinMode(cr, INPUT);
  pinMode(tr, INPUT);
  pinMode(fr, INPUT);
  pinMode(sr, INPUT);
}
void loop(){
  delay(70);
  l=pulseIn(lr, HIGH);
  Serial.println(l);
   if(l!=0){
    step1.setSpeed(200);
    step1.step(10);
  }
  
  if(Serial.available())
  {
    n=Serial.read()-'0';
  }
  switch(n)
  {
     case 1:
     step1.setSpeed(200);
     step1.step(-400);
     delay(5000);
     break;
   
    case 2:
    step1.setSpeed(200);
    step1.step(-1450);
    delay(5000);
    break;  
   
    case 3:
     step1.setSpeed(200);
     step1.step(-2550);
     delay(5000);
     break;
   
   case 4:
    step1.setSpeed(200);
    step1.step(-3600);
    delay(5000);
   break;    
  }

}
