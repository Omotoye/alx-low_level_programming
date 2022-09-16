#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print 0-9 except 2 and 4
 * @brief A function that prints numbers from 0 - 9
 *     excluding 2 and 4
 * Return: (void)
 * @file 4-print_most_numbers.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
}
