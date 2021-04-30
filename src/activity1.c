/**
 * @file activity1.c
 * @author Om Rege (regeom.ec17@bmsce.ac.in)
 * @brief A file where button and heater are implemented 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <util/delay.h>
#include <activity1.h>
/**
 * @brief A function to intialize input and output pins .
 * 
 */
void activity1()
{
    DDRD=0x00;
    DDRB=0x01;
    PORTD=0x03;
    // Insert code

}
