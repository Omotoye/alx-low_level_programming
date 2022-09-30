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
int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
