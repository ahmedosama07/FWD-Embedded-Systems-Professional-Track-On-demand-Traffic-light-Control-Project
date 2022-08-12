/*
 * On-demand Traffic light control.c
 *
 * Created: 8/10/2022 9:25:37 PM
 * Author : LEGION
 */ 

#define F_CPU 1000000U


#include "Registers.h"
#include "App.h"
#include <avr/interrupt.h>







// Interrupt
ISR(INT0_vect)
{
	pedisterian_mode = 1;
	ped();
}

int main(void)
{
    // Initializing interrupt
	GICR = 1<<INT0;
	MCUCR = 1<<ISC01 | 1<<ISC00;
	
	sei();
	
	App_start();
}

