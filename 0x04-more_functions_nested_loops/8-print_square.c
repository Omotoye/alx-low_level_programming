#include "main.h"
#include <stdio.h>

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
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
