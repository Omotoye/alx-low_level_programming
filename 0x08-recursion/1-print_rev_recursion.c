#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: (char*) pointer to the string to be printed
 *
 * @brief A function that prints a string in reverse
 *     with a recursive function
 * Return: (void)
 * @file 0_print_rev_recursion.c
 * @author Omotoye Shamsudeen Adekoya
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(*(s - 1));
	}
}
