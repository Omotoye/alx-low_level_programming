#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of int
 * @n: (int) the integer to be checked
 *
 * @brief A function to check the sign of
 *     an integer and then print the sign
 * Return: (int) 0 for zero, + for positive
 *     - for negative
 * @file 5-sign.c
 * @author Omotoye Shamsudeen Adekoya
 */
int print_sign(int n)
{
	int _result;

	if (n > 0)
	{
		_putchar('+');
		_result = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		_result = -1;
	}
	else
	{
		_putchar('0');
		_result = 0;
	}
	return (_result);
}
