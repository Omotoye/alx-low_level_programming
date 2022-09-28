#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - length of a string
 * @s: (char*) pointer to the string to be computed
 *
 * @brief A recursive function that returns the length
 *     of a string
 * Return: (int) the length of the given string
 * @file 2_strlen_recursion.c
 * @author Omotoye Shamsudeen Adekoya
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
