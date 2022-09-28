#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: (char*) pointer to the string to be printed
 *
 * @brief A function that prints a string and then a newline
 *     with a recursive function
 * Return: (void)
 * @file 0_puts_recursion.c
 * @author Omotoye Shamsudeen Adekoya
 */
void _puts_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
