#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Dog information
 * @name: (char*) the name of the dog
 * @age: (float) the age of the dog
 * @owner: (char*) the name of the owner of the dog
 *
 * Description: a struct that stores the information of a dogi
 * @author Omotoye Shamsudeen Adekoya
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - a typedef that stores the information of a dog
 */
typedef struct dog dog_t;

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
void init_dog(struct dog *d, char *name, float age, char *owner);

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
void print_dog(struct dog *d);

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
dog_t *new_dog(char *name, float age, char *owner);

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
char *_strcpy(char *dest, char *src);
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
int _strlen(char *s);

/**
 * free_dog - frees memory of type dog_t
 * @d: (dog_t) a pointer to memory of type dog_t
 *
 * Description: A function that free a memory of type dog_t
 * Return: (void)
 * @file 5-free_dog.c
 * @author Omotoye Shamsudeen Adekoya
 */
void free_dog(dog_t *d);

#endif /* DOG_H */
