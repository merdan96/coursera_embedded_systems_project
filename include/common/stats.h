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
 * @brief prints the stats of the data set
 *
 * takes the data calculated by the other function tools
 * and prints them to the screen
 *
 * @param min the minimum value of the dataset
 * @param max the maxmum value of the dataset
 * @param mean the mean value of the dataset
 * @param median the median value of the dataset
 *
 * @return returns nothing, prints directly to the screen
 */
void print_statistics(uint8_t min, uint8_t max, uint8_t mean, uint8_t median);

/**
 * @brief prints the array
 *
 * given the pointer to the array and its size
 * it prints the elemnts of the array in a neat manner
 *
 * @param data pointer to the first element of the array
 * @param length the size of the array
 *
 * @return returns nothing, prints directly to the screen
 */
void print_array(uint8_t* data, uint16_t length);

/**
 * @brief finds the minimum value
 *
 * given the pointer to the array and its size
 * it searches the array for the minimum value element
 *
 * @param data pointer to the first element of the array
 * @param length the size of the array
 *
 * @return returns the minimum element value
 */
uint8_t find_minimum(uint8_t* data, uint16_t length);

/**
 * @brief finds the maximum value
 *
 * given the pointer to the array and its size
 * it searches the array for the maximum value element
 *
 * @param data pointer to the first element of the array
 * @param length the size of the array
 *
 * @return returns the maximum element value
 */
uint8_t find_maximum(uint8_t* data, uint16_t length);

/**
 * @brief finds the mean value
 *
 * given the pointer to the array and its size
 * it calculates the mean value of all the elemnts in the array
 *
 * @param data pointer to the first element of the array
 * @param length the size of the array
 *
 * @return returns the mean value of the dataset
 */
uint8_t find_mean(uint8_t* data, uint16_t length);

/**
 * @brief finds the median value
 *
 * given the pointer to the array and its size
 * it searches the array for the median value
 *
 * @param data pointer to the first element of the array
 * @param length the size of the array
 *
 * @return returns the median element value
 */
uint8_t find_median(uint8_t* data, uint16_t length);

/**
 * @brief sorts the array
 *
 * given the pointer to the array and its size
 * it sorts the elements of the array from largest to smallest
 *
 * @param data pointer to the first element of the array
 * @param length the size of the array
 *
 * @return returns nothing, changes are made directly to the original array
 */
void sort_array(uint8_t* data, uint16_t length);
#endif /* __STATS_H__ */
