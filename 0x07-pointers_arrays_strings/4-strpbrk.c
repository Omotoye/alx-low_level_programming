#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: (char*) pointer to a string
 * @accept: (char*) set of accepted character.
 *
 * @brief A function that locates the first occurence in the string s
 *     of any of the bytes in the string accept.
 * Return: (char*) a pointer to the byte in s that matches one of the
 *     bytes in accept, or NULL if no such byte is found
 * @file 4-strpbrk.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (*(accept + i) != '\0')
		{
			if (*s == *(accept + i))
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (NULL);
}
