#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenate string from one buffer to another
 * @dest: (char*) pointer to the destination buffer
 * @src: (char*) pointer to the source buffer.
 * @n: (int) number of bytes to be used from the source buffer
 *
 * @brief A function that concatenates string from a source buffer to a
 *     destination buffer, it will use at most n bytes from src and
 *     returns the pointer to the destination buffer
 * Return: (char*) pointer to the destination buffer.
 * @file 1-strncat.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_strncat(char *dest, char *src, int n)
{
	char *_dest = dest;
	int start_cat = 0;
	int src_byte_count = 0;

	if (n <= 0)
	{
		return (dest);
	}

	while (1)
	{
		if (*_dest == '\0' && start_cat == 0)
		{
			start_cat = 1;
			*_dest = *src;
			src++;
			src_byte_count++;
		}

		else if (start_cat == 1)
		{
			if (src_byte_count == n || *src == '\0')
			{
				break;
			}
			*_dest = *src;
			src_byte_count++;
			src++;
		}
		_dest++;
	}
	return (dest);
}
