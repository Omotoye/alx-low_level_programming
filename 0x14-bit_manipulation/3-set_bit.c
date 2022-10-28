#include "main.h"

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
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask = 1;

	while (n != NULL && index < 64)
	{
		if (!index)
		{
			*n |= bit_mask;
			return (1);
		}
		index--;
		bit_mask <<= 1;
	}
	return (-1);
}
