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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i < j)
			{
				putchar((i + '0'));
				putchar((j + '0'));
				if ((i != 8) || (j != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
