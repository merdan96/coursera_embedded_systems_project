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
#ifndef __DATA_H__
#define __DATA_H__

#include <stdint.h>
#include "platform.h"

#define NEGATIVE 4294967296
#define POSITIVE 2147483647

//static const uint8_t CHARS[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

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
 * @return uint8_t length of the output string
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
 * @return int32_t output data
 */
int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);


/**
 * @brief Finds a char's index
 *
 * Given the character, it looks up its index in the predefined
 * characters array
 *
 * @param ch character
 *
 * @return uint8_t character index
 */
uint8_t get_index(uint8_t ch);
#endif /* __DATA_H__ */
