#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a program that prints to standard error
 * Return: Always 0 (Success)
 * Author: Omotoye Shamsudeen Adekoya
 */

int main(void)
{
	dprintf(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	exit(EXIT_FAILURE);
}
