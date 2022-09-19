#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps two int variable values
 * @a: (int*) pointer to the first int value to be swapped
 * @b: (int*) pointer to the second int value to be swapped
 *
 * @brief A function that takes in a pointers to two int variables
 *     and then swaps the values of the varables.
 * Return: (void)
 * @file 1-swap.c
 * @author Omotoye Shamsudeen Adekoya
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
