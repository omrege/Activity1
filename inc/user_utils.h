#ifndef __user_utils_H_
#define __user_utils_H_
/**
 * @file user_utils.h
 * @author Om Rege (regeom.ec17@bmsce.ac.in)
 * @brief User defined utilities used across the project
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include<util/delay.h>
/**
 * @brief A function to generate delay in micro seconds
 * 
 * @param delay_time 
 */
void delay_ms(uint32_t delay_time);

#endif /* __user_utils_H__ */
