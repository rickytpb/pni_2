#include "pin_set.h"
#include "engine.h"

extern uint32_t time = 0;
uint32_t i = 0;
void func_isr (void) __interrupt 1 {
	i++;
	print_LED_DEC(get_time());
	if(i>2)
	{
		time++;
		i=0;
	}
}

void main(void)
{	
	init_LED();

}