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
	char name_cpy[200];
	char owner_cpy[200];

	dog = malloc(sizeof(dog_t));
	if (dog)
	{
		dog->name = _strcpy(name_cpy, name);
		dog->age = age;
		dog->owner = _strcpy(owner_cpy, owner);
		return (dog);
	}
	else
	{
		return (NULL);
	}
}

/**
 * _strcpy - copies string from one buffer to another
 * @dest: (char*) pointer to the destination buffer
 * @src: (char*) pointer to the source buffer.
 *
 * @brief A function string from a source buffer to a destination
 *     buffer and returns the pointer to the destination buffer
 * Return: (char*) pointer to the destination buffer.
 * @file 9-strcpy.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
	}
	return (dest);
}
