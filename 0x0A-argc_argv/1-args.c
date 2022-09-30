#include <stdio.h>

/**
 * main - Entry Point of the program
 * @argc: (int) the command line argument count
 * @argv: (char**) an array of pointer to the command line argument
 *
 * Return: Always 0 for SUCCESS
 * @file 0-whatsmyname.c
 * @author Omotoye Shamsudeen Adekoya
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", (argc - 1));
	return (0);
}
