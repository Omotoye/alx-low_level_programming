#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - sums all parameters
 * @n: (const unsigned int) the count of optional parameter
 *     to be added
 * @...: (const unsigned int) optional parameters
 *
 * @brief A function that takes in a variable amount of
 *     parameters, sums them all and returns the sum
 * Return: (int) sum of all integer parameters
 * @file 0-sum_them_all.c
 * @author Omotoye Shamsudeen Adekoya
 */
int sum_them_all(const unsigned int n, ...);

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
 * print_numbers - print all integer parameters
 * @separator: (char*) a string for separating the integers
 *     be printed
 * @n: (const unsigned int) the count of optional parameter
 *     to be printed
 * @...: (const unsigned int) optional parameters
 *
 * @brief A function that prints numbers given as an optional
 *     parameter followed by a newline.
 * Return: (void)
 * @file 1-print_numbers.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - print all string optional parameters
 * @separator: (char*) a string for separating the strings
 *     be printed
 * @n: (const unsigned int) the count of optional parameter
 *     to be printed
 * @...: (const unsigned int) optional parameters
 *
 * @brief A function that prints string given as an optional
 *     parameter followed by a newline.
 * Return: (void)
 * @file 2-print_strings.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_strings(const char *separator, const unsigned int n, ...);

#endif /* MAIN_H */
