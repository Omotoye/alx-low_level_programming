#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural number to 98
 * @n: (int) the number to count from
 * @brief A function that prints all natural numbers
 *     from n to 98, followed by a new line.
 * Return: (void)
 * @file 11-print_to_98.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_to_98(int n)
{
	while (1)
	{
		if (n == 98)
		{
			printf("%d", n);
			break;
		}
		printf("%d", n);
		putchar(',');
		putchar(' ');
		if (n > 98)
		{
			n--;
		}
		else if (n < 98)
		{
			n++;
		}
	}
	putchar('\n');
}
