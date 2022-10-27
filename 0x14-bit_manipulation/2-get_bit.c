#include "main.h"

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
int get_bit(unsigned long int n, unsigned int index)
{
	while (n)
	{
		if (!index)
			return (n & 1);
		index--;
		n >>= 1;
	}
	return (-1);
}
