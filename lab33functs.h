/** lab33functs.h
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Lab 33
* Documentation: DOC STATEMENT
* ===========================================================  */

#ifndef LAB33_H
#define LAB33_H

#include <stdio.h>
#include <stdint.h>
#include <string.h>

/** ----------------------------------------------------------
 * @fn void print_bits(void* ptr, int num_bytes)
 * @brief prints char representation of any variables individual bits
 * @param ptr is a pointer to the variable being printed
 * @param num_bytes is the number of bytes in the variable
 * @return void, prints each bit as a character, ends with a new line
 * ----------------------------------------------------------
 */
void print_bits(void* ptr, int num_bytes);

int check_bit(int value, int bit); 

int count_bits(int value);

int bit_parity(int value);

int flip_bit(int value, int bit);

unsigned int simple_checksum(char* string);

#endif //LAB33_H