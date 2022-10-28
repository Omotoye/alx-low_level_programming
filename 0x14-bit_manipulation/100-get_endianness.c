#include "main.h"

/**
 * get_endianness - Check the Endianess of a machine
 *
 * @brief A function that checks the endianess of the system
 *     whether little or Big Endian
 * Return: (int) 0 if big endian 1 if little endian
 * @file 5-flip_bit.c
 * @author Omotoye Shamsudeen Adekoya
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	return ((int)*c);
}
