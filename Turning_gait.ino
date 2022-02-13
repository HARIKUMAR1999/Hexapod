#include "SSC32.h"
SSC32 mySSC32;
bool mybool = true;
int channels[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int homeFrame[] = {2500,500,1400,1500,1500,1500,1400,1500,1450,1500,1450,1500};
//int homeFrame[] = {1400,1500,1400,1500,1500,1500,1400,1500,1450,1500,1450,1500};
//int homeFrame[] = {1700,1500,1700,1500,1800,1500,1100,1500,1150,1500,1150,1500};



////Step 1.1
int channel_step1_1[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step1_1[] = {1400,1500,1400,1500,1200,2500,1400,1500,1450,1500,1450,1500};

///Step1.2
int channel_step1_2[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step1_2[] = {1400,1500,1400,1500,1200,1500,1400,1500,1450,1500,1450,1500};

////Step 1.3
int channel_step1_3[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step1_3[] = {1400,1500,1100,500,1200,1500,1400,1500,1450,1500,1450,1500};

////Step 1.4
int channel_step1_4[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step1_4[] = {1400,1500,1100,1500,1200,1500,1400,1500,1450,1500,1450,1500};

////Step 1.5
int channel_step1_5[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step1_5[] = {1100,2500,1100,1500,1200,1500,1400,1500,1450,1500,1450,1500};

///Step1.6
int channel_step1_6[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step1_6[] = {1100,1500,1100,1500,1200,1500,1400,1500,1450,1500,1450,1500};

////Step 1.7 1150 changed to 1250
int channel_step1_7[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step1_7[] = {1100,1500,1100,1500,1200,1500,1400,1500,1450,1500,1250,500};

////Step 1.8
int channel_step1_8[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step1_8[] = {1100,1500,1100,1500,1200,1500,1400,1500,1450,1500,1250,1500};

////Step 1.9 1150 to 1250
int channel_step1_9[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step1_9[] = {1100,1500,1100,1500,1200,1500,1400,1500,1250,2500,1250,1500};

///Step1.10
int channel_step1_10[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step1_10[] = {1100,1500,1100,1500,1200,1500,1400,1500,1250,1500,1250,1500};

////Step 1.11 1100 to 1200
int channel_step1_11[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step1_11[] = {1100,1500,1100,1500,1200,1500,1200,500,1250,1500,1250,1500};

////Step 1.12
int channel_step1_12[] = {0,1,2,3,14,15,16,17,24,25,30,31};
int Frame_step1_12[] = {1100,1500,1100,1500,1200,1500,1200,500,1250,1500,1250,1500};


void setup() {                
  mySSC32.begin(9600);
  mySSC32.enableServos(channels);
  
 

  pinMode(13,OUTPUT);
  sethome();
}

void loop() {
  setstep1_1();
  delay(200);
  setstep1_2();
  delay(200);
  setstep1_3();
  delay(200);
  setstep1_4();
  delay(200);
  setstep1_5();
  delay(200);
  setstep1_6();
  delay(200);
  setstep1_7();
  delay(200);
  setstep1_8();
  delay(200);
  setstep1_9();
  delay(200);
  setstep1_10();
  delay(200);
  setstep1_11();
  delay(200);
  setstep1_12();
  delay(200);
  sethome();
  delay(200);
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

void setstep1_5()
{

  mySSC32.setFrame(Frame_step1_5);
  mySSC32.setFrame(channel_step1_5,Frame_step1_5);
}

void setstep1_6()
{

  mySSC32.setFrame(Frame_step1_6);
  mySSC32.setFrame(channel_step1_6,Frame_step1_6);
}

void setstep1_7()
{

  mySSC32.setFrame(Frame_step1_7);
  mySSC32.setFrame(channel_step1_7,Frame_step1_7);
}

void setstep1_8()
{

  mySSC32.setFrame(Frame_step1_8);
  mySSC32.setFrame(channel_step1_8,Frame_step1_8);
}

void setstep1_9()
{

  mySSC32.setFrame(Frame_step1_9);
  mySSC32.setFrame(channel_step1_9,Frame_step1_9);
}

void setstep1_10()
{

  mySSC32.setFrame(Frame_step1_10);
  mySSC32.setFrame(channel_step1_10,Frame_step1_10);
}

void setstep1_11()
{

  mySSC32.setFrame(Frame_step1_11);
  mySSC32.setFrame(channel_step1_11,Frame_step1_11);
}

void setstep1_12()
{

  mySSC32.setFrame(Frame_step1_12);
  mySSC32.setFrame(channel_step1_12,Frame_step1_12);
}
