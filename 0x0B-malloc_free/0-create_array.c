#include "main.h"

/**
 * create_arry - creates and initialize an array of char
 * @size: (int) the size of the array
 * @c: (char) the character to initialize the array with
 *
 * @brief A function that creates an array of chars, and initializes
 *     it with a specific char.
 * Return: (char*) pointer to the array created
 * @file 0-create_array.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		char *char_array = malloc(size * sizeof(char));
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			*(char_array + i) = c;
		}
		return (char_array);
	}
	else
	{
		return (NULL);
	}
}
