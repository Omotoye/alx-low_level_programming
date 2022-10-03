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
 * create_arry - creates and initialize an array of char
 * @size: (int) the size of the array
 * @c: (char) the character to initialize the array with
 *
 * @brief A function that creates an array of chars, and initializes
 *     it with a specific char.
 * Return: (char*) pointer to the array created
 * @file 0-create_array.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *create_array(unsigned int size, char c);

#endif /* MAIN_H */
