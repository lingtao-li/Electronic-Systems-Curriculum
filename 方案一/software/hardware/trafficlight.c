#include "trafficlight.h"
#include "stm32f10x.h" 
#include "led.h"
int a;
int b;
int c;
int d;
void Resetbit1(void){
	GPIO_ResetBits(GPIOA,GPIO_Pin_1);
	GPIO_ResetBits(GPIOA,GPIO_Pin_2);
	GPIO_ResetBits(GPIOA,GPIO_Pin_3);
	GPIO_ResetBits(GPIOA,GPIO_Pin_4);
	GPIO_ResetBits(GPIOA,GPIO_Pin_5);
	GPIO_ResetBits(GPIOA,GPIO_Pin_6);
	GPIO_ResetBits(GPIOA,GPIO_Pin_7);
	
	
	
}
void Resetbit2(void){
	GPIO_ResetBits(GPIOB,GPIO_Pin_1);
	GPIO_ResetBits(GPIOB,GPIO_Pin_2);
	GPIO_ResetBits(GPIOB,GPIO_Pin_3);
	GPIO_ResetBits(GPIOB,GPIO_Pin_4);
	GPIO_ResetBits(GPIOB,GPIO_Pin_5);
	GPIO_ResetBits(GPIOB,GPIO_Pin_6);
	GPIO_ResetBits(GPIOB,GPIO_Pin_7);
	
	
	
}
void bitnumber1(int a){
	if(a==0){
		Resetbit1();
		GPIO_SetBits(GPIOA,GPIO_Pin_7);
	}else if(a==1){
		Resetbit1();
		GPIO_SetBits(GPIOA,GPIO_Pin_1);
		GPIO_SetBits(GPIOA,GPIO_Pin_4);
		GPIO_SetBits(GPIOA,GPIO_Pin_5);
		GPIO_SetBits(GPIOA,GPIO_Pin_6);
		GPIO_SetBits(GPIOA,GPIO_Pin_7);
	}else if(a==2){
		Resetbit1();
		GPIO_SetBits(GPIOA,GPIO_Pin_3);
		GPIO_SetBits(GPIOA,GPIO_Pin_6);
	}else if(a==3){
		Resetbit1();
		GPIO_SetBits(GPIOA,GPIO_Pin_5);
		GPIO_SetBits(GPIOA,GPIO_Pin_6);
	}else if(a==4){
		Resetbit1();
		GPIO_SetBits(GPIOA,GPIO_Pin_1);
		GPIO_SetBits(GPIOA,GPIO_Pin_4);
		GPIO_SetBits(GPIOA,GPIO_Pin_5);
	}else if(a==5){
		Resetbit1();
		GPIO_SetBits(GPIOA,GPIO_Pin_2);
		GPIO_SetBits(GPIOA,GPIO_Pin_5);
	}else if(a==6){
		Resetbit1();
		GPIO_SetBits(GPIOA,GPIO_Pin_2);
	}else if(a==7){
		Resetbit1();
		GPIO_SetBits(GPIOA,GPIO_Pin_6);
		GPIO_SetBits(GPIOA,GPIO_Pin_4);
		GPIO_SetBits(GPIOA,GPIO_Pin_5);
		GPIO_SetBits(GPIOA,GPIO_Pin_7);
	}else if(a==8){
		Resetbit1();
	}else if(a==9){
		Resetbit1();

		GPIO_SetBits(GPIOA,GPIO_Pin_5);

	}
	
	
}
void bitnumber2(int b){
		if(b==0){
		Resetbit2();
		GPIO_SetBits(GPIOB,GPIO_Pin_7);
	}else if(b==1){
		Resetbit2();
		GPIO_SetBits(GPIOB,GPIO_Pin_1);
		GPIO_SetBits(GPIOB,GPIO_Pin_4);
		GPIO_SetBits(GPIOB,GPIO_Pin_5);
		GPIO_SetBits(GPIOB,GPIO_Pin_6);
		GPIO_SetBits(GPIOB,GPIO_Pin_7);
	}else if(b==2){
		Resetbit2();
		GPIO_SetBits(GPIOB,GPIO_Pin_3);
		GPIO_SetBits(GPIOB,GPIO_Pin_6);
	}else if(b==3){
		Resetbit2();
		GPIO_SetBits(GPIOB,GPIO_Pin_5);
		GPIO_SetBits(GPIOB,GPIO_Pin_6);
	}else if(b==4){
		Resetbit2();
		GPIO_SetBits(GPIOB,GPIO_Pin_1);
		GPIO_SetBits(GPIOB,GPIO_Pin_4);
		GPIO_SetBits(GPIOB,GPIO_Pin_5);
	}else if(b==5){
		Resetbit2();
		GPIO_SetBits(GPIOB,GPIO_Pin_2);
		GPIO_SetBits(GPIOB,GPIO_Pin_5);
	}else if(b==6){
		Resetbit2();
		GPIO_SetBits(GPIOB,GPIO_Pin_2);
	}else if(b==7){
		Resetbit2();
		GPIO_SetBits(GPIOB,GPIO_Pin_6);
		GPIO_SetBits(GPIOB,GPIO_Pin_4);
		GPIO_SetBits(GPIOB,GPIO_Pin_5);
		GPIO_SetBits(GPIOB,GPIO_Pin_7);
	}else if(b==8){
		Resetbit2();
	}else if(a==9){
		Resetbit1();

		GPIO_SetBits(GPIOB,GPIO_Pin_5);

	}
	
	
	
}

	
void Greenlight(int gs){
	GPIO_SetBits(GPIOB,GPIO_Pin_9);
	int bit;
	int ten;
	bit=gs%10;
	ten=gs/10;
		for(a=ten;a>=0;a--){
			//delay(1000);
			bitnumber2(a);
				for(b=bit;b>=0;b--){
					bitnumber1(b);
					if(b==0){
						b=10;
					}
					delay(1000);
					if(b==10){
						b=0;
					}		
		}
				bit=9;
				
}
		GPIO_ResetBits(GPIOB,GPIO_Pin_9);
}
void Redlight(int rs){
	GPIO_SetBits(GPIOB,GPIO_Pin_12);
	int bit;
	int ten;
	bit=rs%10;
	ten=rs/10;
		for(a=ten;a>=0;a--){
			//delay(1000);
			bitnumber2(a);
				for(b=bit;b>=0;b--){
					bitnumber1(b);
					if(b==0){
						b=10;
					}
					delay(1000);
					if(b==10){
						b=0;
					}		
		}
				bit=9;
				
}
	GPIO_ResetBits(GPIOB,GPIO_Pin_12);
	
}
void Yellowlight(int ys){
	GPIO_SetBits(GPIOB,GPIO_Pin_10);
		int bit;
	int ten;
	bit=ys%10;
	ten=ys/10;
		for(a=ten;a>=0;a--){
			//delay(1000);
			bitnumber2(a);
				for(b=bit;b>=0;b--){
					bitnumber1(b);
					if(b==0){
						b=10;
					}
					delay(1000);
					if(b==10){
						b=0;
					}		
		}
				bit=9;
				
}
	
	
	GPIO_ResetBits(GPIOB,GPIO_Pin_10);
	
}
	
	
