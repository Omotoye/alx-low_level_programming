#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate string from one buffer to another
 * @dest: (char*) pointer to the destination buffer
 * @src: (char*) pointer to the source buffer.
 *
 * @brief A function that concatenates string from a source buffer to a
 *     destination buffer and returns the pointer to the destination buffer
 * Return: (char*) pointer to the destination buffer.
 * @file 0-strcat.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_strcat(char *dest, char *src)
{
	char *_dest = dest;
	int start_cat = 0;

	while (1)
	{
		if (*_dest == '\0' && start_cat == 0)
		{
			start_cat = 1;
			*_dest = *src;
		}

		else if (start_cat == 1)
		{
			*_dest = *src;
			if (*src == '\0')
			{
				break;
			}
			src++;
		}
		_dest++;
	}
	return (dest);
}
