#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - print the second half of a string
 * @str: (char*) pointer to the string to be printed
 *
 * @brief A function that prints the second half of a string.
 * Return: (void)
 * @file 7-puts_half.c
 * @author Omotoye Shamsudeen Adekoya
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n = len - (len / 2);

	str = str + n;

	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
