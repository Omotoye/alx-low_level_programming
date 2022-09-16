#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for digits
 * @c: (int) the character to be checked
 *
 * @brief A function that takes in the a character
 *     and checks if the value is a digit or not.
 * Return: (int) 1 if digit 0 if not digit
 * @file 1-isdigit.c
 * @author Omotoye Shamsudeen Adekoya
 */
int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
