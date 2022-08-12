/*
 * Button.h
 *
 * Created: 8/11/2022 12:05:55 AM
 *  Author: LEGION
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_


#include "../../MCAL/DIO/DIO.h"


void Button_Init(DIO *button, uint8_t port_x, uint8_t mask);			// Initialize button
uint8_t ReadButton(DIO *button);										// Read button


#endif /* BUTTON_H_ */