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
 * _isupper - checks for upper character
 * @c: (int) ASCII value of the character to be
 *     checked.
 *
 * @brief A function that takes in the ASCII value of
 *     character and checks if that character is an uppercase
 *     character.
 * Return: (void)
 * @file 0-isupper.c
 * @author Omotoye Shamsudeen Adekoya
 */
int _isupper(int c);

/**
 * _isdigit - checks for digits
 * @c: (int) the character to be checked
 *
 * @brief A function that takes in the a character
 *     and checks if the value is a digit or not.
 * Return: (int) 1 if digit 0 if not digit
 * @file 1-isdigit.c
 * @author Omotoye Shamsudeen Adekoya
 */
int _isdigit(int c);

/**
 * mul - multiply two int
 * @a: (int) the first integer to be multiplied
 * @b: (int) the second integer to be multiplied
 *
 * @brief A function that takes in two integers,
 *     multiplys them together and return the result.
 * Return: (int) the product of the two integer arguments
 * @file 2-mul.c
 * @author Omotoye Shamsudeen Adekoya
 */
int mul(int a, int b);

/**
 * print_numbers - print 0-9
 * @brief A function that prints numbers from 0 - 9
 * Return: (void)
 * @file 3-print_numbers.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_numbers(void);

#endif /* MAIN_H */
