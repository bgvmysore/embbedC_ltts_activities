/**
 * @file activity1.h
 * @author Bhargav R
 * @brief This activity is to sence 2 input and should actuate LED if both inputs are high.
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _ACTIVITY_1_
#define _ACTIVITY_1_

#define __AVR_ATmega328__
#include <avr/io.h>

/**
 * @brief This function used pins B0, B1, B2.
 * Sets the directions of pins B1, B2 as input and pin B0 output
 * Also initalizers the pin B1, B2 to high and B0 to low
 */
void activity1_init();

/**
 * @brief This function outputs high in pin B0 if both pin B1 and B2 are pulled low.
 */
void activity1_loop();

#endif