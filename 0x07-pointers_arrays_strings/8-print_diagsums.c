#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diagonals of square matrix
 * @a: (char (*)) pointer to a array of square matrix
 * @size: (int) size of the square matrix
 *
 * @brief A function prints the sum of the two diagonals of a square matrix
 *     of integers.
 * Return: (void))
 * @file 8-print_diagsums.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int diagonal_a = 0;
	int diagonal_b = 0;

	for (i = 0; i < size * size; i += size)
	{

		for (j = 0; j < size; j++)
		{
			if (j == i / size)
			{
				diagonal_a += *(a + i + j);
			}
			if (j == (size - ((i / size) + 1)))
			{
				diagonal_b += *(a + i + j);
			}
		}
	}
	printf("%d, %d\n", diagonal_a, diagonal_b);
}
