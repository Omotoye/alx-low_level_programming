#include "main.h"

/**
 * _strdup - create a duplicate buffer of a string
 * @str: (char*) a pointer to the source string
 *
 * @brief A function that returns a ponter to a new string which
 *     is a duplicate of the string str.
 * Return: (char*) pointer to the new duplicated string
 * @file 1-strdup.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_strdup(char *str)
{
	/* Check if str is not NULL */
	if (str)
	{

		int size = 0;
		char *duplicate;

		/* Get the size of string */
		while ((*(str + size) != '\0'))
		{
			size++;
		}

		/* Initialze a buffer with the source string size */
		if (size > 0)
			duplicate = (char *)malloc(size * sizeof(char));

		/* Duplicate the source string into the destination buffer */
		if (duplicate)
		{
			int i;

			for (i = 0; i < size + 1; i++)
			{
				*(duplicate + i) = *(str + i);
			}
			return (duplicate);
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
}
