#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: (char*) pointer to the first string
 * @s2: (char*) pointer to the second string
 *
 * @brief A function that compares two string without taking
 *     into consideration the location of the characters of the string
 * Return: (int) 0 if equal, +ve if s1 > s2, -ve if s1 < s2
 * @file 3-strcmp.c
 * @author Omotoye Shamsudeen Adekoya
 */

int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	if (s1 == NULL || s2 == NULL)
		return (0);

	while (*s1 != '\0' || *s2 != '\0')
	{
		diff = *s1 - *s2;
		if (diff != 0)
			break;
		if (*s1 != '\0')
			s1++;
		if (*s2 != '\0')
			s2++;
	}
	return (diff);
}
