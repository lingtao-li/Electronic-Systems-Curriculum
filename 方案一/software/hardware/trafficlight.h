#ifndef __TRAFFICLIGHT_H
#define __TRAFFICLIGHT_H
#include "stm32f10x.h" 
#include "led.h"
void bitnumber1(int a);
void bitnumber2(int b);
void Resetbit1(void);
void Resetbit2(void);
void Greenlight(int gs);
void Redlight(int rs);
void Yellowlight(int ys);
#endif
