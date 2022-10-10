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
	char *name_cpy = malloc(sizeof(char) * (_strlen(name) + 1));
	char *owner_cpy = malloc(sizeof(char) * (_strlen(owner) + 1));

	dog = malloc(sizeof(dog_t));
	if (dog)
	{
		if (name_cpy)
			dog->name = _strcpy(name_cpy, name);
		else
			return (NULL);
		dog->age = age;
		if (owner_cpy)
			dog->owner = _strcpy(owner_cpy, owner);
		else
			return (NULL);
		return (dog);
	}
	else
	{
		return (NULL);
	}
}

/**
 * _strlen - determine the length of a string
 * @s: (char*) pointer to the string to be checked
 *
 * @brief A function that takes in a pointer to a string and
 *     then determines and returns the lenth of the string.
 * Return: (int) the length of the string.
 * @file 2-strlen.c
 * @author Omotoye Shamsudeen Adekoya
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
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
