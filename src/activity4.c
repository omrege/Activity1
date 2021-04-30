/**
 * @file activity4.c
 * @author Om Rege (regeom.ec17@bmsce.ac.in)
 * @brief A file where serial communication is implemented
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include "activity4.h"
/**
 * @brief function to initialize UART communication
 * 
 * @param ubrr_value 
 */
void UARTinit(uint16_t ubrr_value){

    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&(0x00ff);
    UART_CHARACTER_SIZE; // 8 bit size of data
    UART_ENABLED; //enable rx and tx of uart with interrupts

}
/**
 * @brief function to read incoming characters
 * 
 * @return char 
 */

char UARTreadchar(){

while(UART_DATA_NOT_RECEIVED){

}

return UDR0;

}
/**
 * @brief function to write characters.
 * 
 * @param data 
 */

void writechar(char data){

while(UART_DATA_NOT_WRITTEN){

}
UDR0 = data;

}
