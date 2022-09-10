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
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
