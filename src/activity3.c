/**
 * @file activity3.c
 * @author Om Rege (regeom.ec17@bmsce.ac.in)
 * @brief A file where PWM is implemented
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include <util/delay.h>
#include <activity3.h>
/**
 * @brief A function which receives temperature input from sensor and computes output
 * 
 * @param val 
 */
void activity3(uint16_t val)
{
    TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);//configure as fast PWM output port, channel A
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);//pre-scale timer1
    // Insert code
    int i;
    char temp[10];
    DDRB|=(1<<PB1);//set PWM as output

    if((val>=0) && (val<=209)){
        OCR1A = 205; //20% duty cycle
        temp[0] = '2';
        temp[1] = '0';
        temp[2] = 176;
        temp[3] = 'C';
        temp[4] = ' ';
        temp[5] = '\0';
        for(i=0;i<=5;i++){
            writechar(temp[i]);
        }
         _delay_ms(20);
    }
     else if((val>=210) && (val<=509)){
         OCR1A = 410; //40% duty cycle
         temp[0] = '2';
        temp[1] = '5';
        temp[2] = 176;
        temp[3] = 'C';
        temp[4] = ' ';
        temp[5] = '\0';
        for(i=0;i<=5;i++){
            writechar(temp[i]);
        }
         _delay_ms(20);
     }
     else if((val>=510) && (val<=709)){
         OCR1A = 717; //70% duty cycle
         temp[0] = '2';
        temp[1] = '9';
        temp[2] = 176;
        temp[3] = 'C';
        temp[4] = ' ';
        temp[5] = '\0';
        for(i=0;i<=5;i++){
            writechar(temp[i]);
        }
         _delay_ms(20);
     }
     else if((val>=710) && (val<=1024)){
         OCR1A = 973; //95% duty cycle
         temp[0] = '3';
        temp[1] = '3';
        temp[2] = 176;
        temp[3] = 'C';
        temp[4] = ' ';
        temp[5] = '\0';
        for(i=0;i<=5;i++){
            writechar(temp[i]);
        }
         _delay_ms(20);
     }
     else{
         OCR1A = 0; //0% output
     }


}
