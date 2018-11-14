#ifndef PIN_SET_H
#define PIN_SET_H

#include <8051.h>
#define U15 P0
#define U10 P1
#define SEG_A 0x02
#define SEG_B 0x04
#define SEG_C 0x40
#define SEG_D 0x10
#define SEG_E 0x08
#define SEG_F 0x01
#define SEG_G 0x20
#define SEG_H 0x80
#define CYFRA_0 SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F
#define CYFRA_1 SEG_B | SEG_C
#define CYFRA_2 SEG_A | SEG_B | SEG_G | SEG_E | SEG_D
#define CYFRA_3 SEG_A | SEG_B | SEG_C | SEG_D | SEG_G
#define CYFRA_4 SEG_B | SEG_C | SEG_F | SEG_G
#define CYFRA_5 SEG_A | SEG_F | SEG_C | SEG_G | SEG_D
#define CYFRA_6 SEG_A | SEG_C | SEG_D | SEG_E | SEG_F | SEG_G
#define CYFRA_7 SEG_A | SEG_B | SEG_C
#define CYFRA_8 SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F | SEG_G
#define CYFRA_9 SEG_A | SEG_B | SEG_C | SEG_D | SEG_F | SEG_G

#endif