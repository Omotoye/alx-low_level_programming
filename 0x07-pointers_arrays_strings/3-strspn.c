#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: (char*) pointer to a string
 * @accept: (char*) accepted character.
 *
 * @brief A function that returns the number of bytes in the initial
 *     segment of s which consist only of bytes from accept
 * Return: (char*) length of prefix substring
 * @file 3-strspn.c
 * @author Omotoye Shamsudeen Adekoya
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte_count = 0;
	unsigned int byte_found = 0;
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (*(accept + i) != '\0')
		{
			if (*s == *(accept + i))
			{
				byte_found++;
				break;
			}
			i++;
		}

		if (byte_found)
		{
			byte_count++;
			byte_found--;
		}
		else
		{
			break;
		}
		s++;
	}
	return (byte_count);
}
