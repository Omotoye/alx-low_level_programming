#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _putchar - puts character in stdout
 * @c: (char) the character to be printed
 *
 * @brief A function to put a character into the standard
 *     output file.
 * Return: (void)
 * @file _putchar.c
 * @author Omotoye Shamsudeen Adekoya
 */
void _putchar(char c);

/**
 * print_binary - prints the binary of a number
 * @n: (unsigned long int) the decimal number to be converted to
 *     bianry
 *
 * @brief A function that takes in a decimal number and prints
 *     the binary representation of that number
 * Return: (void)
 * @file 1-print_binary.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_binary(unsigned long int n);

/**
 * get_bit - get bit at a given index
 * @n: (unsigned long int) the number to get bit from
 * @index: (unsigned int) the index to get the bit from
 *
 * @brief A function that returns the value of a bit at
 *     a given index
 * Return: (int) the value of the bit at the given index
 * @file 2-get_bit.c
 * @author Omotoye Shamsudeen Adekoya
 */
int get_bit(unsigned long int n, unsigned int index);

/**
 * set_bit - set bit to 1 at a given index
 * @n: (unsigned long int) the number to set bit from
 * @index: (unsigned int) the index to set the bit at
 *
 * @brief A function that set the value of a bit to `1` at
 *     a given index
 * Return: (int) 1 if successful -1 if not successful
 * @file 3-set_bit.c
 * @author Omotoye Shamsudeen Adekoya
 */
int set_bit(unsigned long int *n, unsigned int index);

/**
 * clear_bit - clear bit at a given index
 * @n: (unsigned long int) the number to clear bit from
 * @index: (unsigned int) the index to clear the bit from
 *
 * @brief A function that sets the value of a bit to 0 at
 *     a given index
 * Return: (int) 1 of successful -1 if not successful
 * @file 4-clear_bit.c
 * @author Omotoye Shamsudeen Adekoya
 */
int clear_bit(unsigned long int *n, unsigned int index);

/**
 * flip_bits - returns number of bits to flip to get a num
 * @n: (unsigned long int) first number to check for flip
 * @m: (unsigned long int) second number to check for flip
 *
 * @brief A function that returns the number of bits that would
 *     need to be flipped to get from one number to another
 * Return: (unsigned int) number of bits to flip
 * @file 5-flip_bit.c
 * @author Omotoye Shamsudeen Adekoya
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif /* MAIN_H*/
