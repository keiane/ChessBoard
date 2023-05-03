/*
 * LED Chess Board: Keiane Balicanta, Andrew McGlynn, David Miller
 * Code designed by: Keiane Balicanta
 */
#include <msp430.h>
#include <GPIOINIT.h>

#define CS BIT1 //   P1.1 -> chip-level disables register clock and storage register clock
#define SHCLK BIT2 //   P1.2 -> shift register clock
#define RW BIT3 //   P1.3 -> read/write
#define STRCLR BIT4  //   P1.4 -> storage clear
#define STRCLK BIT5   //   P1.5 -> storage clock
#define SERIAL BIT6   //   P1.6 -> q15

void STRCLK_Pulse (void);
void SHCLK_Pulse (void);

int i;
int x = 0;

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;

    P1OUT = 0x00;
    P1DIR |= CS + SHCLK + RW + STRCLR + STRCLK + SERIAL;

    gpioInit();

    while (1){
        P1OUT &= ~CS;
        P1OUT &= ~RW;
        P1OUT &= ~SHCLK;
        P1OUT &= ~STRCLK;
        P1OUT &= ~SERIAL;
        P1DIR ^= STRCLR;
        /*
        for (i = 0; i < 10; i++){
            //SHCLK_Pulse();
            //STRCLK_Pulse();
            P1OUT ^= SHCLK;
            P1OUT ^= SERIAL;
            P1OUT |= STRCLK;
            __delay_cycles(100000);
            P1OUT |= STRCLR;
            P1OUT &= ~STRCLR;
        }

        */
        /*
        for (i = 0; i < 10; i++){
            SHCLK_Pulse();
            STRCLK_Pulse();
            P1OUT^= SERIAL;
            __delay_cycles(100000);
        }
        */
        if(!(P2IN & BIT0)){
            for (i = 0; i < 10; i++){
                SHCLK_Pulse();
                STRCLK_Pulse();
                P1OUT^= SERIAL;
                __delay_cycles(100000);
           }
        }
        if (!(P2IN & BIT1)){
            for (i = 0; i < 10; i++){
                SHCLK_Pulse();
                STRCLK_Pulse();
                P1OUT^= SERIAL;
                __delay_cycles(100000);
           }
        }

        if (!(P2IN & BIT2)){
            for (i = 0; i < 10; i++){
                SHCLK_Pulse();
                STRCLK_Pulse();
                P1OUT^= SERIAL;
                __delay_cycles(100000);
           }
        }

        if (!(P2IN & BIT4)){
            for (i = 0; i < 10; i++){
                SHCLK_Pulse();
                STRCLK_Pulse();
                P1OUT^= SERIAL;
                __delay_cycles(100000);
           }
        }
        //*/

    }

}

void SHCLK_Pulse (void)
{
  //P1OUT |= SHCLK;
  P1OUT ^= SHCLK;
}

void STRCLK_Pulse (void)
{
  P1OUT &= ~STRCLK;
  P1OUT ^= STRCLK;
}
