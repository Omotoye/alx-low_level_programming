#include "main.h"
#include <stdio.h>

/**
 * _abs - compute absolute value of integer
 * @n: (int) the integer to be converted
 *
 * @brief A function to compute the absolute
 *     value of an integer
 * Return: (int) the absolute value of n
 * @file 6-abs.c
 * @author Omotoye Shamsudeen Adekoya
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}
