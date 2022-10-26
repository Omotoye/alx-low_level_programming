#include "variadic_functions.h"

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
void print_all(const char *const format, ...)
{
	unsigned int len = 0;
	va_list params;
	int t, y;

	va_start(params, format);

	while (format[len] != '\0')
		if (format[len] == 'c' ||
			format[len] == 'i' ||
			format[len] == 'f' ||
			format[len] == 's')
		{
			va_arg(params, char *);
		}

	va_end(params);
	putchar('\n');
}
