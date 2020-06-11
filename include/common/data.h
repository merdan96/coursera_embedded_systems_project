/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief functions declaration
 *
 * this file contains the function declaration for the tools 
 * to be used in the main function
 *
 * @author Mohamed Merdan
 * @date 15/5/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

#include <stdint.h>
#include "platform.h"

/**
 * @brief Converts a integer into an ASCII String
 *
 * Given the data to be converted and its base, converts the integer 
 * into its ascii string equivelant
 *
 * @param data the data to be converted
 * @param ptr pointer to the string to be returned
 * @param base of the output data
 *
 * @return returns length of the output string
 */
uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);


/**
 * @brief Converts an ASCII String into a integer
 *
 * Given the string to be converted and its base, converts it 
 * into its integer equivelant
 *
 * @param ptr pointer to the string
 * @param digits number of digits in the string
 * @param base of the input data
 *
 * @return returns length of the output string
 */
int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);
#endif /* __STATS_H__ */
