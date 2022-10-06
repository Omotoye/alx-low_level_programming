#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * @brief A function that allocates memory using malloc
 * Return: (void*) pointer to the allocated memory
 * @file 0-malloc_checked.c
 * @author Omotoye Shamsudeen Adekoya
 */
void *malloc_checked(unsigned int b)
{
	void *mem_alloc = malloc(sizeof(b));

	if (mem_alloc == NULL)
		exit(98);
	return (mem_alloc);
}
