#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies string from one buffer to another
 * @dest: (char*) pointer to the destination buffer
 * @src: (char*) pointer to the source buffer.
 * @n: (int) number of bytes to be copied from source
 *
 * @brief A function that copies a string from a source buffer to a
 *     destination buffer and returns the pointer to the destination buffer
 * Return: (char*) pointer to the destination buffer.
 * @file 2-strncpy.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_strncpy(char *dest, char *src, int n)
{
	int bytes_copied = 0;
	char *_dest = dest;

	if (n <= 0)
	{
		return (dest);
	}

	while (1)
	{
		*_dest = *src;
		bytes_copied++;
		if (*src == '\0')
			break;
		else if (bytes_copied == n)
		{
			_dest++;
			*_dest = '\0';
			break;
		}
		src++;
		_dest++;
	}
	return (dest);
}
