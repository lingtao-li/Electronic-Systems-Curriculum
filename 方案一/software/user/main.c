#include "stm32f10x.h"                  // Device header
#include "timer.h" 
#include "led.h" 
#include "trafficlight.h"
int main()
{
	int a;
	int b;
	
	//timer1_Init();
	led_Init();
	
		GPIO_SetBits(GPIOA,GPIO_Pin_8);
		GPIO_SetBits(GPIOA,GPIO_Pin_10);

	
	while(1)
	{

		Greenlight(15);
		Yellowlight(5);
		Redlight(15);
	}

}
