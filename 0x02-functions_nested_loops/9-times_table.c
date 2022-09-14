#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 * @brief A function that prints the 9 times table
 * Return: (void)
 * @file 9-times_table.c
 * @author Omotoye Shamsudeen Adekoya
 */
void times_table(void)
{
	int i;
	int j;
	int product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;

			if (product > 9 && j != 0)
			{
				printf(" %d", (product));
			}
			else if (product < 10 && j != 0)
			{
				printf("  %d", (product));
			}
			else
			{
				printf("%d", product);
			}
			if (j != 9)
			{
				putchar(',');
			}
		}
		putchar('\n');
	}
}
