#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: (struct dog) a pointer to a struct dog variable
 *
 * Description: A function that print a variable of type
 *     struct dog.
 * Return: (void)
 * @file 2-print_dog.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %.6f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
