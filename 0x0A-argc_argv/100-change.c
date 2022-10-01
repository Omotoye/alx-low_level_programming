#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point of the program
 * @argc: (int) the command line argument count
 * @argv: (char**) an array of pointer to the command line argument
 *
 * Return: Always 0 for SUCCESS
 * @file 100-change.c
 * @author Omotoye Shamsudeen Adekoya
 */
int main(int argc, char **argv)
{
	int i, cash, change_count;
	int cents[5] = {25, 10, 5, 2, 1};

	change_count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Checking that the given argument is a positive number */
	i = 0;
	while (*(*(argv + 1) + i) != '\0')
	{
		if (!((*(*(argv + 1) + i) > 47) && (*(*(argv + 1) + i) < 58)))
		{
			printf("%d\n", 0);
			return (0);
		}
		i++;
	}

	cash = atoi(argv[1]);

	while (cash > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (cash >= cents[i])
			{
				cash -= cents[i];
				change_count++;
				break;
			}
		}
	}
	printf("%d\n", change_count);

	return (0);
}
