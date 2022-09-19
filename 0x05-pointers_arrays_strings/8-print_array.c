#include "main.h"
#include <stdio.h>

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
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d\n", *(a + i));
	}
}
