#include "variadic_functions.h"

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
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(params, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(params);
	putchar('\n');
}
