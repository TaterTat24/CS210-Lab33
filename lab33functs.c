/** lab33functs.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Lab 33
* ===========================================================  */

#include "lab33functs.h"
#include <string.h>

/** ----------------------------------------------------------
 * @fn void print_bits(void* ptr, int num_bytes)
 * @brief prints char representation of any variables individual bits
 * @param ptr is a pointer to the variable being printed
 * @param num_bytes is the number of bytes in the variable
 * @return void, prints each bit as a character, ends with a new line
 * ----------------------------------------------------------
 */
void print_bits(void* ptr, int num_bytes){
    // Cast the pointer as an unsigned byte
    uint8_t* byte = ptr;

    // For each byte, (bytes are little endian ordered)
    for (int i = num_bytes - 1; i >= 0; --i) {

        // For each bit, (inside the byte, bits are big endian ordered)
        for (int j = 7; j >= 0; --j) {

            // Print a character 1 or 0, given the bit value
            printf("%c", (byte[i] >> j) & 1 ? '1' : '0');
        }
        
        // Separate bytes
        printf(" ");
    }

    // End with a new line
    printf("\n");
}

int check_bit(int value, int bit){
    return ((value >> bit) & 1);
}

int count_bits(int value) {
    int numberof1s = 0;

    for (int i = 0; i < sizeof(value)*8; i++){
        if (check_bit(value, i) == 1){
            numberof1s = numberof1s + 1;
        }
    }

    return numberof1s;
}

int bit_parity(int value){
    int numberof1s = 0;

    numberof1s = count_bits(value);

    if (numberof1s%2 == 0) {
        return 0;
    }
    else{
        return 1;
    }
}

int flip_bit(int value, int bit){
    return value ^ (1 << bit);
}

unsigned int simple_checksum(char* string){
    int result = string[0] ^ string[1];

    for (int i = 2; i < strlen(string); i++) {
        result = result ^ string[i];
    }

    return result;
}