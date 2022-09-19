#include "main.h"

/**
 * _strlen - determine the length of a string
 * @s: (char*) pointer to the string to be checked
 *
 * @brief A function that takes in a pointer to a string and
 *     then determines and returns the lenth of the string.
 * Return: (int) the length of the string.
 * @file 2-strlen.c
 * @author Omotoye Shamsudeen Adekoya
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
