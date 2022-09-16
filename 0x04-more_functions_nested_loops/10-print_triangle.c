#include "main.h"
#include <stdio.h>

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
void print_triangle(int size)
{
	int i;
	int j;
	int space_count = size;
	int _size = size;

	if (size <= 0)
	{
		putchar('\n');
	}

	while (size > 0)
	{
		for (i = 0; i < space_count - 1; i++)
		{
			putchar(' ');
		}
		for (j = 0; j < (_size - space_count + 1); j++)
		{
			putchar('#');
		}

		putchar('\n');
		size--;
		space_count--;
	}
}
