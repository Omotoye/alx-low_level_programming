#include "dog.h"

/**
 * init_dog - Initialize struct dog
 * @d: (struct dog) a ponter to a struct dog variable
 * @name: (char*) the name of the dog
 * @age: (flaot) the age of the dog
 * @owner: (char*) the name of the owner of the dog
 *
 * Description: A function that initializes a variable of
 *     type struct dog
 * Return: (void)
 * @file 1-init_dog.c
 * @author Omotoye Shamsudeen Adekoya
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(d));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
