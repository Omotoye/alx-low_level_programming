#include "main.h"
#include <stdio.h>

/**
 * factorial - compute factorial
 * @n: (int) the number to compute the factorial for
 *
 * @brief A function that computes the factorial of a
 *     given number
 * Return: (int) the length of the given string
 * @file 3-factorial.c
 * @author Omotoye Shamsudeen Adekoya
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
