#include "engine.h"

uint8_t in;
uint8_t digits[4];

void init_LED(void)
{
	EA = 1;
	ET0 = 1;
	TMOD = 0x2;
	TH0=TL0=0xBF;
	TR0 = 1;
	digits[3] = CYFRA_0;
	digits[2] = 0;
	digits[1] = 0;
	digits[0] = 0;
}

uint32_t get_time()
{
	return time;
}

void support_LED()
{
	U10 = 0;
	U15=0xEF;
	U10 = digits[3];
	U10 = 0;
	U15=0xDF;
	U10 = digits[2];
	U10 = 0;
	U15=0xBF;
	U10 = digits[1];
	U10 = 0;
	U15=0x7F;
	U10 = digits[0];


}

uint8_t get_digit(uint8_t number)
{
	switch(number%10){
			case 0:
				return CYFRA_0;
				break;
			case 1:
				return CYFRA_1;
				break;
			case 2:
				return CYFRA_2;
				break;
			case 3:
				return CYFRA_3;
				break;
			case 4:
				return CYFRA_4;
				break;
			case 5:
				return CYFRA_5;
				break;
			case 6:
				return CYFRA_6;
				break;
			case 7:
				return CYFRA_7;
				break;
			case 8:
				return CYFRA_8;
				break;
			case 9:
				return CYFRA_9;
				break;
			default:
				return 0;
		}
}

void print_LED_DEC(uint16_t number)
{
	in = 3;
	
	if(number>9999)
		return;
	while(number>0)
	{
		digits[in] = get_digit(number%10);
		number /= 10;
		in--;
		
	}
	
}