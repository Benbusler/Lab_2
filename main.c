#include <msp430.h> 
#include <stdio.h> // im trying to get the variables to print
                   //out using printF, this was not working for some reason


float floatA = 10.2;
/**
 * main.c
 */

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer

	// part a
	int intA = 5;
	++intA;

	//part b
	++floatA;


	//part c
	unsigned char A = 0x41; //hex for A
	unsigned char B = 0x42; //hex for B

	//operations
	A++;
	B--;



	return 0;
}
