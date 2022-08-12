/*
 * Timer.h
 *
 * Created: 8/11/2022 2:11:13 PM
 *  Author: LEGION
 */ 


#ifndef TIMER_H_
#define TIMER_H_
#include "../../Registers.h"

#ifndef F_CPU
#define F_CPU 1000000UL
#endif

void Timer0_init();								// Initialize timer0
void Timer0_start_no_prescalar();				// Start timer0 with no prescalar


#endif /* TIMER_H_ */