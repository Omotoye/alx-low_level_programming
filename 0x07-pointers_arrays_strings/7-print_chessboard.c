#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: (char (*)[8]) pointer to a 2d array
 *
 * @brief A function that uses a 2d array to print a chessboard
 * Return: (void))
 * @file 7-print_chessboard.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
