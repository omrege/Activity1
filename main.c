/**
 * @file main.c
 * @author Om Rege (regeom.ec17@bmsce.ac.in)
 * @brief Main program to execute heat control system in a car.
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>
#include <activity1.h>
#include <activity2.h>
#include <activity3.h>
/**
 * @brief main function
 * 
 * @return int 
 */
int main(void)
{   activity1();//Setting input and output pins
    InitAdc(); //Initialize the ADC
    uint16_t temp=0;
    while(1){
        if(!(PIND&0x03)){
            PORTB=0X01;
            temp=ReadAdc(0);
            activity3(temp);
        }
        else{
            PORTB=0x00;
        }

    }

    return 0;
}
