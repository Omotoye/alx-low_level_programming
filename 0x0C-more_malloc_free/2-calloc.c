#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: size of array item
 * @size: size of array
 *
 * @brief A function that allocates memory for an array of nmemb
 * elements of size bytes each
 * Return: (void*) pointer to the allocated memory
 * @file 2-calloc.c
 * @author Omotoye Shamsudeen Adekoya
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array_mem;
	unsigned int i;

	array_mem = malloc(nmemb * size);
	if (array_mem)
	{
		for (i = 0; i < size; i++)
		{
			*((int *)array_mem + (i * nmemb)) = 0;
		}
	}
	else
	{
		return (NULL);
	}

	return ((void *)array_mem);
}
