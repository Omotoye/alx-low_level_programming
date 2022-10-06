#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
/**
 * _putchar - puts character in stdout
 * @c: (char) the character to be printed
 *
 * @brief A function to put a character into the standard
 *     output file.
 * Return: (void)
 * @file _putchar.c
 * @author Omotoye Shamsudeen Adekoya
 */
void _putchar(char c);

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * @brief A function that allocates memory using malloc
 * Return: (void*) pointer to the allocated memory
 * @file 0-malloc_checked.c
 * @author Omotoye Shamsudeen Adekoya
 */
void *malloc_checked(unsigned int b);

/**
 * string_nconcat - concatenates two strings
 * @s1: (char*) pointer to the string to concatenate to
 * @s2: (char*) pointer to the string to concatenate from
 * @n: (int) number of characters to take from s2
 *
 * @brief A function that concatenates two strings in a newly allocated
 *     buffer and returns a pointer to the concatenated string.
 * Return: (char*) pointer to the concatenated string
 * @file 1-string_nconcat.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif /* MAIN_H */
