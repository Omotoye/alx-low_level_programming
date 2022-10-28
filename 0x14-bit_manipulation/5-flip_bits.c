#include "main.h"

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
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int required_bit_to_filp_count = 0;

	n ^= m; /* using XOR to get bit with opposite value*/
	while (n)
	{
		required_bit_to_filp_count++;
		n = n & (n - 1); /* remove the LSB */
	}
	return (required_bit_to_filp_count);
}
