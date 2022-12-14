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

/**
 * print_most_numbers - print 0-9 except 2 and 4
 * @brief A function that prints numbers from 0 - 9
 *     excluding 2 and 4
 * Return: (void)
 * @file 4-print_most_numbers.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_most_numbers(void);

/**
 * more_numbers - print 0-14 ten times
 * @brief A function that prints numbers from 0 - 14
 *     10 times.
 * Return: (void)
 * @file 5-more_numbers.c
 * @author Omotoye Shamsudeen Adekoya
 */
void more_numbers(void);

/**
 * print_line - print line
 * @n: (int) the number of underscore (_) to be printed
 *
 * @brief A function that prints lines with _ symbol
 *     based on the number n given to it as argument
 * Return: (void)
 * @file 6-print_line.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_line(int n);

/**
 * print_diagonal - print diagonal line
 * @n: (int) the number of underscore (\) to be printed
 *
 * @brief A function that draws a diagonal line on the
 *     terminal based on the number n given to it as
 *         argument
 * Return: (void)
 * @file 7-print_diagonal.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_diagonal(int n);

/**
 * print_square - print square
 * @size: (int) the size of the square
 *
 * @brief A function that prints a square on the
 *     terminal based on the size given.
 * Return: (void)
 * @file 8-print_square.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_square(int size);

/**
 * print_triangle - print square
 * @size: (int) the size of the square
 *
 * @brief A function that prints a square on the
 *     terminal based on the size given.
 * Return: (void)
 * @file 8-print_square.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_triangle(int size);

#endif /* MAIN_H */
