#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - print every other char of a string
 * @str: (char*) pointer to the string to be printed
 *
 * @brief A function that prints every other character of a string
 *     starting with the first character, followed by a newline.
 * Return: (void)
 * @file 6-puts2.c
 * @author Omotoye Shamsudeen Adekoya
 */
void puts2(char *str)
{
	int skip = 0;

	while (*str != '\0')
	{
		if (skip == 0)
		{
			putchar(*str);
			skip = 1;
		}
		else
			skip = 0;
		str++;
	}
	putchar('\n');
}
