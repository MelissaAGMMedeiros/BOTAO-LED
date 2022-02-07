/*
 * File:   main.c
 * Author: 21193460
 *
 * Created on 4 de Fevereiro de 2022, 12:09
 */


#include <xc.h>
#include "config.h"

#define _XTAL_FREQ_ 4000000

#define LED PORTDbits.RD0
#define BT PORTDbits.RD3

void main(void) 
{
    LED = 0;
    TRISDbits.TRISD0 = 0;
    TRISDbits.TRISD3 = 1;
    
    while(1)
    {
        LED = BT;
    }
    
}
