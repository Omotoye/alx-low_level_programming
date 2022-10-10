#include "dog.h"

/**
 * new_dog - Initialize type dog_t
 * @name: (char*) the name of the dog
 * @age: (flaot) the age of the dog
 * @owner: (char*) the name of the owner of the dog
 *
 * Description: A function that initializes a variable of
 *     type dog_t
 * Return: (dog_t*) pointer to the new dog type
 * @file 4-new_dog.c
 * @author Omotoye Shamsudeen Adekoya
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog)
	{
		dog->name = name;
		dog->age = age;
		dog->owner = owner;
		return (dog);
	}
	else
	{
		return (NULL);
	}
}
