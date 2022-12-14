#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * print_last_digit - print the last digit of number
 * @n: (int) the integer to be processed
 *
 * @brief A function to determine and print the last
 *     digit of a number.
 * Return: (int) the value of the last digit
 * @file 7-print_last_digit.c
 * @author Omotoye Shamsudeen Adekoya
 */
int print_last_digit(int n)
{
	int last_digit = (n % 10);

	if (last_digit < 0)
	{
	last_digit = last_digit * (-1);
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
