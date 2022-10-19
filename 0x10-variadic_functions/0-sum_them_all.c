#include "variadic_functions.h"

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
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list params;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(params, n);
	for (i = 0; i < n; i++)
		sum += va_arg(params, int);
	va_end(params);

	return (sum);
}
