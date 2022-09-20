#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert string to integer
 * @s: (char*) pointer to the string to be converted
 *
 * @brief A function that converts string to integer, taking into
 *     account the preceding sign
 * Return: (int) the integer extracted from the string
 * @file 100-atoi.c
 * @author Omotoye Shamsudeen Adekoya
 */
int _atoi(char *s)
{
	int negative_sign_count = 0;
	int count = 0;
	int num = 0;
	int found_num = 0;

	while (*s != '\0')
	{
		/* check for the sign */
		if (*(s) == 45)
			negative_sign_count++;

		if (*s > 47 && *s < 58)
		{
			found_num = 1;

			num = (num * 10) + (*s - '0');
		}

		if (found_num == 1 && !(*s > 47 && *s < 58))
			break;
		s++;
		count++;
	}

	if (negative_sign_count % 2 == 1)
		num *= -1;
	return (num);
}
