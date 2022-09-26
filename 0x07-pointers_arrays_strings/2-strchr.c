#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in string
 * @s: (char*) pointer to a string
 * @c: (char) character to locate
 *
 * @brief A function that locates and return the pointer to
 *     a character c in the string s.
 * Return: (char*) pointer to the character if found and NULL if
 *     not found
 * @file 2-strchr.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_strchr(char *s, char c)
{
	while ((*s != c) && (*s != '\0') && (s != NULL))
	{
		s++;
	}

	if (*s == '\0')
	{
		return (NULL);
	}
	else
	{
		return (s);
	}
}
