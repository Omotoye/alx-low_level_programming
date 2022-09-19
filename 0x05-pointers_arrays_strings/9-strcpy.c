#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string from one buffer to another
 * @dest: (char*) pointer to the destination buffer
 * @src: (char*) pointer to the source buffer.
 *
 * @brief A function string from a source buffer to a destination
 *     buffer and returns the pointer to the destination buffer
 * Return: (char*) pointer to the destination buffer.
 * @file 9-strcpy.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_strcpy(char *dest, char *src)
{
	char *_dest = dest;

	while (1)
	{
		*_dest = *src;
		if (*src == '\0')
			break;
		src++;
		_dest++;
	}
	return (dest);
}
