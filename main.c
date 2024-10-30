#include <msp430.h>
#include "GPIO_Driver.h".

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;

    gpioInitOut(1, BIT0);
    gpioInitOut(6, BIT6);

    gpioInitIn(4, BIT1);
    gpioInitIn(2, BIT3);

    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                           // to activate previously configured port settings
    unsigned char value = 0;
    while(1){
        value = gpioInitStatus(4, BIT1);
        if(value == 0x00) {
            _delay_cycles(5000);
            gpioWrite(1, BIT0, 1);
        } else {
            gpioWrite(1, BIT0, 0);
        }
       _delay_cycles(5000);
    }
}

