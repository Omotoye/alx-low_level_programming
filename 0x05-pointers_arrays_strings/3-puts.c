#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: (char*) pointer to the string to be printed
 *
 * @brief A function that takes in a string and prints it
 *     to stdout
 * Return: (void)
 * @file 3-puts.c
 * @author Omotoye Shamsudeen Adekoya
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
