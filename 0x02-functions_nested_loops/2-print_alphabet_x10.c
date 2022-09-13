#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - function
 * @brief A function to print every alphabet in lowercase
 *     10 times.
 * @file 2-print_alphabet_x10.c
 * @param void
 * @return void
 * @author Omotoye Shamsudeen Adekoya
 */
void print_alphabet_x10(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			putchar(alphabet[j]);
		}
		putchar('\n');
	}
}
