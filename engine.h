#ifndef ENGINE_H
#define ENGINE_H

#include "pin_set.h"
#define uint8_t unsigned char
#define uint16_t unsigned short
#define uint32_t unsigned long

extern uint32_t time;
extern uint8_t digits[4];
void init_LED(void);
uint8_t get_digit(uint8_t number);
uint32_t get_time();
void print_LED_DEC(uint16_t number);

#endif