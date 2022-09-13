#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for alphabets
 * @c: (int) the character to be checked
 *
 * @brief A function to check a character if it is
 *     an alphabet or not.
 * Return: (int) 0 or 1 for true of false
 * @file 4-isalpha.c
 * @author Omotoye Shamsudeen Adekoya
 */
int _isalpha(int c)
{
	if (((c > 96) && (c < 123)) || ((c > 64) && (c < 91)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
