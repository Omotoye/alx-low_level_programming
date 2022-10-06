#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: (char*) pointer to the string to concatenate to
 * @s2: (char*) pointer to the string to concatenate from
 * @n: (int) number of characters to take from s2
 *
 * @brief A function that concatenates two strings in a newly allocated
 *     buffer and returns a pointer to the concatenated string.
 * Return: (char*) pointer to the concatenated string
 * @file 1-string_nconcat.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int size, i;
	char *s1_append_s2;

	/* Get the length of string s1 */
	while ((*(s1 + s1_len) != '\0'))
	{
		if (s1 == NULL)
			break;
		s1_len++;
	}

	/* Get the length of string s2 */
	while ((*(s2 + s2_len) != '\0'))
	{
		if (s2 == NULL)
			break;
		s2_len++;
	}

	/* Allocate the requred memory for the appended string */
	size = (n <= s2_len) ? s1_len + n : s1_len + s2_len;
	s1_append_s2 = malloc(sizeof(char) * (size + 1));
	if (s1_append_s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		if (i < s1_len)
		{
			*(s1_append_s2 + i) = *(s1 + i);
			continue;
		}
		*(s1_append_s2 + i) = *(s2 + i - s1_len);
	}
	*(s1_append_s2 + size) = '\0';
	return (s1_append_s2);
}
