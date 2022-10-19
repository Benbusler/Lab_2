#include <msp430.h>
#include <stdio.h>


/**
 * main.c
 */

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    int a = 0b;
    int b = 8;
    int c = a+b;
    //because an int in 4 bytes / 32 bits the size for an overflow
    //is 2^32 or 2147483647 for a numeric representation

    if(c >= 2147483647) //overflow
    {

    }
    else
    {

    }
    return 0;
}
