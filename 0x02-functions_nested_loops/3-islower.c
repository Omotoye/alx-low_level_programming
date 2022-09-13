#include "main.h"
#include <stdio.h>

/**
 * _islower - checks for lowercase letters
 * @c: (int) the character to be checked
 *
 * @brief A function to check a character if it is
 *     lowercase of not.
 * Return: (int) 0 or 1 for true of false
 * @file 3-islower.c
 * @author Omotoye Shamsudeen Adekoya
 */
int _islower(int c)
{
	if ((c > 96) && (c < 123))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
