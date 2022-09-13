#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @file 1-alphabet.c
 * @brief a program includes a function to print
 *     alphabets in lowercase
 * @param void
 * @return Always 0 (Success)
 * @author Omotoye Shamsudeen Adekoya
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

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
