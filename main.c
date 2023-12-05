/*
 * main.c
 *
 * Created: 12/4/2023 10:42:59 PM
 *  Author: EECE
 */ 
#define F_CPU 8000000UL

#include <util/delay.h>
#include "HAL/seven segment/seven segment initial.h"

int main(void)
{
	SS_voidInit(DIO_PORTA );//INIT  SS1
	SS_voidInit(DIO_PORTC);//INIIT  SS2
    while(1)
    {
			for(s16 counter=99;counter>0;counter--)
			{
					SS_voidDisp2digts(DIO_PORTA,DIO_PORTC, counter);
					_delay_ms(delaytime);
			}
			
	}
	return 0;
}