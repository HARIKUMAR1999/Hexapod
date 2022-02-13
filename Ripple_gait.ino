#include "SSC32.h"
SSC32 mySSC32;
bool mybool = true;
int channels[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int homeFrame[] = {1400,1500,1700,1500,1500,1500,1400,1500,1450,1500,1450,1500};

//int homeFrame[] = {1400,1500,1400,1500,1500,1500,1400,1500,1450,1500,1450,1500};
//int homeFrame[] = {1700,1500,1700,1500,1800,1500,1100,1500,1150,1500,1150,1500};

int channel_step3_1[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step3_1[] = {1700,2500,1400,1500,1500,1500,1400,1500,1450,1500,1150,500};

int channel_step3_2[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step3_2[] = {1700,1500,1400,1500,1500,1500,1400,1500,1450,1500,1150,1500};

int channel_step3_3[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step3_3[] = {1400,1500,1400,1500,1500,1500,1400,1500,1150,2500,1450,1500};

int channel_step3_4[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step3_4[] = {1400,1500,1400,1500,1500,1500,1400,1500,1150,1500,1450,1500};

int channel_step3_5[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step3_5[] = {1400,1500,1400,1500,1800,2500,1100,500,1450,1500,1450,1500};

int channel_step3_6[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step3_6[] = {1400,1500,1400,1500,1800,1500,1100,1500,1450,1500,1450,1500};

int channel_step3_7[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step3_7[] = {1400,1500,1700,500,1500,1500,1400,1500,1450,1500,1450,1500};

int channel_step3_8[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step3_8[] = {1400,1500,1700,1500,1500,1500,1400,1500,1450,1500,1450,1500};

void step3_1(){
  mySSC32.setFrame(Frame_step3_1);
  mySSC32.setFrame(channel_step3_1,Frame_step3_1);
}

void step3_2(){
  mySSC32.setFrame(Frame_step3_2);
  mySSC32.setFrame(channel_step3_2,Frame_step3_2);
}

void step3_3(){
  mySSC32.setFrame(Frame_step3_3);
  mySSC32.setFrame(channel_step3_3,Frame_step3_3);  
}

void step3_4(){
  mySSC32.setFrame(Frame_step3_4);
  mySSC32.setFrame(channel_step3_4,Frame_step3_4);  
}

void step3_5(){
  mySSC32.setFrame(Frame_step3_5);
  mySSC32.setFrame(channel_step3_5,Frame_step3_5);  
}

void step3_6(){
  mySSC32.setFrame(Frame_step3_6);
  mySSC32.setFrame(channel_step3_6,Frame_step3_6);  
}

void step3_7(){
  mySSC32.setFrame(Frame_step3_7);
  mySSC32.setFrame(channel_step3_7,Frame_step3_7);  
}

void step3_8(){
  mySSC32.setFrame(Frame_step3_8);
  mySSC32.setFrame(channel_step3_8,Frame_step3_8);  
}


void sethome()
{

  mySSC32.setFrame(homeFrame);
  mySSC32.setFrame(channels,homeFrame);
}

void setup() {                
  mySSC32.begin(9600);
  mySSC32.enableServos(channels);
  
 

  pinMode(13,OUTPUT);
  sethome();
}

void loop() {
  step3_1();
  delay(200);
  step3_2();
  delay(200);
  step3_3();
  delay(200);
  step3_4();
  delay(200);
  step3_5();
  delay(200);
  step3_6();
  delay(200);
  step3_7();
  delay(200);
  step3_8();
  delay(200);

}
