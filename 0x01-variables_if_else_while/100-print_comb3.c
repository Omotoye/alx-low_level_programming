#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a program to print all possible different combination
 *     of two digit numbers
 * Return: Always 0 (Success)
 * Author: Omotoye Shamsudeen Adekoya
 */

int main(void)
{
	int i;
	int j;
	int skip_count = 1;
	int level = 1;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (skip_count == 0)
			{
				putchar((i + '0'));
				putchar((j + '0'));
					if (level != 9)
					{
						putchar(',');
						putchar(' ');
					}
			}
			else
			{
				skip_count--;
			}
		}
		level++;
		skip_count = level;
	}
	putchar('\n');
	return (0);
}
