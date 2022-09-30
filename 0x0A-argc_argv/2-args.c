#include <stdio.h>

/**
 * main - Entry Point of the program
 * @argc: (int) the command line argument count
 * @argv: (char**) an array of pointer to the command line argument
 *
 * Return: Always 0 for SUCCESS
 * @file 2-args.c
 * @author Omotoye Shamsudeen Adekoya
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
