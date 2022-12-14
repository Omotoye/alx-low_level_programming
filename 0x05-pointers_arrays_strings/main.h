#ifndef MAIN_H
#define MAIN_H

/**
 * reset_to_98 - update variable value to 98
 * @n: (int*) pointer to the integer value to be modified
 *
 * @brief A function that takes in a pointer to an integer value
 *     and updates it to 98.
 * Return: (void)
 * @file 0-reset_to_98.c
 * @author Omotoye Shamsudeen Adekoya
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps two int variable values
 * @a: (int*) pointer to the first int value to be swapped
 * @b: (int*) pointer to the second int value to be swapped
 *
 * @brief A function that takes in a pointers to two int variables
 *     and then swaps the values of the varables.
 * Return: (void)
 * @file 1-swap.c
 * @author Omotoye Shamsudeen Adekoya
 */
void swap_int(int *a, int *b);

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
 * _puts - prints a string
 * @str: (char*) pointer to the string to be printed
 *
 * @brief A function that takes in a string and prints it
 *     to stdout
 * Return: (void)
 * @file 3-puts.c
 * @author Omotoye Shamsudeen Adekoya
 */
void _puts(char *str);

/**
 * print_rev - prints a string in reverse
 * @s: (char*) pointer to the string to be printed in reverse
 *
 * @brief A function that takes in a string and prints it
 *     to stdout in reverse
 * Return: (void)
 * @file 4-print_rev.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_rev(char *s);

/**
 * rev_string - reverse a string
 * @s: (char*) pointer to the string to be reversed
 *
 * @brief A function that takes in a string and reverse it.
 * Return: (void)
 * @file 5-rev_string.c
 * @author Omotoye Shamsudeen Adekoya
 */
void rev_string(char *s);

/**
 * puts2 - print every other char of a string
 * @str: (char*) pointer to the string to be printed
 *
 * @brief A function that prints every other character of a string
 *     starting with the first character, followed by a newline.
 * Return: (void)
 * @file 6-puts2.c
 * @author Omotoye Shamsudeen Adekoya
 */
void puts2(char *str);

/**
 * puts_half - print the second half of a string
 * @str: (char*) pointer to the string to be printed
 *
 * @brief A function that prints the second half of a string.
 * Return: (void)
 * @file 7-puts_half.c
 * @author Omotoye Shamsudeen Adekoya
 */
void puts_half(char *str);

/**
 * print_array - print array of integer
 * @a: (int*) pointer to the first item of the array of integer
 * @n: (int) size of the given array of integer.
 *
 * @brief A function that the items of an array of integer.
 * Return: (void)
 * @file 8-print_array.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_array(int *a, int n);

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
 * _atoi - convert string to integer
 * @s: (char*) pointer to the string to be converted
 *
 * @brief A function that converts string to integer, taking into
 *     account the preceding sign
 * Return: (int) the integer extracted from the string
 * @file 100-atoi.c
 * @author Omotoye Shamsudeen Adekoya
 */
int _atoi(char *s);

#endif /* MAIN_H */
