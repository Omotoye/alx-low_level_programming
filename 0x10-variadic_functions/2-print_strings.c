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
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list params;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(params, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(params);
	putchar('\n');
}
