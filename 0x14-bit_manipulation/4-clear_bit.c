#include "main.h"

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
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask = 1;

	while (n != NULL && index < 64)
	{
		if (!index)
		{
			*n &= ~bit_mask;
			return (1);
		}
		index--;
		bit_mask <<= 1;
	}
	return (-1);
}
