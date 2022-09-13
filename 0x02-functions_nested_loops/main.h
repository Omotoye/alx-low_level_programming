#ifndef MAIN_H
#define MAIN_H

void _putchar(char c);

/**
 * print_alphabet - prints lowercase alphabet
 * @brief A function to print every alphabet in lowercase
 * @param void
 * Return: void
 * @file 1-alphabet.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints alphabets in a loop
 * @brief A function to print every alphabet in lowercase
 *     10 times.
 * @param void
 * Return: void
 * @file 2-print_alphabet_x10.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase letters
 * @c: (int) the character to be checked
 *
 * @brief A function to check a character if it is
 *     lowercase of not.
 * Return: (int) 0 or 1 for true of false
 * @file 3-islower.c
 * @author Omotoye Shamsudeen Adekoya
 */
int _islower(int c);
#endif /* MAIN_H */
