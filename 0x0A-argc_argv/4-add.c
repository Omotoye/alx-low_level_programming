#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point of the program
 * @argc: (int) the command line argument count
 * @argv: (char**) an array of pointer to the command line argument
 *
 * Return: Always 0 for SUCCESS
 * @file 4-add.c
 * @author Omotoye Shamsudeen Adekoya
 */
int main(int argc, char **argv)
{
	int i, j, sum;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	/* Checking that all the numbers given are digits */
	for (i = 1; i < argc; i++)
	{
		j = 0;

		while (*(*(argv + i) + j) != '\0')
		{
			if (!((*(*(argv + i) + j) > 47) && (*(*(argv + i) + j) < 58)))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
	}

	/* Computing the sum of all the arguments */
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	/* Printing the sum of the arguments */
	printf("%d\n", sum);

	return (0);
}
