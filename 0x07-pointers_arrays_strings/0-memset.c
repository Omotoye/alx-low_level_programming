#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: (char*) pointer to a char buffer
 * @b: (char) the character to filled the buffer with
 * @n: (int) the number of bytes of the memory to be filed
 *
 * @brief A function that fills the first n bytes of the
 *      memory area pointed to by s with the constant byte b
 * Return: (char*) pointer to the memory area of s
 * @file 0-memset.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
