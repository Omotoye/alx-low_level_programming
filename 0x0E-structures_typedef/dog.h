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

#endif /* DOG_H */
