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

	for (i = 0; i < 10; i++)
	{
		putchar((i + '0'));
		if (i != 9)
		{
			putchar(',');
		}
		putchar(' ');
	}
	return (0);
}
