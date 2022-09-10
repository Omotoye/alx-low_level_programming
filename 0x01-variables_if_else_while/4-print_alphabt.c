#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a program to print all the alphabet
 *     in lowercase except 'q' and 'e'
 * Return: Always 0 (Success)
 * Author: Omotoye Shamsudeen Adekoya
 */

int main(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if ((alphabet[i] != 'q') && (alphabet[i] != 'e'))
		{
			putchar(alphabet[i]);
		}
	}
	putchar('\n');
	return (0);
}
