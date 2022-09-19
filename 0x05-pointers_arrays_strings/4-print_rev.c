#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: (char*) pointer to the string to be printed in reverse
 *
 * @brief A function that takes in a string and prints it
 *     to stdout in reverse
 * Return: (void)
 * @file 4-print_rev.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_rev(char *s)
{
	int n = strlen(s);

	while (n >= 0)
	{
		--n;
		putchar(*(s + n));
	}
	putchar('\n');
}