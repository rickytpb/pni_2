#include "engine.h"

void init_LED(void)
{
	EA = 1;
	ET0 = 1;
	TMOD = 0x2;
	TH0=TL0=0x50;
	TR0 = 1;
}

uint32_t get_time()
{
	return time;
}

void print_LED_DEC(uint16_t number)
{
	if(number>9999)
		return;
	U15=0xF7;
	while(number>0) //Zmien z petli na cos innego
	{
		U10 = 0;
		U15 = U15<<1;
		switch(number%10){
			case 0:
				U10=CYFRA_0;
				break;
			case 1:
				U10=CYFRA_1;
				break;
			case 2:
				U10=CYFRA_2;
				break;
			case 3:
				U10=CYFRA_3;
				break;
			case 4:
				U10=CYFRA_4;
				break;
			case 5:
				U10=CYFRA_5;
				break;
			case 6:
				U10=CYFRA_6;
				break;
			case 7:
				U10=CYFRA_7;
				break;
			case 8:
				U10=CYFRA_8;
				break;
			case 9:
				U10=CYFRA_9;
				break;
		}
		number /= 10;
		
	}
	
}