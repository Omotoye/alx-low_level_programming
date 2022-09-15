#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - checks for negative or positive number
 * @n: the integer to be checked
 * Description: a program to take a number and then
 *     test for the sign of the number
 * Return: Always 0 (Success)
 * Author: Omotoye Shamsudeen Adekoya
 */

void positive_or_negative(int n)
{
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
}
