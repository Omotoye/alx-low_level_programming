#ifndef MAIN_H
#define MAIN_H

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
 * _puts_recursion - prints a string
 * @s: (char*) pointer to the string to be printed
 *
 * @brief A function that prints a string and then a newline
 *     with a recursive function
 * Return: (void)
 * @file 0_puts_recursion.c
 * @author Omotoye Shamsudeen Adekoya
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: (char*) pointer to the string to be printed
 *
 * @brief A function that prints a string in reverse
 *     with a recursive function
 * Return: (void)
 * @file 0_print_rev_recursion.c
 * @author Omotoye Shamsudeen Adekoya
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - length of a string
 * @s: (char*) pointer to the string to be computed
 *
 * @brief A recursive function that returns the length
 *     of a string
 * Return: (int) the length of the given string
 * @file 2_strlen_recursion.c
 * @author Omotoye Shamsudeen Adekoya
 */
int _strlen_recursion(char *s);

#endif /* MAIN_H */
