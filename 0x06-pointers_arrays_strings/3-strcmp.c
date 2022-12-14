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
	int s1_char = 0;
	int s2_char = 0;

	if (s1 == NULL || s2 == NULL)
		return (0);

	while (!((*s1 == '\0' && *s2 == '\0')))

	{
		if (*s1 != '\0')
		{
			s1_char += *s1;
			s1++;
		}
		if (*s2 != '\0')
		{
			s2_char += *s2;
			s2++;
		}
		if (*s1 != *s2)
			break;
	}
	return (s1_char - s2_char);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
	printf("%d\n", _strcmp("ABC", "AB"));
    return (0);
}