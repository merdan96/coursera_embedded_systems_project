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
 * @file stats.c
 * @brief functions definitions
 *
 * this file contains the function defenitions for the string conversion tools
 *
 * @author Mohamed Merdan
 * @date 11/6/2020
 *
 */

#include <stdint.h>
#include "data.h"
#include "memory.h"

static const uint8_t CHARS[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

uint8_t get_index(uint8_t ch) {
	for(uint8_t i = 0;i < 16;i++)
		if(CHARS[i] == ch)
			return i;

	return 0;
}

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base) {
	if(data < 0)
		data += NEGATIVE;

	size_t n = 0;
	while(data){
		*(ptr + n) = CHARS[data % base];
		data /= base;
		n++;
	}
	*(ptr + n) = 0;
	my_reverse(ptr, n);
	return n;
}

int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base) {
	int32_t integer = 0;
	uint32_t multiplier = 1;

	while(digits){
		digits--;
		integer += get_index(*(ptr + digits)) * multiplier;
		multiplier *= base;
	}
	if(integer > POSITIVE)
		return (-1 * (NEGATIVE - integer));

	return integer;
}
