#ifndef __TIMER1_H__
#define __TIMER1_H__
#include <reg51.h>

void init_timer1();
void set_sq_wave(unsigned int freq);
void start_timer1();
void stop_timer1();
#endif