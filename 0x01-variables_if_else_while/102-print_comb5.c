#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - Entry point
 * Description: a program to print all possible different combination
 *     of two digit numbers
 * Return: Always 0 (Success)
 * Author: Omotoye Shamsudeen Adekoya
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					if (!((a == c && b == d) || (b == c && a == d)))
					{
						putchar((c + '0'));
						putchar((d + '0'));
						putchar(' ');
						putchar((a + '0'));
						putchar((b + '0'));
					if (a != 9 || b != 9 || c != 9 || d != 8)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
