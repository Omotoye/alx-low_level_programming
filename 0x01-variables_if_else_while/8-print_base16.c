#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a program to print all the alphabet
 *     in lowercase
 * Return: Always 0 (Success)
 * Author: Omotoye Shamsudeen Adekoya
 */

int main(void)
{
	char alphabet[17] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
