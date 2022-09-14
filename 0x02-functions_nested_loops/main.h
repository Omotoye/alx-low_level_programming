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

/**
 * _isalpha - checks for alphabets
 * @c: (int) the character to be checked
 *
 * @brief A function to check a character if it is
 *     an alphabet or not.
 * Return: (int) 0 or 1 for true of false
 * @file 4-isalpha.c
 * @author Omotoye Shamsudeen Adekoya
 */
int _isalpha(int c);

/**
 * print_sign - prints the sign of int
 * @n: (int) the integer to be checked
 *
 * @brief A function to check the sign of
 *     an integer and then print the sign
 * Return: (int) 0 for zero, + for positive
 *     - for negative
 * @file 5-sign.c
 * @author Omotoye Shamsudeen Adekoya
 */
int print_sign(int n);

/**
 * _abs - compute absolute value of integer
 * @n: (int) the integer to be converted
 *
 * @brief A function to compute the absolute
 *     value of an integer
 * Return: (int) the absolute value of n
 * @file 6-abs.c
 * @author Omotoye Shamsudeen Adekoya
 */
int _abs(int n);

/**
 * print_last_digit - print the last digit of number
 * @n: (int) the integer to be processed
 *
 * @brief A function to determine and print the last
 *     digit of a number.
 * Return: (int) the value of the last digit
 * @file 7-print_last_digit.c
 * @author Omotoye Shamsudeen Adekoya
 */
int print_last_digit(int n);

/**
 * jack_bauer - print every minute of the day
 * @brief A function that prints every minute of the
 *     day of Jack Bauer, starting from 00:00 to 23:59
 * Return: (void)
 * @file 8-24_hours.c
 * @author Omotoye Shamsudeen Adekoya
 */
void jack_bauer(void);

/**
 * times_table - prints the 9 times table
 * @brief A function that prints the 9 times table
 * Return: (void)
 * @file 9-times_table.c
 * @author Omotoye Shamsudeen Adekoya
 */
void times_table(void)
#endif /* MAIN_H */
