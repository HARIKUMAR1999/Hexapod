#include "SSC32.h"
SSC32 mySSC32;
bool mybool = true;
const int pingPin = 7;

int channels[] = {0,1,2,3,4,5,16,17,18,19,20,21,31};
int homeFrame[] = {1800,2500,1500,2500,1800,2500,1500,500,1150,500,1500,500,1650};
//int homeFrame[] = {1500,1600,1500,2000,1500,1700,1500,1500,1500,1200,1500,2500,1650};
//int homeFrame[] = {1400,1500,1800,500,1500,1500,1100,500,1450,1500,1050,500};



////Step 1
int channel_step1_1[] = {0,1,2,3,4,5,16,17,18,19,20,21,31};
int Frame_step1_1[] = {1500,1600,1800,500,1500,1700,1200,2500,1500,1200,1000,2500,1650};

///Step1.1
int channel_step1_2[] = {0,1,2,3,4,5,16,17,18,19,20,21,31};
int Frame_step1_2[] = {1500,1600,1800,2500,1500,1700,1200,500,1500,1200,1000,500,1650};

////Step 2
int channel_step1_3[] = {0,1,2,3,4,5,16,17,18,19,20,21,31};
int Frame_step1_3[] = {1800,500,1500,1500,1800,500,1500,500,1150,2500,1500,500,1650};

////Step 2-2
int channel_step1_4[] = {0,1,2,3,4,5,16,17,18,19,20,21,31};
int Frame_step1_4[] = {1800,2500,1500,1500,1800,2500,1500,500,1150,500,1500,500,1650};

int Right_1[] = {1500,1600,1100,500,1500,1700,1100,2500,1500,1200,1100,2500,1650};
int Right_2[] = {1500,1600,1100,2500,1500,1700,1100,500,1500,1200,1100,500,1650};
int Right_3[] = {1200,2500,1500,2500,1200,2500,1500,500,1150,2500,1000,500,1650};
int Right_4[] = {1200,500,1500,2500,1200,500,1500,500,1150,500,1500,500,1650};


void setup() { 
  Serial.begin(9600);               
  mySSC32.begin(9600);
  mySSC32.enableServos(channels);
  pinMode(13,OUTPUT);
//  sethome();
  
}

void loop() {
 // sethome();
  long duration, cm;
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);

  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);

  // convert the time into a distance
  cm = microsecondsToCentimeters(duration);

  Serial.print(cm);
  Serial.print("cm");
  Serial.println();  
  //delay(100);
  setstep1_1();
  delay(500);
  setstep1_2();
  delay(500);
  setstep1_3();
  delay(500);
  setstep1_4();
  delay(500);
  
  if (cm < 30){
  for(int i=0;i<=29;i++){
  TurnRight_1();
  delay(500);
  TurnRight_2();
  delay(500);
  TurnRight_3();
  delay(500);
  TurnRight_4();
  delay(500);
  }
  }

}

void sethome()
{

  mySSC32.setFrame(homeFrame);
  mySSC32.setFrame(channels,homeFrame);
}

void setstep1_1()
{

  mySSC32.setFrame(Frame_step1_1);
  mySSC32.setFrame(channel_step1_1,Frame_step1_1);
}

void setstep1_2()
{

  mySSC32.setFrame(Frame_step1_2);
  mySSC32.setFrame(channel_step1_2,Frame_step1_2);
}

void setstep1_3()
{

  mySSC32.setFrame(Frame_step1_3);
  mySSC32.setFrame(channel_step1_3,Frame_step1_3);
}

void setstep1_4()
{

  mySSC32.setFrame(Frame_step1_4);
  mySSC32.setFrame(channel_step1_4,Frame_step1_4);
}

void TurnRight_1(){
  mySSC32.setFrame(Right_1);
  mySSC32.setFrame(channels,Right_1);    
}
void TurnRight_2(){
  mySSC32.setFrame(Right_2);
  mySSC32.setFrame(channels,Right_2);    
}
void TurnRight_3(){
  mySSC32.setFrame(Right_3);
  mySSC32.setFrame(channels,Right_3);    
}
void TurnRight_4(){
  mySSC32.setFrame(Right_4);
  mySSC32.setFrame(channels,Right_4);    
}

long microsecondsToCentimeters(long microseconds) {
  return (microseconds * 0.034) / 2;
}
