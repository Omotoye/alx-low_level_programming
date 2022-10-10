#include "dog.h"

/**
 * free_dog - frees memory of type dog_t
 * @d: (dog_t) a pointer to memory of type dog_t
 *
 * Description: A function that free a memory of type dog_t
 * Return: (void)
 * @file 5-free_dog.c
 * @author Omotoye Shamsudeen Adekoya
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}
