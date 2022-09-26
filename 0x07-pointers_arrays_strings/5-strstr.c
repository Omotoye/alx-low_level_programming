#include "main.h"
#include <stdio.h>

/**
 * _strstr - isolates a substring
 * @haystack: (char*) pointer to a string
 * @needle: (char*) pointer to substring
 *
 * @brief A function that finds the first occurrence of the substring
 *     needle in the string haystack.
 * Return: (char*) a pointer to the beginning of the located substring,
 *     or NULL if the substring is not found.
 * @file 5-strstr.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0' && *needle != '\0')
	{
		if (*haystack == *needle)
		{
			i = 0;
			while (1)
			{
				if ((*(haystack + i) != *(needle + i)) || *(haystack + i) == '\0')
				{
					break;
				}
				i++;
				if (*(needle + i) == '\0')
				{
					return (haystack);
				}
			}
		}
		haystack++;
	}
	return (NULL);
}
