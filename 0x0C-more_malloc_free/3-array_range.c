#include "main.h"

/**
 * array_range - creates an array of integer
 * @min: (int) min value of the range array
 * @max: (int) max value of the range array
 *
 * @brief A function that creates an array of integer that contains
 *     all the values from min (included) to max (included) ordered
 *         from min to max
 * Return: (int*) pointer to the array of integer
 * @file 3-array_range.c
 * @author Omotoye Shamsudeen Adekoya
 */
int *array_range(int min, int max)
{
	int *range;
	int i;

	if (min > max)
		return (NULL);

	range = malloc(sizeof(int) * (max - min + 1));
	if (range)
	{
		for (i = 0; i < max - min + 1; i++)
		{
			*(range + i) = (min + i);
		}
		return (range);
	}
	else
	{
		return (NULL);
	}
}
