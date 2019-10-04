/*	Author: fbwog001
 *  Partner(s) Name: David Perez
 *	Lab Section:022
 *	Assignment: Lab #2  Exercise #0
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
    DDRB = 0xFF; PORTA = 0xFF; // Configure port B's 8 pins as outputs
    PORTB = 0x00; PORTB = 0x00; // Initialize PORTB output to 0’s
    unsigned char temp_input = 0x00;
    /* Insert your solution below */
    while (1) {
        temp_input = PINA;
	PORTB = temp_input; // Writes port B's 8 pins with 00001111	
    }

    return 1;
}
