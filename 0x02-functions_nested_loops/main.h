#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * print_alphabet - function
 * @brief A function to print every alphabet in lowercase
 * @file 1-alphabet.c
 * @param void
 * @return void
 * @author Omotoye Shamsudeen Adekoya
 */
void print_alphabet(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
}

#endif /* MAIN_H */
