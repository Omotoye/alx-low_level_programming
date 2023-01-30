#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: (int*) array of integer
 * @n: (int) the number of elements in the array
 *
 * @brief A function that reverses the content of an array of integers
 * Return: (void)
 * @file 4-rev_array.c
 * @author Omotoye Shamsudeen Adekoya
 */

void reverse_array(int *a, int n)
{
	int temp;

	if (a != NULL && n != 0)
	{
		for (int i = 0; i <= (n - 1) / 2; i++)
		{
			temp = a[n - 1 - i];
			a[n - 1 - i] = a[i];
			a[i] = temp;
		}
	}
}
