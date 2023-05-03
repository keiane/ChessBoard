//working code for sn74ls164n
#include <msp430.h>
#include <GPIOINIT.h>
#define SERIAL BIT4 //   P1.4
#define SERIAL2 BIT5 //   P1.5
#define CLR BIT6  //   P1.6
#define CLK BIT7   //   P1.7

void CLK_Pulse (void);   //To create a clock pulse for Storage Reg
int i;
int x = 0;

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;
    P1DIR |= SERIAL + SERIAL2 + CLR + CLK;
    gpioInit();
    P1OUT = 0x00;
    while (1){
        P1OUT |= SERIAL;
        P1OUT |= SERIAL;
        P1OUT |= SERIAL2;
        P1OUT |= SERIAL2;
        P1DIR ^= CLR;

            for (i = 0; i < 8; i++){
                P1OUT |= SERIAL;
                CLK_Pulse();
                P1OUT ^= SERIAL;
                __delay_cycles(100000);
           }

    }

}

void CLK_Pulse (void)
{
  P1OUT |= CLK;
  P1OUT ^= CLK;
}
