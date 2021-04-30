/**
 * @file activity2.c
 * @author Om Rege (regeom.ec17@bmsce.ac.in)
 * @brief A file where the ADC functions are implemented for temperature sensor
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include<util/delay.h>
#include <activity2.h>
/**
 * @brief Function to initialize the ADC.
 * 
 */
void InitAdc(){
ADMUX=(1<<REFS0);
ADCSRA=(1<<ADEN)|(7<<ADPS0);
}
/**
 * @brief Function to read the ADC
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t ReadAdc(uint8_t ch){
        ADMUX&=0xf8;
        ch=ch&0b00000111;
        ADMUX|=ch;

        ADCSRA|=(1<<ADSC);

        while(!(ADCSRA & (1<<ADIF)));

        ADCSRA|=(1<<ADIF);
        return(ADC);
}

