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
	char sign = '+';
	int count = 0;
	int num = 0;
	int found_num = 0;

	while (*s != '\0')
	{
		if (*s > 47 && *s < 58)
		{
			found_num = 1;

			/* check for the sign */
			if (count > 0 && *(s - 1) == 45)
				sign = '-';

			num = (num * 10) + (*s - '0');
		}

		if (found_num == 1 && !(*s > 47 && *s < 58))
			break;
		s++;
		count++;
	}

	if (sign == '-')
		num *= -1;
	return (num);
}
