/*
 * gpioInit.h
 *
 *  Created on: May 2, 2023
 *      Author: kbali
 */

#ifndef GPIOINIT_H_
#define GPIOINIT_H_


void gpioInit(){
    P2DIR &= ~BIT0;             // Configure P2.0 to an Input
    P2REN |= BIT0;               // Enable Resistor on P2.0
    P2OUT &= ~BIT0;               // Configure Resistor on P2.0 to be Pullup

    P2DIR &= ~BIT1;             // Configure P2.1 to an Input
    P2REN |= BIT1;               // Enable Resistor on P2.1
    P2OUT &= ~BIT1;               // Configure Resistor on P2.1 to be Pullup

    P2DIR &= ~BIT2;             // Configure P2.2 to an Input
    P2REN |= BIT2;               // Enable Resistor on P2.2
    P2OUT &= ~BIT2;               // Configure Resistor on P2.2 to be Pullup

    P2DIR &= ~BIT4;             // Configure P2.4 to an Input
    P2REN |= BIT4;               // Enable Resistor on P2.4
    P2OUT &= ~BIT4;               // Configure Resistor on P2.4 to be Pullup

    P6DIR |= BIT6;              // Configure P6.6 to an Output
}


#endif /* GPIOINIT_H_ */
