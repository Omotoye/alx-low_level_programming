#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a program to print all the digit_numbers
 *     from 0-9
 * Return: Always 0 (Success)
 * Author: Omotoye Shamsudeen Adekoya
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i + '0'));
	}
	putchar('\n');
	return (0);
}
