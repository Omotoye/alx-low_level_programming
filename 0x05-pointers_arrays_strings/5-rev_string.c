#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: (char*) pointer to the string to be reversed
 *
 * @brief A function that takes in a string and reverse it.
 * Return: (void)
 * @file 5-rev_string.c
 * @author Omotoye Shamsudeen Adekoya
 */
void rev_string(char *s)
{
	int i;
	int n = strlen(s);
	char temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + (n - i - 1));
		*(s + (n - i - 1)) = temp;
	}
}
