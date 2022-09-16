#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print diagonal line
 * @n: (int) the number of underscore (\) to be printed
 *
 * @brief A function that draws a diagonal line on the
 *     terminal based on the number n given to it as
 *         argument
 * Return: (void)
 * @file 7-print_diagonal.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_diagonal(int n)
{
	int i;
	int space_count = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (n > 0)
	{
		for (i = 0; i < space_count; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		n--;
		space_count++;
	}
}
