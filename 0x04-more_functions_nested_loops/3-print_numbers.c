#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print 0-9
 * @brief A function that prints numbers from 0 - 9
 * Return: (void)
 * @file 3-print_numbers.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
