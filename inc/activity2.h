/**
 * @file activity2.h
 * @author Om Rege (regeom.ec17@bmsce.ac.in)
 * @brief A header file for Reading ADC values.
 * @version 0.1
 * @date 2021-04-29
 *
 * @copyright Copyright (c) 2021
 *
 */
#ifndef _activity2_H_
#define _activity2_H_

#include <avr/io.h>

/**
 * @brief A function to read ADC values.
 *
 */
uint16_t ReadAdc(uint8_t ch);
/**
 * @brief A function to initialize the ADC.
 *
 */
void InitAdc();
#endif
