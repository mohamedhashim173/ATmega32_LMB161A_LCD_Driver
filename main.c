/*
 * main.c
 *
 *  Created on: Oct 3, 2022
 *      Author: MSAEED99
 */
#define num		5000231

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "LCD_interface.h"


void main(void)
{
	LCD_voidInit();

	LCD_voidWriteNum(num);

	while(1)
	{
		// Super loop
	}
}





