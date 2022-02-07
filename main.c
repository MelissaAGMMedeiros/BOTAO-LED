/*
 * File:   main.c
 * Author: 21193460
 *
 * Created on 4 de Fevereiro de 2022, 12:09
 */


#include <xc.h>
#include "config.h"

#define _XTAL_FREQ_ 4000000

#define LEDUP PORTDbits.RD0
#define BTUP PORTDbits.RD3

void main(void) 
{
    LEDUP = 0;
    BTUP = 0;
    TRISDbits.TRISD0 = 0;
    TRISDbits.TRISD3 = 1;
    
    while(1)
    {
        if (BTUP == 0)
            LEDUP = 0;
        else 
            LEDUP = 1;
    }
    
}
