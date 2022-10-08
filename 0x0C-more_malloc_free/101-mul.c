#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point of the program
 * @argc: (int) the command line argument count
 * @argv: (char**) an array of pointer to the command line argument
 *
 * Return: Always 0 for SUCCESS
 * @file 3-mul.c
 * @author Omotoye Shamsudeen Adekoya
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int i = 0;
	int j = 0;

	/* Check to see that the program received two arguments */
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	/* Check to see that the arguments given are digits */
	while (1) {
		if (i )
	}

	/* Convert the two numbers given to integer */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", (num1 * num2));

	return (0);
}
