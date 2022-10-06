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

#endif /* MAIN_H */
