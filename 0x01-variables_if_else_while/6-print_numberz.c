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
	char digit_numbers[11] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(digit_numbers[i]);
	}
	putchar('\n');
	return (0);
}
