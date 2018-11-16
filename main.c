#include "pin_set.h"
#include "engine.h"

uint32_t time = 0;
uint32_t i,j = 0;
void func_isr (void) __interrupt 1 {
	i++;
	if(i>=2)
	{
		time++;
		j++;
		support_LED();
		if(j>=2)
		{
			print_LED_DEC(get_time());
			j=0;
		}
		i = 0;
	}
}

void main(void)
{	
	init_LED();

}