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
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		s = s + i;
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*s == *(accept + j))
			{
				byte_found = 1;
				break;
			}
			j++;
		}

		if (byte_found)
		{
			byte_count++;
			byte_found--;
		}
		i++;
	}
	return (byte_count);
}
