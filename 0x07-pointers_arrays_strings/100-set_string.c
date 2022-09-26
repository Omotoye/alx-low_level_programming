#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: (char**) pointer to a pointer of char
 * @to: (char*) pointer to a char
 *
 * @brief A function that sets the value of a pointer to a char
 * Return: (void))
 * @file 100-set-string.c
 * @author Omotoye Shamsudeen Adekoya
 */
void set_string(char **s, char *to)
{
	int i = 0;

	while (*(*s) != '\0')
	{
		*(to + i) = *(*s + i);
		i++;
	}
}
