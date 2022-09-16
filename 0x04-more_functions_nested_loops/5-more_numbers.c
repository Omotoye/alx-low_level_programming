#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 0-14 ten times
 * @brief A function that prints numbers from 0 - 14
 *     10 times.
 * Return: (void)
 * @file 5-more_numbers.c
 * @author Omotoye Shamsudeen Adekoya
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				putchar('1');
				putchar((j % 10) + '0');
			}

			else
			{
				putchar(j + '0');
			}
		}
		putchar('\n');
	}
}
