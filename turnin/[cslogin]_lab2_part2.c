/*	Author: fbwog001
 *  Partner(s) Name: Festo Bwogi
 *	Lab Section:022
 *	Assignment: Lab #2  Exercise #1
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;

    unsigned char space1 = 0x00;
    unsigned char space2 = 0x00;
    unsigned char space3 = 0x00;
    unsigned char space4 = 0x00;
    unsigned char cntavail = 0x00;    
/* Insert your solution below */
    while (1) {
	space1 = PINA&0x01;
	space2 = (PINA&0x02) >> 1;
	space3 = (PINA&0x04) >> 2;
	space4 = (PINA&0x08) >> 3;

	/*if(space1 == 0x00) {
		cntavail = cntavail + 0x01; 
	}		
	if(space2 == 0x00) {
		cntavail = cntavail + 0x01;
	}
	if(space3 == 0x00) {
		cntavail = cntavail+ 0x01;
	}
	if(space4 == 0x00) {
		cntavail = cntavail+ 0x01;
	}*/

	cntavail = 0x04 - (space1 + space2 + space3 + space4);
	PORTC = cntavail;
    }
    return 0;
}
