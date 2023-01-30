#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: (char*) string to convert to all uppercase
 *
 * @brief A function that converts all lowercase characters contained
 *     in a string into uppercase.
 * Return: (char*) the given string after uppercase conversion
 * @file 5-string_toupper.c
 * @author Omotoye Shamsudeen Adekoya
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str != NULL && *(str + i) != '\0')
	{
		if ((*(str + i) > 96) && (*(str + i) < 123))
		{
			*(str + i) = *(str + i) - 97 + 65;
		}
		i++;
	}
	return (str);
}
