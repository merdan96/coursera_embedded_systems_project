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
 * @file memory.h
 * @brief Abstraction of memory read and write operations
 *
 * This header file provides an abstraction of reading and
 * writing to memory via function calls. 
 *
 * @author Alex Fosdick
 * @date April 1 2017
 * 
 * Added memory manipulation function
 * @auther Mohamed Merdan
 * @date 11/6/2020
 */
#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <stdint.h>

/**
 * @brief Moves data from one array to another
 *
 * Given a src and a dst pointer it moves data from source to dstination
 * while handling memory overlap problem.
 *
 * @param src Pointer to source data array
 * @param dst Pointer to destination data array
 * @param length length of data in the source and destination arrays
 *
 * @return uint8* pointer to destination array.
 */
uint8_t * my_memmove(uint8_t * src, uint8_t * dst, size_t length);


/**
 * @brief Copies data from one array to another
 *
 * Given a src and a dst pointer it copies data from source to dstination
 * without handling memory overlap problem.
 *
 * @param src Pointer to source data array
 * @param dst Pointer to destination data array
 * @param length length of data in the source and destination arrays
 *
 * @return uint8* pointer to destination array.
 */
uint8_t * my_memcopy(uint8_t * src, uint8_t * dst, size_t length);


/**
 * @brief Sets array elements to a specific value
 *
 * Given a src pointer, sets all the elements of the array to the given value
 *
 * @param src Pointer to source data array
 * @param length length of data in the source array
 * @param value value to set to all elements
 *
 * @return uint8* pointer to source array.
 */
uint8_t * my_memset(uint8_t * src, size_t length, uint8_t value);


/**
 * @brief Sets array elements to a zero
 *
 * Given a src pointer, sets all the elements of the array to zero
 *
 * @param src Pointer to source data array
 * @param length length of data in the source array
 *
 * @return uint8* pointer to source array.
 */
uint8_t * my_memzero(uint8_t * src, size_t length);


/**
 * @brief Reverses the order of the array
 *
 * Given a src pointer, reverses the order of all elements in the array
 *
 * @param src Pointer to source data array
 * @param length length of data in the source array
 *
 * @return uint8* pointer to source array.
 */
uint8_t * my_reverse(uint8_t * src, size_t length);


/**
 * @brief Allocates dynamic memory
 *
 * Given a data length, allocates "length" number of words dynamically
 *
 * @param length length of data to allocate
 *
 * @return uint8* pointer to source array.
 */
int32_t* reserve_words(size_t length);


/**
 * @brief deallocates dynamic memory
 *
 * Given a src pointer, deallocates memory previously allocated
 *
 * @param src Pointer to source data array
 *
 * @return void.
 */
void free_words(int32_t* src);


/**
 * @brief Sets a value of a data array 
 *
 * Given a pointer to a char data set, this will set a provided
 * index into that data set to the value provided.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 * @param value value to write the the locaiton
 *
 * @return void.
 */
void set_value(char * ptr, unsigned int index, char value);

/**
 * @brief Clear a value of a data array 
 *
 * Given a pointer to a char data set, this will clear a provided
 * index into that data set to the value zero.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 *
 * @return void.
 */
void clear_value(char * ptr, unsigned int index);

/**
 * @brief Returns a value of a data array 
 *
 * Given a pointer to a char data set, this will read the provided
 * index into that data set and return the value.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 *
 * @return Value to be read.
 */
char get_value(char * ptr, unsigned int index);

/**
 * @brief Sets data array elements to a value
 *
 * Given a pointer to a char data set, this will set a number of elements
 * from a provided data array to the given value. The length is determined
 * by the provided size parameter.
 *
 * @param ptr Pointer to data array
 * @param value value to write the the locaiton
 * @param size Number of elements to set to value
 *
 * @return void.
 */
void set_all(char * ptr, char value, unsigned int size);

/**
 * @brief Clears elements in a data array
 *
 * Given a pointer to a char data set, this will set a clear a number
 * of elements given the size provided. Clear means to set to zero. 
 *
 * @param ptr Pointer to data array
 * @param size Number of elements to set to zero
 *
 * @return void.
 */
void clear_all(char * ptr, unsigned int size);

#endif /* __MEMORY_H__ */
