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
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
