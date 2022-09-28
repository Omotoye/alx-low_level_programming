#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - compute power
 * @x: (int) number to be raised to a given power
 * @y: (int) power to raise a number to
 *
 * @brief A function that returns the value of x raised
 *     to the power of y
 * Return: (int) result after raising the given number to
 *     the given power or -1 for negative power
 * @file 3-_pow_recursion.c
 * @author Omotoye Shamsudeen Adekoya
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, (y - 1)));
}
