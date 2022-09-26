#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: (char*) pointer to destination buffer
 * @src: (char*) pointer to the source buffer
 * @n: (int) the number of bytes of the memory to be copied
 *
 * @brief A function that copies n bytes from memory area src
 *     to memory area dest
 * Return: (char*) pointer to the destination buffer
 * @file 0-memcpy.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
