#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRD=0x00;
    DDRB=0x03;
    PORTD=0x01;
    // Insert code

    while(1){
        if(!(PIND&0x01)){
            PORTB=0X01;
        }
        else{
            PORTB=0x02;
        }

    }

    return 0;
}
