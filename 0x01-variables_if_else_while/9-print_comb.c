#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a program to print all possible combination of
 *     single digit numbers
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
			putchar((i + '0'));
			putchar((j + '0'));
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
